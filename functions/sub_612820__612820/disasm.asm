0x612820: fld     [esp+arg_0]
0x612824: fcom    qword ptr ds:0A3D360h
0x61282A: fnstsw  ax
0x61282C: test    ah, 41h
0x61282F: jnz     short loc_61284F
0x612831: fld1
0x612833: fcomp   st(1)
0x612835: fnstsw  ax
0x612837: test    ah, 41h
0x61283A: jnz     short loc_61284A
0x61283C: call    __CIacos
0x612841: fstp    [esp+arg_0]
0x612845: fld     [esp+arg_0]
0x612849: retn
0x61284A: fstp    st
0x61284C: fldz
0x61284E: retn
0x61284F: fstp    st
0x612851: fld     dword ptr ds:0B3F9A4h
0x612857: retn
