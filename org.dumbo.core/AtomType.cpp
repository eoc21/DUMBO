/*
 * AtomType.cpp
 *
 *  Created on: Apr 8, 2010
 *      Author: ed
 */

#include "AtomType.h"
#include <string>
using namespace std;

AtomType::AtomType() {
	// TODO Auto-generated constructor stub

}

AtomType::~AtomType() {
	// TODO Auto-generated destructor stub
}

AtomType::AtomType(string idValue, string elementType){
	id = idValue;
	elementSymbol = elementType;
}

AtomType::AtomType(string elementType){
	elementSymbol = elementType;
}

/**
 * Return atom id.
 */
string AtomType::getAtomTypeId(){
	return id;
}

/**
 * Get bond order sum.
 */
double AtomType::getBondOrderSum(){
	return bondOrderSum;
}

/**
 * Get covalent radius.
 */
double AtomType::getCovalentRadius(){
	return covalentRadius;
}

/**
 * Get number of neighbours associated with this atom.
 */
int AtomType::getNeighbourCount(){
	return neighbourCount;
}

/**
 * Get hybridization of the atom type.
 */
int AtomType::getHybridization(){
	return hybridization;
}

/**
 * Return maximum bond order associated with atom.
 */
double AtomType::getMaxBondOrder(){
	return maxBondOrder;
}

/**
 * Return atom valence.
 */
int AtomType::getValency(){
	return valency;
}

/**
 * Get atom van der waals radius.
 */
double AtomType::getVanDerWaalsRadius(){
	return vanDerWaalsRadius;
}
/**
 * Set atom id.
 */
void AtomType::setId(string idValue){
	id = idValue;
}

/**
 * Set sum of bond order.
 */
void AtomType::setBondOrderSum(double bondSumValue){
	bondOrderSum = bondSumValue;
}

/**
 * Set covalent radius.
 */
void AtomType::setCovalentRadius(double covalentRadiusValue){
	covalentRadius = covalentRadiusValue;
}

/**
 * Set hybridization.
 */
void AtomType::setHybridization(int hybridValue){
	hybridization = hybridValue;
}

/**
 * Set max bond order.
 */
void AtomType::setMaxBondOrder(double maximumBondOrderValue){
	maxBondOrder = maximumBondOrderValue;
}

/**
 * Set valency.
 */
void AtomType::setValency(int valence){
	valency = valence;
}

/**
 * Set van der Waals radius.
 */
void AtomType::setVanDerWaalsRadius(double vdwRadius){
	vanDerWaalsRadius = vdwRadius;
}
