/*
 * AsmLexer.h
 *
 *  Created on: 03/03/2018
 *      Author: breder
 */

#ifndef ASMLEXER_H_
#define ASMLEXER_H_

#include <string.h>

class AsmLexer {
public:
	AsmLexer(const wchar_t* content);
	virtual ~AsmLexer();
};

#endif /* ASMLEXER_H_ */
