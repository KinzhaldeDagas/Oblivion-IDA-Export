0x6ECDE0: push    esi
0x6ECDE1: mov     esi, ecx
0x6ECDE3: push    edi
0x6ECDE4: mov     edi, [esi+44h]
0x6ECDE7: test    edi, edi
0x6ECDE9: jz      short loc_6ECE0E
0x6ECDEB: lea     eax, [edi+4]
0x6ECDEE: push    eax; lpAddend
0x6ECDEF: call    dword ptr ds:0A2807Ch
0x6ECDF5: test    eax, eax
0x6ECDF7: jnz     short loc_6ECE07
0x6ECDF9: test    edi, edi
0x6ECDFB: jz      short loc_6ECE07
0x6ECDFD: mov     edx, [edi]
0x6ECDFF: mov     eax, [edx]
0x6ECE01: push    1
0x6ECE03: mov     ecx, edi
0x6ECE05: call    eax
0x6ECE07: mov     dword ptr [esi+44h], 0
0x6ECE0E: mov     ecx, [esp+8+arg_0]
0x6ECE12: push    ecx
0x6ECE13: mov     ecx, esi
0x6ECE15: call    NiTimeController__SetTarget
0x6ECE1A: cmp     dword ptr [esi+30h], 0
0x6ECE1E: jz      short loc_6ECE27
0x6ECE20: mov     ecx, esi
0x6ECE22: call    sub_6ECCD0
0x6ECE27: pop     edi
0x6ECE28: pop     esi
0x6ECE29: retn    4
