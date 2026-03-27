0x75AA20: push    esi
0x75AA21: push    edi
0x75AA22: mov     edi, [esp+8+arg_0]
0x75AA26: push    edi
0x75AA27: mov     esi, ecx
0x75AA29: call    sub_752CD0
0x75AA2E: test    al, al
0x75AA30: jnz     short loc_75AA37
0x75AA32: pop     edi
0x75AA33: pop     esi
0x75AA34: retn    4
0x75AA37: mov     ax, [edi+18h]
0x75AA3B: cmp     ax, [esi+18h]
0x75AA3F: pop     edi
0x75AA40: setz    al
0x75AA43: pop     esi
0x75AA44: retn    4
