0x8BED90: push    esi
0x8BED91: mov     esi, [esp+4+arg_0]
0x8BED95: test    esi, esi
0x8BED97: push    edi
0x8BED98: mov     edi, ecx
0x8BED9A: jz      short loc_8BEDA8
0x8BED9C: cmp     word ptr [esi+4], 0
0x8BEDA1: jz      short loc_8BEDA8
0x8BEDA3: add     word ptr [esi+6], 1
0x8BEDA8: mov     ecx, [edi+0Ch]
0x8BEDAB: test    ecx, ecx
0x8BEDAD: jz      short loc_8BEDCC
0x8BEDAF: cmp     word ptr [ecx+4], 0
0x8BEDB4: jz      short loc_8BEDCC
0x8BEDB6: add     word ptr [ecx+6], 0FFFFh
0x8BEDBB: movzx   eax, word ptr [ecx+6]
0x8BEDBF: test    ax, ax
0x8BEDC2: jnz     short loc_8BEDCC
0x8BEDC4: mov     eax, [ecx]
0x8BEDC6: mov     edx, [eax]
0x8BEDC8: push    1
0x8BEDCA: call    edx
0x8BEDCC: mov     [edi+0Ch], esi
0x8BEDCF: pop     edi
0x8BEDD0: pop     esi
0x8BEDD1: retn    4
