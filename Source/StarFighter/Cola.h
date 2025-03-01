// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

// creando template clase cola
template<typename Tmp> class Cola;

// clase nodo con template
template<typename Tmp>
class Nodo {
	friend Cola<Tmp>;
private:
	Tmp valor;
	Nodo<Tmp>* siguiente;

public:
	Nodo(Tmp _valor, Nodo<Tmp>* _siguiente = nullptr) {
		valor = _valor;
		siguiente = _siguiente;
	}
};

// clase cola
template<class Tmp>
class Cola {
private:
	Nodo<Tmp>* primero;
	Nodo<Tmp>* ultimo;
public:
	// constructor
	Cola() : primero(nullptr), ultimo(nullptr) {}
	// destructor
	~Cola();
	void Push(Tmp _valor);
	Tmp Pop();
};

template<class Tmp>
Cola<Tmp>::~Cola() {
	while (primero) {
		Pop();
	}
}

// metodo introducir objetos
template<class Tmp>
void Cola<Tmp>::Push(Tmp _valor) {
	Nodo<Tmp>* nodoNuevo;
	nodoNuevo = new Nodo<Tmp>(_valor);

	if (ultimo) {
		ultimo->siguiente = nodoNuevo;
	}

	ultimo = nodoNuevo;

	if (!primero) {
		primero = nodoNuevo;
	}
}

// metodo eliminar o sacar objetos
template<class Tmp>
Tmp Cola<Tmp>::Pop() {
	Nodo<Tmp>* nodoActual;
	Tmp valorNodo;

	nodoActual = primero;
	if (!nodoActual) {
		return 0;
	}

	primero = nodoActual->siguiente;
	valorNodo = nodoActual->valor;
	delete nodoActual;

	if (!primero) {
		ultimo = nullptr;
	}

	return valorNodo;
}
