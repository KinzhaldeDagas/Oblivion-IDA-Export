0x52BC50: push    edi
0x52BC51: mov     edi, [esp+4+arg_0]
0x52BC55: cmp     edi, 8
0x52BC58: ja      loc_52BCEE
0x52BC5E: cmp     edi, 1
0x52BC61: push    esi
0x52BC62: jnz     short loc_52BC9F
0x52BC64: movzx   eax, word ptr [ecx+100h]
0x52BC6B: cmp     ax, 0FFFFh
0x52BC6F: jnz     short loc_52BC8D
0x52BC71: mov     eax, [ecx+0FCh]
0x52BC77: lea     esi, [eax+1]
0x52BC7A: lea     ebx, [ebx+0]
0x52BC80: mov     dl, [eax]
0x52BC82: add     eax, 1
0x52BC85: test    dl, dl
0x52BC87: jnz     short loc_52BC80
0x52BC89: sub     eax, esi
0x52BC8B: jmp     short loc_52BC90
0x52BC8D: movzx   eax, ax
0x52BC90: test    eax, eax
0x52BC92: jnz     short loc_52BCDF
0x52BC94: pop     esi
0x52BC95: lea     eax, [ecx+110h]
0x52BC9B: pop     edi
0x52BC9C: retn    4
0x52BC9F: cmp     edi, 2
0x52BCA2: jnz     short loc_52BCDF
0x52BCA4: movzx   eax, word ptr [ecx+118h]
0x52BCAB: cmp     ax, 0FFFFh
0x52BCAF: jnz     short loc_52BCCD
0x52BCB1: mov     eax, [ecx+114h]
0x52BCB7: lea     esi, [eax+1]
0x52BCBA: lea     ebx, [ebx+0]
0x52BCC0: mov     dl, [eax]
0x52BCC2: add     eax, 1
0x52BCC5: test    dl, dl
0x52BCC7: jnz     short loc_52BCC0
0x52BCC9: sub     eax, esi
0x52BCCB: jmp     short loc_52BCD0
0x52BCCD: movzx   eax, ax
0x52BCD0: test    eax, eax
0x52BCD2: jnz     short loc_52BCDF
0x52BCD4: pop     esi
0x52BCD5: lea     eax, [ecx+0F8h]
0x52BCDB: pop     edi
0x52BCDC: retn    4
0x52BCDF: lea     eax, [edi+edi*2]
0x52BCE2: pop     esi
0x52BCE3: lea     eax, [ecx+eax*8+0E0h]
0x52BCEA: pop     edi
0x52BCEB: retn    4
0x52BCEE: xor     eax, eax
0x52BCF0: pop     edi
0x52BCF1: retn    4
