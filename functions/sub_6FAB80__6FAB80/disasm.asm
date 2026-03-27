0x6FAB80: mov     eax, [esp+arg_4]
0x6FAB84: movzx   edx, word ptr [eax+48h]
0x6FAB88: sub     esp, 0Ch
0x6FAB8B: test    dx, dx
0x6FAB8E: jz      short loc_6FABF8
0x6FAB90: mov     eax, [eax+5Ch]
0x6FAB93: movzx   edx, dx
0x6FAB96: test    edx, edx
0x6FAB98: jz      short loc_6FABF8
0x6FAB9A: fld     [esp+0Ch+arg_0]
0x6FAB9E: fld     dword ptr [eax+14h]
0x6FABA1: sub     edx, 1
0x6FABA4: fsubr   st, st(1)
0x6FABA6: add     eax, 1Ch
0x6FABA9: test    edx, edx
0x6FABAB: fmul    dword ptr [ecx+18h]
0x6FABAE: fstp    [esp+0Ch+arg_4]
0x6FABB2: fld     [esp+0Ch+arg_4]
0x6FABB6: fld     dword ptr ds:0B3F494h
0x6FABBC: fmul    st, st(1)
0x6FABBE: fstp    [esp+0Ch+var_C]
0x6FABC1: fld     dword ptr ds:0B3F498h
0x6FABC7: fmul    st, st(1)
0x6FABC9: fstp    [esp+0Ch+var_8]
0x6FABCD: fmul    dword ptr ds:0B3F49Ch
0x6FABD3: fstp    [esp+0Ch+var_4]
0x6FABD7: fld     dword ptr [eax-1Ch]
0x6FABDA: fadd    [esp+0Ch+var_C]
0x6FABDD: fstp    dword ptr [eax-1Ch]
0x6FABE0: fld     [esp+0Ch+var_8]
0x6FABE4: fadd    dword ptr [eax-18h]
0x6FABE7: fstp    dword ptr [eax-18h]
0x6FABEA: fld     dword ptr [eax-14h]
0x6FABED: fadd    [esp+0Ch+var_4]
0x6FABF1: fstp    dword ptr [eax-14h]
0x6FABF4: jnz     short loc_6FAB9E
0x6FABF6: fstp    st
0x6FABF8: add     esp, 0Ch
0x6FABFB: retn    8
