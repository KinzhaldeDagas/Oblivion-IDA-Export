0x52BDB0: mov     eax, [esp+arg_0]
0x52BDB4: test    eax, eax
0x52BDB6: jz      short loc_52BDC2
0x52BDB8: cmp     eax, 1
0x52BDBB: jz      short loc_52BDC2
0x52BDBD: xor     eax, eax
0x52BDBF: retn    4
0x52BDC2: lea     eax, [eax+eax*2]
0x52BDC5: push    esi
0x52BDC6: lea     esi, [ecx+eax*8]
0x52BDC9: movzx   eax, word ptr [esi+0B8h]
0x52BDD0: cmp     ax, 0FFFFh
0x52BDD4: jnz     short loc_52BDEE
0x52BDD6: mov     eax, [esi+0B4h]
0x52BDDC: push    edi
0x52BDDD: lea     edi, [eax+1]
0x52BDE0: mov     dl, [eax]
0x52BDE2: add     eax, 1
0x52BDE5: test    dl, dl
0x52BDE7: jnz     short loc_52BDE0
0x52BDE9: sub     eax, edi
0x52BDEB: pop     edi
0x52BDEC: jmp     short loc_52BDF1
0x52BDEE: movzx   eax, ax
0x52BDF1: test    eax, eax
0x52BDF3: jz      short loc_52BDFF
0x52BDF5: lea     eax, [esi+0B0h]
0x52BDFB: pop     esi
0x52BDFC: retn    4
0x52BDFF: movzx   eax, word ptr [ecx+0B8h]
0x52BE06: cmp     ax, 0FFFFh
0x52BE0A: jnz     short loc_52BE22
0x52BE0C: mov     eax, [ecx+0B4h]
0x52BE12: lea     esi, [eax+1]
0x52BE15: mov     dl, [eax]
0x52BE17: add     eax, 1
0x52BE1A: test    dl, dl
0x52BE1C: jnz     short loc_52BE15
0x52BE1E: sub     eax, esi
0x52BE20: jmp     short loc_52BE25
0x52BE22: movzx   eax, ax
0x52BE25: test    eax, eax
0x52BE27: jz      short loc_52BE33
0x52BE29: lea     eax, [ecx+0B0h]
0x52BE2F: pop     esi
0x52BE30: retn    4
0x52BE33: movzx   eax, word ptr [ecx+0D0h]
0x52BE3A: cmp     ax, 0FFFFh
0x52BE3E: jnz     short loc_52BE5D
0x52BE40: mov     eax, [ecx+0CCh]
0x52BE46: lea     esi, [eax+1]
0x52BE49: lea     esp, [esp+0]
0x52BE50: mov     dl, [eax]
0x52BE52: add     eax, 1
0x52BE55: test    dl, dl
0x52BE57: jnz     short loc_52BE50
0x52BE59: sub     eax, esi
0x52BE5B: jmp     short loc_52BE60
0x52BE5D: movzx   eax, ax
0x52BE60: test    eax, eax
0x52BE62: jz      short loc_52BE6E
0x52BE64: lea     eax, [ecx+0C8h]
0x52BE6A: pop     esi
0x52BE6B: retn    4
0x52BE6E: xor     eax, eax
0x52BE70: pop     esi
0x52BE71: retn    4
