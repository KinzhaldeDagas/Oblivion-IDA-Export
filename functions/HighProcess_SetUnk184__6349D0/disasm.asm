0x6349D0: push    ebx
0x6349D1: push    esi
0x6349D2: mov     ebx, ecx
0x6349D4: mov     esi, [ebx+184h]
0x6349DA: push    edi
0x6349DB: mov     edi, [esp+0Ch+arg_0]
0x6349DF: cmp     esi, edi
0x6349E1: jz      short loc_634A17
0x6349E3: test    esi, esi
0x6349E5: jz      short loc_634A03
0x6349E7: lea     eax, [esi+4]
0x6349EA: push    eax; lpAddend
0x6349EB: call    dword ptr ds:0A2807Ch
0x6349F1: test    eax, eax
0x6349F3: jnz     short loc_634A03
0x6349F5: test    esi, esi
0x6349F7: jz      short loc_634A03
0x6349F9: mov     edx, [esi]
0x6349FB: mov     eax, [edx]
0x6349FD: push    1
0x6349FF: mov     ecx, esi
0x634A01: call    eax
0x634A03: test    edi, edi
0x634A05: mov     [ebx+184h], edi
0x634A0B: jz      short loc_634A17
0x634A0D: add     edi, 4
0x634A10: push    edi; lpAddend
0x634A11: call    dword ptr ds:0A28078h
0x634A17: pop     edi
0x634A18: pop     esi
0x634A19: pop     ebx
0x634A1A: retn    4
