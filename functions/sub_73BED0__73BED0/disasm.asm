0x73BED0: push    ebx
0x73BED1: push    esi
0x73BED2: mov     esi, [esp+8+arg_0]
0x73BED6: push    edi
0x73BED7: push    esi
0x73BED8: mov     edi, ecx
0x73BEDA: call    sub_708F90
0x73BEDF: mov     ecx, esi
0x73BEE1: call    sub_7124A0
0x73BEE6: mov     esi, [edi+13Ch]
0x73BEEC: mov     ebx, eax
0x73BEEE: cmp     esi, ebx
0x73BEF0: jz      short loc_73BF26
0x73BEF2: test    esi, esi
0x73BEF4: jz      short loc_73BF12
0x73BEF6: lea     eax, [esi+4]
0x73BEF9: push    eax; lpAddend
0x73BEFA: call    dword ptr ds:0A2807Ch
0x73BF00: test    eax, eax
0x73BF02: jnz     short loc_73BF12
0x73BF04: test    esi, esi
0x73BF06: jz      short loc_73BF12
0x73BF08: mov     edx, [esi]
0x73BF0A: mov     eax, [edx]
0x73BF0C: push    1
0x73BF0E: mov     ecx, esi
0x73BF10: call    eax
0x73BF12: test    ebx, ebx
0x73BF14: mov     [edi+13Ch], ebx
0x73BF1A: jz      short loc_73BF26
0x73BF1C: add     ebx, 4
0x73BF1F: push    ebx; lpAddend
0x73BF20: call    dword ptr ds:0A28078h
0x73BF26: pop     edi
0x73BF27: pop     esi
0x73BF28: pop     ebx
0x73BF29: retn    4
