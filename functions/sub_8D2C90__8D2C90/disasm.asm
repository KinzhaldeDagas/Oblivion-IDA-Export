0x8D2C90: fld     [esp+arg_4]
0x8D2C94: mov     eax, [esp+arg_0]
0x8D2C98: fsub    [esp+arg_0]
0x8D2C9C: mov     edx, [esp+arg_4]
0x8D2CA0: mov     [ecx], eax
0x8D2CA2: mov     [ecx+4], edx
0x8D2CA5: fst     dword ptr [ecx+8]
0x8D2CA8: fld     dword ptr ds:0A2FAA8h
0x8D2CAE: fld     st(1)
0x8D2CB0: fucompp
0x8D2CB2: fnstsw  ax
0x8D2CB4: test    ah, 44h
0x8D2CB7: jp      short loc_8D2CC9
0x8D2CB9: fstp    st
0x8D2CBB: mov     eax, ecx
0x8D2CBD: fld     dword ptr ds:0A2FAA8h
0x8D2CC3: fstp    dword ptr [ecx+0Ch]
0x8D2CC6: retn    8
0x8D2CC9: fdivr   dword ptr ds:0A2F948h
0x8D2CCF: mov     eax, ecx
0x8D2CD1: fstp    dword ptr [ecx+0Ch]
0x8D2CD4: retn    8
