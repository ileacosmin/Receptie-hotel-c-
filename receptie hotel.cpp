#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <cstring>
using namespace std;
const int nx=6;
int numar_camere=0;
void menu_fara(string s)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
    cout<<" "<<s<<" ";
}
void menu_cu(string s)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),30);
    cout<<" "<<s<<" ";
}
struct camera
{
    int nr;
    bool ocupare;
    char descriere[200];
    char nume[200];

} cee[100];
int numarare_cam(int a)
{
    ifstream f("hotel.txt");
    int x;
    //  char y[200];
    int z;
    while (f>>x>>z)
    {
        a++;
    }
    return a;
    f.close();
}
void citire(int camerele)
{
    ifstream f("hotel.txt");
    ifstream fn("descrieri.txt");
    for(int i=1; i<=camerele; i++)
    {
        f>>cee[i].nr>>cee[i].ocupare;
        fn.getline(cee[i].descriere, 200);  // delim defaults to '\n'
        fn.getline(cee[i].nume,200);
    }

    f.close();
    fn.close();
}
void afisare(int altceavaaaaaa)
{
    cout<<"Camera numarul "<<altceavaaaaaa;
    if(cee[altceavaaaaaa].ocupare==0)
        cout<<" nu este ocupata";
    else
    {
        cout<<" este ocupata";
    }
    cout<<endl<<cee[altceavaaaaaa].descriere<<endl;
    cout<<cee[altceavaaaaaa].nume<<endl;
}
int main()
{
    int altcevadecaavc=0;
    numar_camere=numarare_cam(altcevadecaavc);
    citire(numar_camere);
    int n,m;
    string ecran="", x[nx]= {"Toate camerele","Vezi camerele disponibile","Ocupa/Elibereaza","Schimba descrierea","Adauga o camera","Iesire"};
    int a,i,o=0;
    char c;
    do
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);

        cout<<"##############################################################################################################"<<endl;
        cout<<"# ";
        for(i=0; i<nx; i++)
        {

            if(i==o)
            {
                menu_cu(x[i]);

            }
            else
            {

                menu_fara(x[i]);

            }
        }
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
        cout<<" #";
        cout<<endl<<"##############################################################################################################"<<endl;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
        c=_getch();
        a=(int)c;
        if((int)c==-32)
        {
            c=_getch();
            a=(int)c;
            if(a==75)
                if(o>0)
                    o--;
                else
                    o=nx-1;
            else if(a==77)
                if(o<nx-1)
                    o++;
                else
                    o=0;

        }
        else if((int)c==13)
            switch(o)
            {
            case 0:
            {
                ecran=x[0];
//              system("CLS");

                for(int k=1; k<=numar_camere; k++)
                    afisare(k);



                c=_getch();
                break;
            }
            case 1:
            {
                ecran=x[1];
                cout<<"Camerele libere sunt: ";
                for(int k=1; k<=numar_camere; k++)
                    if(cee[k].ocupare==0)
                        cout<<k<<' ';
                cout<<endl<<"Apasati orice tasta pentru a reveni la meniul principal ";


                c=_getch();
                break;
            }

            case 2:
            {
                ecran=x[2];
                int kam=0,q;
                char numeee[200];
                cout<<endl<<"Introdu numarul camerei ";
                cin>>kam;
                cout<<"Introdu 1 pentru a ocupa camera si 0 pentru a o elibera ";
                cin>>q;
                if(q==1)
                {
                    cout<<"Introdu numele persoanei care ocupa camera ";
                    cin.get();
                    cin.get(numeee,200);
                    cee[kam].ocupare=1;

                    strcpy(cee[kam].nume,numeee); //cee[kam].nume=numeee;
                }
                else
                {
                    cee[kam].ocupare=0;
                    cout<<"Camera a fost eliberata "<<endl;
                }
                cout<<"Apasati orice tasta pentru a reveni la meniul principal ";

                c=_getch();
                break;

            }
            case 3:
            {
                ecran=x[3];
                int kam=0;
                cout<<"Adauga numarul camerei caruia i se schimba descrierea ";
                cin>>kam;
                cout<<"Scrieti descrierea pentru camera "<<kam<<" :";
                cin.get();
                cin.getline(cee[kam].descriere,200);
                cout<<"Apasati orice tasta pentru a reveni la meniul principal ";
                c=_getch();
                break;
            }
            case 4:
            {
                ecran=x[4];
                cout<<"Adauga camera cu numarul "<<numar_camere+1;
                cee[numar_camere+1].nr=numar_camere+1;
                cee[numar_camere+1].ocupare=0;
                cout<<endl<<"Adaugati descrierea camerei :";
                cin.get();
                cin.getline(cee[numar_camere+1].descriere,200);
                cout<<"Apasati orice tasta pentru a reveni la meniul principal ";
                numar_camere++;
                c=_getch();
                break;
            }
            case 5:
            {


            }


            }
        ofstream g;
        g.open ("hotel.txt");

        for(int mi=1; mi<=numar_camere; mi++)
            g<<cee[mi].nr<<' '<<cee[mi].ocupare<<' ';
        g.close();
        ofstream gn;
        gn.open("descrieri.txt");
        for(int mi=1; mi<=numar_camere; mi++)
        {
            gn<<cee[mi].descriere<<endl;
            gn<<cee[mi].nume<<endl;
        }
        gn.close();


        system("CLS");
    }
    while(!(o==nx-1 && a==13));
    return 0;
}

