0x718BF0: push    esi
0x718BF1: push    edi
0x718BF2: mov     edi, [esp+8+arg_0]
0x718BF6: push    edi
0x718BF7: mov     esi, ecx
0x718BF9: call    sub_6D7E00
0x718BFE: test    al, al
0x718C00: jz      short loc_718C23
0x718C02: mov     ax, [edi+18h]
0x718C06: cmp     ax, [esi+18h]
0x718C0A: jnz     short loc_718C23
0x718C0C: mov     ecx, [edi+1Ch]
0x718C0F: cmp     ecx, [esi+1Ch]
0x718C12: jnz     short loc_718C23
0x718C14: mov     edx, [edi+20h]
0x718C17: cmp     edx, [esi+20h]
0x718C1A: jnz     short loc_718C23
0x718C1C: pop     edi
0x718C1D: mov     al, 1
0x718C1F: pop     esi
0x718C20: retn    4
0x718C23: pop     edi
0x718C24: xor     al, al
0x718C26: pop     esi
0x718C27: retn    4
