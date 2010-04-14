/*
 * Bond.h
 *
 *  Created on: Apr 7, 2010
 *      Author: ed
 */

#ifndef BOND_H_
#define BOND_H_
#include "Atom.h";

class Bond {
public:
	Bond(Atom *a1, Atom *a2);
	Bond(Atom *a1, Atom *a2, int order);
	Bond(Atom *a1, Atom *a2, int order, int stereoParity);
	Bond();
	virtual ~Bond();

};

#endif /* BOND_H_ */
