/*
 * Atom.h
 *
 *  Created on: Apr 7, 2010
 *      Author: ed
 */

#ifndef ATOM_H_
#define ATOM_H_
#include <string>
using namespace std;

class Atom {
	string symbol;
	int atomicNumber;
	double x,y,z;
	double charge;
	int hydrogenCount,stereoParity;
public:
	Atom(string atomSymbol);
	Atom(string atomSymbol, double xCoordinate,double yCoordinate, double zCoordinate);
	Atom();
	virtual ~Atom();
	int getAtomicNumber();
	string getSymbol();
	void setAtomicNumber(int atomicNumber);
	void setSymbol(string aSymbol);
	void setXCoordinate(double xcoord);
	void setYCoordinate(double ycoord);
	void setZCoordinate(double zcoord);
	double getXCoordinate();
	double getYCoordinate();
	double getZCoordinate();
	double getCharge();
	int getHydrogenCount();
	int getStereoParity();
	void setCharge(double charge);
	void setHydrogenCount(int count);
	void setStereoParity(int parity);
};

#endif /* ATOM_H_ */
