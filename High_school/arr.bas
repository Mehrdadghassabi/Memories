CLS
INPUT A, M
DIM B<INT<LOG<A>/ LOG<M>>>
LET S = A
FOR X = 1 TO <INT<LOG<A>/ LOG<M>>> + 1 
LET B<X> = < S MOD M>
LET S = INT<S/M>
NEXT X
FOR X = <INT<LOG<A>/ LOG<M>>> + 1 TO 1 STEP -1
PRINT B<X>
NEXT X
