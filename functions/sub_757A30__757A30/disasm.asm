0x757A30: push    esi
0x757A31: push    edi
0x757A32: mov     edi, [esp+8+arg_0]
0x757A36: push    edi
0x757A37: mov     esi, ecx
0x757A39: call    sub_75E600
0x757A3E: test    al, al
0x757A40: jz      short loc_757A7E
0x757A42: mov     eax, [esi+40h]
0x757A45: lea     ecx, [esp+8+arg_0]
0x757A49: push    ecx
0x757A4A: push    eax
0x757A4B: lea     ecx, [edi+0D4h]
0x757A51: call    NiTMap_GetAt
0x757A56: test    al, al
0x757A58: jz      short loc_757A7E
0x757A5A: mov     ecx, [esp+8+arg_0]
0x757A5E: test    ecx, ecx
0x757A60: jz      short loc_757A7E
0x757A62: mov     edx, [ecx]
0x757A64: mov     eax, [edx+4]
0x757A67: call    eax
0x757A69: test    eax, eax
0x757A6B: jz      short loc_757A7E
0x757A6D: lea     ecx, [ecx+0]
0x757A70: cmp     eax, offset dword_B41E68
0x757A75: jz      short loc_757A85
0x757A77: mov     eax, [eax+4]
0x757A7A: test    eax, eax
0x757A7C: jnz     short loc_757A70
0x757A7E: pop     edi
0x757A7F: xor     al, al
0x757A81: pop     esi
0x757A82: retn    4
0x757A85: pop     edi
0x757A86: mov     al, 1
0x757A88: pop     esi
0x757A89: retn    4
