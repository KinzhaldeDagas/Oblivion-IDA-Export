0x6ECCD0: push    ebx
0x6ECCD1: push    esi
0x6ECCD2: push    edi
0x6ECCD3: mov     edi, ecx
0x6ECCD5: mov     eax, [edi+40h]
0x6ECCD8: mov     ecx, [edi+30h]
0x6ECCDB: push    eax
0x6ECCDC: call    NiObjectNET_GetExtraData
0x6ECCE1: mov     esi, [edi+44h]
0x6ECCE4: mov     ebx, eax
0x6ECCE6: cmp     esi, ebx
0x6ECCE8: jz      short loc_6ECD1B
0x6ECCEA: test    esi, esi
0x6ECCEC: jz      short loc_6ECD0A
0x6ECCEE: lea     ecx, [esi+4]
0x6ECCF1: push    ecx; lpAddend
0x6ECCF2: call    dword ptr ds:0A2807Ch
0x6ECCF8: test    eax, eax
0x6ECCFA: jnz     short loc_6ECD0A
0x6ECCFC: test    esi, esi
0x6ECCFE: jz      short loc_6ECD0A
0x6ECD00: mov     edx, [esi]
0x6ECD02: mov     eax, [edx]
0x6ECD04: push    1
0x6ECD06: mov     ecx, esi
0x6ECD08: call    eax
0x6ECD0A: test    ebx, ebx
0x6ECD0C: mov     [edi+44h], ebx
0x6ECD0F: jz      short loc_6ECD1B
0x6ECD11: add     ebx, 4
0x6ECD14: push    ebx; lpAddend
0x6ECD15: call    dword ptr ds:0A28078h
0x6ECD1B: pop     edi
0x6ECD1C: pop     esi
0x6ECD1D: pop     ebx
0x6ECD1E: retn
