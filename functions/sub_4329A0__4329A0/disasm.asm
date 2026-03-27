0x4329A0: push    ebx
0x4329A1: mov     ebx, [esp+4+arg_0]
0x4329A5: push    esi
0x4329A6: push    edi
0x4329A7: mov     edi, [ebx+4]
0x4329AA: test    edi, edi
0x4329AC: mov     esi, ecx
0x4329AE: jz      short loc_4329D3
0x4329B0: lea     eax, [edi+8]
0x4329B3: push    eax; lpAddend
0x4329B4: call    ds:InterlockedDecrement
0x4329BA: test    eax, eax
0x4329BC: jnz     short loc_4329CC
0x4329BE: test    edi, edi
0x4329C0: jz      short loc_4329CC
0x4329C2: mov     edx, [edi]
0x4329C4: mov     eax, [edx]
0x4329C6: push    1
0x4329C8: mov     ecx, edi
0x4329CA: call    eax
0x4329CC: mov     dword ptr [ebx+4], 0
0x4329D3: mov     ecx, [esi+10h]
0x4329D6: mov     [ebx+4], ecx
0x4329D9: add     dword ptr [esi+0Ch], 1
0x4329DD: mov     eax, [esi+0Ch]
0x4329E0: mov     edx, [esi]
0x4329E2: mov     [esi+10h], ebx
0x4329E5: cmp     eax, [edx+0Ch]
0x4329E8: jnz     short loc_4329F1
0x4329EA: mov     ecx, esi
0x4329EC: call    sub_432740
0x4329F1: pop     edi
0x4329F2: pop     esi
0x4329F3: pop     ebx
0x4329F4: retn    4
