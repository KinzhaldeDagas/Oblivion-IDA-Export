0x8BEF00: push    edi
0x8BEF01: mov     edi, [ecx+4]
0x8BEF04: test    edi, edi
0x8BEF06: jz      short loc_8BEF45
0x8BEF08: push    esi
0x8BEF09: mov     esi, [esp+8+arg_0]
0x8BEF0D: test    esi, esi
0x8BEF0F: jz      short loc_8BEF1D
0x8BEF11: cmp     word ptr [esi+4], 0
0x8BEF16: jz      short loc_8BEF1D
0x8BEF18: add     word ptr [esi+6], 1
0x8BEF1D: mov     ecx, [edi+0Ch]
0x8BEF20: test    ecx, ecx
0x8BEF22: jz      short loc_8BEF41
0x8BEF24: cmp     word ptr [ecx+4], 0
0x8BEF29: jz      short loc_8BEF41
0x8BEF2B: add     word ptr [ecx+6], 0FFFFh
0x8BEF30: movzx   eax, word ptr [ecx+6]
0x8BEF34: test    ax, ax
0x8BEF37: jnz     short loc_8BEF41
0x8BEF39: mov     eax, [ecx]
0x8BEF3B: mov     edx, [eax]
0x8BEF3D: push    1
0x8BEF3F: call    edx
0x8BEF41: mov     [edi+0Ch], esi
0x8BEF44: pop     esi
0x8BEF45: pop     edi
0x8BEF46: retn    4
