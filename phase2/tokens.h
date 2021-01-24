/*
 * File:	tokens.h
 *
 * Description:	This file contains the token definitions for use by the
 *		lexical analyzer and parser for Simple C.  Single character
 *		tokens use their ASCII values, so we can refer to them
 *		either as character literals or as symbolic names.
 */

#ifndef TOKENS_H
#define TOKENS_H

// A mapping from strings to integers
enum
{
    // single character operators
    // defined in assignment 1 doc
    // for single characters we can just use the ascci values
    ASSIGN = '=', /* . . . */
    BAR = '|',
    LESSTHAN = '<',
    GREATERTHAN = '>',
    ADD = '+',
    SUB = '-',
    MUL = '*',
    DIV = '/',
    MOD = '%',
    AMPERSAND = '&',
    NOT = '!',
    DOT = '.',
    OPENPAREN = '(',
    CLOSEPAREN = ')',
    OPENBRACKET = '[',
    CLOSEBRACKET = ']',
    OPENBRACE = '{',
    CLOSEBRACE = '}',
    SEMICOLON = ';',
    COLON = ':',
    COMMA = ',',

    // keywords (AUTO is 256 Break is 257....)
    AUTO = 256,
    BREAK,
    CASE,
    CHAR,
    CONST,
    CONTINUE,
    DEFAULT,
    DO,
    DOUBLE,
    ELSE,
    ENUM,
    EXTERN,
    FLOAT,
    FOR,
    GOTO,
    IF,
    INT,
    LONG,
    REGISTER,
    RETURN,
    SHORT,
    SIGNED,
    SIZEOF,
    STATIC,
    STRUCT,
    SWITCH,
    TYPEDEF,
    UNION,
    UNSIGNED,
    VOID,
    VOLATILE,
    WHILE,
    // two character operators, ID, num, string, done
    OR,
    AND,
    EQUALS,
    NOTEQUALS,
    LESSTHANOREQUALTO,
    GREATORTHANOREQUALTO,
    INC,
    DEC,
    ARROW,
    ID,
    NUM,
    STRING,
    DONE,

};

#endif /* TOKENS_H */
