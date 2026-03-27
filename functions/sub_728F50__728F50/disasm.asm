0x728F50: push    esi
0x728F51: push    edi
0x728F52: mov     edi, [esp+8+a2]
0x728F56: push    edi; a2
0x728F57: mov     esi, ecx
0x728F59: call    sub_700650
0x728F5E: test    al, al
0x728F60: jnz     short loc_728F69
0x728F62: pop     edi
0x728F63: xor     al, al
0x728F65: pop     esi
0x728F66: retn    4
0x728F69: mov     ecx, [esi+34h]
0x728F6C: test    ecx, ecx
0x728F6E: jz      short loc_728F7C
0x728F70: mov     eax, [ecx]
0x728F72: mov     edx, [eax+24h]
0x728F75: push    edi
0x728F76: call    edx
0x728F78: test    al, al
0x728F7A: jz      short loc_728F62
0x728F7C: pop     edi
0x728F7D: mov     al, 1
0x728F7F: pop     esi
0x728F80: retn    4
