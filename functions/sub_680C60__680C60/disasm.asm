0x680C60: push    esi
0x680C61: push    edi
0x680C62: mov     edi, [esp+8+arg_0]
0x680C66: test    edi, edi
0x680C68: mov     esi, ecx
0x680C6A: jz      short loc_680C7E
0x680C6C: lea     eax, [esp+8+arg_0]
0x680C70: push    eax
0x680C71: call    sub_776690
0x680C76: push    edi
0x680C77: mov     ecx, esi
0x680C79: call    sub_680BB0
0x680C7E: pop     edi
0x680C7F: pop     esi
0x680C80: retn    4
