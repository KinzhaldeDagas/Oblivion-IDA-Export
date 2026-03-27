0x7F1410: push    0FFFFFFFFh
0x7F1412: push    offset SEH_8122A0
0x7F1417: mov     eax, large fs:0
0x7F141D: push    eax
0x7F141E: push    ecx
0x7F141F: push    ebx
0x7F1420: push    esi
0x7F1421: push    edi
0x7F1422: mov     eax, ds:0B30AACh
0x7F1427: xor     eax, esp
0x7F1429: push    eax
0x7F142A: lea     eax, [esp+20h+var_C]
0x7F142E: mov     large fs:0, eax
0x7F1434: push    8; Size
0x7F1436: call    FormHeapAlloc
0x7F143B: add     esp, 4
0x7F143E: mov     [esp+20h+var_10], eax
0x7F1442: xor     esi, esi
0x7F1444: cmp     eax, esi
0x7F1446: mov     [esp+20h+var_4], esi
0x7F144A: jz      short loc_7F1455
0x7F144C: mov     ecx, eax
0x7F144E: call    ShaderDefinition__Init
0x7F1453: mov     esi, eax
0x7F1455: mov     eax, ds:0B43104h
0x7F145A: push    1; StreamCount
0x7F145C: push    4; a2
0x7F145E: push    eax; a1
0x7F145F: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7F1467: call    CreateDX9ShaderDeclaration
0x7F146C: mov     edi, [esi]
0x7F146E: mov     ebx, eax
0x7F1470: add     esp, 0Ch
0x7F1473: cmp     edi, ebx
0x7F1475: jz      short loc_7F14A7
0x7F1477: test    edi, edi
0x7F1479: jz      short loc_7F1497
0x7F147B: lea     ecx, [edi+4]
0x7F147E: push    ecx; lpAddend
0x7F147F: call    dword ptr ds:0A2807Ch
0x7F1485: test    eax, eax
0x7F1487: jnz     short loc_7F1497
0x7F1489: test    edi, edi
0x7F148B: jz      short loc_7F1497
0x7F148D: mov     edx, [edi]
0x7F148F: mov     eax, [edx]
0x7F1491: push    1
0x7F1493: mov     ecx, edi
0x7F1495: call    eax
0x7F1497: test    ebx, ebx
0x7F1499: mov     [esi], ebx
0x7F149B: jz      short loc_7F14A7
0x7F149D: add     ebx, 4
0x7F14A0: push    ebx; lpAddend
0x7F14A1: call    dword ptr ds:0A28078h
0x7F14A7: mov     ecx, [esi]
0x7F14A9: mov     edx, [ecx]
0x7F14AB: mov     eax, [edx+50h]
0x7F14AE: push    0
0x7F14B0: push    2
0x7F14B2: push    0
0x7F14B4: push    0
0x7F14B6: push    0
0x7F14B8: call    eax
0x7F14BA: mov     ecx, [esi]
0x7F14BC: mov     edx, [ecx]
0x7F14BE: mov     eax, [edx+50h]
0x7F14C1: push    0
0x7F14C3: push    2
0x7F14C5: push    3
0x7F14C7: push    3
0x7F14C9: push    1
0x7F14CB: call    eax
0x7F14CD: mov     ecx, [esi]
0x7F14CF: mov     edx, [ecx]
0x7F14D1: mov     eax, [edx+50h]
0x7F14D4: push    0
0x7F14D6: push    1
0x7F14D8: push    5
0x7F14DA: push    7
0x7F14DC: push    2
0x7F14DE: call    eax
0x7F14E0: mov     ecx, [esi]
0x7F14E2: mov     edx, [ecx]
0x7F14E4: mov     eax, [edx+4Ch]
0x7F14E7: push    0
0x7F14E9: push    0
0x7F14EB: push    2
0x7F14ED: push    3
0x7F14EF: push    80000000h
0x7F14F4: push    8
0x7F14F6: push    3
0x7F14F8: push    0
0x7F14FA: call    eax
0x7F14FC: mov     ecx, [esi]
0x7F14FE: test    ecx, ecx
0x7F1500: jz      short loc_7F151E
0x7F1502: mov     edx, [ecx]
0x7F1504: mov     eax, [edx+4]
0x7F1507: call    eax
0x7F1509: test    eax, eax
0x7F150B: jz      short loc_7F151E
0x7F150D: lea     ecx, [ecx+0]
0x7F1510: cmp     eax, offset dword_B3F684
0x7F1515: jz      short loc_7F151E
0x7F1517: mov     eax, [eax+4]
0x7F151A: test    eax, eax
0x7F151C: jnz     short loc_7F1510
0x7F151E: push    398h; Size
0x7F1523: call    FormHeapAlloc
0x7F1528: add     esp, 4
0x7F152B: mov     [esp+20h+var_10], eax
0x7F152F: test    eax, eax
0x7F1531: mov     [esp+20h+var_4], 1
0x7F1539: jz      short loc_7F1546
0x7F153B: mov     ecx, eax; this
0x7F153D: call    ??0SpeedTreeLeafShader@@QAE@XZ; SpeedTreeLeafShader::SpeedTreeLeafShader(void)
0x7F1542: mov     edi, eax
0x7F1544: jmp     short loc_7F1548
0x7F1546: xor     edi, edi
0x7F1548: mov     edx, [edi]
0x7F154A: mov     eax, [edx+84h]
0x7F1550: mov     ecx, edi
0x7F1552: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7F155A: call    eax
0x7F155C: mov     edx, [edi]
0x7F155E: mov     eax, [edx+0A8h]
0x7F1564: mov     ecx, edi
0x7F1566: call    eax
0x7F1568: mov     ecx, edi
0x7F156A: call    sub_7F09D0
0x7F156F: mov     edx, [edi]
0x7F1571: mov     eax, [edx+88h]
0x7F1577: mov     ecx, edi
0x7F1579: call    eax
0x7F157B: mov     ebx, [esi+4]
0x7F157E: cmp     ebx, edi
0x7F1580: jz      short loc_7F15AF
0x7F1582: test    ebx, ebx
0x7F1584: jz      short loc_7F15A2
0x7F1586: lea     ecx, [ebx+4]
0x7F1589: push    ecx; lpAddend
0x7F158A: call    dword ptr ds:0A2807Ch
0x7F1590: test    eax, eax
0x7F1592: jnz     short loc_7F15A2
0x7F1594: test    ebx, ebx
0x7F1596: jz      short loc_7F15A2
0x7F1598: mov     edx, [ebx]
0x7F159A: mov     eax, [edx]
0x7F159C: push    1
0x7F159E: mov     ecx, ebx
0x7F15A0: call    eax
0x7F15A2: mov     [esi+4], edi
0x7F15A5: add     edi, 4
0x7F15A8: push    edi; lpAddend
0x7F15A9: call    dword ptr ds:0A28078h
0x7F15AF: mov     ecx, [esi+4]
0x7F15B2: mov     edx, [ecx]
0x7F15B4: mov     eax, [esi]
0x7F15B6: mov     edx, [edx+54h]
0x7F15B9: push    eax
0x7F15BA: call    edx
0x7F15BC: mov     eax, esi
0x7F15BE: mov     ecx, dword ptr [esp+20h+var_C]
0x7F15C2: mov     large fs:0, ecx
0x7F15C9: pop     ecx
0x7F15CA: pop     edi
0x7F15CB: pop     esi
0x7F15CC: pop     ebx
0x7F15CD: add     esp, 10h
0x7F15D0: retn
