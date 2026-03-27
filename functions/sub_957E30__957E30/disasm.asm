0x957E30: mov     eax, [esp+arg_0]
0x957E34: mov     edx, [eax+14h]
0x957E37: push    esi
0x957E38: sub     edx, [eax+34h]
0x957E3B: mov     esi, [eax+4]
0x957E3E: mov     [esp+4+arg_0], edx
0x957E42: fild    [esp+4+arg_0]
0x957E46: mov     edx, [eax]
0x957E48: cmp     edx, esi
0x957E4A: pop     esi
0x957E4B: fabs
0x957E4D: fmul    dword ptr [eax+1Ch]
0x957E50: jge     short loc_957E76
0x957E52: fsub    dword ptr ds:0A41328h
0x957E58: fmul    dword ptr ds:0A5977Ch
0x957E5E: fcom    dword ptr ds:0A2FAA8h
0x957E64: fnstsw  ax
0x957E66: test    ah, 5
0x957E69: jp      short loc_957E7A
0x957E6B: fstp    st
0x957E6D: fld     dword ptr ds:0A2FAA8h
0x957E73: retn    4
0x957E76: fld     st
0x957E78: fmulp   st(1), st
0x957E7A: fld     st
0x957E7C: fmul    st, st(1)
0x957E7E: fmul    st, st(1)
0x957E80: fmulp   st(1), st
0x957E82: fmul    dword ptr [ecx+10h]
0x957E85: retn    4
