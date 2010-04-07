/*
 * Molecule.cpp
 *
 *  Created on: Apr 6, 2010
 *      Author: ed
 */

#include "Molecule.h"
using namespace std;
/**
 * Constructs an empty molecule container.
 */
Molecule::Molecule() {
}

/**
 * Constructs a molecule container with atoms and bonds supplied.
 */
Molecule::Molecule(vector<Atom*>atomToAdd,vector<Bond*>bondsToAdd){
	atomToAdd = Molecule::atoms;
	bondsToAdd = Molecule::bonds;
}

/**
 * Destroys molecule object.
 */
Molecule::~Molecule() {
}

/**
 * Returns a pointer to the atom at the desired index.
 */
Atom* Molecule::getAtom(int i){
	return atoms.at(i);
}

/**
 * Returns a vector of pointers to the atoms in the molecule.
 */
vector<Atom*> Molecule::getAtoms(){
	return atoms;
}

/**
 * Returns a pointer to the bond at the desired index.
 */
Bond* Molecule::getBond(int i){
	return bonds.at(i);
}

/**
 * Manually set atoms.
 */
void Molecule::setAtoms(vector<Atom*> atomsToSet){
	atoms = atomsToSet;
}

/**
 * Manually set bonds.
 */
void Molecule::setBonds(vector<Bond*> bondsToSet){
	bonds = bondsToSet;
}

/**
 * Add an additional atom.
 */
void Molecule::addAtom(Atom* anAtom){
	atoms.push_back(anAtom);
}

/**
 * Add an additional bond.
 */
void Molecule::addBond(Bond* aBond){
	bonds.push_back(aBond);
}

/**
 * Add an lone pair.
 */
void Molecule::addLonePair(LonePair* aLonePair){
	lonePairs.push_back(aLonePair);
}

/**
 * Add single electron.
 */
void Molecule::addSingleElectron(SingleElectron* aSingleElectron){
	singleElectrons.push_back(aSingleElectron);
}

/**
 * Get the number of atoms.
 */
int Molecule::getAtomCount(){
	return atoms.size();
}
