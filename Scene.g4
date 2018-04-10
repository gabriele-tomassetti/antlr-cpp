grammar Scene;

// Parser rules

file        : (name NEWLINE (TAB elements+=action NEWLINE?)* ) EOF;

name        : NAME ':';

action      : DRAW size shape IN color AT position
            | WRITE size STRING IN color AT position
            ;

size        : SMALL | MEDIUM | BIG ;

shape       : CIRCLE | SQUARE;

color       : BLACK | BLUE | BROWN | GREEN | RED | ORANGE | PURPLE | YELLOW | WHITE ;

position    : x=(LEFT | CENTER | RIGHT) ',' y=(TOP | CENTER | BOTTOM) ;

// Lexer rules

DRAW        : 'draw' ;
WRITE       : 'write' ;
IN          : 'in' ;
AT          : 'at';

CIRCLE      : 'circle' ;
SQUARE      : 'square' ;

SMALL       : 'small' ;
MEDIUM      : 'medium' ;
BIG         : 'big' ;

LEFT        : 'left' ;
RIGHT       : 'right' ;
CENTER      : 'center' ;
TOP         : 'top' ;
BOTTOM      : 'bottom' ;

STRING      : '"' .*? '"' ;

BLACK       : 'black' ;
BLUE        : 'blue' ;
BROWN       : 'brown' ;
GREEN       : 'green' ;
RED         : 'red' ;
ORANGE      : 'orange' ;
PURPLE      : 'purple' ;
YELLOW      : 'yellow' ;
WHITE       : 'white' ;

NAME        :  [a-zA-Z0-9\-_]+;

NEWLINE     : ('\r'? '\n' | '\r')+ ;
TAB         : ('\t' | '        ' | '    ' ) ;
WHITESPACE  : ' ' -> skip ;
