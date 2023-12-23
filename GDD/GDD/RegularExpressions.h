#pragma once
#include "FST.h"

#define GRAPH_CREATE 7, \
	FST::NODE(1, FST::RELATION('c', 1)), \
	FST::NODE(1, FST::RELATION('r', 2)), \
	FST::NODE(1, FST::RELATION('e', 3)), \
	FST::NODE(1, FST::RELATION('a', 4)), \
	FST::NODE(1, FST::RELATION('t', 5)), \
	FST::NODE(1, FST::RELATION('e', 6)), \
	FST::NODE()

#define GRAPH_INT 5, \
	FST::NODE(1,FST::RELATION('i',1)),\
	FST::NODE(1,FST::RELATION('n',2)),\
	FST::NODE(1,FST::RELATION('t',3)),\
	FST::NODE(1,FST::RELATION('_',4)),\
	FST::NODE()
#define GRAPH_CHR 5, \
	FST::NODE(1,FST::RELATION('c',1)),\
	FST::NODE(1,FST::RELATION('h',2)),\
	FST::NODE(1,FST::RELATION('r',3)),\
	FST::NODE(1,FST::RELATION('_',4)),\
	FST::NODE()

#define GRAPH_STR 5, \
	FST::NODE(1,FST::RELATION('s',1)),\
	FST::NODE(1,FST::RELATION('t',2)),\
	FST::NODE(1,FST::RELATION('r',3)),\
	FST::NODE(1,FST::RELATION('_',4)),\
	FST::NODE()

#define GRAPH_BOOL 6, \
	FST::NODE(1,FST::RELATION('b',1)),\
	FST::NODE(1,FST::RELATION('o',2)),\
	FST::NODE(1,FST::RELATION('o',3)),\
	FST::NODE(1,FST::RELATION('l',4)),\
	FST::NODE(1,FST::RELATION('_',5)),\
	FST::NODE()

#define GRAPH_TRUE 5, \
	FST::NODE(1,FST::RELATION('t',1)),\
	FST::NODE(1,FST::RELATION('r',2)),\
	FST::NODE(1,FST::RELATION('u',3)),\
	FST::NODE(1,FST::RELATION('e',4)),\
	FST::NODE()

#define GRAPH_FALSE 6, \
	FST::NODE(1,FST::RELATION('f',1)),\
	FST::NODE(1,FST::RELATION('a',2)),\
	FST::NODE(1,FST::RELATION('l',3)),\
	FST::NODE(1,FST::RELATION('s',4)),\
	FST::NODE(1,FST::RELATION('e',5)),\
	FST::NODE()

#define GRAPH_BREAKL 7,\
	FST::NODE(1, FST::RELATION('b', 1)), \
	FST::NODE(1, FST::RELATION('r', 2)), \
	FST::NODE(1, FST::RELATION('e', 3)), \
	FST::NODE(1, FST::RELATION('a', 4)), \
	FST::NODE(1, FST::RELATION('k', 5)), \
	FST::NODE(1, FST::RELATION('l', 6)), \
	FST::NODE()

#define GRAPH_OPERATOR 2,	\
	FST::NODE(5, FST::RELATION('+', 1), \
	FST::RELATION('-', 1), \
	FST::RELATION('*', 1), \
	FST::RELATION('/', 1), \
	FST::RELATION('%', 1)),\
	FST::NODE()

#define GRAPH_LOG_OPERATOR 2, \
	FST::NODE(6, FST::RELATION('>', 1), \
	FST::RELATION('<', 1), \
	FST::RELATION('~', 1), \
	FST::RELATION('#', 1), \
	FST::RELATION('$', 1), \
	FST::RELATION('?', 1)), \
	FST::NODE()

#define GRAPH_SEMICOLON 2,	\
	FST::NODE(1, FST::RELATION(';', 1)),\
	FST::NODE()

#define GRAPH_COMMA 2,	\
	FST::NODE(1, FST::RELATION(',', 1)),\
	FST::NODE()

#define GRAPH_LEFTBRACE 2,	\
	FST::NODE(1, FST::RELATION('{', 1)),\
	FST::NODE()

#define GRAPH_BRACELET 2,	\
	FST::NODE(1, FST::RELATION('}', 1)),\
	FST::NODE()

#define GRAPH_LEFTTHESIS 2,	\
	FST::NODE(1, FST::RELATION('[', 1)),\
	FST::NODE()

#define GRAPH_RIGHTTHESIS 2,	\
	FST::NODE(1, FST::RELATION(']', 1)),\
	FST::NODE()

#define GRAPH_LEFTBRACKET 2,	\
	FST::NODE(1, FST::RELATION('(', 1)),\
	FST::NODE()

#define GRAPH_RIGHTBRACKET 2,	\
	FST::NODE(1, FST::RELATION(')', 1)),\
	FST::NODE()

#define GRAPH_EQUAL 2,	\
	FST::NODE(1, FST::RELATION('=', 1)),\
	FST::NODE()

#define GRAPH_ID 2, \
	FST::NODE(52,	\
	FST::RELATION('a', 0), FST::RELATION('b', 0), FST::RELATION('c', 0), \
	FST::RELATION('d', 0), FST::RELATION('e', 0), FST::RELATION('f', 0),\
	FST::RELATION('g', 0), FST::RELATION('h', 0), FST::RELATION('i', 0), \
	FST::RELATION('j', 0), FST::RELATION('k', 0), FST::RELATION('l', 0),\
	FST::RELATION('m', 0), FST::RELATION('n', 0), FST::RELATION('o', 0), \
	FST::RELATION('p', 0), FST::RELATION('q', 0), FST::RELATION('r', 0),\
	FST::RELATION('s', 0), FST::RELATION('t', 0), FST::RELATION('u', 0), \
	FST::RELATION('v', 0), FST::RELATION('w', 0), FST::RELATION('x', 0),\
	FST::RELATION('y', 0), FST::RELATION('z', 0),\
	\
	FST::RELATION('a', 1), FST::RELATION('b', 1), FST::RELATION('c', 1), \
	FST::RELATION('d', 1), FST::RELATION('e', 1), FST::RELATION('f', 1),\
	FST::RELATION('g', 1), FST::RELATION('h', 1), FST::RELATION('i', 1), \
	FST::RELATION('j', 1), FST::RELATION('k', 1), FST::RELATION('l', 1),\
	FST::RELATION('m', 1), FST::RELATION('n', 1), FST::RELATION('o', 1), \
	FST::RELATION('p', 1), FST::RELATION('q', 1), FST::RELATION('r', 1),\
	FST::RELATION('s', 1), FST::RELATION('t', 1), FST::RELATION('u', 1), \
	FST::RELATION('v', 1), FST::RELATION('w', 1), FST::RELATION('x', 1),\
	FST::RELATION('y', 1), FST::RELATION('z', 1)),\
	FST::NODE()

#define GRAPH_STRING_LITERAL 3,\
	FST::NODE(1, FST::RELATION('\"', 1)),\
	FST::NODE(87, \
			FST::RELATION('a', 1), FST::RELATION('b', 1), FST::RELATION('c', 1), FST::RELATION('d', 1),\
			FST::RELATION('e', 1), FST::RELATION('f', 1), FST::RELATION('g', 1), FST::RELATION('h', 1),\
			FST::RELATION('i', 1), FST::RELATION('j', 1), FST::RELATION('k', 1), FST::RELATION('l', 1),\
			FST::RELATION('m', 1), FST::RELATION('n', 1), FST::RELATION('o', 1), FST::RELATION('p', 1),\
			FST::RELATION('q', 1), FST::RELATION('r', 1), FST::RELATION('s', 1), FST::RELATION('t', 1),\
			FST::RELATION('u', 1), FST::RELATION('v', 1), FST::RELATION('w', 1), FST::RELATION('x', 1),\
			FST::RELATION('y', 1), FST::RELATION('z', 1),\
			FST::RELATION('A', 1), FST::RELATION('B', 1), FST::RELATION('C', 1), FST::RELATION('D', 1),\
			FST::RELATION('E', 1), FST::RELATION('F', 1), FST::RELATION('G', 1), FST::RELATION('H', 1),\
			FST::RELATION('I', 1), FST::RELATION('J', 1), FST::RELATION('K', 1), FST::RELATION('L', 1),\
			FST::RELATION('M', 1), FST::RELATION('N', 1), FST::RELATION('O', 1), FST::RELATION('P', 1),\
			FST::RELATION('Q', 1), FST::RELATION('R', 1), FST::RELATION('S', 1), FST::RELATION('T', 1),\
			FST::RELATION('U', 1), FST::RELATION('V', 1), FST::RELATION('W', 1), FST::RELATION('X', 1),\
			FST::RELATION('Y', 1), FST::RELATION('Z', 1),\
			FST::RELATION('0', 1), FST::RELATION('1', 1), FST::RELATION('2', 1), FST::RELATION('3', 1),\
			FST::RELATION('4', 1), FST::RELATION('5', 1), FST::RELATION('6', 1), FST::RELATION('7', 1),\
			FST::RELATION('8', 1), FST::RELATION('9', 1),\
			FST::RELATION(' ', 1), FST::RELATION(',', 1), FST::RELATION('.', 1), FST::RELATION(';', 1),\
			FST::RELATION('-', 1), FST::RELATION('+', 1), FST::RELATION('*', 1), FST::RELATION('/', 1),\
			FST::RELATION('=', 1), FST::RELATION(':', 1), FST::RELATION(')', 1), FST::RELATION('(', 1),\
			FST::RELATION('}', 1), FST::RELATION('{', 1), FST::RELATION(']', 1), FST::RELATION('[', 1),\
			FST::RELATION('!', 1), FST::RELATION('?', 1), FST::RELATION('#', 1), FST::RELATION('&', 1),\
			FST::RELATION('>', 1), FST::RELATION('<', 1), FST::RELATION('[', 1), FST::RELATION(']', 1),\
			FST::RELATION('\"', 2)),\
	FST::NODE()

#define GRAPH_CHR_LITERAL 4,\
	FST::NODE(1, FST::RELATION('\"', 1)),\
	FST::NODE(87, \
			FST::RELATION('a', 2), FST::RELATION('b', 2), FST::RELATION('c', 2), FST::RELATION('d', 2),\
			FST::RELATION('e', 2), FST::RELATION('f', 2), FST::RELATION('g', 2), FST::RELATION('h', 2),\
			FST::RELATION('i', 2), FST::RELATION('j', 2), FST::RELATION('k', 2), FST::RELATION('l', 2),\
			FST::RELATION('m', 2), FST::RELATION('n', 2), FST::RELATION('o', 2), FST::RELATION('p', 2),\
			FST::RELATION('q', 2), FST::RELATION('r', 2), FST::RELATION('s', 2), FST::RELATION('t', 2),\
			FST::RELATION('u', 2), FST::RELATION('v', 2), FST::RELATION('w', 2), FST::RELATION('x', 2),\
			FST::RELATION('y', 2), FST::RELATION('z', 2),\
			FST::RELATION('A', 2), FST::RELATION('B', 2), FST::RELATION('C', 2), FST::RELATION('D', 2),\
			FST::RELATION('E', 2), FST::RELATION('F', 2), FST::RELATION('G', 2), FST::RELATION('H', 2),\
			FST::RELATION('I', 2), FST::RELATION('J', 2), FST::RELATION('K', 2), FST::RELATION('L', 2),\
			FST::RELATION('M', 2), FST::RELATION('N', 2), FST::RELATION('O', 2), FST::RELATION('P', 2),\
			FST::RELATION('Q', 2), FST::RELATION('R', 2), FST::RELATION('S', 2), FST::RELATION('T', 2),\
			FST::RELATION('U', 2), FST::RELATION('V', 2), FST::RELATION('W', 2), FST::RELATION('X', 2),\
			FST::RELATION('Y', 2), FST::RELATION('Z', 2),\
			FST::RELATION('0', 2), FST::RELATION('1', 2), FST::RELATION('2', 2), FST::RELATION('3', 2),\
			FST::RELATION('4', 2), FST::RELATION('5', 2), FST::RELATION('6', 2), FST::RELATION('7', 2),\
			FST::RELATION('8', 2), FST::RELATION('9', 2),\
			FST::RELATION(' ', 2), FST::RELATION(',', 2), FST::RELATION('.', 2), FST::RELATION(';', 2),\
			FST::RELATION('-', 2), FST::RELATION('+', 2), FST::RELATION('*', 2), FST::RELATION('/', 2),\
			FST::RELATION('=', 2), FST::RELATION(':', 2), FST::RELATION(')', 2), FST::RELATION('(', 2),\
			FST::RELATION('}', 2), FST::RELATION('{', 2), FST::RELATION(']', 2), FST::RELATION('[', 2),\
			FST::RELATION('!', 2), FST::RELATION('?', 2), FST::RELATION('#', 2), FST::RELATION('&', 2),\
			FST::RELATION('>', 2), FST::RELATION('<', 2), FST::RELATION('[', 2), FST::RELATION(']', 2)),\
			FST::NODE(1, FST::RELATION('\"', 3)), FST::NODE()

#define GRAPH_INT_LITERAL 3, \
	FST::NODE(19, \
			FST::RELATION('1',1),\
			FST::RELATION('2',1),FST::RELATION('3',1),\
			FST::RELATION('4',1),FST::RELATION('5',1),\
			FST::RELATION('6',1),FST::RELATION('7',1),\
			FST::RELATION('8',1),FST::RELATION('9',1),\
			\
			FST::RELATION('0',2),FST::RELATION('1',2),\
			FST::RELATION('2',2),FST::RELATION('3',2),\
			FST::RELATION('4',2),FST::RELATION('5',2),\
			FST::RELATION('6',2),FST::RELATION('7',2),\
			FST::RELATION('8',2),FST::RELATION('9',2)),\
	FST::NODE(20,\
			FST::RELATION('0',1), FST::RELATION('1',1),\
			FST::RELATION('2',1),FST::RELATION('3',1),\
			FST::RELATION('4',1),FST::RELATION('5',1),\
			FST::RELATION('6',1),FST::RELATION('7',1),\
			FST::RELATION('8',1),FST::RELATION('9',1),\
			\
			FST::RELATION('0',2),FST::RELATION('1',2),\
			FST::RELATION('2',2),FST::RELATION('3',2),\
			FST::RELATION('4',2),FST::RELATION('5',2),\
			FST::RELATION('6',2),FST::RELATION('7',2),\
			FST::RELATION('8',2),FST::RELATION('9',2)),\
	FST::NODE()

#define GRAPH_BIN_INT_LITERAL	4, \
		FST::NODE(2,FST::RELATION('0', 1),FST::RELATION('1', 1)), \
		FST::NODE(1,FST::RELATION('b', 2)), \
		\
		FST::NODE(4, \
		FST::RELATION('1', 2), FST::RELATION('0', 2),\
		\
		FST::RELATION('1', 3), FST::RELATION('0', 3)),\
	FST::NODE()

#define GRAPH_OCT_INT_LITERAL	4, \
		FST::NODE(2,FST::RELATION('0', 1),FST::RELATION('1', 1)), \
		FST::NODE(1,FST::RELATION('o', 2)), \
		\
		FST::NODE(16, \
			FST::RELATION('1', 3), FST::RELATION('2', 3), FST::RELATION('3', 3), FST::RELATION('4', 3), FST::RELATION('5', 3), FST::RELATION('6', 3),\
			FST::RELATION('7', 3), FST::RELATION('0', 3),\
			\
			FST::RELATION('1', 2), FST::RELATION('2', 2), FST::RELATION('3', 2), FST::RELATION('4', 2), FST::RELATION('5', 2), FST::RELATION('6', 2),\
			FST::RELATION('7', 2), FST::RELATION('0', 2)),\
	FST::NODE()

#define GRAPH_FUNCTION 9, \
	FST::NODE(1, FST::RELATION('f', 1)),\
    FST::NODE(1, FST::RELATION('u', 2)),\
    FST::NODE(1, FST::RELATION('n', 3)),\
    FST::NODE(1, FST::RELATION('c', 4)),\
    FST::NODE(1, FST::RELATION('t', 5)),\
    FST::NODE(1, FST::RELATION('i', 6)),\
    FST::NODE(1, FST::RELATION('o', 7)),\
    FST::NODE(1, FST::RELATION('n', 8)),\
    FST::NODE()

#define GRAPH_PROCEDURE 10, \
	FST::NODE(1, FST::RELATION('p', 1)),\
    FST::NODE(1, FST::RELATION('r', 2)),\
    FST::NODE(1, FST::RELATION('o', 3)),\
    FST::NODE(1, FST::RELATION('c', 4)),\
    FST::NODE(1, FST::RELATION('e', 5)),\
    FST::NODE(1, FST::RELATION('d', 6)),\
    FST::NODE(1, FST::RELATION('u', 7)),\
    FST::NODE(1, FST::RELATION('r', 8)),\
	FST::NODE(1, FST::RELATION('e', 9)),\
    FST::NODE()


#define GRAPH_MAIN 5, \
	FST::NODE(1,FST::RELATION('m',1)),\
	FST::NODE(1,FST::RELATION('a',2)),\
	FST::NODE(1,FST::RELATION('i',3)),\
	FST::NODE(1,FST::RELATION('n',4)),\
	FST::NODE()

#define GRAPH_WHERE 5, \
	FST::NODE(1,FST::RELATION('w',1)),\
	FST::NODE(1,FST::RELATION('h',2)),\
	FST::NODE(1,FST::RELATION('e',3)),\
	FST::NODE(1,FST::RELATION('n',4)),\
	FST::NODE()

#define GRAPH_OTHERWISE 3, \
	FST::NODE(1,FST::RELATION('o',1)),\
	FST::NODE(1,FST::RELATION('r',2)),\
	FST::NODE()

#define GRAPH_CYCLE 6, \
	FST::NODE(1,FST::RELATION('c',1)),\
	FST::NODE(1,FST::RELATION('y',2)),\
	FST::NODE(1,FST::RELATION('c',3)),\
	FST::NODE(1,FST::RELATION('l',4)),\
	FST::NODE(1,FST::RELATION('e',5)),\
	FST::NODE()

#define GRAPH_SPEAK 6, \
	FST::NODE(1,FST::RELATION('w',1)),\
	FST::NODE(1,FST::RELATION('r',2)),\
	FST::NODE(1,FST::RELATION('i',3)),\
	FST::NODE(1,FST::RELATION('t',4)),\
	FST::NODE(1,FST::RELATION('e',5)),\
	FST::NODE()

#define GRAPH_GIVE 5, \
	FST::NODE(1,FST::RELATION('g',1)),\
	FST::NODE(1,FST::RELATION('i',2)),\
	FST::NODE(1,FST::RELATION('v',3)),\
	FST::NODE(1,FST::RELATION('e',4)),\
	FST::NODE()

// ������������ �������

#define GRAPH_MEASURE 8, \
	FST::NODE(1, FST::RELATION('m', 1)),\
    FST::NODE(1, FST::RELATION('e', 2)),\
    FST::NODE(1, FST::RELATION('a', 3)),\
    FST::NODE(1, FST::RELATION('s', 4)),\
    FST::NODE(1, FST::RELATION('u', 5)),\
    FST::NODE(1, FST::RELATION('r', 6)),\
    FST::NODE(1, FST::RELATION('e', 7)),\
    FST::NODE()

#define GRAPH_READ 5, \
	FST::NODE(1, FST::RELATION('r', 1)),\
    FST::NODE(1, FST::RELATION('e', 2)),\
    FST::NODE(1, FST::RELATION('a', 3)),\
    FST::NODE(1, FST::RELATION('d', 4)),\
    FST::NODE()

#define GRAPH_COMBINE 8, \
	FST::NODE(1, FST::RELATION('c', 1)),\
    FST::NODE(1, FST::RELATION('o', 2)),\
    FST::NODE(1, FST::RELATION('m', 3)),\
    FST::NODE(1, FST::RELATION('b', 4)),\
	FST::NODE(1, FST::RELATION('i', 5)),\
	FST::NODE(1, FST::RELATION('n', 6)),\
	FST::NODE(1, FST::RELATION('e', 7)),\
    FST::NODE()
#define GRAPH_LEXCOMP 8, \
	FST::NODE(1, FST::RELATION('l', 1)),\
    FST::NODE(1, FST::RELATION('e', 2)),\
    FST::NODE(1, FST::RELATION('x', 3)),\
    FST::NODE(1, FST::RELATION('c', 4)),\
	FST::NODE(1, FST::RELATION('o', 5)),\
	FST::NODE(1, FST::RELATION('m', 6)),\
	FST::NODE(1, FST::RELATION('p', 7)),\
    FST::NODE()

#define GRAPH_EXPONENT 9, \
	FST::NODE(1, FST::RELATION('e', 1)),\
    FST::NODE(1, FST::RELATION('x', 2)),\
    FST::NODE(1, FST::RELATION('p', 3)),\
    FST::NODE(1, FST::RELATION('o', 4)),\
	FST::NODE(1, FST::RELATION('n', 5)),\
	FST::NODE(1, FST::RELATION('e', 6)),\
	FST::NODE(1, FST::RELATION('n', 7)),\
	FST::NODE(1, FST::RELATION('t', 8)),\
    FST::NODE()

#define GRAPH_RANDOMIZE 10, \
	FST::NODE(1, FST::RELATION('r', 1)),\
    FST::NODE(1, FST::RELATION('a', 2)),\
    FST::NODE(1, FST::RELATION('n', 3)),\
    FST::NODE(1, FST::RELATION('d', 4)),\
	FST::NODE(1, FST::RELATION('o', 5)),\
	FST::NODE(1, FST::RELATION('m', 6)),\
	FST::NODE(1, FST::RELATION('i', 7)),\
	FST::NODE(1, FST::RELATION('z', 8)),\
	FST::NODE(1, FST::RELATION('e', 9)),\
    FST::NODE()