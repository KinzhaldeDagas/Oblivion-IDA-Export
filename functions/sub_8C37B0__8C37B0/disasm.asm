0x8C37B0: push    esi
0x8C37B1: push    edi
0x8C37B2: mov     edi, [esp+8+arg_0]
0x8C37B6: mov     esi, ecx
0x8C37B8: mov     ecx, [edi+8]
0x8C37BB: test    ecx, ecx
0x8C37BD: jz      short loc_8C37DC
0x8C37BF: cmp     word ptr [ecx+4], 0
0x8C37C4: jz      short loc_8C37DC
0x8C37C6: add     word ptr [ecx+6], 0FFFFh
0x8C37CB: movzx   eax, word ptr [ecx+6]
0x8C37CF: test    ax, ax
0x8C37D2: jnz     short loc_8C37DC
0x8C37D4: mov     eax, [ecx]
0x8C37D6: mov     edx, [eax]
0x8C37D8: push    1
0x8C37DA: call    edx
0x8C37DC: push    edi
0x8C37DD: mov     ecx, esi
0x8C37DF: call    sub_89D720
0x8C37E4: pop     edi
0x8C37E5: pop     esi
0x8C37E6: retn    4
