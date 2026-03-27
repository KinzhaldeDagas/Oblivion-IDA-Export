0x4A4E50: push    esi
0x4A4E51: push    edi
0x4A4E52: mov     edi, [esp+8+arg_0]
0x4A4E56: mov     eax, [edi]
0x4A4E58: test    eax, eax
0x4A4E5A: lea     esi, [ecx+8]
0x4A4E5D: jz      short loc_4A4E71
0x4A4E5F: mov     ecx, [esi]
0x4A4E61: test    ecx, ecx
0x4A4E63: jz      short loc_4A4E71
0x4A4E65: push    eax; Str2
0x4A4E66: push    ecx; Str1
0x4A4E67: call    __strcmp
0x4A4E6C: add     esp, 8
0x4A4E6F: jmp     short loc_4A4E7E
0x4A4E71: xor     ecx, ecx
0x4A4E73: test    eax, eax
0x4A4E75: setz    cl
0x4A4E78: lea     ecx, [ecx+ecx-1]
0x4A4E7C: mov     eax, ecx
0x4A4E7E: test    eax, eax
0x4A4E80: jz      short loc_4A4E95
0x4A4E82: mov     edx, [edi]
0x4A4E84: push    0; a3
0x4A4E86: push    edx; a2
0x4A4E87: mov     ecx, esi; this
0x4A4E89: call    BSStringT_Set
0x4A4E8E: pop     edi
0x4A4E8F: mov     al, 1
0x4A4E91: pop     esi
0x4A4E92: retn    4
0x4A4E95: pop     edi
0x4A4E96: xor     al, al
0x4A4E98: pop     esi
0x4A4E99: retn    4
