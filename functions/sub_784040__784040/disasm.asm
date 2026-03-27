0x784040: push    esi
0x784041: mov     esi, ecx
0x784043: mov     eax, [esi]
0x784045: test    eax, eax
0x784047: push    edi
0x784048: mov     edi, [esp+8+arg_0]
0x78404C: jz      short loc_784052
0x78404E: cmp     eax, [edi]
0x784050: jz      short loc_784057
0x784052: call    __invalid_parameter_noinfo
0x784057: mov     eax, [esi+4]
0x78405A: xor     ecx, ecx
0x78405C: cmp     eax, [edi+4]
0x78405F: pop     edi
0x784060: setz    cl
0x784063: mov     al, cl
0x784065: pop     esi
0x784066: retn    4
