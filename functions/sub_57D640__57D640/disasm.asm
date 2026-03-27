0x57D640: push    esi
0x57D641: push    edi; ArgList
0x57D642: mov     edi, [esp+8+arg_0]
0x57D646: cmp     edi, 3
0x57D649: jnz     short loc_57D6AB
0x57D64B: mov     edi, [ecx+0E0h]
0x57D651: mov     dword ptr [ecx+0E0h], 3
0x57D65B: mov     esi, 1
0x57D660: lea     eax, [ecx+0E4h]
0x57D666: mov     edx, [eax]
0x57D668: test    edx, edx
0x57D66A: mov     [eax], edi
0x57D66C: mov     edi, edx
0x57D66E: jz      short loc_57D67B
0x57D670: add     esi, 1
0x57D673: add     eax, 4
0x57D676: cmp     esi, 9
0x57D679: jl      short loc_57D666
0x57D67B: cmp     esi, 9
0x57D67E: jnz     short loc_57D694
0x57D680: push    offset aMenuStackSizeI; "### Menu Stack Size is too small - a me"...
0x57D685: call    PrintError
0x57D68A: add     esp, 4
0x57D68D: pop     edi
0x57D68E: mov     eax, esi
0x57D690: pop     esi
0x57D691: retn    4
0x57D694: cmp     esi, 1
0x57D697: jnz     short loc_57D6A4
0x57D699: mov     byte ptr [ecx+8], 3
0x57D69D: mov     byte ptr ds:0B42D54h, 1
0x57D6A4: pop     edi
0x57D6A5: mov     eax, esi
0x57D6A7: pop     esi
0x57D6A8: retn    4
0x57D6AB: lea     esi, [ecx+0E0h]
0x57D6B1: xor     eax, eax
0x57D6B3: mov     edx, esi
0x57D6B5: cmp     dword ptr [edx], 0
0x57D6B8: jz      short loc_57D6CD
0x57D6BA: add     eax, 1
0x57D6BD: add     edx, 4
0x57D6C0: cmp     eax, 0Ah
0x57D6C3: jl      short loc_57D6B5
0x57D6C5: pop     edi
0x57D6C6: or      eax, 0FFFFFFFFh
0x57D6C9: pop     esi
0x57D6CA: retn    4
0x57D6CD: cmp     eax, 0Ah
0x57D6D0: jl      short loc_57D6DA
0x57D6D2: pop     edi
0x57D6D3: or      eax, 0FFFFFFFFh
0x57D6D6: pop     esi
0x57D6D7: retn    4
0x57D6DA: test    eax, eax
0x57D6DC: mov     [ecx+eax*4+0E0h], edi
0x57D6E3: jnz     short loc_57D705
0x57D6E5: cmp     edi, 3F3h
0x57D6EB: mov     byte ptr [ecx+8], 3
0x57D6EF: jz      short loc_57D723
0x57D6F1: cmp     edi, 3E9h
0x57D6F7: jz      short loc_57D723
0x57D6F9: pop     edi
0x57D6FA: mov     byte ptr ds:0B42D54h, 1
0x57D701: pop     esi
0x57D702: retn    4
0x57D705: cmp     eax, 1
0x57D708: jnz     short loc_57D723
0x57D70A: mov     ecx, [esi]
0x57D70C: cmp     ecx, 3F3h
0x57D712: jz      short loc_57D71C
0x57D714: cmp     ecx, 3E9h
0x57D71A: jnz     short loc_57D723
0x57D71C: mov     byte ptr ds:0B42D54h, 1
0x57D723: pop     edi
0x57D724: pop     esi
0x57D725: retn    4
