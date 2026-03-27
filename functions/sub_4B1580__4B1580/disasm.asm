0x4B1580: push    ebx
0x4B1581: mov     ebx, [esp+4+arg_0]
0x4B1585: movzx   eax, word ptr [ebx+0B6h]
0x4B158C: push    edi
0x4B158D: xor     edi, edi
0x4B158F: test    eax, eax
0x4B1591: jbe     short loc_4B15F8
0x4B1593: cmp     eax, edi
0x4B1595: push    esi
0x4B1596: jbe     short loc_4B15E9
0x4B1598: mov     eax, [ebx+0B0h]
0x4B159E: mov     esi, [eax+edi*4]
0x4B15A1: test    esi, esi
0x4B15A3: jz      short loc_4B15E9
0x4B15A5: mov     edx, [esi]
0x4B15A7: mov     eax, [edx+8]
0x4B15AA: mov     ecx, esi
0x4B15AC: call    eax
0x4B15AE: test    eax, eax
0x4B15B0: jz      short loc_4B15BD
0x4B15B2: push    esi
0x4B15B3: call    sub_4B1580
0x4B15B8: add     esp, 4
0x4B15BB: jmp     short loc_4B15E9
0x4B15BD: push    2
0x4B15BF: mov     ecx, esi
0x4B15C1: call    NiNode_GetNiPropertyByID
0x4B15C6: test    eax, eax
0x4B15C8: jz      short loc_4B15E9
0x4B15CA: mov     ecx, ds:0B3FA90h
0x4B15D0: mov     [eax+40h], ecx
0x4B15D3: mov     edx, ds:0B3FA94h
0x4B15D9: mov     [eax+44h], edx
0x4B15DC: mov     ecx, ds:0B3FA98h
0x4B15E2: add     dword ptr [eax+54h], 1
0x4B15E6: mov     [eax+48h], ecx
0x4B15E9: movzx   eax, word ptr [ebx+0B6h]
0x4B15F0: add     edi, 1
0x4B15F3: cmp     eax, edi
0x4B15F5: ja      short loc_4B1598
0x4B15F7: pop     esi
0x4B15F8: pop     edi
0x4B15F9: pop     ebx
0x4B15FA: retn
