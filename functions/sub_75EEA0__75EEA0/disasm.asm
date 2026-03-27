0x75EEA0: push    esi
0x75EEA1: push    edi
0x75EEA2: mov     edi, [esp+8+a2]
0x75EEA6: push    edi; a2
0x75EEA7: mov     esi, ecx
0x75EEA9: call    sub_700650
0x75EEAE: test    al, al
0x75EEB0: jnz     short loc_75EEB7
0x75EEB2: pop     edi
0x75EEB3: pop     esi
0x75EEB4: retn    4
0x75EEB7: mov     ecx, [esi+28h]
0x75EEBA: test    ecx, ecx
0x75EEBC: jz      short loc_75EEC6
0x75EEBE: mov     eax, [ecx]
0x75EEC0: mov     edx, [eax+24h]
0x75EEC3: push    edi
0x75EEC4: call    edx
0x75EEC6: pop     edi
0x75EEC7: mov     al, 1
0x75EEC9: pop     esi
0x75EECA: retn    4
