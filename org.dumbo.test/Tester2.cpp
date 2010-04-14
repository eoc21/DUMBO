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
#include <algorithm>
#include "Molecule.h"
#include "Atom.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main(int argc, char *argv[]){
	Molecule m;
	vector<Atom*> v;
	Atom* a;
	v.push_back(a);
	m.setAtoms(v);
	Atom *b = new Atom("blahx");
	cout << b->getSymbol();
	cout << m.getAtoms().size();
	//Try reading in mol2 file
	string aLine;
	string moleculeStartPoint = "@<TRIPOS>MOLECULE";
	bool moleculeFlag = false;
	ifstream myfile (argv[1]);
	Molecule molecule;
	if (myfile.is_open())
	  {
	    while (!myfile.eof() )
	    {
	      getline (myfile,aLine);
	      if(aLine.find(moleculeStartPoint) != string::npos){
	    	  moleculeFlag = true;
	    	   // cout << aLine;
	      }
	      if(moleculeFlag == true){
	    	  //Initialize molecule!
	      }

	    }
	    myfile.close();
	  }

	  else cout << "Unable to open file";

	  return 0;


}
