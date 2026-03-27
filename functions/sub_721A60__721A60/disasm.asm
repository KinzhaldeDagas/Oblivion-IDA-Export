0x721A60: push    esi
0x721A61: push    edi
0x721A62: mov     edi, [esp+8+arg_0]
0x721A66: push    edi
0x721A67: mov     esi, ecx
0x721A69: call    sub_70AD70
0x721A6E: test    al, al
0x721A70: jnz     short loc_721A77
0x721A72: pop     edi
0x721A73: pop     esi
0x721A74: retn    4
0x721A77: mov     al, [edi+0DCh]
0x721A7D: xor     al, [esi+0DCh]
0x721A83: pop     edi
0x721A84: test    al, 7
0x721A86: setz    al
0x721A89: pop     esi
0x721A8A: retn    4
