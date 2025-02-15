# TEMA1PCLP


PROBLEMA 1:

am initializat coordonatele prin c1 si c2, sumele prins s_a si s_b si normele
prin n_a si n_b si produsul scalar prins ps.
-am initializat si maximele, maxima (maximul coordonatelor c1), 
maximb(maximul coordonatelor c2), 
maxim2a (al doilea maxim al coordonatelor c1), maxim2b(al doilea maxim 
al coordonatelor c2)
-am facut un for pentru a citi numarul de N coordonate
-citim coordonatele c1 si c2 in baza 8i cazul i
-cele 3 if-uri asigura acoperirea cazurilor in care c1/c2 e egal cu maxima,
mai mare ca maxima sau intre maxima si maxim2a
-la fiecare trecere prin for se adauga noua coordonata introdusa la s_a/s_b
si se realizeaza ps 
-la final este realizata norma prin formula normei

PROBLEMA 2:

-am initializat N (numarul de materii) si nr(reprezinta numarul de materii
la care trebuie schimbata nota)
-am initializat 3 vectori, unul in care se introduc notele(vectorul x), 
unul pentru credite(vectorul c) si unul pentru sumele egale cu suma max
de la o nota - suma reala de la acea nota( suma de diferente practic)
-am ordonat descrescator aceste sume si l am parcurs de la i=0 panal i=N-1
si la fiecare parcurgere adunam la suma initiala, iar cand suma initiala 
devenea mai mare decat punctajul minim, structura for se oprea

PROBLEMA 3:
-am citit matricea de intrare si am luat 2 variabile initializate
cu 0 (l-coordonata liniei si c-coordonata coloanei)
-am facut un while care functioneaza cand a[l][c] este diferit de 0,
iar in interiorul while-ului mereu cand trec pe o anumita casuta o fac 0
pt ca in cazul in care ajung din nou pe acea casuta, while-ul sa se opreasca
-acest while respecta conditiile de miscare pe linie si pe coloana berificand
daca (i+j))%2 este egal cu 0 adica patratul este ALB si respecta regulile de 
parcurgere ale linnirlor sau daca nu este egal cu 0 patratul este negru si 
respecta regulile de parcurgere ale coloanelor
-la final in primul if daca val coloanei la care a ajuns este mai mica decat
26 aceasta se mapeaza la o singura litera de la A la Z
-primul else if converteste valorile coordonatei c de la 26 pana 702 in 
combinatii de 2 litere, deoarece de la 703 incepe combinatia AAA
-al doilea else if converteste valorile coordonatei c in combinatii de 3,
deoarece combinatiile de 2 se termina la 702 si de la 703 pana la 1000 sunt 
de la AAA la ALL

PROBLEMA 4:

-am citit numarul de matrici care va fi citit 
-am facut unfor care citeste toate matricele si am initializat 4 vectori:
a)nresl=numarul de restrictii de pe o linie
b)resl=restrictiile de pe acea linie
c)nresc=numarul de restrictii de pe o coloana 
d)resc=restrictiile de pe acea coloana
restrictiile functia returna valoarea 0 si cand le respecta valoarea 1
si se afisa pt 1 (Corect) si pt 0 (Eroare)

am initializat coordonatele prin c1 si c2, sumele prins s_a si s_b si 
normele prin n_a si n_b si produsul scalar prins ps.
-am initializat si maximele, maxima (maximul coordonatelor c1), 
maximb(maximul coordonatelor c2), maxim2a (al doilea maxim al coordonatelor c1), 
maxim2b(al doilea maxim al coordonatelor c2)
-am facut un for pentru a citi numarul de N coordonate
-citim coordonatele c1 si c2 in baza 8i cazul i
-cele 3 if-uri asigura acoperirea cazurilor in care c1/c2 e egal cu maxima,
mai mare ca maxima sau intre maxima si maxim2a
-la fiecare trecere prin for se adauga noua coordonata introdusa la s_a/s_b 
si se realizeaza ps 
-toti vectori sunt de de valoare 100*100
-prin functia verificare am verificat daca se respecta fiecare restrictie
introdusa de la inceput, numarand prin variabilele numarare si numarare2 
fiecare patrat cu valoarea 1 si atunci cand nu respecta
