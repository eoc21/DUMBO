/*
 * Molecule.h
 *
 *  Created on: Apr 6, 2010
 *      Author: ed
 */

#ifndef MOLECULE_H_
#define MOLECULE_H_
#include <vector>
#include "Atom.h"
#include "Bond.h"
#include "LonePair.h"
#include "SingleElectron.h"

using namespace std;

class Molecule {
	vector<Atom*> atoms;
	vector<Bond*> bonds;
	vector<LonePair*> lonePairs;
	vector<SingleElectron*> singleElectrons;

public:
	Molecule();
	Molecule(vector<Atom*> theAtoms,vector<Bond*> theBonds);
	virtual ~Molecule();
	Atom* getAtom(int i);
	Bond* getBond(int i);
	vector<Atom*> getAtoms();
	vector<Bond*> getBonds();
	void setBonds(vector<Bond*> bondValues);
	void setAtoms(vector<Atom*> atomValues);
	void addAtom(Atom* anAtom);
	void addBond(Bond* aBond);
	void addLonePair(LonePair* aLonePair);
	void addSingleElectron(SingleElectron* aSingleElectron);
	int getAtomCount();
	int getBondCount();
	void removeAtom(int i);
	void removeBond(int i);
	void removeLonePair(int i);
	void removeElectron(int i);
	void removeAllAtoms();
	void removeAllBonds();
};

#endif /* MOLECULE_H_ */
