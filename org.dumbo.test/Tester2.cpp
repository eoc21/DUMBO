/*
 * Tester2.cpp
 *
 *  Created on: Apr 8, 2010
 *      Author: ed
 */

#include "Tester2.h"

Tester2::Tester2() {
	// TODO Auto-generated constructor stub

}

Tester2::~Tester2() {
	// TODO Auto-generated destructor stub
}

#include "Molecule.h"
#include "Atom.h"
#include <iostream>
using namespace std;

int main(){
	Molecule m;
	vector<Atom*> v;
	Atom* a;
	v.push_back(a);
	m.setAtoms(v);
	Atom *b = new Atom("blahx");
	cout << b->getSymbol();
	cout << m.getAtoms().size();
}
