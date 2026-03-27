0x8DCA40: push    esi
0x8DCA41: mov     esi, [esp+4+arg_0]
0x8DCA45: push    edi
0x8DCA46: mov     edi, [esi+0F8h]
0x8DCA4C: dec     edi
0x8DCA4D: js      short loc_8DCA66
0x8DCA4F: nop
0x8DCA50: mov     eax, [esi+0F4h]
0x8DCA56: mov     ecx, [eax+edi*4]
0x8DCA59: test    ecx, ecx
0x8DCA5B: jz      short loc_8DCA63
0x8DCA5D: mov     edx, [ecx]
0x8DCA5F: push    esi
0x8DCA60: call    dword ptr [edx+4]
0x8DCA63: dec     edi
0x8DCA64: jns     short loc_8DCA50
0x8DCA66: mov     edx, [esi+0F8h]
0x8DCA6C: dec     edx
0x8DCA6D: js      short loc_8DCAAE
0x8DCA6F: nop
0x8DCA70: mov     eax, [esi+0F4h]
0x8DCA76: cmp     dword ptr [eax+edx*4], 0
0x8DCA7A: jnz     short loc_8DCAAB
0x8DCA7C: mov     eax, [esi+0F8h]
0x8DCA82: dec     eax
0x8DCA83: mov     ecx, eax
0x8DCA85: cmp     edx, ecx
0x8DCA87: mov     [esi+0F8h], eax
0x8DCA8D: mov     eax, edx
0x8DCA8F: jge     short loc_8DCAAB
0x8DCA91: mov     ecx, [esi+0F4h]
0x8DCA97: mov     edi, [ecx+eax*4+4]
0x8DCA9B: lea     ecx, [ecx+eax*4]
0x8DCA9E: mov     [ecx], edi
0x8DCAA0: mov     ecx, [esi+0F8h]
0x8DCAA6: inc     eax
0x8DCAA7: cmp     eax, ecx
0x8DCAA9: jl      short loc_8DCA91
0x8DCAAB: dec     edx
0x8DCAAC: jns     short loc_8DCA70
0x8DCAAE: pop     edi
0x8DCAAF: pop     esi
0x8DCAB0: retn
