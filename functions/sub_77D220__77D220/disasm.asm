0x77D220: mov     eax, [ecx+2Ch]
0x77D223: push    esi
0x77D224: xor     esi, esi
0x77D226: test    eax, eax
0x77D228: jz      short loc_77D23C
0x77D22A: mov     edx, [esp+4+arg_0]
0x77D22E: mov     edi, edi
0x77D230: cmp     [eax+24h], edx
0x77D233: jnb     short loc_77D242
0x77D235: mov     eax, [eax+3Ch]
0x77D238: test    eax, eax
0x77D23A: jnz     short loc_77D230
0x77D23C: mov     eax, esi
0x77D23E: pop     esi
0x77D23F: retn    4
0x77D242: mov     edx, [eax+3Ch]
0x77D245: test    edx, edx
0x77D247: jz      short loc_77D24F
0x77D249: mov     esi, [eax+40h]
0x77D24C: mov     [edx+40h], esi
0x77D24F: mov     edx, [eax+40h]
0x77D252: test    edx, edx
0x77D254: jz      short loc_77D25C
0x77D256: mov     esi, [eax+3Ch]
0x77D259: mov     [edx+3Ch], esi
0x77D25C: cmp     eax, [ecx+2Ch]
0x77D25F: jnz     short loc_77D23E
0x77D261: mov     edx, [eax+3Ch]
0x77D264: mov     [ecx+2Ch], edx
0x77D267: pop     esi
0x77D268: retn    4
