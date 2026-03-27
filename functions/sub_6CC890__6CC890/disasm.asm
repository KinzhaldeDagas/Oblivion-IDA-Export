0x6CC890: push    ebx
0x6CC891: push    esi
0x6CC892: mov     esi, ecx
0x6CC894: mov     ebx, [esi]
0x6CC896: push    edi
0x6CC897: mov     edi, [esp+0Ch+arg_0]
0x6CC89B: cmp     ebx, [edi]
0x6CC89D: jz      short loc_6CC8D1
0x6CC89F: test    ebx, ebx
0x6CC8A1: jz      short loc_6CC8BF
0x6CC8A3: lea     eax, [ebx+4]
0x6CC8A6: push    eax; lpAddend
0x6CC8A7: call    dword ptr ds:0A2807Ch
0x6CC8AD: test    eax, eax
0x6CC8AF: jnz     short loc_6CC8BF
0x6CC8B1: test    ebx, ebx
0x6CC8B3: jz      short loc_6CC8BF
0x6CC8B5: mov     edx, [ebx]
0x6CC8B7: mov     eax, [edx]
0x6CC8B9: push    1
0x6CC8BB: mov     ecx, ebx
0x6CC8BD: call    eax
0x6CC8BF: mov     eax, [edi]
0x6CC8C1: test    eax, eax
0x6CC8C3: mov     [esi], eax
0x6CC8C5: jz      short loc_6CC8D1
0x6CC8C7: add     eax, 4
0x6CC8CA: push    eax; lpAddend
0x6CC8CB: call    dword ptr ds:0A28078h
0x6CC8D1: fld     dword ptr [edi+4]
0x6CC8D4: mov     eax, esi
0x6CC8D6: fstp    dword ptr [esi+4]
0x6CC8D9: fld     dword ptr [edi+8]
0x6CC8DC: fstp    dword ptr [esi+8]
0x6CC8DF: mov     cl, [edi+0Ch]
0x6CC8E2: mov     [esi+0Ch], cl
0x6CC8E5: fld     dword ptr [edi+10h]
0x6CC8E8: fstp    dword ptr [esi+10h]
0x6CC8EB: fld     dword ptr [edi+14h]
0x6CC8EE: pop     edi
0x6CC8EF: fstp    dword ptr [esi+14h]
0x6CC8F2: pop     esi
0x6CC8F3: pop     ebx
0x6CC8F4: retn    4
