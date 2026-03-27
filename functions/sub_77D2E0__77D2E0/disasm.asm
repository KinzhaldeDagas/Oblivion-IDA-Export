0x77D2E0: mov     eax, [ecx+2Ch]
0x77D2E3: test    eax, eax
0x77D2E5: jz      short locret_77D325
0x77D2E7: mov     edx, [esp+arg_0]
0x77D2EB: jmp     short loc_77D2F0
0x77D2ED: align 10h
0x77D2F0: cmp     eax, edx
0x77D2F2: jz      short loc_77D2FE
0x77D2F4: mov     eax, [eax+3Ch]
0x77D2F7: test    eax, eax
0x77D2F9: jnz     short loc_77D2F0
0x77D2FB: retn    4
0x77D2FE: mov     edx, [eax+3Ch]
0x77D301: test    edx, edx
0x77D303: push    esi
0x77D304: jz      short loc_77D30C
0x77D306: mov     esi, [eax+40h]
0x77D309: mov     [edx+40h], esi
0x77D30C: mov     edx, [eax+40h]
0x77D30F: test    edx, edx
0x77D311: jz      short loc_77D319
0x77D313: mov     esi, [eax+3Ch]
0x77D316: mov     [edx+3Ch], esi
0x77D319: cmp     eax, [ecx+2Ch]
0x77D31C: pop     esi
0x77D31D: jnz     short locret_77D325
0x77D31F: mov     eax, [eax+3Ch]
0x77D322: mov     [ecx+2Ch], eax
0x77D325: retn    4
