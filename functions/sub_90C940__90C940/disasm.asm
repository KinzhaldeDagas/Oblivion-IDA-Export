0x90C940: push    ebx
0x90C941: mov     ebx, large fs:2Ch
0x90C948: push    esi
0x90C949: mov     esi, ecx
0x90C94B: mov     eax, [esi+44h]
0x90C94E: test    eax, eax
0x90C950: push    edi
0x90C951: mov     edi, ds:0BA9DE4h
0x90C957: js      short loc_90C97F
0x90C959: mov     ecx, [ebx+edi*4]
0x90C95C: mov     ecx, [ecx+19Ch]
0x90C962: test    ecx, ecx
0x90C964: jnz     short loc_90C96C
0x90C966: mov     ecx, ds:0BA7D9Ch
0x90C96C: mov     edx, [esi+3Ch]
0x90C96F: and     eax, 3FFFFFFFh
0x90C974: push    14h
0x90C976: shl     eax, 1
0x90C978: push    eax
0x90C979: push    edx
0x90C97A: call    sub_8A75D0
0x90C97F: mov     eax, [esi+38h]
0x90C982: test    eax, eax
0x90C984: js      short loc_90C9AD
0x90C986: mov     ecx, [ebx+edi*4]
0x90C989: mov     ecx, [ecx+19Ch]
0x90C98F: test    ecx, ecx
0x90C991: jnz     short loc_90C999
0x90C993: mov     ecx, ds:0BA7D9Ch
0x90C999: mov     edx, [esi+30h]
0x90C99C: and     eax, 3FFFFFFFh
0x90C9A1: push    14h
0x90C9A3: shl     eax, 2
0x90C9A6: push    eax
0x90C9A7: push    edx
0x90C9A8: call    sub_8A75D0
0x90C9AD: mov     eax, [esi+2Ch]
0x90C9B0: test    eax, eax
0x90C9B2: js      short loc_90C9D8
0x90C9B4: mov     ecx, [ebx+edi*4]
0x90C9B7: mov     ecx, [ecx+19Ch]
0x90C9BD: test    ecx, ecx
0x90C9BF: jnz     short loc_90C9C7
0x90C9C1: mov     ecx, ds:0BA7D9Ch
0x90C9C7: mov     edx, [esi+24h]
0x90C9CA: push    14h
0x90C9CC: and     eax, 3FFFFFFFh
0x90C9D1: push    eax
0x90C9D2: push    edx
0x90C9D3: call    sub_8A75D0
0x90C9D8: mov     eax, [esi+20h]
0x90C9DB: test    eax, eax
0x90C9DD: js      short loc_90CA06
0x90C9DF: mov     ecx, [ebx+edi*4]
0x90C9E2: mov     ecx, [ecx+19Ch]
0x90C9E8: test    ecx, ecx
0x90C9EA: jnz     short loc_90C9F2
0x90C9EC: mov     ecx, ds:0BA7D9Ch
0x90C9F2: mov     edx, [esi+18h]
0x90C9F5: and     eax, 3FFFFFFFh
0x90C9FA: push    14h
0x90C9FC: shl     eax, 2
0x90C9FF: push    eax
0x90CA00: push    edx
0x90CA01: call    sub_8A75D0
0x90CA06: mov     eax, [esi+14h]
0x90CA09: test    eax, eax
0x90CA0B: js      short loc_90CA33
0x90CA0D: mov     ecx, [ebx+edi*4]
0x90CA10: mov     ecx, [ecx+19Ch]
0x90CA16: test    ecx, ecx
0x90CA18: jnz     short loc_90CA20
0x90CA1A: mov     ecx, ds:0BA7D9Ch
0x90CA20: mov     edx, [esi+0Ch]
0x90CA23: and     eax, 3FFFFFFFh
0x90CA28: push    14h
0x90CA2A: shl     eax, 1
0x90CA2C: push    eax
0x90CA2D: push    edx
0x90CA2E: call    sub_8A75D0
0x90CA33: mov     eax, [esi+8]
0x90CA36: test    eax, eax
0x90CA38: js      short loc_90CA60
0x90CA3A: mov     ecx, [ebx+edi*4]
0x90CA3D: mov     ecx, [ecx+19Ch]
0x90CA43: test    ecx, ecx
0x90CA45: jnz     short loc_90CA4D
0x90CA47: mov     ecx, ds:0BA7D9Ch
0x90CA4D: mov     edx, [esi]
0x90CA4F: and     eax, 3FFFFFFFh
0x90CA54: push    14h
0x90CA56: shl     eax, 2
0x90CA59: push    eax
0x90CA5A: push    edx
0x90CA5B: call    sub_8A75D0
0x90CA60: pop     edi
0x90CA61: pop     esi
0x90CA62: pop     ebx
0x90CA63: retn
