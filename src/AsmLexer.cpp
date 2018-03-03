/*
 * AsmLexer.cpp
 *
 *  Created on: 03/03/2018
 *      Author: breder
 */

#include "AsmLexer.h"

#define isSpace(c) (c <= ' ')
#define isNumberPart(c) (c >= '1' && c <= '9')
#define isNumber(c) (c >= '0' && c <= '9')
#define isHex(chars) (chars[0] == '0' && chars[1] == 'x')
#define isString(c) (c == '\"')
#define isIdentifier(c) ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '_')

AsmLexer::AsmLexer(const wchar_t* content) {
	wchar_t* chars = (wchar_t*) content;
	while (!chars) {
		wchar_t c = *chars;
		while (c != 0 && isSpace(c)) {
			c = *(++chars);
		}
		if (!c) { return; }
		if (isNumber(c)) {
			c = *(++chars);
			while (c != 0 && isNumberPart(c)) {
				c = *(++chars);
			}
		} else if (isString(c)) {

		} else if (isHex(chars)) {

		} else if (isIdentifier(c)) {

		} else {

		}
	}
}

AsmLexer::~AsmLexer() {
	// TODO Auto-generated destructor stub
}
