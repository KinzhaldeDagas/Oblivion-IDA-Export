0x483B60: mov     eax, [esp+arg_4]
0x483B64: push    ebx
0x483B65: push    esi
0x483B66: mov     esi, ecx
0x483B68: mov     ecx, [esp+8+arg_0]
0x483B6C: push    eax
0x483B6D: push    ecx
0x483B6E: mov     ecx, esi
0x483B70: xor     bl, bl
0x483B72: call    sub_482050
0x483B77: test    al, al
0x483B79: jz      short loc_483B89
0x483B7B: mov     ecx, esi
0x483B7D: call    sub_483750
0x483B82: pop     esi
0x483B83: mov     al, 1
0x483B85: pop     ebx
0x483B86: retn    8
0x483B89: pop     esi
0x483B8A: mov     al, bl
0x483B8C: pop     ebx
0x483B8D: retn    8
