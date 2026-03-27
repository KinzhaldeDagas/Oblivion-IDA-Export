0x5E8B10: push    ebx
0x5E8B11: push    esi
0x5E8B12: mov     esi, ecx
0x5E8B14: mov     eax, [esi]
0x5E8B16: mov     edx, [eax+334h]
0x5E8B1C: push    1
0x5E8B1E: xor     bl, bl
0x5E8B20: call    edx
0x5E8B22: test    al, al
0x5E8B24: jz      short loc_5E8B74
0x5E8B26: mov     eax, [esi]
0x5E8B28: mov     edx, [eax+330h]
0x5E8B2E: mov     ecx, esi
0x5E8B30: call    edx
0x5E8B32: test    eax, eax
0x5E8B34: jz      short loc_5E8B74
0x5E8B36: mov     eax, [esi]
0x5E8B38: mov     edx, [eax+330h]
0x5E8B3E: mov     ecx, esi
0x5E8B40: call    edx
0x5E8B42: mov     esi, [eax+40h]
0x5E8B45: test    esi, esi
0x5E8B47: jz      short loc_5E8B74
0x5E8B49: lea     esp, [esp+0]
0x5E8B50: mov     eax, [esi]
0x5E8B52: test    eax, eax
0x5E8B54: jz      short loc_5E8B74
0x5E8B56: test    bl, bl
0x5E8B58: jnz     short loc_5E8B74
0x5E8B5A: mov     eax, [eax]
0x5E8B5C: test    eax, eax
0x5E8B5E: jz      short loc_5E8B6D
0x5E8B60: mov     ecx, eax; this
0x5E8B62: call    sub_5E6C60
0x5E8B67: test    al, al
0x5E8B69: jz      short loc_5E8B6D
0x5E8B6B: mov     bl, 1
0x5E8B6D: mov     esi, [esi+4]
0x5E8B70: test    esi, esi
0x5E8B72: jnz     short loc_5E8B50
0x5E8B74: pop     esi
0x5E8B75: mov     al, bl
0x5E8B77: pop     ebx
0x5E8B78: retn
