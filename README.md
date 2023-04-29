# Receptie-hotel-c-
1.	Introducere
	Pentru ca un hotel să poată funcționa este nevoie de un software care să organizeze rezervările si feedback-ul clienților.
	Recepție hotel este un porgram conecput pentru folosirea in recepțiile hotelurilor pentru a ține evidența persoanelor cazate.
	C++ este un limbaj de programare general, compilat. Este un limbaj multi-paradigmă, cu verificarea statică a tipului variabilelor ce suportă programare procedurală, abstractizare a datelor, programare orientată pe obiecte. În anii 1990, C++ a devenit unul dintre cele mai populare limbaje de programare comerciale, rămânând astfel până azi.
	Bjarne Stroustrup de la Bell Labs a dezvoltat C++ (inițial denumit C cu clase) în anii 1980, ca o serie de îmbunătățiri ale limbajului C. Acestea au început cu adăugarea noțiunii de clase, apoi de funcții virtuale, suprascrierea operatorilor, moștenire multiplă, șabloane și excepții.
2. Prezentarea aplicației
	Am realizat o aplicație folosind limbajul de programare c++.
	In pagina principală a aplicației se află 6 elemente file :
1.	„Toate camerele”;
2.	„Vezi camerele disponibile”;
3.	„Ocupă/Eliberează”;
4.	„Schimbă descrierea”; 
5.	„Adaugă o cameră”;
6.	„Ieșire”.
Toate camerele” afișează informații despre toate camerele din baza de date a programului:
•	Dacă este ocupată camera sau nu;
•	Descrierea camerei;
•	Numele persoanei care este cazată in cameră (sau ultima).
„Vezi camerele disponibile” afișează care sunt camerele libere:
„Ocupă/Eliberează”  citește numarul camerei si 1 (unu) pentru a o ocupa sau 0 (zero) pentru a o elibera:
•	In cazul in care se ocupă camera, aplicația cere numele persoanei care ocupă camera.
„Schimbă descrierea”  citește numărul camerei căruia i se schimbă descrierea apoi descrierea schimbată.
„Adaugă o cameră” generează camera cu numărul de ordine a  următoarei camere și citește descrierea pentru acea cameră.
3.Codul sursă
3.1. Prelucrarea datelor
•	Structura „camera” are 4 variabile:
a)	nr (de tip întreg) unde se afla numărul de ordine al camerei;
b)	ocupare (de tip Boolean) care reține dacă camera este ocupată sau nu;
c)	descriere (de tip șir de caractere) unde este salvată descrierea camerei;
d)	nume (de tip șir de caractere) unde este salvat numele persoanei cazat în camera.
4.2. Salvarea datelor
	Pentru a salva datele in fișier, programul rescrie de fiecare dată în fișierele  „hotel.txt”, „descrieri.txt” datele care au fost modificate pe parcursul rulării programului.
