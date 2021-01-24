/* skeleton code for parser.cpp */
# include <iostream>
# include "lexer.h"
# include "tokens.h"

using namespace std;

int lookahead;
string lexbuf;

static void error()
{
	if (lookahead == DONE)
		report("syntax error at end of file");
	else
		report("syntax error at '%s'", lexbuf);

	exit(EXIT_FAILURE);
}

static void match(int t)
{
	if (lookahead != t)
		error();

	lookahead = lexan(lexbuf);
}

void expression()
{
	/* Implement recursive-descent parser.
	 * Check slides to get started.
	 */
	return;
}

int main()
{
	lookahead = lexan(lexbuf);

	while (lookahead != DONE)
		expression();

	exit(EXIT_SUCCESS);
}
