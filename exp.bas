INPUT x, t
LET y = x
LET p = x
FOR i = 1 to 3
LET y = y MOD 10
LET b = b + <y * < t ^ < i-1 >>>
LET y = INT<p/10>
LET P = Y
NEXT i
PRINT B
