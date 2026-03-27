0x6DA6B0: mov     eax, [esp+arg_4]
0x6DA6B4: push    ebx
0x6DA6B5: push    esi
0x6DA6B6: push    edi
0x6DA6B7: mov     edi, [esp+0Ch+arg_0]
0x6DA6BB: push    eax
0x6DA6BC: push    edi
0x6DA6BD: mov     esi, ecx
0x6DA6BF: call    sub_6EC2A0
0x6DA6C4: mov     ecx, [esi+0Ch]
0x6DA6C7: mov     [edi+0Ch], ecx
0x6DA6CA: mov     edx, [esi+10h]
0x6DA6CD: mov     [edi+10h], edx
0x6DA6D0: mov     eax, [esi+14h]
0x6DA6D3: mov     [edi+14h], eax
0x6DA6D6: mov     ebx, [edi+18h]
0x6DA6D9: cmp     ebx, [esi+18h]
0x6DA6DC: jz      short loc_6DA72A
0x6DA6DE: test    ebx, ebx
0x6DA6E0: jz      short loc_6DA6FE
0x6DA6E2: lea     ecx, [ebx+4]
0x6DA6E5: push    ecx; lpAddend
0x6DA6E6: call    dword ptr ds:0A2807Ch
0x6DA6EC: test    eax, eax
0x6DA6EE: jnz     short loc_6DA6FE
0x6DA6F0: test    ebx, ebx
0x6DA6F2: jz      short loc_6DA6FE
0x6DA6F4: mov     edx, [ebx]
0x6DA6F6: mov     eax, [edx]
0x6DA6F8: push    1
0x6DA6FA: mov     ecx, ebx
0x6DA6FC: call    eax
0x6DA6FE: mov     eax, [esi+18h]
0x6DA701: test    eax, eax
0x6DA703: mov     [edi+18h], eax
0x6DA706: jz      short loc_6DA71E
0x6DA708: add     eax, 4
0x6DA70B: push    eax; lpAddend
0x6DA70C: call    dword ptr ds:0A28078h
0x6DA712: mov     ecx, [esi+1Ch]
0x6DA715: mov     [edi+1Ch], ecx
0x6DA718: pop     edi
0x6DA719: pop     esi
0x6DA71A: pop     ebx
0x6DA71B: retn    8
0x6DA71E: mov     edx, [esi+1Ch]
0x6DA721: mov     [edi+1Ch], edx
0x6DA724: pop     edi
0x6DA725: pop     esi
0x6DA726: pop     ebx
0x6DA727: retn    8
0x6DA72A: mov     eax, [esi+1Ch]
0x6DA72D: mov     [edi+1Ch], eax
0x6DA730: pop     edi
0x6DA731: pop     esi
0x6DA732: pop     ebx
0x6DA733: retn    8
