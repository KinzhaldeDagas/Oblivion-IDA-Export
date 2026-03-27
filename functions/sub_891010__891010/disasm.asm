0x891010: push    esi
0x891011: mov     esi, ds:0BA7A64h
0x891017: test    esi, esi
0x891019: jz      short loc_891041
0x89101B: lea     eax, [esi+4]
0x89101E: push    eax; lpAddend
0x89101F: call    dword ptr ds:0A2807Ch
0x891025: test    eax, eax
0x891027: jnz     short loc_891037
0x891029: test    esi, esi
0x89102B: jz      short loc_891037
0x89102D: mov     edx, [esi]
0x89102F: mov     eax, [edx]
0x891031: push    1
0x891033: mov     ecx, esi
0x891035: call    eax
0x891037: mov     dword ptr ds:0BA7A64h, 0
0x891041: pop     esi
0x891042: retn
