0x91C5B0: mov     edx, [ecx+14h]
0x91C5B3: add     ecx, 0FFFFFFE0h
0x91C5B6: xor     eax, eax
0x91C5B8: test    edx, edx
0x91C5BA: jle     short locret_91C5D7
0x91C5BC: push    esi
0x91C5BD: mov     esi, [ecx+30h]
0x91C5C0: push    edi
0x91C5C1: mov     edi, [esp+8+arg_0]
0x91C5C5: push    ebx
0x91C5C6: mov     ebx, [esi]
0x91C5C8: cmp     [ebx], edi
0x91C5CA: jz      short loc_91C5DA
0x91C5CC: inc     eax
0x91C5CD: add     esi, 4
0x91C5D0: cmp     eax, edx
0x91C5D2: jl      short loc_91C5C6
0x91C5D4: pop     ebx
0x91C5D5: pop     edi
0x91C5D6: pop     esi
0x91C5D7: retn    4
0x91C5DA: test    eax, eax
0x91C5DC: jl      short loc_91C5D4
0x91C5DE: pop     ebx
0x91C5DF: pop     edi
0x91C5E0: pop     esi
0x91C5E1: mov     [esp+arg_0], eax
0x91C5E5: jmp     sub_91C470
