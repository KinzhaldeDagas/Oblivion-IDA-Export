0x5F1590: push    ebp
0x5F1591: mov     ebp, [esp+4+arg_0]
0x5F1595: push    esi; int
0x5F1596: mov     esi, ecx
0x5F1598: cmp     dword ptr [esi+58h], 0
0x5F159C: jz      loc_5F1902
0x5F15A2: mov     ecx, [esi+58h]
0x5F15A5: mov     eax, [ecx]
0x5F15A7: mov     edx, [eax+184h]
0x5F15AD: call    edx
0x5F15AF: test    eax, eax
0x5F15B1: jz      short loc_5F15C8
0x5F15B3: cmp     byte ptr [eax+20h], 12h
0x5F15B7: jnz     short loc_5F15C8
0x5F15B9: mov     eax, [esi+58h]
0x5F15BC: cmp     [eax+8], ebp
0x5F15BF: jz      short loc_5F15C8
0x5F15C1: mov     ecx, esi; int
0x5F15C3: call    sub_5EAE70
0x5F15C8: cmp     dword ptr [esi+58h], 0
0x5F15CC: jz      loc_5F1902
0x5F15D2: mov     ecx, [esi+58h]
0x5F15D5: mov     edx, [ecx]
0x5F15D7: mov     eax, [edx+194h]
0x5F15DD: push    ebx
0x5F15DE: push    esi
0x5F15DF: call    eax
0x5F15E1: mov     edx, [esi]
0x5F15E3: mov     eax, [edx+380h]
0x5F15E9: mov     ecx, esi
0x5F15EB: call    eax
0x5F15ED: test    eax, eax
0x5F15EF: mov     bl, byte ptr [esp+0Ch+arg_4]
0x5F15F3: jnz     loc_5F1690
0x5F15F9: mov     al, [ebp+20h]
0x5F15FC: cmp     al, 18h
0x5F15FE: jz      loc_5F1690
0x5F1604: cmp     al, 15h
0x5F1606: jz      loc_5F1690
0x5F160C: mov     edx, [esi]
0x5F160E: mov     eax, [edx+18Ch]
0x5F1614: mov     ecx, esi
0x5F1616: call    eax
0x5F1618: test    eax, eax
0x5F161A: jz      short loc_5F1690
0x5F161C: mov     al, [ebp+20h]
0x5F161F: cmp     al, 0Fh
0x5F1621: jz      short loc_5F1627
0x5F1623: cmp     al, 12h
0x5F1625: jnz     short loc_5F1638
0x5F1627: mov     edx, [esi]
0x5F1629: mov     eax, [edx+18Ch]
0x5F162F: mov     ecx, esi
0x5F1631: call    eax
0x5F1633: cmp     eax, 4
0x5F1636: jz      short loc_5F1644
0x5F1638: mov     edx, [esi]
0x5F163A: mov     eax, [edx+320h]
0x5F1640: mov     ecx, esi
0x5F1642: call    eax
0x5F1644: test    bl, bl
0x5F1646: jz      short loc_5F1690
0x5F1648: cmp     [esp+0Ch+arg_8], 0
0x5F164D: jz      loc_5F1901
0x5F1653: mov     al, [ebp+20h]
0x5F1656: cmp     al, 13h
0x5F1658: jz      loc_5F1901
0x5F165E: cmp     al, 12h
0x5F1660: jz      loc_5F1901
0x5F1666: cmp     al, 11h
0x5F1668: jz      loc_5F1901
0x5F166E: lea     ecx, [esi+44h]
0x5F1671: call    ExtraDataList__GetExtraPackage
0x5F1676: cmp     ebp, eax
0x5F1678: jz      loc_5F1901
0x5F167E: mov     edx, [ebp+0]
0x5F1681: mov     eax, [edx+10h]
0x5F1684: push    1
0x5F1686: mov     ecx, ebp
0x5F1688: call    eax
0x5F168A: pop     ebx
0x5F168B: pop     esi
0x5F168C: pop     ebp
0x5F168D: retn    0Ch
0x5F1690: test    ebp, ebp
0x5F1692: jz      short loc_5F16A4
0x5F1694: cmp     [esp+0Ch+arg_8], 0
0x5F1699: jz      short loc_5F16A4
0x5F169B: push    1
0x5F169D: mov     ecx, ebp
0x5F169F: call    sub_566830
0x5F16A4: test    bl, bl
0x5F16A6: jnz     loc_5F186B
0x5F16AC: mov     ecx, [esi+58h]
0x5F16AF: mov     edx, [ecx]
0x5F16B1: mov     eax, [edx+15Ch]
0x5F16B7: push    edi
0x5F16B8: call    eax
0x5F16BA: fcomp   dword ptr ds:0A2FAA8h
0x5F16C0: fnstsw  ax
0x5F16C2: test    ah, 41h
0x5F16C5: jnz     short loc_5F1701
0x5F16C7: mov     ecx, [esi+58h]
0x5F16CA: mov     edx, [ecx]
0x5F16CC: mov     eax, [edx+15Ch]
0x5F16D2: mov     edi, [ecx]
0x5F16D4: call    eax
0x5F16D6: fmul    qword ptr ds:0A3D360h
0x5F16DC: mov     edx, [edi+160h]
0x5F16E2: push    ecx
0x5F16E3: mov     ecx, [esi+58h]
0x5F16E6: fstp    [esp+10h+arg_C]
0x5F16EA: fld     [esp+10h+arg_C]
0x5F16EE: fstp    [esp+10h+var_10]
0x5F16F1: call    edx
0x5F16F3: mov     ecx, [esi+58h]
0x5F16F6: mov     eax, [ecx]
0x5F16F8: mov     edx, [eax+194h]
0x5F16FE: push    esi
0x5F16FF: call    edx
0x5F1701: mov     ecx, [esi+58h]
0x5F1704: mov     eax, [ecx]
0x5F1706: mov     edx, [eax+174h]
0x5F170C: call    edx
0x5F170E: test    eax, eax
0x5F1710: jz      short loc_5F176F
0x5F1712: mov     ecx, [esi+58h]
0x5F1715: mov     eax, [ecx]
0x5F1717: mov     edx, [eax+174h]
0x5F171D: call    edx
0x5F171F: movsx   eax, byte ptr [eax+20h]
0x5F1723: cmp     eax, 15h
0x5F1726: jl      short loc_5F172D
0x5F1728: cmp     eax, 17h
0x5F172B: jle     short loc_5F176F
0x5F172D: mov     ecx, esi
0x5F172F: call    sub_5E1030
0x5F1734: test    al, al
0x5F1736: jz      short loc_5F1760
0x5F1738: mov     eax, [esi]
0x5F173A: mov     edx, [eax+380h]
0x5F1740: mov     ecx, esi
0x5F1742: call    edx
0x5F1744: mov     edx, [eax]
0x5F1746: mov     ecx, eax
0x5F1748: mov     eax, [edx+38Ch]
0x5F174E: push    0
0x5F1750: call    eax
0x5F1752: mov     edx, [esi]
0x5F1754: mov     eax, [edx+384h]
0x5F175A: push    0
0x5F175C: mov     ecx, esi
0x5F175E: call    eax
0x5F1760: mov     ecx, [esi+58h]
0x5F1763: mov     edx, [ecx]
0x5F1765: mov     eax, [edx+178h]
0x5F176B: push    0
0x5F176D: call    eax
0x5F176F: mov     ecx, [esi+58h]
0x5F1772: mov     ecx, [ecx+8]
0x5F1775: test    ecx, ecx
0x5F1777: jz      short loc_5F17EC
0x5F1779: cmp     byte ptr [ebp+20h], 1
0x5F177D: jz      short loc_5F1785
0x5F177F: cmp     byte ptr [ecx+20h], 1
0x5F1783: jz      short loc_5F17EC
0x5F1785: call    sub_5660A0
0x5F178A: test    al, al
0x5F178C: jz      short loc_5F17EC
0x5F178E: cmp     byte ptr [ebp+20h], 1
0x5F1792: jnz     short loc_5F17CB
0x5F1794: mov     edx, [esi+58h]
0x5F1797: mov     edi, [edx+8]
0x5F179A: lea     ecx, [esi+44h]
0x5F179D: call    ExtraDataList__GetExtraPackage
0x5F17A2: cmp     edi, eax
0x5F17A4: jz      short loc_5F17B7
0x5F17A6: test    edi, edi
0x5F17A8: jz      short loc_5F17EC
0x5F17AA: mov     eax, [edi]
0x5F17AC: mov     edx, [eax+10h]
0x5F17AF: push    1
0x5F17B1: mov     ecx, edi
0x5F17B3: call    edx
0x5F17B5: jmp     short loc_5F17EC
0x5F17B7: mov     eax, [ebp+0]
0x5F17BA: mov     edx, [eax+10h]
0x5F17BD: push    1
0x5F17BF: mov     ecx, ebp
0x5F17C1: call    edx
0x5F17C3: mov     eax, [esi+58h]
0x5F17C6: mov     ebp, [eax+8]
0x5F17C9: jmp     short loc_5F17EC
0x5F17CB: mov     ecx, [esi+58h]
0x5F17CE: mov     edi, [ecx+8]
0x5F17D1: lea     ecx, [esi+44h]
0x5F17D4: call    ExtraDataList__GetExtraPackage
0x5F17D9: cmp     edi, eax
0x5F17DB: jz      short loc_5F17EC
0x5F17DD: test    edi, edi
0x5F17DF: jz      short loc_5F17EC
0x5F17E1: mov     edx, [edi]
0x5F17E3: mov     eax, [edx+10h]
0x5F17E6: push    1
0x5F17E8: mov     ecx, edi
0x5F17EA: call    eax
0x5F17EC: mov     ecx, [esi+58h]
0x5F17EF: mov     [ecx+8], ebp
0x5F17F2: mov     edx, [esi+58h]
0x5F17F5: push    ebp
0x5F17F6: mov     ecx, esi
0x5F17F8: mov     dword ptr [edx+4], 0
0x5F17FF: call    sub_5E8DE0
0x5F1804: mov     eax, [esi]
0x5F1806: mov     edx, [eax+164h]
0x5F180C: mov     ecx, esi
0x5F180E: call    edx
0x5F1810: test    eax, eax
0x5F1812: pop     edi
0x5F1813: jz      loc_5F18EB
0x5F1819: mov     eax, [esi]
0x5F181B: mov     edx, [eax+18Ch]
0x5F1821: mov     ecx, esi
0x5F1823: call    edx
0x5F1825: test    eax, eax
0x5F1827: jz      short loc_5F184F
0x5F1829: mov     eax, [esi]
0x5F182B: mov     edx, [eax+18Ch]
0x5F1831: mov     ecx, esi
0x5F1833: call    edx
0x5F1835: cmp     eax, 9
0x5F1838: jz      short loc_5F184F
0x5F183A: mov     eax, [esi]
0x5F183C: mov     edx, [eax+18Ch]
0x5F1842: mov     ecx, esi
0x5F1844: call    edx
0x5F1846: cmp     eax, 4
0x5F1849: jnz     loc_5F18EB
0x5F184F: mov     eax, [esi]
0x5F1851: mov     edx, [eax+164h]
0x5F1857: push    0
0x5F1859: push    1
0x5F185B: mov     ecx, esi
0x5F185D: call    edx
0x5F185F: mov     ecx, eax
0x5F1861: call    sub_475440
0x5F1866: jmp     loc_5F18EB
0x5F186B: mov     eax, [esi]
0x5F186D: mov     edx, [eax+380h]
0x5F1873: mov     ecx, esi
0x5F1875: call    edx
0x5F1877: test    eax, eax
0x5F1879: jz      short loc_5F18C0
0x5F187B: mov     ecx, [esi+58h]
0x5F187E: mov     eax, [ecx]
0x5F1880: mov     edx, [eax+36Ch]
0x5F1886: call    edx
0x5F1888: cmp     eax, 4
0x5F188B: jz      short loc_5F18C0
0x5F188D: mov     al, [ebp+20h]
0x5F1890: cmp     al, 16h
0x5F1892: jz      short loc_5F18C0
0x5F1894: cmp     al, 17h
0x5F1896: jz      short loc_5F18C0
0x5F1898: mov     eax, [esi]
0x5F189A: mov     edx, [eax+380h]
0x5F18A0: mov     ecx, esi
0x5F18A2: call    edx
0x5F18A4: mov     edx, [eax]
0x5F18A6: mov     ecx, eax
0x5F18A8: mov     eax, [edx+38Ch]
0x5F18AE: push    0
0x5F18B0: call    eax
0x5F18B2: mov     edx, [esi]
0x5F18B4: mov     eax, [edx+384h]
0x5F18BA: push    0
0x5F18BC: mov     ecx, esi
0x5F18BE: call    eax
0x5F18C0: mov     ecx, [esi+58h]
0x5F18C3: mov     edx, [ecx]
0x5F18C5: mov     eax, [edx+178h]
0x5F18CB: push    ebp
0x5F18CC: call    eax
0x5F18CE: mov     ecx, [esi+58h]
0x5F18D1: mov     edx, [ecx]
0x5F18D3: mov     eax, [edx+17Ch]
0x5F18D9: push    0
0x5F18DB: call    eax
0x5F18DD: mov     edx, [esi]
0x5F18DF: mov     eax, [edx+40h]
0x5F18E2: push    80000h
0x5F18E7: mov     ecx, esi
0x5F18E9: call    eax
0x5F18EB: mov     ecx, [esi+58h]
0x5F18EE: mov     edx, [ecx]
0x5F18F0: mov     eax, [edx+0D0h]
0x5F18F6: push    0
0x5F18F8: call    eax
0x5F18FA: mov     ecx, esi
0x5F18FC: call    sub_5E7BE0
0x5F1901: pop     ebx
0x5F1902: pop     esi
0x5F1903: pop     ebp
0x5F1904: retn    0Ch
