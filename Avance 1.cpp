#include <iostream>
#include <string>
using namespace std;

// PRIMERA CLASE
class Invocador{
private:
    string nombre;
    int nivel;
    int dinero;

public:
    Invocador(string nom, int lvl, int oro);
    void atacar();
    void avanzar();
    void tp();
    
    // Getters
    string getNombre() const;
    int getNivel() const;
    int getDinero() const;

    // Setters
    void setNombre(string nom);
    void setNivel(int lvl);
    void setDinero(int oro);
};

//Constructor
Invocador::Invocador(string nom, int lvl, int oro) : nombre(nom), nivel(lvl), dinero(oro) {}

//Metodos
void Invocador::atacar(){
    cout << "Cada ataque basico de " << nombre << " en el nivel " << nivel << " quita 48 puntos de vida." << endl;
}

void Invocador::avanzar(){
    cout << "La velocidad de " << nombre << " es igual a 340." << endl;
}

void Invocador::tp(){
    cout << nombre << " Ignora la team fight y va a comprar con " << dinero << " de oro." << endl;
}

// Getters
string Invocador::getNombre() const{
    return nombre;
}

int Invocador::getNivel() const{
    return nivel;
}

int Invocador::getDinero() const{
    return dinero;
}

// Setters
void Invocador::setNombre(string nom){
    nombre = nom;
}

void Invocador::setNivel(int lvl){
    nivel = lvl;
}

void Invocador::setDinero(int oro){
    dinero = oro;
}

// SEGUNDA CLASE
class Minion{
private:
    int identificador;
    int vida;
    string tipo_minion;

public:
    Minion(int id, int hp, string tipo);
    void atacar_torreta();
    void soltar_oro();
    void ser_robado();

    // Getters
    int getIdentificador() const;
    int getVida() const;
    string getTipo_minion() const;

    // Setters
    void setIdentificador(int id);
    void setVida(int hp);
    void setTipo_minion(string tipo);
};

//Constructor
Minion::Minion(int id, int hp, string tipo) : identificador(id), vida(hp), tipo_minion(tipo) {}

//Metodos
void Minion::atacar_torreta(){
    cout << "El minion " << identificador << " ataca la torreta de bot line." << endl;
}

void Minion::soltar_oro(){
    cout << "El minion " << identificador << " es un minion tipo " << tipo_minion << " y suelta 12 de oro." << endl;
}

void Minion::ser_robado(){
    cout << "El support se ha robado al minion numero " << identificador << " (otra vez), cuando estaba a " << vida << " de vida." << endl;
}

// Getters
int Minion::getIdentificador() const{
    return identificador;
}

int Minion::getVida() const{
    return vida;
}

string Minion::getTipo_minion() const{
    return tipo_minion;
}

// Setters
void Minion::setIdentificador(int id){
    identificador = id;
}

void Minion::setVida(int hp){
    vida = hp;
}

void Minion::setTipo_minion(string tipo){
    tipo_minion = tipo;
}

// TERCERA CLASE
class Criatura{
private:
    string nombre_criatura;
    int vida_criatura;
    string tipo_criatura;

public:
    Criatura(string nom_c, int hp_c, string tipo_c);
    void atacar_jugador();
    void aparecer();
    void robarse();

    // Getters
    string getNombre_criatura() const;
    int getVida_criatura() const;
    string getTipo_criatura() const;

    // Setters
    void setNombre_criatura(string nom_c);
    void setVida_criatura(int hp_c);
    void setTipo_criatura(string tipo_c);
};

//Constructor
Criatura::Criatura(string nom_c, int hp_c, string tipo_c) : nombre_criatura(nom_c), vida_criatura(hp_c), tipo_criatura(tipo_c) {}

//Metodos
void Criatura::atacar_jugador(){
    cout << "El " << nombre_criatura << " se ha hecho una pentakill." << endl;
}

void Criatura::aparecer(){
    cout << "Ha aparecido " << nombre_criatura <<"."<< endl;
}

void Criatura::robarse(){
    cout << "El jungla se ha robado a " << nombre_criatura << " cuando estaba a " << vida_criatura << " de vida." << endl;
}

// Getters
string Criatura::getNombre_criatura() const{
    return nombre_criatura;
}

int Criatura::getVida_criatura() const{
    return vida_criatura;
}

string Criatura::getTipo_criatura() const{
    return tipo_criatura;
}

// Setters
void Criatura::setNombre_criatura(string nom_c){
    nombre_criatura = nom_c;
}

void Criatura::setVida_criatura(int hp_c){
    vida_criatura = hp_c;
}

void Criatura::setTipo_criatura(string tipo_c){
    tipo_criatura = tipo_c;
}

int main(){

// Invocadores
    cout <<"Invocador"<< endl;
    
    Invocador mago("Neeko", 3, 900);
    Invocador tirador("Xayah", 4, 1250);
    Invocador support("Yummi", 14, 2340);

    mago.avanzar();
    tirador.atacar();
    support.tp();
    
    cout << endl;

// Minions
    cout <<"Minions"<< endl;
    
    Minion m1(9, 25, "normal");
    Minion m2(65, 45, "tanque");
    Minion m3(28, 5, "mago");

    m1.atacar_torreta();
    m2.soltar_oro();
    m3.ser_robado();

    cout << endl;

// Criaturas
    cout <<"Criaturas"<< endl;
    
    Criatura c1("El Heraldo", 255, "Heraldo");
    Criatura c2("Dragon Infernal", 405, "Dragon");
    Criatura c3("El Baron Nashor", 125, "Criatura");

    c1.aparecer();
    c2.atacar_jugador();
    c3.robarse();

    cout << endl;

    return 0;
}