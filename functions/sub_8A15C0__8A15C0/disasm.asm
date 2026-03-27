0x8A15C0: sub     esp, 8
0x8A15C3: push    ebx
0x8A15C4: mov     ebx, ecx
0x8A15C6: mov     eax, [ebx]
0x8A15C8: mov     edx, [eax+74h]
0x8A15CB: push    esi
0x8A15CC: push    edi
0x8A15CD: lea     ecx, [esp+14h+var_5]
0x8A15D1: push    ecx
0x8A15D2: mov     ecx, ebx
0x8A15D4: mov     [esp+18h+var_4], ebx
0x8A15D8: call    edx
0x8A15DA: mov     ecx, [esp+14h+arg_0]
0x8A15DE: mov     esi, eax
0x8A15E0: call    sub_7124D0
0x8A15E5: test    esi, esi
0x8A15E7: mov     edi, eax
0x8A15E9: jz      loc_8A16B0
0x8A15EF: mov     eax, [esi+0Ch]
0x8A15F2: add     esi, 4
0x8A15F5: test    eax, eax
0x8A15F7: js      short loc_8A162D
0x8A15F9: mov     ecx, ds:0BA9DE4h
0x8A15FF: mov     edx, large fs:2Ch
0x8A1606: mov     ecx, [edx+ecx*4]
0x8A1609: mov     ecx, [ecx+19Ch]
0x8A160F: test    ecx, ecx
0x8A1611: jnz     short loc_8A1619
0x8A1613: mov     ecx, ds:0BA7D9Ch
0x8A1619: mov     edx, [esi]
0x8A161B: and     eax, 3FFFFFFFh
0x8A1620: add     eax, eax
0x8A1622: push    14h
0x8A1624: add     eax, eax
0x8A1626: push    eax
0x8A1627: push    edx
0x8A1628: call    sub_8A75D0
0x8A162D: mov     eax, [esi+8]
0x8A1630: and     eax, 0C0000000h
0x8A1635: or      eax, 80000000h
0x8A163A: mov     [esi+8], eax
0x8A163D: and     eax, 3FFFFFFFh
0x8A1642: cmp     eax, edi
0x8A1644: mov     dword ptr [esi], 0
0x8A164A: mov     dword ptr [esi+4], 0
0x8A1651: jge     short loc_8A1667
0x8A1653: add     eax, eax
0x8A1655: cmp     edi, eax
0x8A1657: jl      short loc_8A165B
0x8A1659: mov     eax, edi
0x8A165B: push    4
0x8A165D: push    eax
0x8A165E: push    esi
0x8A165F: call    sub_8A6E40
0x8A1664: add     esp, 0Ch
0x8A1667: test    edi, edi
0x8A1669: jbe     short loc_8A16B0
0x8A166B: push    ebp
0x8A166C: mov     ebp, edi
0x8A166E: mov     ebx, 1
0x8A1673: mov     ecx, [esp+18h+arg_0]
0x8A1677: call    sub_7124A0
0x8A167C: test    eax, eax
0x8A167E: jz      short loc_8A16A7
0x8A1680: mov     ecx, [esi+8]
0x8A1683: mov     edi, [eax+8]
0x8A1686: and     ecx, 3FFFFFFFh
0x8A168C: cmp     [esi+4], ecx
0x8A168F: jnz     short loc_8A169C
0x8A1691: push    4
0x8A1693: push    esi
0x8A1694: call    sub_8A6EE0
0x8A1699: add     esp, 8
0x8A169C: mov     edx, [esi+4]
0x8A169F: mov     eax, [esi]
0x8A16A1: mov     [eax+edx*4], edi
0x8A16A4: add     [esi+4], ebx
0x8A16A7: sub     ebp, ebx
0x8A16A9: jnz     short loc_8A1673
0x8A16AB: mov     ebx, [esp+18h+var_4]
0x8A16AF: pop     ebp
0x8A16B0: mov     ecx, [esp+14h+arg_0]
0x8A16B4: push    ecx
0x8A16B5: mov     ecx, ebx
0x8A16B7: call    sub_8A2600
0x8A16BC: pop     edi
0x8A16BD: pop     esi
0x8A16BE: pop     ebx
0x8A16BF: add     esp, 8
0x8A16C2: retn    4
