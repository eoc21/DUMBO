/*
 * AtomType.h
 *
 *  Created on: Apr 8, 2010
 *      Author: ed
 */

#ifndef ATOMTYPE_H_
#define ATOMTYPE_H_
#include <string>
using namespace std;

class AtomType {
	string id,elementSymbol;
	int neighbourCount,hybridization,valency;
	double bondOrderSum,covalentRadius,maxBondOrder,vanDerWaalsRadius;
public:
	AtomType(string elementSymbol);
	AtomType(string id, string elementSymbol);
	AtomType();
	virtual ~AtomType();
	string getAtomTypeId();
	double getBondOrderSum();
	double getCovalentRadius();
	int getNeighbourCount();
	int getHybridization();
	double getMaxBondOrder();
	int getValency();
	double getVanDerWaalsRadius();
	void setId(string id);
	void setBondOrderSum(double bondSum);
	void setCovalentRadius(double covalentRadiusValue);
	void setHybridization(int hybridizationValue);
	void setMaxBondOrder(double maximumBondOrder);
	void setValency(int valency);
	void setVanDerWaalsRadius(double vwRadius);

};

#endif /* ATOMTYPE_H_ */
