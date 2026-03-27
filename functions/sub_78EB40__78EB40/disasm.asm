0x78EB40: push    esi
0x78EB41: mov     esi, ecx
0x78EB43: mov     ecx, [esi+8]
0x78EB46: test    ecx, ecx
0x78EB48: push    edi
0x78EB49: mov     edi, [esi]
0x78EB4B: jz      short loc_78EB56
0x78EB4D: mov     eax, [esi+0Ch]
0x78EB50: sub     eax, ecx
0x78EB52: cmp     edi, eax
0x78EB54: jb      short loc_78EB5B
0x78EB56: call    __invalid_parameter_noinfo
0x78EB5B: mov     eax, [esi+8]
0x78EB5E: add     dword ptr [esi], 4
0x78EB61: add     eax, edi
0x78EB63: mov     eax, [eax]
0x78EB65: pop     edi
0x78EB66: pop     esi
0x78EB67: retn
