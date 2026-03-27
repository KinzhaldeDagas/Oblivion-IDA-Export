0x4E1580: push    0FFFFFFFFh
0x4E1582: push    offset SEH_4E1580
0x4E1587: mov     eax, large fs:0
0x4E158D: push    eax
0x4E158E: sub     esp, 134h
0x4E1594: mov     eax, ds:0B30AACh
0x4E1599: xor     eax, esp
0x4E159B: mov     [esp+140h+var_10], eax
0x4E15A2: push    ebx
0x4E15A3: push    ebp
0x4E15A4: push    esi
0x4E15A5: push    edi
0x4E15A6: mov     eax, ds:0B30AACh
0x4E15AB: xor     eax, esp
0x4E15AD: push    eax
0x4E15AE: lea     eax, [esp+154h+var_C]
0x4E15B5: mov     large fs:0, eax
0x4E15BB: mov     ebp, ecx
0x4E15BD: mov     eax, [ebp+0]
0x4E15C0: mov     ebx, [ebp+1Ch]
0x4E15C3: mov     edx, [eax+168h]
0x4E15C9: mov     [esp+154h+var_134], ebx
0x4E15CD: call    edx
0x4E15CF: mov     ecx, offset TimeInfo
0x4E15D4: mov     esi, eax
0x4E15D6: call    OsGlobalsTime__UpdatetimeInfo
0x4E15DB: mov     eax, [ebp+0]
0x4E15DE: mov     edx, [eax+164h]
0x4E15E4: mov     ecx, ebp
0x4E15E6: call    edx
0x4E15E8: test    eax, eax
0x4E15EA: jz      short loc_4E15F3
0x4E15EC: mov     ecx, eax
0x4E15EE: call    sub_4728C0
0x4E15F3: mov     eax, [ebp+1Ch]
0x4E15F6: movzx   eax, byte ptr [eax+4]
0x4E15FA: sub     eax, 23h ; '#'
0x4E15FD: mov     ecx, [ebp+3Ch]
0x4E1600: mov     [esp+154h+var_138], ecx
0x4E1604: jz      loc_4E189F
0x4E160A: sub     eax, 1
0x4E160D: jnz     loc_4E18AF
0x4E1613: test    ecx, ecx
0x4E1615: jz      loc_4E189B
0x4E161B: mov     edx, [ebp+0]
0x4E161E: mov     eax, [edx+190h]
0x4E1624: mov     ecx, ebp
0x4E1626: mov     byte ptr [esp+154h+var_13C], 1
0x4E162B: mov     byte ptr [esp+154h+var_140], 1
0x4E1630: call    eax
0x4E1632: test    al, al
0x4E1634: jz      short loc_4E165F
0x4E1636: mov     ecx, ebp
0x4E1638: call    sub_5E0380
0x4E163D: test    eax, eax
0x4E163F: jz      short loc_4E165F
0x4E1641: mov     eax, [eax+1Ch]
0x4E1644: mov     ecx, eax
0x4E1646: shr     ecx, 14h
0x4E1649: test    cl, 1
0x4E164C: jz      short loc_4E1653
0x4E164E: mov     byte ptr [esp+154h+var_13C], 0
0x4E1653: shr     eax, 15h
0x4E1656: test    al, 1
0x4E1658: jz      short loc_4E165F
0x4E165A: mov     byte ptr [esp+154h+var_140], 0
0x4E165F: mov     ecx, ds:0B33B00h
0x4E1665: mov     edx, [ecx+18h]
0x4E1668: shr     edx, 1
0x4E166A: test    dl, 1
0x4E166D: jz      short loc_4E1688
0x4E166F: push    1
0x4E1671: push    ebp
0x4E1672: call    sub_4533F0
0x4E1677: test    eax, 8000000h
0x4E167C: jz      short loc_4E1688
0x4E167E: push    ebp
0x4E167F: mov     ecx, ebx
0x4E1681: call    sub_51D460
0x4E1686: jmp     short loc_4E169C
0x4E1688: mov     eax, [esp+154h+var_140]
0x4E168C: mov     ecx, [esp+154h+var_13C]
0x4E1690: push    0
0x4E1692: push    eax
0x4E1693: push    ecx
0x4E1694: push    ebp
0x4E1695: mov     ecx, ebx
0x4E1697: call    sub_51E240
0x4E169C: lea     ecx, [ebx+0ECh]
0x4E16A2: call    sub_6899C0
0x4E16A7: mov     edi, eax
0x4E16A9: test    edi, edi
0x4E16AB: mov     [esp+154h+var_13C], edi
0x4E16AF: jz      loc_4E189B
0x4E16B5: jmp     short loc_4E16C4
0x4E16B7: jmp     short loc_4E16C0
0x4E16B9: align 10h
0x4E16C0: mov     edi, [esp+154h+var_13C]
0x4E16C4: cmp     dword ptr [edi+4], 0
0x4E16C8: jnz     short loc_4E16D3
0x4E16CA: cmp     dword ptr [edi], 0
0x4E16CD: jz      loc_4E189B
0x4E16D3: mov     edx, [ebx+0ACh]
0x4E16D9: mov     eax, [edx+14h]
0x4E16DC: lea     ecx, [ebx+0ACh]
0x4E16E2: call    eax
0x4E16E4: lea     edx, [esp+154h+Str]
0x4E16E8: mov     cl, [eax]
0x4E16EA: mov     [edx], cl
0x4E16EC: add     eax, 1
0x4E16EF: add     edx, 1
0x4E16F2: test    cl, cl
0x4E16F4: jnz     short loc_4E16E8
0x4E16F6: lea     ecx, [esp+154h+Str]
0x4E16FA: push    5Ch ; '\'; Ch
0x4E16FC: push    ecx; Str
0x4E16FD: call    _strrchr
0x4E1702: mov     ecx, [edi]
0x4E1704: add     esp, 8
0x4E1707: lea     edx, [eax+1]
0x4E170A: lea     ebx, [ebx+0]
0x4E1710: mov     al, [ecx]
0x4E1712: mov     [edx], al
0x4E1714: add     ecx, 1
0x4E1717: add     edx, 1
0x4E171A: test    al, al
0x4E171C: jnz     short loc_4E1710
0x4E171E: mov     ecx, ds:0B33A1Ch
0x4E1724: push    1
0x4E1726: push    3
0x4E1728: push    0
0x4E172A: lea     edx, [esp+160h+Str]
0x4E172E: push    edx
0x4E172F: call    sub_439EB0
0x4E1734: mov     esi, eax
0x4E1736: test    esi, esi
0x4E1738: jz      loc_4E188C
0x4E173E: mov     eax, [ebp+0]
0x4E1741: mov     edx, [eax+0ECh]
0x4E1747: mov     ecx, ebp
0x4E1749: call    edx
0x4E174B: fstp    [esp+154h+var_140]
0x4E174F: lea     ecx, [esp+154h+var_130]
0x4E1753: call    sub_478B90
0x4E1758: fld     [esp+154h+var_140]
0x4E175C: fst     [esp+154h+var_118]
0x4E1760: fst     [esp+154h+var_11C]
0x4E1764: fstp    [esp+154h+var_120]
0x4E1768: xor     eax, eax
0x4E176A: mov     [esp+154h+var_4], eax
0x4E1771: mov     [esp+154h+var_140], eax
0x4E1775: push    esi
0x4E1776: mov     byte ptr [esp+158h+var_4], 1
0x4E177E: call    sub_480820
0x4E1783: add     esp, 4
0x4E1786: test    al, al
0x4E1788: jz      short loc_4E17AB
0x4E178A: mov     ecx, ds:0B333A0h
0x4E1790: lea     eax, [esp+154h+var_130]
0x4E1794: push    eax
0x4E1795: push    esi
0x4E1796: call    sub_4430C0
0x4E179B: push    eax; a2
0x4E179C: lea     ecx, [esp+158h+var_140]; this
0x4E17A0: call    NiSmartPointer_Set??
0x4E17A5: mov     esi, [esp+154h+var_140]
0x4E17A9: jmp     short loc_4E17B9
0x4E17AB: lea     ecx, [esp+154h+var_130]
0x4E17AF: push    ecx
0x4E17B0: mov     ecx, esi
0x4E17B2: call    sub_700610
0x4E17B7: mov     esi, eax
0x4E17B9: push    esi
0x4E17BA: call    sub_471B80
0x4E17BF: mov     edx, [esp+158h+var_138]
0x4E17C3: add     esp, 4
0x4E17C6: push    offset aBip01; "Bip01"
0x4E17CB: push    edx
0x4E17CC: mov     ecx, ebp
0x4E17CE: mov     bl, al
0x4E17D0: call    sub_4D96F0
0x4E17D5: test    bl, bl
0x4E17D7: mov     edi, eax
0x4E17D9: jz      short loc_4E181B
0x4E17DB: test    edi, edi
0x4E17DD: jz      short loc_4E181B
0x4E17DF: mov     eax, [edi]
0x4E17E1: mov     edx, [eax+58h]
0x4E17E4: push    offset aSkinattachment; "SkinAttachment"
0x4E17E9: mov     ecx, edi
0x4E17EB: call    edx
0x4E17ED: test    eax, eax
0x4E17EF: push    1
0x4E17F1: push    esi
0x4E17F2: jz      short loc_4E17FA
0x4E17F4: mov     edx, [eax]
0x4E17F6: mov     ecx, eax
0x4E17F8: jmp     short loc_4E1801
0x4E17FA: mov     edi, [edi+1Ch]
0x4E17FD: mov     edx, [edi]
0x4E17FF: mov     ecx, edi
0x4E1801: mov     eax, [edx+84h]
0x4E1807: call    eax
0x4E1809: mov     ecx, [esp+154h+var_138]
0x4E180D: push    0
0x4E180F: push    esi
0x4E1810: push    ecx
0x4E1811: call    sub_478EC0
0x4E1816: add     esp, 0Ch
0x4E1819: jmp     short loc_4E1831
0x4E181B: mov     edx, [esp+154h+var_138]
0x4E181F: push    0
0x4E1821: push    0FFFFFFFFh
0x4E1823: push    0
0x4E1825: push    0
0x4E1827: push    esi
0x4E1828: push    edx
0x4E1829: call    sub_479140
0x4E182E: add     esp, 18h
0x4E1831: mov     esi, [esp+154h+var_140]
0x4E1835: test    esi, esi
0x4E1837: mov     byte ptr [esp+154h+var_4], 0
0x4E183F: jz      short loc_4E1859
0x4E1841: lea     eax, [esi+4]
0x4E1844: push    eax; lpAddend
0x4E1845: call    dword ptr ds:0A2807Ch
0x4E184B: test    eax, eax
0x4E184D: jnz     short loc_4E1859
0x4E184F: mov     edx, [esi]
0x4E1851: mov     eax, [edx]
0x4E1853: push    1
0x4E1855: mov     ecx, esi
0x4E1857: call    eax
0x4E1859: mov     ecx, [esp+154h+var_130]
0x4E185D: test    ecx, ecx
0x4E185F: mov     [esp+154h+var_4], 0FFFFFFFFh
0x4E186A: jz      short loc_4E1874
0x4E186C: mov     edx, [ecx]
0x4E186E: mov     eax, [edx]
0x4E1870: push    1
0x4E1872: call    eax
0x4E1874: mov     ecx, [esp+154h+var_12C]
0x4E1878: test    ecx, ecx
0x4E187A: jz      short loc_4E1884
0x4E187C: mov     edx, [ecx]
0x4E187E: mov     eax, [edx]
0x4E1880: push    1
0x4E1882: call    eax
0x4E1884: mov     ebx, [esp+154h+var_134]
0x4E1888: mov     edi, [esp+154h+var_13C]
0x4E188C: mov     eax, [edi+4]
0x4E188F: test    eax, eax
0x4E1891: mov     [esp+154h+var_13C], eax
0x4E1895: jnz     loc_4E16C0
0x4E189B: mov     bl, 1
0x4E189D: jmp     short loc_4E18C1
0x4E189F: test    esi, esi
0x4E18A1: jz      short loc_4E18AB
0x4E18A3: push    ebp; int
0x4E18A4: mov     ecx, ebx; int
0x4E18A6: call    sub_526DB0
0x4E18AB: mov     bl, 1
0x4E18AD: jmp     short loc_4E18C1
0x4E18AF: mov     ebp, [ebp+1Ch]
0x4E18B2: mov     edx, [ebp+0]
0x4E18B5: mov     eax, [edx+0FCh]
0x4E18BB: mov     ecx, ebp
0x4E18BD: call    eax
0x4E18BF: mov     bl, al
0x4E18C1: mov     ecx, offset TimeInfo
0x4E18C6: call    sub_47D0F0
0x4E18CB: mov     al, bl
0x4E18CD: mov     ecx, [esp+154h+var_C]
0x4E18D4: mov     large fs:0, ecx
0x4E18DB: pop     ecx
0x4E18DC: pop     edi
0x4E18DD: pop     esi
0x4E18DE: pop     ebp
0x4E18DF: pop     ebx
0x4E18E0: mov     ecx, [esp+140h+var_10]
0x4E18E7: xor     ecx, esp
0x4E18E9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4E18EE: add     esp, 140h
0x4E18F4: retn
