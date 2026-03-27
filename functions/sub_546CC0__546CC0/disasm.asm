0x546CC0: fldz
0x546CC2: fld     [esp+arg_4]
0x546CC6: fucom   st(1)
0x546CC8: fnstsw  ax
0x546CCA: fstp    st(1)
0x546CCC: test    ah, 44h
0x546CCF: jnp     short loc_546CD7
0x546CD1: fdivr   [esp+arg_0]
0x546CD5: jmp     short loc_546CDB
0x546CD7: fstp    st
0x546CD9: fldz
0x546CDB: fild    [esp+arg_8]
0x546CDF: fmul    dword ptr ds:0B36D40h
0x546CE5: fadd    dword ptr ds:0B36D38h
0x546CEB: fxch    st(1)
0x546CED: fstp    [esp+arg_4]
0x546CF1: fld     [esp+arg_4]
0x546CF5: fld1
0x546CF7: fsubrp  st(1), st
0x546CF9: fmul    dword ptr ds:0B36D30h
0x546CFF: faddp   st(1), st
0x546D01: fstp    [esp+arg_4]
0x546D05: fld     [esp+arg_4]
0x546D09: retn
