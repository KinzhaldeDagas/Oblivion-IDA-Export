0x940B80: movzx   edx, byte ptr [ecx+0Ch]
0x940B84: push    esi
0x940B85: lea     esi, [edx-1]; switch 28 cases
0x940B88: or      eax, 0FFFFFFFFh
0x940B8B: cmp     esi, 1Bh
0x940B8E: ja      short def_940B97; jumptable 00940B97 default case, case 23
0x940B90: movzx   esi, ds:byte_940C28[esi]
0x940B97: jmp     ds:jpt_940B97[esi*4]; switch jump
0x940B9E: mov     cx, [ecx+0Eh]; jumptable 00940B97 cases 1-18,20-22,26-28
0x940BA2: test    cx, cx
0x940BA5: movsx   ecx, cx
0x940BA8: jnz     short loc_940BAF
0x940BAA: mov     ecx, 1
0x940BAF: lea     eax, [edx+edx*2]
0x940BB2: movsx   eax, word ptr ds:0AA1ED0h[eax*4]
0x940BBA: imul    eax, ecx
0x940BBD: pop     esi
0x940BBE: retn
0x940BBF: movzx   eax, byte ptr [ecx+0Dh]; jumptable 00940B97 case 19
0x940BC3: lea     ecx, [eax+eax*2]
0x940BC6: movsx   eax, word ptr ds:0AA1ED0h[ecx*4]
0x940BCE: pop     esi
0x940BCF: retn
0x940BD0: mov     ax, [ecx+0Eh]; jumptable 00940B97 case 24
0x940BD4: test    ax, ax
0x940BD7: movsx   edx, ax
0x940BDA: jnz     short loc_940BE1
0x940BDC: mov     edx, 1
0x940BE1: movzx   eax, word ptr [ecx+10h]
0x940BE5: imul    eax, edx
0x940BE8: cdq
0x940BE9: and     edx, 7
0x940BEC: add     eax, edx
0x940BEE: sar     eax, 3
0x940BF1: pop     esi
0x940BF2: retn
0x940BF3: mov     ax, [ecx+0Eh]; jumptable 00940B97 case 25
0x940BF7: test    ax, ax
0x940BFA: movsx   esi, ax
0x940BFD: jnz     short loc_940C04
0x940BFF: mov     esi, 1
0x940C04: mov     ecx, [ecx+4]
0x940C07: call    sub_953130
0x940C0C: imul    eax, esi
0x940C0F: pop     esi; jumptable 00940B97 default case, case 23
0x940C10: retn
