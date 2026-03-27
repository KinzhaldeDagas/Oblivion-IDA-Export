0x575610: push    0FFFFFFFFh
0x575612: push    offset SEH_5A3F40
0x575617: mov     eax, large fs:0
0x57561D: push    eax
0x57561E: push    ecx
0x57561F: push    esi
0x575620: push    edi
0x575621: mov     eax, ds:0B30AACh
0x575626: xor     eax, esp
0x575628: push    eax
0x575629: lea     eax, [esp+1Ch+var_C]
0x57562D: mov     large fs:0, eax
0x575633: mov     esi, ecx
0x575635: mov     [esp+1Ch+var_10], esi
0x575639: xor     edi, edi
0x57563B: mov     [esi], edi
0x57563D: mov     [esi+4], di
0x575641: mov     [esi+6], di
0x575645: push    edi; a3
0x575646: push    offset EmptyString; a2
0x57564B: mov     [esp+24h+var_4], edi
0x57564F: mov     [esi+20h], edi
0x575652: mov     [esi+24h], edi
0x575655: call    BSStringT_Set
0x57565A: mov     eax, [esp+1Ch+arg_0]
0x57565E: mov     ecx, [esp+1Ch+arg_4]
0x575662: mov     edx, [esp+1Ch+arg_8]
0x575666: mov     [esi+8], eax
0x575669: mov     eax, [esp+1Ch+arg_C]
0x57566D: mov     [esi+0Ch], ecx
0x575670: mov     cl, [esp+1Ch+arg_10]
0x575674: mov     [esi+14h], eax
0x575677: mov     [esi+10h], edx
0x57567A: mov     [esi+18h], edi
0x57567D: mov     [esi+1Ch], cl
0x575680: mov     eax, esi
0x575682: mov     ecx, [esp+1Ch+var_C]
0x575686: mov     large fs:0, ecx
0x57568D: pop     ecx
0x57568E: pop     edi
0x57568F: pop     esi
0x575690: add     esp, 10h
0x575693: retn    14h
