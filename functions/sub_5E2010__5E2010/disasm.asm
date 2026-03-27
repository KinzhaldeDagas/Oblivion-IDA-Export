0x5E2010: push    esi
0x5E2011: mov     esi, ecx
0x5E2013: mov     eax, [esi]
0x5E2015: mov     edx, [eax+380h]
0x5E201B: call    edx
0x5E201D: test    eax, eax
0x5E201F: jz      short loc_5E204D
0x5E2021: mov     eax, [esi]
0x5E2023: mov     edx, [eax+18Ch]
0x5E2029: mov     ecx, esi
0x5E202B: call    edx
0x5E202D: cmp     eax, 4
0x5E2030: jnz     short loc_5E204D
0x5E2032: mov     eax, [esi]
0x5E2034: mov     edx, [eax+380h]
0x5E203A: mov     ecx, esi
0x5E203C: call    edx
0x5E203E: mov     ecx, [eax+58h]
0x5E2041: mov     eax, [ecx]
0x5E2043: mov     edx, [eax+0C4h]
0x5E2049: push    1
0x5E204B: call    edx
0x5E204D: cmp     dword ptr [esi+58h], 0
0x5E2051: jz      short loc_5E2061
0x5E2053: mov     ecx, [esi+58h]
0x5E2056: mov     eax, [ecx]
0x5E2058: pop     esi
0x5E2059: mov     eax, [eax+0C4h]
0x5E205F: jmp     eax
0x5E2061: pop     esi
0x5E2062: retn    4
