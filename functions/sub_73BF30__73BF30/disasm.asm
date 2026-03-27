0x73BF30: push    esi
0x73BF31: push    edi
0x73BF32: mov     edi, [esp+8+arg_0]
0x73BF36: push    edi
0x73BF37: mov     esi, ecx
0x73BF39: call    sub_708B40
0x73BF3E: test    al, al
0x73BF40: jnz     short loc_73BF47
0x73BF42: pop     edi
0x73BF43: pop     esi
0x73BF44: retn    4
0x73BF47: mov     ecx, [esi+13Ch]
0x73BF4D: test    ecx, ecx
0x73BF4F: jz      short loc_73BF59
0x73BF51: mov     eax, [ecx]
0x73BF53: mov     edx, [eax+24h]
0x73BF56: push    edi
0x73BF57: call    edx
0x73BF59: pop     edi
0x73BF5A: mov     al, 1
0x73BF5C: pop     esi
0x73BF5D: retn    4
