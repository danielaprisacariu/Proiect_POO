// Proiect_Rute.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Ruta {
protected:
    const int idRuta;
    string pctPornire;
    string pctDestinatie;
    float distanta;
    int nrPctReper;
    string* pctReper;
public:
    Ruta() :idRuta(0) {
        this->pctPornire = "Anonim";
        this->pctDestinatie = "Anonim";
        this->distanta = 0;
        this->nrPctReper = 0;
        pctReper = NULL;
    }
    Ruta(int v_id, string v_pctPornire, string v_pctDestinatie, float v_distanta, int v_nrPctReper, string* v_pctReper) :idRuta(v_id) {
        if (v_pctPornire.length() > 0) {
            this->pctPornire = v_pctPornire;
        }
        if (v_pctDestinatie.length() > 0) {
            this->pctDestinatie = v_pctDestinatie;
        }
        this->distanta = v_distanta;
        this->nrPctReper = v_nrPctReper;
        if (this->nrPctReper > 0 && v_pctReper != NULL) {
            this->pctReper = new string[nrPctReper];
            for (int i = 0; i < this->nrPctReper; i++) {
                this->pctReper = new string[nrPctReper];
                for (int i = 0; i < this->nrPctReper; i++) {
                    this->pctReper[i] = v_pctReper[i];
                }
            }
        }
    }
    Ruta(float v_distanta, int v_nrPctReper, string* v_pctReper, string v_pctPornire = "Bucuresti", string v_pctDestinatie = "Brasov", int v_id = 3) : idRuta(v_id){
        this->pctPornire = v_pctPornire;
        this->pctDestinatie = v_pctDestinatie;
        this->distanta = v_distanta;
        this->nrPctReper = v_nrPctReper;
        if (this->nrPctReper > 0 && v_pctReper != NULL) {
            this->pctReper = new string[nrPctReper];
            for (int i = 0; i < this->nrPctReper; i++) {
                this->pctReper = new string[nrPctReper];
                for (int i = 0; i < this->nrPctReper; i++) {
                    this->pctReper[i] = v_pctReper[i];
                }
            }
        }
    }
    Ruta(const Ruta& sursa) :idRuta(sursa.idRuta + 1){
        this->pctPornire = sursa.pctPornire;
        this->pctDestinatie = sursa.pctDestinatie;
        this->distanta = sursa.distanta;
        this->nrPctReper = sursa.nrPctReper;
        if (this->nrPctReper > 0 && sursa.pctReper != NULL) {
            this->pctReper = new string[this->nrPctReper];
            for (int i = 0; i < this->nrPctReper; i++) {
                this->pctReper[i] = sursa.pctReper[i];
            }
        }
    }
    ~Ruta() {
        if (this->pctReper != NULL) {
            delete[] this->pctReper;
        }
    }

    int getIdRute() {
        return this->idRuta;
    }
    string getPctPornire() {
        return this->pctPornire;
    }
    string getDestinatie() {
        return this->pctDestinatie;
    }
    float getDistanta() {
        return this->distanta;
    }
    int getNrPctReper() {
        return this->nrPctReper;
    }
    string* getRepere() {
        return this->pctReper;
    }

    void setPctPornire(string v_pctPornire) {
        if (v_pctPornire.length() > 0) {
            this->pctPornire = v_pctPornire;
        }
    }
    void setPctDestinatie(string v_pctDestinatie) {
        if (v_pctDestinatie.length() > 0) {
            this->pctDestinatie = v_pctDestinatie;
        }
    }
    void setDistanta(float v_distanta) {
        this->distanta = v_distanta;
    }
    void setNrRepere(int v_nrRepere) {
        this->nrPctReper = v_nrRepere;
    }
    void setRepere(string* v_repere) {
        this->pctReper = v_repere;
    }

    //void AfisareRuta() {
    //    cout << "Afisare ruta: " << endl;
    //    cout << *this << endl;
    //}

    //friend ostream& operator<<(ostream& out, Ruta r) {
    //    out << "Id ruta: " << r.idRuta << endl;
    //    out << "Punct pornire: " << r.pctPornire << endl;
    //    out << "Punct destinatie: " << r.pctDestinatie << endl;
    //    out << "Distanta: " << r.distanta << endl;
    //    if (r.nrPctReper > 0 && r.pctReper != NULL) {
    //        for (int i = 0; i < r.nrPctReper; i++) {
    //            out << "Punct reper " << i + 1 << ": " << r.pctReper[i] << endl;
    //        }
    //    }
    //    return out;
    //}
    //friend istream& operator>>(istream& in, Ruta& r) {
    //    cout << "Creare ruta:" << endl;
    //    cout << "Punct pornire: ";
    //    in >> r.pctPornire;
    //    cout << "Punct destinatie: ";
    //    in >> r.pctDestinatie;
    //    cout << "Distanta: ";
    //    in >> r.distanta;
    //    cout << "Nr repere: ";
    //    in >> r.nrPctReper;
    //    for (int i = 0; i < r.nrPctReper; i++) {
    //        cout << "Reper " << i + 1 << ": ";
    //        in >> r.pctReper[i];
    //    }
    //    return in;
    //}

    //Ruta& operator=(const Ruta& sursa) {
    //    this->pctPornire = sursa.pctPornire;
    //    this->pctDestinatie = sursa.pctDestinatie;
    //    this->distanta = sursa.distanta;
    //    this->nrPctReper = sursa.nrPctReper;
    //    if (this->pctReper != NULL) {
    //        delete[] this->pctReper;
    //    }
    //    if (this->nrPctReper > 0 && sursa.pctReper != NULL) {
    //        this->pctReper = new string[this->nrPctReper];
    //        for (int i = 0; i < this->nrPctReper; i++) {
    //            this->pctReper[i] = sursa.pctReper[i];
    //        }
    //    }
    //    return *this;
    //}

    //string& operator[](int index) {
    //    if (index >= 0 && index < this->nrPctReper && this->pctReper != NULL) {
    //        return this->pctReper[index];
    //    }
    //}

    ////preincrementare 
    //Ruta& operator++() {
    //    this->distanta++;
    //    return *this;
    //}
    ////postincrementare 
    //Ruta operator++(int) {
    //    Ruta copie = *this;
    //    copie.distanta++;
    //    return copie;
    //}

    ////predecrementare
    //Ruta& operator--() {
    //    this->distanta--;
    //    return *this;
    //}
    ////postdecrementare
    //Ruta operator--(int) {
    //    Ruta copie = *this;
    //    copie.distanta--;
    //    return copie;
    //}

    //Ruta& operator+=(string pctReperNou) {
    //    Ruta copie = *this;
    //    delete[] copie.pctReper;

    //    copie.nrPctReper += 1;
    //    copie.pctReper = new string[copie.nrPctReper];
    //    for (int i = 0; i < copie.nrPctReper - 1; i++) {
    //        copie.pctReper[i] = this->pctReper[i];
    //    }
    //    copie.pctReper[copie.nrPctReper - 1] = pctReperNou;
    //    *this = copie;

    //    return *this;
    //}

    //bool operator<(Ruta r) {
    //    return this->distanta < r.distanta;
    //}
    //bool operator>(Ruta r) {
    //    return this->distanta > r.distanta;
    //}
    //bool operator==(Ruta r) {
    //    return this->distanta == r.distanta;
    //}
    //bool operator>=(Ruta r) {
    //    return this->nrPctReper >= r.nrPctReper;
    //}
    //bool operator<=(Ruta r) {
    //    return this->nrPctReper <= r.nrPctReper;
    //}
    //bool operator!() {
    //    return this->nrPctReper > 0;
    //}
    //string operator()() {
    //    string ruta = this->pctPornire + " -> ";
    //    for (int i = 0; i < this->nrPctReper; i++) {
    //        ruta += this->pctReper[i] + " -> ";
    //    }
    //    ruta += pctDestinatie;
    //    return ruta;
    //}
    //explicit operator int() {
    //    return this->distanta;
    //}
    //friend Ruta operator+(string pctReperNou, Ruta& r) {
    //    Ruta copie = r;
    //    copie.nrPctReper += 1;
    //    delete[] copie.pctReper;
    //    copie.pctReper = new string[copie.nrPctReper];
    //    for (int i = 0; i < copie.nrPctReper - 1; i++) {
    //        copie.pctReper[i] = r.pctReper[i];
    //    }
    //    copie.pctReper[copie.nrPctReper - 1] = pctReperNou;

    //    return copie;
    //}

    virtual int getTimpEstimat(int durataEstimataKmPeOra) = 0;
    virtual void AfisareRuta() {
        cout << "Afisare ruta: " << endl;
        cout << "Id ruta: " << this->idRuta << endl;
        cout << "Punct pornire: " << this->pctPornire << endl;
        cout << "Punct destinatie: " << this->pctDestinatie << endl;
        cout << "Distanta: " << this->distanta << endl;
        if (this->nrPctReper > 0 && this->pctReper != NULL) {
            for (int i = 0; i < this->nrPctReper; i++) {
                cout << "Punct reper " << i + 1 << ": " << this->pctReper[i] << endl;
            }
        }
    }

};

//interfata
class IDeUmblat {
public:
    virtual void afisareOpriri() = 0;
};

class TraseuMontan : public Ruta, public IDeUmblat {
private: 
    string dificultateTraseu;
public:
    TraseuMontan(string v_dificultate, int v_id, string v_pctPornire, string v_Destinatie, float v_distanata, int v_nrPctReper, string* v_pctReper) : Ruta(v_id, v_pctPornire, v_Destinatie, v_distanata, v_nrPctReper, v_pctReper) {
        this->dificultateTraseu = v_dificultate;
    }

    int getTimpEstimat(int durataEstimataKmPeOra) {
        int timpEstimat = this->distanta / durataEstimataKmPeOra;
        return timpEstimat;
    }

    void afisareOpriri() {
        string traseu = this->pctPornire + " -> ";
        for (int i = 0; i < this->nrPctReper; i++) {
            traseu += this->pctReper[i] + " -> ";
        }
        traseu += this->pctDestinatie;

        cout << "Trasu: " << traseu << endl;
    }

    virtual void AfisareRuta() {
        cout << "Afisare traseu: " << endl;
        cout << "Id traseu: " << this->idRuta << endl;
        cout << "Punct pornire: " << this->pctPornire << endl;
        cout << "Punct destinatie: " << this->pctDestinatie << endl;
        cout << "Distanta: " << this->distanta << endl;
        cout << "Dificultate traseu: " << this->dificultateTraseu << endl;
        if (this->nrPctReper > 0 && this->pctReper != NULL) {
            for (int i = 0; i < this->nrPctReper; i++) {
                cout << "Punct reper " << i + 1 << ": " << this->pctReper[i] << endl;
            }
        }
    }
};

class CursaTren : public Ruta, public IDeUmblat{
private:
    string firma;
    float pret;
public:
    CursaTren(string v_firma, float v_pret, int v_id, string v_pctPornire, string v_pctDestinatie, float v_distanta, int v_nrRepere, string* v_repere) : Ruta(v_id, v_pctPornire, v_pctDestinatie, v_distanta, v_nrRepere, v_repere) {
        this->firma = v_firma;
        this->pret = v_pret;
    }

    int getTimpEstimat(int durataEstimataKmPeOra) {
        int timpEstimat = this->distanta / durataEstimataKmPeOra;
        return timpEstimat;
    }

    void afisareOpriri() {
        string traseu = this->pctPornire + " -> ";
        for (int i = 0; i < this->nrPctReper; i++) {
            traseu += this->pctReper[i] + " -> ";
        }
        traseu += this->pctDestinatie;

        cout << "Opriri: " << traseu << endl;
    }

    virtual void AfisareRuta() {
        cout << "Afisare cursa: " << endl;
        cout << "Id cursa: " << this->idRuta << endl;
        cout << "Punct pornire: " << this->pctPornire << endl;
        cout << "Punct destinatie: " << this->pctDestinatie << endl;
        cout << "Distanta: " << this->distanta << endl;
        cout << "Firma tren: " << this->firma << endl;
        cout << "Pret cursa: " << this->pret << endl;
        if (this->nrPctReper > 0 && this->pctReper != NULL) {
            for (int i = 0; i < this->nrPctReper; i++) {
                cout << "Punct reper " << i + 1 << ": " << this->pctReper[i] << endl;
            }
        }
    }
};

class IstoricCalatorii {
private:
    int nrRute;
    Ruta** vectRute;
public:
    IstoricCalatorii(int v_nrRute, Ruta** v_vectRute) {
        this->nrRute = v_nrRute;
        if (this->nrRute > 0 && v_vectRute != NULL) {
            this->vectRute = new Ruta*[this->nrRute];
            for (int i = 0; i < this->nrRute; i++) {
                this->vectRute[i] = v_vectRute[i];
            }
        }
    }
    IstoricCalatorii(const IstoricCalatorii& sursa) {
        this->nrRute = sursa.nrRute;
        if (this->nrRute > 0 && sursa.vectRute != NULL) {
            this->vectRute = new Ruta * [this->nrRute];
            for (int i = 0; i < this->nrRute; i++) {
                this->vectRute[i] = sursa.vectRute[i];
            }
        }
    }
    ~IstoricCalatorii() {
        if (this->vectRute != NULL && this->nrRute > 0) {
            delete[] this->vectRute;
        }
    }
    friend ostream& operator<<(ostream& out, IstoricCalatorii ic) {
        out << "Afisare istoric calatorii: " << endl;
        for (int i = 0; i < ic.nrRute; i++) {
            ic.vectRute[i]->AfisareRuta();
        }
        return out;
    }
};

int main()
{
    //Cerinte 1 + 2
    //Ruta r1;
    //string repere[]{ "Pitesti", "Suceava" };
    //Ruta r2(2, "Bucuresti", "Iasi", 440, 2, repere);
    //Ruta r3(300.9, 3, new string[]{ "Sinaia", "Busteni", "Azuga" });

    //Ruta r4 = r3;

    //Ruta* vectRute = new Ruta[]{ r1, r2, r3, r4 };
    //for (int i = 0; i < 4; i++) {
    //    vectRute[i].AfisareRuta();
    //}

    ////calcularea mediei geometrice a distantelor
    //float produsDistante = 1;
    //for (int i = 0; i < 4; i++) {
    //    if (vectRute[i].getDistanta() > 0) {
    //        produsDistante *= vectRute[i].getDistanta();
    //    }    
    //}
    //float medieGeom = sqrt(produsDistante);
    //cout << "Media geometrica: " << medieGeom << endl;

    //r1 = r2;
    //cout << "R1: " << endl;
    //cout << r1 << endl;

    ////Citirea de la consola
    ////Ruta r5;
    ////cin >> r5;
    ////cout << r5 << endl;

    //cout << "Primul reper al rutei 2: " << r1[0] << endl;

    //cout << "Distanata r1 inainte de preincrementare: " << r1.getDistanta() << endl;
    //++r1;
    //cout << "Distanta r1 dupa preincrementare: " << r1.getDistanta() << endl;
    //
    //r2 = r1++;
    //cout << "Distanta r2 (r2 = ++r1): " << r2.getDistanta() << endl;
    //cout << "Distanta r1 dupa postincrementare: " << r1.getDistanta() << endl;

    //cout << "Distanata r1 inainte de predecrementare: " << r1.getDistanta() << endl;
    //--r1;
    //cout << "Distanta r1 dupa predecrementare: " << r1.getDistanta() << endl;

    //r2 = r1--;
    //cout << "Distanta r2 (r2 = --r1): " << r2.getDistanta() << endl;
    //cout << "Distanta r1 dupa postdecrementare: " << r1.getDistanta() << endl;

    //r3 += "Predeal";
    //for (int i = 0; i < r3.getNrPctReper(); i++) {
    //    cout << r3.getRepere()[i] << endl;
    //}

    //if (r1 > r3) {
    //    cout << "Ruta 1 este mai lunga decat ruta 3" << endl;
    //}
    //else {
    //    cout << "Ruta 1 este mai scurta decat ruta 3" << endl;
    //}

    //if (r4 < r2) {
    //    cout << "Ruta 4 este mai scurta decat ruta 2" << endl;
    //}
    //else {
    //    cout << "Ruta 4 este mai lunga decat ruta 2" << endl;
    //}

    //if (r3 == r4) {
    //    cout << "Rutele 3 si 4 au aceeasi distanta!" << endl;
    //}
    //else {
    //    cout << "Rutele 3 si 4 nu au aceeasi distanta!" << endl;
    //}

    //if (r3 >= r4) {
    //    cout << r3.getNrPctReper() << " >= " << r4.getNrPctReper() << endl;
    //}
    //else {
    //    cout << r3.getNrPctReper() << " < " << r4.getNrPctReper() << endl;
    //}

    //if (r1 <= r3) {
    //    cout << r2.getNrPctReper()<< " <= "<<r3.getNrPctReper()<< endl;
    //}
    //else {
    //    cout << r2.getNrPctReper() << " > " << r3.getNrPctReper() << endl;
    //}

    //cout << "Are r3 puncte de reper? (0 - NU, 1 - DA): " << !r3 << endl;

    //cout << "Distanta r3: " << (int)r3 << endl;

    //r4 = "Predeal" + r4;
    //for (int i = 0; i < r4.getNrPctReper(); i++) {
    //    cout << r4.getRepere()[i] << endl;
    //}

    //cout << r4() << endl;

    //Cerinte 3:
    TraseuMontan t1("medie", 1, "Busteni", "Sinaia", 60, 2, new string[]{ "Cascada Urlatoare", "Manastirea Caraiman" });
    t1.AfisareRuta();
    cout << "Durata estimata: " << t1.getTimpEstimat(10) << " ore." << endl;
    t1.afisareOpriri();
    CursaTren c1("cfr", 50, 2, "Bucuresti", "Brasov", 250, 4, new string[]{ "Sinaia", "Busteni", "Azuga", "Predeal" });
    c1.AfisareRuta();
    cout << "Durata estimata: " << c1.getTimpEstimat(70) << " ore." << endl;
    c1.afisareOpriri();

    Ruta* vectRute[2] = { &t1, &c1 };
    IstoricCalatorii is(2, vectRute);
    cout << endl << is << endl;
}

