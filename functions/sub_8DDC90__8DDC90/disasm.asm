0x8DDC90: mov     edx, [ecx+60h]
0x8DDC93: push    esi
0x8DDC94: xor     eax, eax
0x8DDC96: test    edx, edx
0x8DDC98: push    edi
0x8DDC99: mov     edi, [esp+8+arg_0]
0x8DDC9D: jle     short loc_8DDCAE
0x8DDC9F: mov     esi, [ecx+5Ch]
0x8DDCA2: cmp     [esi], edi
0x8DDCA4: jz      short loc_8DDCB1
0x8DDCA6: inc     eax
0x8DDCA7: add     esi, 4
0x8DDCAA: cmp     eax, edx
0x8DDCAC: jl      short loc_8DDCA2
0x8DDCAE: or      eax, 0FFFFFFFFh
0x8DDCB1: mov     edx, [ecx+5Ch]
0x8DDCB4: mov     dword ptr [edx+eax*4], 0
0x8DDCBB: mov     dword ptr [edi+0Ch], 0
0x8DDCC2: pop     edi
0x8DDCC3: mov     al, 1
0x8DDCC5: pop     esi
0x8DDCC6: mov     [ecx+26h], al
0x8DDCC9: mov     [ecx+27h], al
0x8DDCCC: retn    4
