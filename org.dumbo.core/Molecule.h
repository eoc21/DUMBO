/*
 * Molecule.h
 *
 *  Created on: Apr 6, 2010
 *      Author: ed
 */

#ifndef MOLECULE_H_
#define MOLECULE_H_
#include <vector>

class Molecule {
public:
	Molecule();
	Molecule(vector<Atom*> theAtoms,vector<Bond*> theBonds);
	virtual ~Molecule();
	Atom* getAtom(int i);
	Bond* getBond(int i);
	vector<Atom*> getAtoms();
	vector<Bond*> getBonds();
	void setBonds();
	void setAtoms();

private:
	vector<Atom*> atoms;
	vector<Bonds*> bonds;

};

#endif /* MOLECULE_H_ */
