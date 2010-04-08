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

/**
 * Returns int representing the atomic number.
 */
int Atom::getAtomicNumber(){
	return atomicNumber;
}

/**
 * Returns symbol of atom.
 */
string Atom::getSymbol(){
	return symbol;
}

/**
 * Set atomic number
 */
void Atom::setAtomicNumber(int atomicNumberValue){
	atomicNumber = atomicNumberValue;
}

/**
 * Set symbol.
 */
void Atom::setSymbol(string aSymbol){
	symbol = aSymbol;
}

/**
 * Set x coordinate.
 */
void Atom::setXCoordinate(double xCoordinate){
	x = xCoordinate;
}

/**
 * Set y coordinate.
 */
void Atom::setYCoordinate(double yCoordinate){
	y = yCoordinate;
}

/**
 * Set z coordinate.
 */
void Atom::setZCoordinate(double zCoordinate){
	z = zCoordinate;
}

/**
 * Get x-coordinate.
 */
double Atom::getXCoordinate(){
	return x;
}

/**
 * Get y-coordinate.
 */
double Atom::getYCoordinate(){
	return y;
}

/**
 * Get z-coordinate.
 */
double Atom::getZCoordinate(){
	return z;
}

/**
 * Get charge on atom.
 */
double Atom::getCharge(){
	return charge;
}

/**
 * Get hydrogen count associated with this atom.
 */
int Atom::getHydrogenCount(){
	return hydrogenCount;
}

/**
 * Get stereoparity.
 */
int Atom::getStereoParity(){
	return stereoParity;
}

/**
 * Set atom charge.
 */
void Atom::setCharge(double chargeValue){
	charge = chargeValue;
}

/**
 * Set hydrogen count.
 */
void Atom::setHydrogenCount(int hCount){
	hydrogenCount = hCount;
}

/**
 * Set stereoparity.
 */
void Atom::setStereoParity(int sParity){
	stereoParity = sParity;
}
