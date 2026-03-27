0x4E8B30: push    ebx
0x4E8B31: push    edi
0x4E8B32: mov     edi, [esp+8+arg_0]
0x4E8B36: xor     bl, bl
0x4E8B38: test    edi, edi
0x4E8B3A: jz      short loc_4E8B90
0x4E8B3C: mov     eax, [edi]
0x4E8B3E: cmp     eax, ds:0B05E20h
0x4E8B44: jnz     short loc_4E8B90
0x4E8B46: mov     eax, [esp+8+arg_4]
0x4E8B4A: test    al, al
0x4E8B4C: push    esi
0x4E8B4D: mov     esi, [ecx+2Ch]
0x4E8B50: jz      short loc_4E8B6B
0x4E8B52: mov     ecx, [esp+0Ch+arg_8]
0x4E8B56: mov     edx, [esi]
0x4E8B58: mov     edx, [edx+0BCh]
0x4E8B5E: push    ecx
0x4E8B5F: push    eax
0x4E8B60: push    edi
0x4E8B61: mov     ecx, esi
0x4E8B63: call    edx
0x4E8B65: mov     bl, al
0x4E8B67: test    bl, bl
0x4E8B69: jnz     short loc_4E8B88
0x4E8B6B: cmp     dword ptr [edi+0Ch], 1
0x4E8B6F: jnz     short loc_4E8B88
0x4E8B71: mov     eax, [edi+8]
0x4E8B74: push    eax
0x4E8B75: mov     ecx, esi
0x4E8B77: call    sub_46AF50
0x4E8B7C: test    al, al
0x4E8B7E: jz      short loc_4E8B88
0x4E8B80: pop     esi
0x4E8B81: pop     edi
0x4E8B82: mov     al, 1
0x4E8B84: pop     ebx
0x4E8B85: retn    0Ch
0x4E8B88: pop     esi
0x4E8B89: pop     edi
0x4E8B8A: mov     al, bl
0x4E8B8C: pop     ebx
0x4E8B8D: retn    0Ch
0x4E8B90: pop     edi
0x4E8B91: mov     al, bl
0x4E8B93: pop     ebx
0x4E8B94: retn    0Ch
