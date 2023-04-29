# Recepție hotel - C++

## Introducere

Pentru a putea funcționa, un hotel are nevoie de un software care să organizeze rezervările și feedback-ul clienților. Recepție hotel este un program conceput pentru recepțiile hotelurilor, care ajută la ținerea evidenței persoanelor cazate. Pentru aceasta, am utilizat limbajul de programare C++, un limbaj general, compilat, multi-paradigmă, ce suportă programare procedurală, abstractizare a datelor și programare orientată pe obiecte. Dezvoltat inițial de Bjarne Stroustrup de la Bell Labs în anii 1980, C++ a devenit unul dintre cele mai populare limbaje de programare comerciale, rămânând astfel și astăzi.

## Prezentarea aplicației

Am creat o aplicație pentru recepția hotelurilor, folosind limbajul de programare C++. Interfața principală a aplicației conține 6 elemente file:

1. Toate camerele - afișează informații despre toate camerele din baza de date a programului, cum ar fi dacă camera este ocupată sau nu, descrierea camerei și numele persoanei cazate în cameră (sau ultima).
2. Vezi camerele disponibile - afișează camerele libere disponibile pentru cazare.
3. Ocupă/Eliberează - permite cazarea sau eliberarea unei camere, citind numărul camerei și 1 (unu) pentru a o ocupa sau 0 (zero) pentru a o elibera. În cazul în care camera este ocupată, aplicația cere numele persoanei care ocupă camera.
4. Schimbă descrierea - permite schimbarea descrierii camerei, citind numărul camerei căruia i se schimbă descrierea și descrierea nouă.
5. Adaugă o cameră - generează o cameră nouă cu numărul de ordine al următoarei camere și citeste descrierea pentru acea cameră.
6. Ieșire - închide aplicația.

### Codul sursă

#### Prelucrarea datelor

Structura "camera" are 4 variabile:

* `nr` (de tip întreg) - numărul de ordine al camerei
* `ocupare` (de tip Boolean) - reține dacă camera este ocupată sau nu
* `descriere` (de tip șir de caractere) - descrierea camerei
* `nume` (de tip șir de caractere) - numele persoanei cazate în camera

#### Salvarea datelor

Pentru a salva datele în fișier, programul rescrie de fiecare dată în fișierele "hotel.txt" și "descrieri.txt" datele care au fost modificate pe parcursul rulării programului.

