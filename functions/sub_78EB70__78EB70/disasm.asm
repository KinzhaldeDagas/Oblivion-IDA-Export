0x78EB70: push    esi
0x78EB71: mov     esi, ecx
0x78EB73: mov     ecx, [esi+8]
0x78EB76: test    ecx, ecx
0x78EB78: push    edi
0x78EB79: mov     edi, [esi]
0x78EB7B: jz      short loc_78EB86
0x78EB7D: mov     eax, [esi+0Ch]
0x78EB80: sub     eax, ecx
0x78EB82: cmp     edi, eax
0x78EB84: jb      short loc_78EB8B
0x78EB86: call    __invalid_parameter_noinfo
0x78EB8B: mov     eax, [esi+8]
0x78EB8E: add     dword ptr [esi], 8
0x78EB91: add     eax, edi
0x78EB93: mov     eax, [eax]
0x78EB95: pop     edi
0x78EB96: pop     esi
0x78EB97: retn
