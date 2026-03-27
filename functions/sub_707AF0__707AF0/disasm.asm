0x707AF0: push    ebx
0x707AF1: mov     ebx, [esp+4+arg_0]
0x707AF5: push    edi
0x707AF6: push    ebx
0x707AF7: mov     edi, ecx
0x707AF9: call    sub_7000F0
0x707AFE: test    al, al
0x707B00: jnz     short loc_707B07
0x707B02: pop     edi
0x707B03: pop     ebx
0x707B04: retn    4
0x707B07: push    esi
0x707B08: mov     esi, [edi+9Ch]
0x707B0E: test    esi, esi
0x707B10: jz      short loc_707B2A
0x707B12: mov     ecx, [esi+8]
0x707B15: test    ecx, ecx
0x707B17: lea     eax, [esi+8]
0x707B1A: mov     esi, [esi]
0x707B1C: jz      short loc_707B26
0x707B1E: mov     eax, [ecx]
0x707B20: mov     edx, [eax+24h]
0x707B23: push    ebx
0x707B24: call    edx
0x707B26: test    esi, esi
0x707B28: jnz     short loc_707B12
0x707B2A: mov     ecx, [edi+0A8h]
0x707B30: test    ecx, ecx
0x707B32: pop     esi
0x707B33: jz      short loc_707B3D
0x707B35: mov     eax, [ecx]
0x707B37: mov     edx, [eax+24h]
0x707B3A: push    ebx
0x707B3B: call    edx
0x707B3D: pop     edi
0x707B3E: mov     al, 1
0x707B40: pop     ebx
0x707B41: retn    4
