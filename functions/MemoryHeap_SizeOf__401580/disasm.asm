0x401580: cmp     byte ptr [ecx+16Ch], 0
0x401587: mov     eax, [esp+Memory]
0x40158B: push    esi
0x40158C: jnz     short loc_4015BD
0x40158E: mov     edx, eax
0x401590: shr     edx, 18h
0x401593: mov     edx, g_HeapPoolByAddress[edx*4]
0x40159A: test    edx, edx
0x40159C: jz      short loc_4015BD
0x40159E: mov     esi, [edx+40h]
0x4015A1: cmp     eax, esi
0x4015A3: jb      short loc_4015BD
0x4015A5: push    edi
0x4015A6: mov     edi, [edx+110h]
0x4015AC: add     edi, esi
0x4015AE: cmp     eax, edi
0x4015B0: pop     edi
0x4015B1: jnb     short loc_4015BD
0x4015B3: mov     eax, [edx+100h]
0x4015B9: pop     esi
0x4015BA: retn    4
0x4015BD: mov     edx, [ecx+18h]
0x4015C0: cmp     eax, edx
0x4015C2: jb      short loc_4015D9
0x4015C4: mov     ecx, [ecx+0Ch]
0x4015C7: add     ecx, edx
0x4015C9: cmp     eax, ecx
0x4015CB: jnb     short loc_4015D9
0x4015CD: mov     eax, [eax-4]
0x4015D0: and     eax, 0FFFFFFFh
0x4015D5: pop     esi
0x4015D6: retn    4
0x4015D9: push    eax; Memory
0x4015DA: call    __msize
0x4015DF: add     esp, 4
0x4015E2: pop     esi
0x4015E3: retn    4
