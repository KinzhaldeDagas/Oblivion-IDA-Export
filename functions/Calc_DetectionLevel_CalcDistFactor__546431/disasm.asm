0x546431: cmp     [esp+arg_30], 0; Builds the normalized distance contribution from current distance and maximum detection range, then passes it through the remaining factors.
0x546436: fsubr   st, st(1)
0x546438: fdivrp  st(1), st
0x54643A: fstp    [esp+arg_8]
0x54643E: fldz
