0x928200: test    [esp+arg_0], 1
0x928205: push    esi
0x928206: mov     esi, ecx
0x928208: mov     dword ptr [esi], offset ??_7hkBaseObject@@6B@; const hkBaseObject::`vftable'
0x92820E: jz      short loc_928223
0x928210: movzx   edx, word ptr [esi+4]
0x928214: mov     ecx, ds:0BA7D98h
0x92821A: mov     eax, [ecx]
0x92821C: push    29h ; ')'
0x92821E: push    edx
0x92821F: push    esi
0x928220: call    dword ptr [eax+14h]
0x928223: mov     eax, esi
0x928225: pop     esi
0x928226: retn    4
