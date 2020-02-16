void voorbereiding() {
    for (auto speler: Spelers) {
        geefKaarten(7, speler);
    }
    geefKaarten(52, senior);
}

void spelRonde() {
    Kaart getrokkenKaart = senior.trekKaart();
    senior.roep("UNO-FUNDUM" + getrokkenKaart.getKleur() + getrokkenKaart.getNummver());
    for (speler: spelers) {
        if (speler.checkCardInHand(getrokkenKaart.getKleur(), getrokkenKaart.getNummer())) {
            speler.staRecht();
        } else if ((speler.checkCardInHand(getrokkenKaart.getKleur(), "+2") or
                    speler.checkCardInHand("+4")) and
                   speler.wilKaartNuGebruiken()) {
            speler.unoGebaar();
        }
    }
    schacht.haalKaartenOp(); // Laat een schacht de kaarten van de personen die rechtstaan ophalen, zij gaan na het ophalen terug zitten
    for (Persoon persoon: spelersMetUnoGebaar) {
        wait(senior.geefWoord(persoon));
        persoon.naarVoor();
        int aantalPersonen = persoon.getKaart().getNummer().aantal();
        for (int i = 0; i < aantalPersonen; ++i) {
            Persoon aangeduidePersoon = persoon.duidIemandAan();
            if (aangeduidePersoon.checkCardInHand(getrokkenKaart.getKleur(), "NO U") {
                aangeduidePersoon = persoon;
            }
            if (aangeduidePersoon.checkCardInHand(getrokkenKaart.getKleur(), "+2") or
                aangeduidePersoon.checkCardInHand("+4")) {
                for (Persoon p: aangeduidePersoon.duidAndereMensenAan()) { // Respectievelijk 2 of 4 anderen
                    p.doeAdje();
                }
                continue;
            }
            aangeduidePersoon.doeAdje();
        }
    }

    // TODO: CheckUNO
    // TODO: CheckWIN
}