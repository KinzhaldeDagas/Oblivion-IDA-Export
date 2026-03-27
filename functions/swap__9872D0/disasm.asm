0x9872D0: cmp     eax, ecx
0x9872D2: push    esi
0x9872D3: mov     esi, edx
0x9872D5: jz      short loc_9872F6
0x9872D7: test    esi, esi
0x9872D9: jz      short loc_9872F6
0x9872DB: push    ebx
0x9872DC: lea     esp, [esp+0]
0x9872E0: mov     bl, [ecx]
0x9872E2: mov     dl, [eax]
0x9872E4: mov     [eax], bl
0x9872E6: sub     esi, 1
0x9872E9: mov     [ecx], dl
0x9872EB: add     eax, 1
0x9872EE: add     ecx, 1
0x9872F1: test    esi, esi
0x9872F3: jnz     short loc_9872E0
0x9872F5: pop     ebx
0x9872F6: pop     esi
0x9872F7: retn
