# UNO-Cantus
## Spelregels
### Voorbereiding
- Iedere speler krijgt 7 kaarten. 
- De Senior heeft een eigen, volledig UNO-pakket (geschud).
### Doel van het spel
Zo snel mogelijk al je kaarten weggespeeld hebben.
### Spelverloop 
1. Regelmatig tijdens de cantus trekt de senior een kaart een roept hij "UNO-Fundum [kleur] [nummer]"
1. Heb je geen kaart met exact dezelfde kleur EN nummer, dan moet je momenteel niets doen.
1. Heb je wel een kaart met exact dezelfde kleur EN nummer, dan ga je rechtstaan.
1. Een schacht komt langs met een doos. Je legt je kaart in die doos en de schacht brengt zo je kaart naar de voortafel.
### Speciale gevallen
1. Heb je een kaart waarop +2 (in dezelfde kleur) of +4 staat (hiernaar wordt verwezen als +i in de volgende uitleg).
    1. Nadat de senior "Uno-Fundum [kleur] [nummer]" heeft geroepen, kan je rechtstaan en het UNO-Gebaar maken (staat hieronder beschreven).
    1. Als je dit gedaan hebt, kan de senior jouw het woord geven, en naar voor laten komen.
    1. Eens vanvoor kan je i verschillende personen aanduiden die elks ook moeten gaan rechtstaan en een log2(i) adje(s) trekken. Zij krijgen ook i kaarten bij.
        1. Dit is dus 1 adje bij een +2 en 2 adjes bij een +4.
    1. Een van de personen die je hebt aangeduid kan zelf ook een reverse kaart hebben. In dit geval roept de persoon "No U" als hij rechtstaat. De persoon die hem/haar heeft aangewezen moet dan een adje drinken en hijzelf geen.
    1. Een van de personen die je hebt aangeduid kan zelf ook een + kaart hebben. In dit geval maakt hij/zij ook een UNO-Gebaar. De senior zal opmerken dat er iemand nieuw met een UNO-gebaar is rechtgestaan en hem/haar i nieuwe mensen laten aanduiden (die deze ronde nog niet aangeduid zijn geweest). Hij/zij moet dan zelf ook geen adje meer doen.
1. Heb je net je laatste kaart afgegeven, dan ga je rechtstaan en roep je luid (iedereen moet jou horen) "UNO".
    1. Als je dit vergeet, krijg je 7 nieuwe kaarten (en moet je een zevensprong doen). 
### UNO-Gebaar
Dit is een gebaar net als een V of een P (respectievelijk voor Verbum of Prosit). Om dit gebaar te vormen, ga je rechtstaan en maak je met je armen een U.
## Afdrukken
Je moet uiteraard aan een hele hoop UNO-kaarten geraken voor dit spel. Gelukkig kan je dat makkelijk online terugvinden. Dit kan je om kosten te besparen in zwart/wit afdrukken en met een stift een bolletje met de juiste kleur erop zetten.
Bijvoorbeeld hier vind je een online SVG versie: ![Alt text](https://upload.wikimedia.org/wikipedia/commons/thumb/9/95/UNO_cards_deck.svg/699px-UNO_cards_deck.svg.png?sanitize=true)
## UNO-Sprong
Op deze cantus kunnen er ook strafkes voorkomen. Daarom hebben we de UNO-sprong bedacht:
1. De persoon die het strafke moet doen (de gestrafte), komt naar voor en krijgt te horen dat hij een UNO-sprong moet doen.
1. De corona stemt een kleur van kaart.
    1. Best gewoon kleur per kleur afgaan en mensen hun hand in de lucht laten steken als dat de kleur is die zij willen.
    1. De kleur met de meeste stemmen wordt gekozen.
1. De senior zal vervolgens een kaart trekken, als dit niet de gestemde kleur is, doet de gestrafte een adje en wordt deze stap herhaald. Als het wel de gestemde kleur is, is het strafje voorbij.
```c++
void UNO-sprong(Persoon gestraftePersoon) {
    Kleur gekozenKleur = stemCorona({blauw, geel, rood, groen});
    Kaart getrokkenKaart = senior.trekKaart();
    while(getrokkenKaart.getKleur() != gekozenKleur){
        gestraftePersoon.doeAdje();
        getrokkenKaart = senior.trekKaart();
    }
    return;
}
