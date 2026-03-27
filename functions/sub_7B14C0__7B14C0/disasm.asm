0x7B14C0: sub     esp, 2A4h
0x7B14C6: mov     eax, ds:0B30AACh
0x7B14CB: xor     eax, esp
0x7B14CD: mov     [esp+2A4h+var_4], eax
0x7B14D4: push    ebx
0x7B14D5: push    ebp
0x7B14D6: push    esi
0x7B14D7: push    edi
0x7B14D8: xor     ebp, ebp
0x7B14DA: push    44h ; 'D'
0x7B14DC: lea     eax, [esp+2B8h+var_250]
0x7B14E0: push    ebp
0x7B14E1: push    eax
0x7B14E2: mov     esi, ecx
0x7B14E4: mov     [esp+2C0h+FullPath], offset aImagespace1xVM; "imagespace\\1x\\v\\menuBG.v.hlsl"
0x7B14EC: mov     [esp+2C0h+var_254], ebp
0x7B14F0: call    __memset
0x7B14F5: push    44h ; 'D'
0x7B14F7: lea     ecx, [esp+2C4h+var_29C]
0x7B14FB: push    ebp
0x7B14FC: push    ecx
0x7B14FD: mov     [esp+2CCh+var_2A4], offset aImagespace1xPM; "imagespace\\1x\\p\\menuBG.p.hlsl"
0x7B1505: mov     [esp+2CCh+var_2A0], ebp
0x7B1509: call    __memset
0x7B150E: add     esp, 18h
0x7B1511: cmp     byte ptr ds:0B43070h, 0
0x7B1518: mov     edi, offset aVs_1_1; "vs_1_1"
0x7B151D: mov     ebx, offset aPs_1_3; "ps_1_3"
0x7B1522: jz      short loc_7B152E
0x7B1524: mov     edi, offset aVs_2_0; "vs_2_0"
0x7B1529: mov     ebx, offset aPs_2_0; "ps_2_0"
0x7B152E: mov     eax, [esp+2B4h+FullPath]
0x7B1532: cmp     eax, ebp
0x7B1534: jz      loc_7B15BD
0x7B153A: lea     edx, [esp+2B4h+FileName]
0x7B1541: push    edx; int
0x7B1542: push    eax; FullPath
0x7B1543: call    sub_801030
0x7B1548: push    ebp
0x7B1549: lea     eax, [esp+2C0h+var_20C]
0x7B1550: push    offset aMenubg03i_vso; "MENUBG%03i.vso"
0x7B1555: push    eax
0x7B1556: call    __sprintf
0x7B155B: add     esp, 14h
0x7B155E: push    ebp; int
0x7B155F: push    ebp; int
0x7B1560: lea     ecx, [esp+2BCh+var_20C]
0x7B1567: push    ecx; int
0x7B1568: push    edi; int
0x7B1569: lea     edx, [esp+2C4h+var_254]
0x7B156D: push    edx; int
0x7B156E: lea     eax, [esp+2C8h+FileName]
0x7B1575: push    eax; lpFileName
0x7B1576: mov     ecx, esi
0x7B1578: call    CreateVertexShader
0x7B157D: mov     edi, [esi+98h]
0x7B1583: mov     ebp, eax
0x7B1585: cmp     edi, ebp
0x7B1587: jz      short loc_7B15BD
0x7B1589: test    edi, edi
0x7B158B: jz      short loc_7B15A9
0x7B158D: lea     ecx, [edi+4]
0x7B1590: push    ecx; lpAddend
0x7B1591: call    dword ptr ds:0A2807Ch
0x7B1597: test    eax, eax
0x7B1599: jnz     short loc_7B15A9
0x7B159B: test    edi, edi
0x7B159D: jz      short loc_7B15A9
0x7B159F: mov     edx, [edi]
0x7B15A1: mov     eax, [edx]
0x7B15A3: push    1
0x7B15A5: mov     ecx, edi
0x7B15A7: call    eax
0x7B15A9: test    ebp, ebp
0x7B15AB: mov     [esi+98h], ebp
0x7B15B1: jz      short loc_7B15BD
0x7B15B3: add     ebp, 4
0x7B15B6: push    ebp; lpAddend
0x7B15B7: call    dword ptr ds:0A28078h
0x7B15BD: mov     eax, [esp+2B4h+var_2A4]
0x7B15C1: test    eax, eax
0x7B15C3: jz      loc_7B164F
0x7B15C9: lea     ecx, [esp+2B4h+FileName]
0x7B15D0: push    ecx; int
0x7B15D1: push    eax; FullPath
0x7B15D2: call    sub_801030
0x7B15D7: push    0
0x7B15D9: lea     edx, [esp+2C0h+var_20C]
0x7B15E0: push    offset aMenubg03i_pso; "MENUBG%03i.pso"
0x7B15E5: push    edx
0x7B15E6: call    __sprintf
0x7B15EB: add     esp, 14h
0x7B15EE: push    0; int
0x7B15F0: push    0; int
0x7B15F2: lea     eax, [esp+2BCh+var_20C]
0x7B15F9: push    eax; int
0x7B15FA: push    ebx; Str1
0x7B15FB: lea     ecx, [esp+2C4h+var_2A0]
0x7B15FF: push    ecx; int
0x7B1600: lea     edx, [esp+2C8h+FileName]
0x7B1607: push    edx; lpFileName
0x7B1608: mov     ecx, esi
0x7B160A: call    CreatePixelShader
0x7B160F: mov     edi, [esi+9Ch]
0x7B1615: mov     ebp, eax
0x7B1617: cmp     edi, ebp
0x7B1619: jz      short loc_7B164F
0x7B161B: test    edi, edi
0x7B161D: jz      short loc_7B163B
0x7B161F: lea     eax, [edi+4]
0x7B1622: push    eax; lpAddend
0x7B1623: call    dword ptr ds:0A2807Ch
0x7B1629: test    eax, eax
0x7B162B: jnz     short loc_7B163B
0x7B162D: test    edi, edi
0x7B162F: jz      short loc_7B163B
0x7B1631: mov     edx, [edi]
0x7B1633: mov     eax, [edx]
0x7B1635: push    1
0x7B1637: mov     ecx, edi
0x7B1639: call    eax
0x7B163B: test    ebp, ebp
0x7B163D: mov     [esi+9Ch], ebp
0x7B1643: jz      short loc_7B164F
0x7B1645: add     ebp, 4
0x7B1648: push    ebp; lpAddend
0x7B1649: call    dword ptr ds:0A28078h
0x7B164F: mov     ecx, [esp+2B4h+var_4]
0x7B1656: pop     edi
0x7B1657: pop     esi
0x7B1658: pop     ebp
0x7B1659: pop     ebx
0x7B165A: xor     ecx, esp
0x7B165C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x7B1661: add     esp, 2A4h
0x7B1667: retn
