0x73B5A0: push    esi
0x73B5A1: push    edi
0x73B5A2: mov     edi, [esp+8+arg_0]
0x73B5A6: push    edi
0x73B5A7: mov     esi, ecx
0x73B5A9: call    sub_719E80
0x73B5AE: test    al, al
0x73B5B0: jz      short loc_73B5CD
0x73B5B2: mov     ax, [esi+50h]
0x73B5B6: cmp     ax, [edi+50h]
0x73B5BA: jnz     short loc_73B5CD
0x73B5BC: mov     cx, [esi+52h]
0x73B5C0: cmp     cx, [edi+52h]
0x73B5C4: jnz     short loc_73B5CD
0x73B5C6: pop     edi
0x73B5C7: mov     al, 1
0x73B5C9: pop     esi
0x73B5CA: retn    4
0x73B5CD: pop     edi
0x73B5CE: xor     al, al
0x73B5D0: pop     esi
0x73B5D1: retn    4
