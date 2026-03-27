0x45A290: mov     eax, [ecx+14h]
0x45A293: push    ebx
0x45A294: mov     bl, [eax]
0x45A296: push    esi
0x45A297: mov     esi, [esp+8+Dst]
0x45A29B: add     eax, 1
0x45A29E: test    bl, bl
0x45A2A0: push    edi
0x45A2A1: mov     [ecx+14h], eax
0x45A2A4: jz      short loc_45A2D6
0x45A2A6: test    esi, esi
0x45A2A8: jnz     short loc_45A2C6
0x45A2AA: movzx   eax, bl
0x45A2AD: lea     edi, [eax+1]
0x45A2B0: push    edi; Size
0x45A2B1: call    FormHeapAlloc
0x45A2B6: push    edi
0x45A2B7: mov     esi, eax
0x45A2B9: push    0
0x45A2BB: push    esi
0x45A2BC: call    __memset
0x45A2C1: add     esp, 10h
0x45A2C4: jmp     short loc_45A2D6
0x45A2C6: push    104h
0x45A2CB: push    0
0x45A2CD: push    esi
0x45A2CE: call    __memset
0x45A2D3: add     esp, 0Ch
0x45A2D6: mov     edi, ds:0B33B00h
0x45A2DC: mov     eax, [edi+14h]
0x45A2DF: movzx   ebx, bl
0x45A2E2: add     edi, 14h
0x45A2E5: push    ebx; Size
0x45A2E6: push    eax; Src
0x45A2E7: push    esi; Dst
0x45A2E8: call    _memcpy
0x45A2ED: add     [edi], ebx
0x45A2EF: add     esp, 0Ch
0x45A2F2: pop     edi
0x45A2F3: mov     eax, esi
0x45A2F5: pop     esi
0x45A2F6: pop     ebx
0x45A2F7: retn    4
