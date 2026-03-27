0x6D2030: push    ecx
0x6D2031: push    ebx
0x6D2032: push    esi
0x6D2033: push    edi
0x6D2034: mov     edi, [esp+10h+arg_0]
0x6D2038: push    edi
0x6D2039: mov     esi, ecx
0x6D203B: call    sub_6EC5B0
0x6D2040: mov     eax, [edi+220h]
0x6D2046: push    1
0x6D2048: lea     ecx, [esp+14h+var_4]
0x6D204C: push    ecx
0x6D204D: mov     ebx, 4
0x6D2052: push    ebx
0x6D2053: lea     edx, [esi+54h]
0x6D2056: push    edx
0x6D2057: push    eax
0x6D2058: mov     eax, [eax+8]
0x6D205B: mov     [esp+24h+var_4], ebx
0x6D205F: call    eax
0x6D2061: movzx   ecx, word ptr [esi+4Ah]
0x6D2065: mov     eax, [edi+220h]
0x6D206B: push    1
0x6D206D: lea     edx, [esp+28h+var_4]
0x6D2071: push    edx
0x6D2072: mov     [esp+2Ch+arg_0], ecx
0x6D2076: mov     edx, [eax+8]
0x6D2079: push    ebx
0x6D207A: lea     ecx, [esp+30h+arg_0]
0x6D207E: push    ecx
0x6D207F: push    eax
0x6D2080: mov     [esp+38h+var_4], ebx
0x6D2084: call    edx
0x6D2086: xor     ebx, ebx
0x6D2088: add     esp, 28h
0x6D208B: cmp     [esp+10h+arg_0], ebx
0x6D208F: jbe     short loc_6D20AA
0x6D2091: mov     ecx, [esi+44h]
0x6D2094: mov     edx, [ecx+ebx*4]
0x6D2097: mov     eax, [edi]
0x6D2099: mov     eax, [eax+2Ch]
0x6D209C: push    edx
0x6D209D: mov     ecx, edi
0x6D209F: call    eax
0x6D20A1: add     ebx, 1
0x6D20A4: cmp     ebx, [esp+10h+arg_0]
0x6D20A8: jb      short loc_6D2091
0x6D20AA: pop     edi
0x6D20AB: pop     esi
0x6D20AC: pop     ebx
0x6D20AD: pop     ecx
0x6D20AE: retn    4
