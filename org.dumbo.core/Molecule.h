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

using namespace std;

class Molecule {
	vector<Atom*> atoms;
	vector<Bond*> bonds;

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

};

#endif /* MOLECULE_H_ */
