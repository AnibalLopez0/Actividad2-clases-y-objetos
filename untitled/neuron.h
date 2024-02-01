#ifndef NEURON_H
#define NEURON_H
#include <iostream>
#include <list>

/*class Neuron
{
public:
    Neuron();
};*/

class Neurona {
private:
    int id;
    float voltaje;
    int posX;
    int posY;
    int red;
    int green;
    int blue;

public:
    Neurona(int _id, float _voltaje, int _posX, int _posY, int _red, int _green, int _blue)
        : id(_id), voltaje(_voltaje), posX(_posX), posY(_posY), red(_red), green(_green), blue(_blue) {}

    void print() const {
        std::cout << "ID: " << id << "\n"
                  << "Voltaje: " << voltaje << "\n"
                  << "Posición X: " << posX << "\n"
                  << "Posición Y: " << posY << "\n"
                  << "Red: " << red << "\n"
                  << "Green: " << green << "\n"
                  << "Blue: " << blue << "\n";
    }
};

class AdministradorNeuronas {
private:
    std::list<Neurona> listaNeuronas;

public:
    void agregarInicio(const Neurona& neurona) {
        listaNeuronas.push_front(neurona);
    }

    void agregarFinal(const Neurona& neurona) {
        listaNeuronas.push_back(neurona);
    }

    void mostrar() const {
        for (const auto& neurona : listaNeuronas) {
            neurona.print();
            std::cout << "------------------------\n";
        }
    }
};

#endif // NEURON_H
