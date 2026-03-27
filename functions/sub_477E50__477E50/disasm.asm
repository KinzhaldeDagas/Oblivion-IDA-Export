0x477E50: push    esi
0x477E51: mov     esi, ecx
0x477E53: call    sub_476380
0x477E58: test    al, al
0x477E5A: jz      short loc_477E80
0x477E5C: mov     eax, [esi+0CCh]
0x477E62: mov     ecx, [esp+4+arg_0]
0x477E66: mov     [eax+28h], ecx
0x477E69: mov     edx, [esi+0CCh]
0x477E6F: mov     eax, [edx+10h]
0x477E72: push    eax
0x477E73: push    0Bh
0x477E75: call    HighPRocess_DoAction?????
0x477E7A: mov     al, 1
0x477E7C: pop     esi
0x477E7D: retn    4
0x477E80: xor     al, al
0x477E82: pop     esi
0x477E83: retn    4
