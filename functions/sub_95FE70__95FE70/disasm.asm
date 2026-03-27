0x95FE70: push    esi
0x95FE71: push    18h; Size
0x95FE73: call    FormHeapAlloc
0x95FE78: add     esp, 4
0x95FE7B: test    eax, eax
0x95FE7D: jz      short loc_95FE99
0x95FE7F: mov     ecx, eax
0x95FE81: call    sub_95F810
0x95FE86: mov     ecx, [esp+4+arg_0]
0x95FE8A: mov     esi, eax
0x95FE8C: mov     eax, [esi]
0x95FE8E: mov     edx, [eax]
0x95FE90: push    ecx
0x95FE91: mov     ecx, esi
0x95FE93: call    edx
0x95FE95: mov     eax, esi
0x95FE97: pop     esi
0x95FE98: retn
0x95FE99: mov     ecx, [esp+4+arg_0]
0x95FE9D: xor     esi, esi
0x95FE9F: mov     eax, [esi]
0x95FEA1: mov     edx, [eax]
0x95FEA3: push    ecx
0x95FEA4: mov     ecx, esi
0x95FEA6: call    edx
0x95FEA8: mov     eax, esi
0x95FEAA: pop     esi
0x95FEAB: retn
