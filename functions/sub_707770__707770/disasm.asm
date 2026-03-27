0x707770: push    esi
0x707771: mov     esi, [ecx+0Ch]
0x707774: test    esi, esi
0x707776: jz      short loc_70778C
0x707778: mov     eax, [esi]
0x70777A: mov     edx, [eax+5Ch]
0x70777D: mov     ecx, esi
0x70777F: call    edx
0x707781: test    al, al
0x707783: jnz     short loc_707790
0x707785: mov     esi, [esi+34h]
0x707788: test    esi, esi
0x70778A: jnz     short loc_707778
0x70778C: xor     al, al
0x70778E: pop     esi
0x70778F: retn
0x707790: mov     al, 1
0x707792: pop     esi
0x707793: retn
