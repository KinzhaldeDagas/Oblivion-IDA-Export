0x6ECA30: push    esi
0x6ECA31: push    edi
0x6ECA32: mov     edi, [esp+8+arg_0]
0x6ECA36: push    edi
0x6ECA37: mov     esi, ecx
0x6ECA39: call    sub_715820
0x6ECA3E: test    al, al
0x6ECA40: jnz     short loc_6ECA47
0x6ECA42: pop     edi
0x6ECA43: pop     esi
0x6ECA44: retn    4
0x6ECA47: mov     ecx, [esi+40h]
0x6ECA4A: mov     eax, [edi+40h]
0x6ECA4D: mov     edx, [ecx]
0x6ECA4F: push    eax
0x6ECA50: mov     eax, [edx+2Ch]
0x6ECA53: call    eax
0x6ECA55: test    al, al
0x6ECA57: pop     edi
0x6ECA58: setnz   al
0x6ECA5B: pop     esi
0x6ECA5C: retn    4
