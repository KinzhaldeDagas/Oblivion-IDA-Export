0x8A07B0: push    esi
0x8A07B1: mov     esi, [esp+4+arg_0]
0x8A07B5: push    esi
0x8A07B6: call    sub_8A0200
0x8A07BB: cmp     word ptr [esi+4], 0
0x8A07C0: jz      short loc_8A07DA
0x8A07C2: add     word ptr [esi+6], 0FFFFh
0x8A07C7: movzx   eax, word ptr [esi+6]
0x8A07CB: test    ax, ax
0x8A07CE: jnz     short loc_8A07DA
0x8A07D0: mov     eax, [esi]
0x8A07D2: mov     edx, [eax]
0x8A07D4: push    1
0x8A07D6: mov     ecx, esi
0x8A07D8: call    edx
0x8A07DA: pop     esi
0x8A07DB: retn    8
