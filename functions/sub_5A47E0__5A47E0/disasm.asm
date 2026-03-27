0x5A47E0: mov     eax, ds:0B3B33Ch
0x5A47E5: test    eax, eax
0x5A47E7: jz      short loc_5A47FC
0x5A47E9: mov     ecx, [eax+54h]
0x5A47EC: cmp     ecx, [esp+arg_0]
0x5A47F0: jnz     short loc_5A47FC
0x5A47F2: mov     dword ptr [eax+54h], 0
0x5A47F9: mov     al, 1
0x5A47FB: retn
0x5A47FC: xor     al, al
0x5A47FE: retn
