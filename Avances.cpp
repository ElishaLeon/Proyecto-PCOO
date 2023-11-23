#include <iostream>
#include <string>
using namespace std;

// PRIMERA CLASE                                                                             - CLASE INVOCADOR 

class Invocador{
private:
    string nombre_invocador;
    int nivel;
    int rank;
    int campeones_adquiridos;

public:
    Invocador(string nom_inv, int lvl, int rnk, int num_camp);
    void buscar_partida();
    void reportar();

    
    // Getters 
    string getNombre_invocador() const;
    int getNivel() const;
    int getRank() const;
    int getCampeones_adquiridos() const;

    // Setters
    void setNombre_invocador(string nom_inv);
    void setNivel(int lvl);
    void setRank(int rnk);
    void setCampeones_adquiridos(int num_camp);
};

//Constructor
Invocador::Invocador(string nom_inv, int lvl, int rkn, int num_camp) : nombre_invocador(nom_inv), nivel(lvl), rank(rkn), campeones_adquiridos(num_camp){}

//Metodos
void Invocador::buscar_partida(){
    cout << "El invocador " << nombre_invocador << " de nivel " << nivel << " tiene " << campeones_adquiridos << " campeones adquiridos y está buscando partida" << endl;
}

void Invocador::reportar(){
    cout << "El invocador " << nombre_invocador << " desea reportar a un enemigo de rank " << rank << " por ir Yi support troll." << endl;
}


// Getters
string Invocador:: getNombre_invocador() const{
    return nombre_invocador;
}

int Invocador::getNivel() const{
    return nivel;
}

int Invocador::getRank() const{
    return rank;
}

int Invocador::getCampeones_adquiridos() const{
    return campeones_adquiridos;
}


// Setters
void Invocador::setNombre_invocador(string nom_inv){
    nombre_invocador = nom_inv;
}

void Invocador::setNivel(int lvl){
    nivel = lvl;
}

void Invocador::setRank(int rnk){
    rank = rnk;
}

void Invocador::setCampeones_adquiridos(int num_camp){
    campeones_adquiridos = num_camp;
}

// SEGUNDA CLASE                                                                             - CLASE EQUIPOS

class Equipos{
private:
    string campeon;
    int num_invocadores;

public:
    Equipos(string camp, int num_inv);
    void buscar_invocadores();

    
    // Getters 
    string getCampeon() const;
    int getNum_invocadores() const;

    // Setters
    void setCampeon(string camp);
    void setNum_invocadores(int num_inv);
};

//Constructor
Equipos::Equipos(string camp, int num_inv) : campeon(camp), num_invocadores(num_inv) {}

//Metodos
void Equipos::buscar_invocadores(){
    cout << "El invocador utilizará al campeon " << campeon << " y la sala contara con " << num_invocadores << " invocadores " << endl;
}

// Getters
string Equipos::getCampeon() const{
    return campeon;
}

int Equipos::getNum_invocadores() const{
    return num_invocadores;
}


// Setters
void Equipos::setCampeon(string camp){
    campeon = camp;
}

void Equipos::setNum_invocadores(int num_inv){
    num_invocadores = num_inv;
}

// TERCERA CLASE                                                                             - CLASE PARTIDA

class Partida{
private:
    string tipo_partida;
    string mapa;


public:
    Partida(string tipo_par, string map);
    void iniciar_partida();
    
    // Getters 
    string getTipo_partida() const;
    string getMapa() const;

    // Setters
    void setTipo_partida(string tipo_par);
    void setMapa(string map);

};

//Constructor
Partida::Partida(string tipo_par,string map) : tipo_partida(tipo_par), mapa(map) {}

//Metodos
void Partida::iniciar_partida(){
    cout << "Se iniciara una partida " << tipo_partida << " en el mapa " << mapa << endl;
}

// Getters
string Partida:: getTipo_partida() const{
    return tipo_partida;
}

string Partida:: getMapa() const{
    return mapa;
}


// Setters

void Partida::setTipo_partida(string tipo_par){
    tipo_partida = tipo_par;

}

void Partida::setMapa(string map){
    mapa = map;
}

// CUARTA CLASE                                                                             - CLASE TORRETAS

class Torretas{
private:
    int danio_t;
    int hp_t;
    int id_t;

public:
    Torretas(int danioT, int hpT, int idT); //Juro que el hpT no fue intencional D:
    void atacarT();
    void caer();

    
    // Getters 
    int getDanio_t() const;
    int getHp_t() const;
    int getId_t() const;

    // Setters
    void setDanio_t(int danioT);
    void setHp_t(int hpT);
    void setId_t(int idT);
};

//Constructor
Torretas::Torretas(int danioT, int hpT, int idT) : danio_t(danioT), hp_t(hpT), id_t(idT){}

//Metodos
void Torretas::atacarT(){
    cout << "La torreta " << id_t << " hace " << danio_t << " de daño al jugador." << endl;
}

void Torretas::caer(){
    cout << "La torreta " << id_t << " ha caido cuando poseia " << hp_t << " puntos de vida totales."<< endl;
}


// Getters

int Torretas::getDanio_t() const{
    return danio_t;
}

int Torretas::getHp_t() const{
    return hp_t;
}

int Torretas::getId_t() const{
    return id_t;
}


// Setters

void Torretas::setDanio_t(int danioT){
    danio_t = danioT;
}

void Torretas::setHp_t(int hpT){
    hp_t = hpT;
}

void Torretas::setId_t(int idT){
    id_t = idT;
}

// QUINTA CLASE                                                                             - CLASE MINIONS

class Minions{
private:
    string tipo_m;
    int id_m;
    int hp_m;
    int danio_m;

public:
    Minions(string tipoM, int idM, int hpM, int danioM);
    void atacar_torreta();
    void soltar_oro();
    void morirM();

    // Getters
    string getTipo_m() const;
    int getId_m() const;
    int getHp_m() const;
    int getdanio_m() const;

    // Setters
    void setTipo_m(string tipoM);
    void setId_m(int idM);
    void setHp_m(int hpM);
    void setDanio_m(int danioM);
};

//Constructor
Minions::Minions(string tipoM, int idM, int hpM, int danioM) : tipo_m(tipoM), id_m(idM), hp_m(hpM), danio_m(danioM) {}

//Metodos
void Minions::atacar_torreta(){
    cout << "El minion " << id_m << " ataca la torreta de bot line." << endl;
}

void Minions::soltar_oro(){
    cout << "El minion " << id_m << " es un minion tipo " << tipo_m << " y hace " << danio_m <<  " puntos de danio, este suelta 12 de oro." << endl;
}

void Minions::morirM(){
    cout << "El support se ha robado al minion numero " << id_m << " (otra vez), cuando estaba a " << hp_m << " de vida." << endl;
}

// Getters
string Minions::getTipo_m() const{
    return tipo_m;
}

int Minions::getId_m() const{
    return id_m;
}

int Minions::getHp_m() const{
    return hp_m;
}

int Minions::getdanio_m() const{
    return danio_m;
}



// Setters
void Minions::setTipo_m(string tipoM){
    tipo_m = tipoM;
}

void Minions::setId_m(int idM){
    id_m = idM;
}

void Minions::setHp_m(int hpM){
    hp_m = hpM;
}

void Minions::setDanio_m(int danioM){
    danio_m = danioM;
}

// SEXTA CLASE                                                                             - CLASE CRIATURAS

class Criaturas {
private:
    string tipo_c;
    string nombre_c;  
    int hp_c;
    int danio_c;

public:
    Criaturas(string tipoC, string nombreC, int hpC, int danioC);  
    void atacar_jugador();
    void ping();
    void morirC();

    // Getters
    string getTipo_c() const;
    string getNombre_c() const;  
    int getHp_c() const;
    int getDanio_c() const;

    // Setters
    void setTipo_c(string tipoC);
    void setNombre_c(string nombreC);  
    void setHp_c(int hpC);
    void setDanio_c(int danioC);
};



//Constructor
Criaturas::Criaturas(string tipoC, string nombreC, int hpC, int danioC) : tipo_c(tipoC), nombre_c(nombreC), hp_c(hpC), danio_c(danioC) {}



//Metodos
void Criaturas::atacar_jugador() {
    cout << "La criatura " << nombre_c << " ataca a un invocador." << endl;
}

void Criaturas::ping() {
    cout << "La criatura " << nombre_c << " es una criatura tipo " << tipo_c << " y hace " << danio_c << " puntos de danio" << endl;
}

void Criaturas::morirC() {
    cout << "El jg se ha robado a la " << nombre_c << " de la jungla enemiga, la cual poseia " << hp_c << " puntos de vida." << endl;
}



// Getters 
string Criaturas::getTipo_c() const {
    return tipo_c;
}

string Criaturas::getNombre_c() const {
    return nombre_c;
}

int Criaturas::getHp_c() const {
    return hp_c;
}

int Criaturas::getDanio_c() const {
    return danio_c;
}



// Setters 
void Criaturas::setTipo_c(string tipoC) {
    tipo_c = tipoC;
}

void Criaturas::setNombre_c(string nombreC) {
    nombre_c = nombreC;
}

void Criaturas::setHp_c(int hpC) {
    hp_c = hpC;
}

void Criaturas::setDanio_c(int danioC) {
    danio_c = danioC;
}


// SEPTIMA CLASE                                                                            - CLASE JUGADORES_INGAME

class Jugador{
private:
    int id_j;
    int nivel_j;
    int vida_j;
    int mana_j;
    int Oro_j;

public:
    Jugador(int idJ, int lvlJ, int hpJ, int manaJ, int oroJ);
    void atacar();
    void morir();
    void tp();
    
    // Getters 
    int getId_j() const;
    int getNivel_j() const;
    int getVida_j() const;
    int getMana_j() const;
    int getDinero_j() const;

    // Setters
    void setId_j(int idJ);
    void setNivel_j(int lvlJ);
    void setVida_j(int hpJ);
    void setMana_j(int manaJ);
    void setOro_j(int oroJ);


};



//Constructor
Jugador::Jugador(int idJ, int lvlJ, int hpJ, int manaJ, int oroJ) : id_j (idJ), nivel_j (lvlJ), vida_j (hpJ), mana_j (manaJ), Oro_j (oroJ) {}



// Métodos
void Jugador::atacar() {
    cout << "El ataque Q del jugador " << id_j << " en el nivel " << nivel_j << " quita 48 puntos de vida y gasta " << mana_j << " de mana." << endl;
}

void Jugador::morir() {
    cout << "El jugador " << id_j << " con " << vida_j << " de vida recibe 235 de daño y muere, ganandole una PENTAKILL al equipo enemigo." << endl;
}

void Jugador::tp() {
    cout << "El jugador " << id_j << " ignora la team fight y va a comprar con " << Oro_j << " de oro." << endl;
}



// Getters
int Jugador::getId_j() const {
    return id_j;
}

int Jugador::getNivel_j() const {
    return nivel_j;
}

int Jugador::getVida_j() const {
    return vida_j;
}

int Jugador::getMana_j() const {
    return mana_j;
}

int Jugador::getDinero_j() const {
    return Oro_j;
}



// Setters
void Jugador::setId_j(int idJ) {
    id_j = idJ;
}

void Jugador::setNivel_j(int lvlJ) {
    nivel_j = lvlJ;
}

void Jugador::setVida_j(int hpJ) {
    vida_j = hpJ;
}

void Jugador::setMana_j(int manaJ) {
    mana_j = manaJ;
}

void Jugador::setOro_j(int oroJ) {
    Oro_j = oroJ;
}

// OCTAVA CLASE                                                                             - CLASE OBJETOS_TIENDA

class Objetos {
private:
    string tipo_o;
    string habilidad_o;  
    int costo;

public:
    Objetos(string tipoO, string habilidadO, int costo);  
    void comprar();

    // Getters
    string getTipo_o() const;
    string getHabilidad_o() const;  
    int getCosto() const;

    // Setters
    void setTipo_o(string tipoO);
    void setHabilidad_o(string HabilidadO);  
    void setCosto(int cost);

};



//Constructor
Objetos::Objetos(string tipoO, string habilidadO, int cost) : tipo_o(tipoO), habilidad_o(habilidadO), costo(cost) {}



//Metodos
void Objetos::comprar() {
    cout << "Un invocador ha comprado el objeto " << tipo_o << " al costo de " << costo << " oro, y otorga la habilidad de " << habilidad_o << endl;
}



// Getters 
string Objetos::getTipo_o() const {
    return tipo_o;
}

string Objetos::getHabilidad_o() const {
    return habilidad_o;
}

int Objetos::getCosto() const {
    return costo;
}




// Setters 
void Objetos::setTipo_o(string tipoO) {
    tipo_o = tipoO;
}

void Objetos::setHabilidad_o(string habilidadO) {
    habilidad_o = habilidadO;
}

void Objetos::setCosto(int cost) {
    costo = cost;
}



int main(){

// Invocadores
    cout <<"Invocador"<< endl;
    
    Invocador inv1("LuniiBlue", 56, 0, 36);
    Invocador inv2("DanKookie", 345, 4, 97);

    inv1.buscar_partida();
    inv2.reportar();
    
    cout << endl;

// Equipos
    cout <<"Equipos"<< endl;
    
    Equipos e1("Neeko", 10);

    e1.buscar_invocadores();

    cout << endl;

// Partida
    cout <<"Partida"<< endl;
    
    Partida p1("reclutamiento", "Grieta");

    p1.iniciar_partida();

    cout << endl;

// Torretas
    cout <<"Torretas"<< endl;
    
    Torretas t1( 70, 5000, 3);
    Torretas t2( 250, 5000, 6);

    t1.atacarT();
    t2.caer();

    cout << endl;

// Minions
    cout <<"Minions"<< endl;
    
    Minions m1("Normal", 4, 50, 25);
    Minions m2("Mago", 37, 70, 35);
    Minions m3("Tanque", 170, 350, 60);

    m2.atacar_torreta();
    m3.soltar_oro();
    m1.morirM();

    cout << endl;

// Criaturas
    cout <<"Criaturas"<< endl;
    
    Criaturas c1("Corrupta", "El Heraldo", 8000, 105);
    Criaturas c2("Dragon", "Dragon Infernal", 4000, 86);
    Criaturas c3("Escarabajo", "Criatura de rio", 200, 0);

    c1.atacar_jugador();
    c2.ping();
    c3.morirC();

    cout << endl;

// Jugadores_ingame
    cout <<"Jugadores"<< endl;
    
    Jugador j1(1, 5, 613, 147, 360);
    Jugador j2(9, 7, 175, 630, 130);
    Jugador j3(4, 14, 1400, 850, 1460);

    j1.atacar();
    j2.morir();
    j3.tp();

    cout << endl;

// Objetos
    cout <<"Objetos"<< endl;
    
    Objetos o1("Varita explisova","+40 de poder de habilidad", 850);


    o1.comprar();


    cout << endl;


    return 0;
}
