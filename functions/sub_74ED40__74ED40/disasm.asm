0x74ED40: movzx   edx, word ptr [ecx+64h]
0x74ED44: test    dx, dx
0x74ED47: jnz     short loc_74ED61
0x74ED49: movzx   eax, word ptr [ecx+48h]
0x74ED4D: cmp     ax, [ecx+8]
0x74ED51: mov     [ecx+66h], ax
0x74ED55: jnb     short loc_74ED86
0x74ED57: movzx   eax, ax
0x74ED5A: mov     word ptr [ecx+64h], 1
0x74ED60: retn
0x74ED61: movzx   eax, word ptr [ecx+66h]
0x74ED65: push    esi
0x74ED66: push    edi
0x74ED67: movzx   edi, dx
0x74ED6A: movzx   esi, ax
0x74ED6D: add     esi, edi
0x74ED6F: movzx   edi, word ptr [ecx+8]
0x74ED73: cmp     esi, edi
0x74ED75: pop     edi
0x74ED76: pop     esi
0x74ED77: jge     short loc_74ED86
0x74ED79: add     eax, edx
0x74ED7B: add     edx, 1
0x74ED7E: movzx   eax, ax
0x74ED81: mov     [ecx+64h], dx
0x74ED85: retn
0x74ED86: mov     ax, ds:0A877E8h
0x74ED8C: retn
