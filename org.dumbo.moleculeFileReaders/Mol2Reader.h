/*
 * Mol2Reader.h
 *
 *  Created on: Apr 14, 2010
 *      Author: ed
 */

#ifndef MOL2READER_H_
#define MOL2READER_H_
#include <vector>
#include <Molecule.h>
using namespace std;
class Mol2Reader {
public:
	Mol2Reader();
	virtual ~Mol2Reader();
	//vector<Molecule*> readMol2File(char *fileName);
};

#endif /* MOL2READER_H_ */
