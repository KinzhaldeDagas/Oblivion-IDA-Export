0x75D2B0: fld     [esp+arg_0]
0x75D2B4: mov     ecx, [ecx+44h]
0x75D2B7: fst     [esp+arg_0]
0x75D2BB: fcomp   qword ptr ds:0A2FC68h
0x75D2C1: fnstsw  ax
0x75D2C3: test    ah, 5
0x75D2C6: jp      short loc_75D2CE
0x75D2C8: fldz
0x75D2CA: fstp    [esp+arg_0]
0x75D2CE: fld     [esp+arg_0]
0x75D2D2: fcom    qword ptr ds:0A2F928h
0x75D2D8: fnstsw  ax
0x75D2DA: test    ah, 41h
0x75D2DD: jnz     short loc_75D2EB
0x75D2DF: fstp    st
0x75D2E1: fld1
0x75D2E3: fstp    [esp+arg_0]
0x75D2E7: fld     [esp+arg_0]
0x75D2EB: fstp    dword ptr [ecx+5Ch]
0x75D2EE: retn    4
