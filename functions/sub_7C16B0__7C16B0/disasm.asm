0x7C16B0: push    ebx
0x7C16B1: push    ebp
0x7C16B2: push    esi
0x7C16B3: mov     esi, ecx
0x7C16B5: mov     eax, [esi]
0x7C16B7: mov     edx, [eax+4]
0x7C16BA: push    edi
0x7C16BB: call    edx
0x7C16BD: mov     ebp, [esp+10h+arg_0]
0x7C16C1: mov     edi, eax
0x7C16C3: mov     ebx, [edi+8]
0x7C16C6: cmp     ebx, [ebp+0]
0x7C16C9: jz      short loc_7C16FF
0x7C16CB: test    ebx, ebx
0x7C16CD: jz      short loc_7C16EB
0x7C16CF: lea     eax, [ebx+4]
0x7C16D2: push    eax; lpAddend
0x7C16D3: call    dword ptr ds:0A2807Ch
0x7C16D9: test    eax, eax
0x7C16DB: jnz     short loc_7C16EB
0x7C16DD: test    ebx, ebx
0x7C16DF: jz      short loc_7C16EB
0x7C16E1: mov     edx, [ebx]
0x7C16E3: mov     eax, [edx]
0x7C16E5: push    1
0x7C16E7: mov     ecx, ebx
0x7C16E9: call    eax
0x7C16EB: mov     eax, [ebp+0]
0x7C16EE: test    eax, eax
0x7C16F0: mov     [edi+8], eax
0x7C16F3: jz      short loc_7C16FF
0x7C16F5: add     eax, 4
0x7C16F8: push    eax; lpAddend
0x7C16F9: call    dword ptr ds:0A28078h
0x7C16FF: mov     dword ptr [edi], 0
0x7C1705: mov     ecx, [esi+8]
0x7C1708: mov     [edi+4], ecx
0x7C170B: mov     eax, [esi+8]
0x7C170E: test    eax, eax
0x7C1710: jz      short loc_7C1722
0x7C1712: mov     [eax], edi
0x7C1714: add     dword ptr [esi+0Ch], 1
0x7C1718: mov     [esi+8], edi
0x7C171B: pop     edi
0x7C171C: pop     esi
0x7C171D: pop     ebp
0x7C171E: pop     ebx
0x7C171F: retn    4
0x7C1722: add     dword ptr [esi+0Ch], 1
0x7C1726: mov     [esi+4], edi
0x7C1729: mov     [esi+8], edi
0x7C172C: pop     edi
0x7C172D: pop     esi
0x7C172E: pop     ebp
0x7C172F: pop     ebx
0x7C1730: retn    4
