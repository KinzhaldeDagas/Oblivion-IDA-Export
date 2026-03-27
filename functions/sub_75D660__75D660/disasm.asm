0x75D660: movzx   eax, word ptr [ecx+66h]
0x75D664: movzx   edx, word ptr [ecx+64h]
0x75D668: push    esi
0x75D669: movzx   esi, ax
0x75D66C: movzx   eax, ax
0x75D66F: add     edx, eax
0x75D671: cmp     eax, edx
0x75D673: jge     short loc_75D6B6
0x75D675: push    ebx
0x75D676: jmp     short loc_75D680
0x75D678: align 10h
0x75D680: mov     edx, [ecx+68h]
0x75D683: movzx   ebx, word ptr [edx+0B6h]
0x75D68A: cmp     ebx, eax
0x75D68C: jbe     short loc_75D6A1
0x75D68E: mov     edx, [edx+0B0h]
0x75D694: mov     eax, [edx+eax*4]
0x75D697: test    eax, eax
0x75D699: jz      short loc_75D6A1
0x75D69B: and     word ptr [eax+18h], 0FFFEh
0x75D6A1: movzx   edx, word ptr [ecx+66h]
0x75D6A5: movzx   ebx, word ptr [ecx+64h]
0x75D6A9: add     esi, 1
0x75D6AC: movzx   eax, si
0x75D6AF: add     edx, ebx
0x75D6B1: cmp     eax, edx
0x75D6B3: jl      short loc_75D680
0x75D6B5: pop     ebx
0x75D6B6: pop     esi
0x75D6B7: jmp     sub_7598C0
