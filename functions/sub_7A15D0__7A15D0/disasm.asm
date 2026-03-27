0x7A15D0: sub     esp, 8
0x7A15D3: push    esi
0x7A15D4: mov     esi, ecx
0x7A15D6: mov     edx, [esi+4]
0x7A15D9: test    edx, edx
0x7A15DB: push    edi
0x7A15DC: jnz     short loc_7A15E2
0x7A15DE: xor     ecx, ecx
0x7A15E0: jmp     short loc_7A15EA
0x7A15E2: mov     ecx, [esi+8]
0x7A15E5: sub     ecx, edx
0x7A15E7: sar     ecx, 4
0x7A15EA: test    edx, edx
0x7A15EC: jz      short loc_7A162B
0x7A15EE: mov     eax, [esi+0Ch]
0x7A15F1: sub     eax, edx
0x7A15F3: sar     eax, 4
0x7A15F6: cmp     ecx, eax
0x7A15F8: jnb     short loc_7A162B
0x7A15FA: mov     ecx, [esp+10h+arg_0]
0x7A15FE: mov     edx, [esp+10h+arg_0]
0x7A1602: mov     edi, [esi+8]
0x7A1605: mov     byte ptr [esp+10h+var_8], 0
0x7A160A: mov     eax, [esp+10h+var_8]
0x7A160E: push    eax
0x7A160F: push    ecx
0x7A1610: push    esi
0x7A1611: push    edx
0x7A1612: push    1
0x7A1614: push    edi
0x7A1615: call    sub_7A0C20
0x7A161A: add     esp, 18h
0x7A161D: add     edi, 10h
0x7A1620: mov     [esi+8], edi
0x7A1623: pop     edi
0x7A1624: pop     esi
0x7A1625: add     esp, 8
0x7A1628: retn    4
0x7A162B: mov     edi, [esi+8]
0x7A162E: cmp     edx, edi
0x7A1630: jbe     short loc_7A1637
0x7A1632: call    __invalid_parameter_noinfo
0x7A1637: mov     eax, [esp+10h+arg_0]
0x7A163B: push    eax
0x7A163C: push    edi
0x7A163D: push    esi
0x7A163E: lea     ecx, [esp+1Ch+var_8]
0x7A1642: push    ecx
0x7A1643: mov     ecx, esi
0x7A1645: call    sub_7A1320
