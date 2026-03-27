0x52BE80: mov     eax, [esp+arg_4]
0x52BE84: cmp     eax, 0Fh
0x52BE87: jz      loc_52BF0D
0x52BE8D: push    esi
0x52BE8E: lea     esi, [eax-2]
0x52BE91: cmp     esi, 4
0x52BE94: jbe     short loc_52BE99
0x52BE96: or      esi, 0FFFFFFFFh
0x52BE99: push    edi
0x52BE9A: mov     edi, [esp+8+arg_0]
0x52BE9E: cmp     edi, 1
0x52BEA1: ja      short loc_52BF06
0x52BEA3: cmp     esi, 4
0x52BEA6: ja      short loc_52BF06
0x52BEA8: lea     eax, [esi+edi*4]
0x52BEAB: add     eax, edi
0x52BEAD: lea     eax, [eax+eax*2]
0x52BEB0: push    ebx
0x52BEB1: lea     ebx, ds:0B36380h[eax*8]
0x52BEB8: mov     ecx, ebx
0x52BEBA: call    sub_449190
0x52BEBF: test    eax, eax
0x52BEC1: jz      short loc_52BECB
0x52BEC3: mov     eax, ebx
0x52BEC5: pop     ebx
0x52BEC6: pop     edi
0x52BEC7: pop     esi
0x52BEC8: retn    8
0x52BECB: sub     edi, 0
0x52BECE: jz      short loc_52BEE1
0x52BED0: sub     edi, 1
0x52BED3: jnz     short loc_52BEFE
0x52BED5: lea     eax, [esi+esi*2]
0x52BED8: lea     esi, ds:0B36380h[eax*8]
0x52BEDF: jmp     short loc_52BEEB
0x52BEE1: lea     eax, [esi+esi*2]
0x52BEE4: lea     esi, ds:0B363F8h[eax*8]
0x52BEEB: mov     ecx, esi
0x52BEED: call    sub_449190
0x52BEF2: test    eax, eax
0x52BEF4: jz      short loc_52BEFE
0x52BEF6: pop     ebx
0x52BEF7: pop     edi
0x52BEF8: mov     eax, esi
0x52BEFA: pop     esi
0x52BEFB: retn    8
0x52BEFE: pop     ebx
0x52BEFF: pop     edi
0x52BF00: xor     eax, eax
0x52BF02: pop     esi
0x52BF03: retn    8
0x52BF06: pop     edi
0x52BF07: xor     eax, eax
0x52BF09: pop     esi
0x52BF0A: retn    8
0x52BF0D: mov     eax, [esp+arg_0]
0x52BF11: push    eax
0x52BF12: call    sub_52BDB0
0x52BF17: retn    8
