# newProtocol
Program obsluguje 6 komend :
STF - rozpal ogien - wywolanie bez dodatkowych parametrow
SPF - zgas ogien - wywolanie bez dodatkowych parametrow
HMW - ile wody w systemie - Wywolanie bez dodatkowych parametrow
TW - dorzuć drzewa - do działania wymaga dodatkowych parametrów, 1 parametr to ile klocków dorzucić a 2 to co jaki czas
AW - dolej wody - działa z dodatkowymi argumentami jak i bez, można dolać określoną ilość wody lub nie podając parametrów
                  dolać do pełna
TS - dożuć trocin - do działania wymaga dodatkowych parametrów, 1 parametr to ile trocin dorzucić a 2 to co jaki czas

Wygląd ramki:[CMD|ACK|PAR|SUM|PAR1|PAR2|SUM2]
CMD - komenda
ACK - sprawdzenie poprawnego wysłania ramki, otrzymana ramka jest OK - 0x1, otrzymana ramka jest zła - 0xb
PAR - liczba parametrow dołączonych do metody
SUM - suma sprawdzająca, dodaje wszystkie wcześniejsze bajty informacji do siebie, jeśli użytkownik 
      przy wpisywaniu parametrów do konsoli podał złą sumę, program wyrzuci odpowiednią informację
PAR1,PAR2 - parametry charakteryzujące komendę
SUM2 - przechowuje informację ile parametrów zostało użytych do opisania komendy



Wszystkie komendy można wywoływać wpisując je jako znaki do konsoli bądź w ich hexadecymalnym kodzie ASCII.

Przykładowe poprawne ramki(ap - nazwa aplikacji):
>ap STF - wyrzuci nam ramke z informacją o komendzie zapalającej
>ap SPF - wyrzuci nam ramke z informacją o komendzie gaszącej
>ap HMW - wyrzuci nam ramke z informacją o ilości wody w systemie
>ap TW 1 2 ce 1 2 - wyrzuci nam ramkę z informacją ile drzewa co jaki czas chcemy dorzucić

Wywołanie: >ap -r Służy do wpisywania komend w kodzie hexadecymalnym. Przy takim zapisie program zawsze będzie sprawdzał
sume kontroną więc przy wpisywaniu komend które nie potrzebują dodatkowych parametrów będziemy musieli podać ACK|PAR|SUM.
