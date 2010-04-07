/*
 * Atom.cpp
 *
 *  Created on: Apr 7, 2010
 *      Author: ed
 */

#include "Atom.h"

Atom::Atom(string atomicSymbol){
	symbol = atomicSymbol;
}

Atom::Atom(string atomicSymbol, double xCoordinate, double yCoordinate, double zCoordinate){
	symbol = atomicSymbol;
	x = xCoordinate;
	y = yCoordinate;
	z = zCoordinate;
}

Atom::Atom() {
	// TODO Auto-generated constructor stub

}

Atom::~Atom() {
	// TODO Auto-generated destructor stub
}


