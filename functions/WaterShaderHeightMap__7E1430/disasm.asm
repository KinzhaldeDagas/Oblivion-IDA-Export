0x7E1430: push    0FFFFFFFFh
0x7E1432: push    offset SEH_8122A0
0x7E1437: mov     eax, large fs:0
0x7E143D: push    eax
0x7E143E: push    ecx
0x7E143F: push    ebx
0x7E1440: push    esi
0x7E1441: push    edi
0x7E1442: mov     eax, ds:0B30AACh
0x7E1447: xor     eax, esp
0x7E1449: push    eax
0x7E144A: lea     eax, [esp+20h+var_C]
0x7E144E: mov     large fs:0, eax
0x7E1454: push    8; Size
0x7E1456: call    FormHeapAlloc
0x7E145B: add     esp, 4
0x7E145E: mov     [esp+20h+var_10], eax
0x7E1462: xor     edi, edi
0x7E1464: cmp     eax, edi
0x7E1466: mov     [esp+20h+var_4], edi
0x7E146A: jz      short loc_7E1475
0x7E146C: mov     ecx, eax
0x7E146E: call    ShaderDefinition__Init
0x7E1473: mov     edi, eax
0x7E1475: mov     eax, ds:0B43104h
0x7E147A: push    1; StreamCount
0x7E147C: push    2; a2
0x7E147E: push    eax; a1
0x7E147F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7E1487: call    CreateDX9ShaderDeclaration
0x7E148C: mov     esi, [edi]
0x7E148E: mov     ebx, eax
0x7E1490: add     esp, 0Ch
0x7E1493: cmp     esi, ebx
0x7E1495: jz      short loc_7E14C7
0x7E1497: test    esi, esi
0x7E1499: jz      short loc_7E14B7
0x7E149B: lea     ecx, [esi+4]
0x7E149E: push    ecx; lpAddend
0x7E149F: call    dword ptr ds:0A2807Ch
0x7E14A5: test    eax, eax
0x7E14A7: jnz     short loc_7E14B7
0x7E14A9: test    esi, esi
0x7E14AB: jz      short loc_7E14B7
0x7E14AD: mov     edx, [esi]
0x7E14AF: mov     eax, [edx]
0x7E14B1: push    1
0x7E14B3: mov     ecx, esi
0x7E14B5: call    eax
0x7E14B7: test    ebx, ebx
0x7E14B9: mov     [edi], ebx
0x7E14BB: jz      short loc_7E14C7
0x7E14BD: add     ebx, 4
0x7E14C0: push    ebx; lpAddend
0x7E14C1: call    dword ptr ds:0A28078h
0x7E14C7: mov     ecx, [edi]
0x7E14C9: mov     edx, [ecx]
0x7E14CB: mov     eax, [edx+50h]
0x7E14CE: push    0
0x7E14D0: push    2
0x7E14D2: push    0
0x7E14D4: push    0
0x7E14D6: push    0
0x7E14D8: call    eax
0x7E14DA: mov     ecx, [edi]
0x7E14DC: mov     edx, [ecx]
0x7E14DE: mov     eax, [edx+50h]
0x7E14E1: push    0
0x7E14E3: push    1
0x7E14E5: push    5
0x7E14E7: push    7
0x7E14E9: push    1
0x7E14EB: call    eax
0x7E14ED: mov     ecx, [edi]
0x7E14EF: test    ecx, ecx
0x7E14F1: jz      short loc_7E150E
0x7E14F3: mov     edx, [ecx]
0x7E14F5: mov     eax, [edx+4]
0x7E14F8: call    eax
0x7E14FA: test    eax, eax
0x7E14FC: jz      short loc_7E150E
0x7E14FE: mov     edi, edi
0x7E1500: cmp     eax, offset dword_B3F684
0x7E1505: jz      short loc_7E150E
0x7E1507: mov     eax, [eax+4]
0x7E150A: test    eax, eax
0x7E150C: jnz     short loc_7E1500
0x7E150E: push    10Ch; Size
0x7E1513: call    FormHeapAlloc
0x7E1518: add     esp, 4
0x7E151B: mov     [esp+20h+var_10], eax
0x7E151F: test    eax, eax
0x7E1521: mov     [esp+20h+var_4], 1
0x7E1529: jz      short loc_7E1536
0x7E152B: mov     ecx, eax; this
0x7E152D: call    ??0WaterShaderHeightMap@@QAE@XZ; WaterShaderHeightMap::WaterShaderHeightMap(void)
0x7E1532: mov     esi, eax
0x7E1534: jmp     short loc_7E1538
0x7E1536: xor     esi, esi
0x7E1538: mov     edx, [esi]
0x7E153A: mov     eax, [edx+84h]
0x7E1540: mov     ecx, esi
0x7E1542: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7E154A: call    eax
0x7E154C: mov     ecx, esi
0x7E154E: call    sub_7DFBD0
0x7E1553: mov     ecx, esi
0x7E1555: call    sub_7DFEE0
0x7E155A: mov     edx, [esi]
0x7E155C: mov     eax, [edx+88h]
0x7E1562: mov     ecx, esi
0x7E1564: call    eax
0x7E1566: mov     edx, [esi]
0x7E1568: mov     eax, [edi]
0x7E156A: mov     edx, [edx+54h]
0x7E156D: push    eax
0x7E156E: mov     ecx, esi
0x7E1570: call    edx
0x7E1572: mov     ebx, [edi+4]
0x7E1575: cmp     ebx, esi
0x7E1577: jz      short loc_7E15A6
0x7E1579: test    ebx, ebx
0x7E157B: jz      short loc_7E1599
0x7E157D: lea     eax, [ebx+4]
0x7E1580: push    eax; lpAddend
0x7E1581: call    dword ptr ds:0A2807Ch
0x7E1587: test    eax, eax
0x7E1589: jnz     short loc_7E1599
0x7E158B: test    ebx, ebx
0x7E158D: jz      short loc_7E1599
0x7E158F: mov     edx, [ebx]
0x7E1591: mov     eax, [edx]
0x7E1593: push    1
0x7E1595: mov     ecx, ebx
0x7E1597: call    eax
0x7E1599: mov     [edi+4], esi
0x7E159C: add     esi, 4
0x7E159F: push    esi; lpAddend
0x7E15A0: call    dword ptr ds:0A28078h
0x7E15A6: mov     eax, edi
0x7E15A8: mov     ecx, dword ptr [esp+20h+var_C]
0x7E15AC: mov     large fs:0, ecx
0x7E15B3: pop     ecx
0x7E15B4: pop     edi
0x7E15B5: pop     esi
0x7E15B6: pop     ebx
0x7E15B7: add     esp, 10h
0x7E15BA: retn
