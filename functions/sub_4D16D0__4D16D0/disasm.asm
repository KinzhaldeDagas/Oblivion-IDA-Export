0x4D16D0: push    0FFFFFFFFh
0x4D16D2: push    offset SEH_4D16D0
0x4D16D7: mov     eax, large fs:0
0x4D16DD: push    eax
0x4D16DE: sub     esp, 1Ch
0x4D16E1: push    ebx
0x4D16E2: push    ebp
0x4D16E3: push    esi
0x4D16E4: push    edi
0x4D16E5: mov     eax, ds:0B30AACh
0x4D16EA: xor     eax, esp
0x4D16EC: push    eax
0x4D16ED: lea     eax, [esp+3Ch+var_C]
0x4D16F1: mov     large fs:0, eax
0x4D16F7: xor     al, al
0x4D16F9: xor     esi, esi
0x4D16FB: cmp     [esp+3Ch+arg_4], esi
0x4D16FF: mov     byte ptr [esp+3Ch+var_28+3], al
0x4D1703: jz      loc_4D197A
0x4D1709: mov     ebp, [esp+3Ch+arg_0]
0x4D170D: cmp     ebp, esi
0x4D170F: jz      loc_4D197A
0x4D1715: mov     eax, [ebp+0]
0x4D1718: mov     edx, [eax+18h]
0x4D171B: push    esi
0x4D171C: push    esi
0x4D171D: mov     ecx, ebp
0x4D171F: call    edx
0x4D1721: mov     al, [ebp+24h]
0x4D1724: test    al, al
0x4D1726: mov     ebx, 1
0x4D172B: jz      loc_4D196C
0x4D1731: mov     edx, [ebp+4]
0x4D1734: push    ebx
0x4D1735: lea     eax, [esp+40h+var_20]
0x4D1739: push    eax
0x4D173A: push    4
0x4D173C: lea     ecx, [esp+48h+var_1C]
0x4D1740: push    ecx
0x4D1741: push    ebp
0x4D1742: mov     byte ptr [esp+50h+var_28+2], 0
0x4D1747: mov     [esp+50h+var_1C], esi
0x4D174B: mov     [esp+50h+var_20], ebx
0x4D174F: call    edx
0x4D1751: add     esp, 14h
0x4D1754: cmp     eax, 4
0x4D1757: jz      short loc_4D175D
0x4D1759: mov     byte ptr [esp+3Ch+var_28+2], bl
0x4D175D: xor     edi, edi
0x4D175F: cmp     byte ptr [esp+3Ch+var_28+2], 0
0x4D1764: mov     [esp+3Ch+var_20], edi
0x4D1768: jnz     loc_4D196C
0x4D176E: jmp     short loc_4D1774
0x4D1770: mov     edi, [esp+3Ch+var_20]
0x4D1774: mov     eax, [esp+3Ch+var_1C]
0x4D1778: cmp     edi, eax
0x4D177A: jnb     loc_4D1959
0x4D1780: mov     edx, [ebp+4]
0x4D1783: push    ebx
0x4D1784: lea     eax, [esp+40h+var_14]
0x4D1788: push    eax
0x4D1789: push    4
0x4D178B: lea     ecx, [esp+48h+a1]
0x4D178F: push    ecx
0x4D1790: push    ebp
0x4D1791: mov     [esp+50h+a1], esi
0x4D1795: xor     edi, edi
0x4D1797: mov     [esp+50h+var_14], ebx
0x4D179B: call    edx
0x4D179D: add     esp, 14h
0x4D17A0: cmp     eax, 4
0x4D17A3: jnz     short loc_4D17D1
0x4D17A5: mov     eax, [esp+3Ch+a1]
0x4D17A9: cmp     eax, esi
0x4D17AB: jz      short loc_4D17D1
0x4D17AD: push    esi; int
0x4D17AE: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x4D17B3: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4D17B8: push    esi; int
0x4D17B9: push    eax; a1
0x4D17BA: call    TESForm_LookupByFormID
0x4D17BF: add     esp, 4
0x4D17C2: push    eax; void *
0x4D17C3: call    OblivionDynamicCast
0x4D17C8: mov     edi, eax
0x4D17CA: add     esp, 14h
0x4D17CD: cmp     edi, esi
0x4D17CF: jnz     short loc_4D17D5
0x4D17D1: mov     byte ptr [esp+3Ch+var_28+2], bl
0x4D17D5: mov     edx, [ebp+4]
0x4D17D8: push    ebx
0x4D17D9: lea     eax, [esp+40h+var_14]
0x4D17DD: push    eax
0x4D17DE: push    4
0x4D17E0: lea     ecx, [esp+48h+var_24]
0x4D17E4: push    ecx
0x4D17E5: push    ebp
0x4D17E6: mov     [esp+50h+var_24], esi
0x4D17EA: mov     [esp+50h+var_14], ebx
0x4D17EE: call    edx
0x4D17F0: add     esp, 14h
0x4D17F3: cmp     eax, 4
0x4D17F6: jz      short loc_4D17FC
0x4D17F8: mov     byte ptr [esp+3Ch+var_28+2], bl
0x4D17FC: cmp     edi, esi
0x4D17FE: jz      short loc_4D1816
0x4D1800: movzx   eax, byte ptr [edi+4]
0x4D1804: cmp     eax, 1Eh
0x4D1807: jnz     short loc_4D1816
0x4D1809: mov     eax, [esp+3Ch+arg_8]
0x4D180D: cmp     eax, 4
0x4D1810: jz      short loc_4D1828
0x4D1812: cmp     eax, ebx
0x4D1814: jmp     short loc_4D1822
0x4D1816: cmp     [esp+3Ch+arg_8], 4
0x4D181B: jz      short loc_4D1828
0x4D181D: cmp     [esp+3Ch+arg_8], 2
0x4D1822: jnz     loc_4D1921
0x4D1828: cmp     edi, esi
0x4D182A: jz      loc_4D1921
0x4D1830: cmp     [esp+3Ch+var_24], esi
0x4D1834: jz      loc_4D1948
0x4D183A: push    34h ; '4'; Size
0x4D183C: call    FormHeapAlloc
0x4D1841: add     esp, 4
0x4D1844: mov     [esp+3Ch+var_14], eax
0x4D1848: cmp     eax, esi
0x4D184A: mov     [esp+3Ch+var_4], esi
0x4D184E: jz      short loc_4D1859
0x4D1850: mov     ecx, eax
0x4D1852: call    sub_4CC7C0
0x4D1857: mov     esi, eax
0x4D1859: mov     eax, [esp+3Ch+var_24]
0x4D185D: mov     [esi+30h], eax
0x4D1860: mov     eax, [esp+3Ch+var_24]
0x4D1864: lea     ecx, [eax+eax*2]
0x4D1867: push    ecx
0x4D1868: lea     ecx, [esi+10h]
0x4D186B: mov     [esp+40h+var_4], 0FFFFFFFFh
0x4D1873: call    sub_4CA040
0x4D1878: mov     eax, [esp+3Ch+var_24]
0x4D187C: lea     edx, [eax+eax*2]
0x4D187F: push    edx
0x4D1880: mov     ecx, esi
0x4D1882: call    sub_4CA040
0x4D1887: mov     eax, [esp+3Ch+var_24]
0x4D188B: push    eax
0x4D188C: lea     ecx, [esi+20h]
0x4D188F: call    sub_4CA040
0x4D1894: mov     ecx, [esp+3Ch+arg_4]; this
0x4D1898: push    esi; a3
0x4D1899: push    edi; a2
0x4D189A: call    NiTMap_SetAt
0x4D189F: mov     eax, [esp+3Ch+var_24]
0x4D18A3: mov     edx, [ebp+4]
0x4D18A6: lea     edi, [eax+eax*2]
0x4D18A9: mov     eax, [esi+14h]
0x4D18AC: push    ebx
0x4D18AD: lea     ecx, [esp+40h+var_14]
0x4D18B1: push    ecx
0x4D18B2: add     edi, edi
0x4D18B4: add     edi, edi
0x4D18B6: push    edi
0x4D18B7: push    eax
0x4D18B8: push    ebp
0x4D18B9: mov     [esp+50h+var_14], ebx
0x4D18BD: call    edx
0x4D18BF: add     esp, 14h
0x4D18C2: cmp     eax, edi
0x4D18C4: jz      short loc_4D18CA
0x4D18C6: mov     byte ptr [esp+3Ch+var_28+2], bl
0x4D18CA: mov     eax, [esp+3Ch+var_24]
0x4D18CE: mov     edx, [ebp+4]
0x4D18D1: lea     edi, [eax+eax*2]
0x4D18D4: mov     eax, [esi+4]
0x4D18D7: push    ebx
0x4D18D8: lea     ecx, [esp+40h+var_14]
0x4D18DC: push    ecx
0x4D18DD: add     edi, edi
0x4D18DF: add     edi, edi
0x4D18E1: push    edi
0x4D18E2: push    eax
0x4D18E3: push    ebp
0x4D18E4: mov     [esp+50h+var_14], ebx
0x4D18E8: call    edx
0x4D18EA: add     esp, 14h
0x4D18ED: cmp     eax, edi
0x4D18EF: jz      short loc_4D18F5
0x4D18F1: mov     byte ptr [esp+3Ch+var_28+2], bl
0x4D18F5: mov     edi, [esp+3Ch+var_24]
0x4D18F9: mov     esi, [esi+24h]
0x4D18FC: mov     ecx, [ebp+4]
0x4D18FF: push    ebx
0x4D1900: lea     eax, [esp+40h+var_10]
0x4D1904: push    eax
0x4D1905: add     edi, edi
0x4D1907: add     edi, edi
0x4D1909: push    edi
0x4D190A: push    esi
0x4D190B: push    ebp
0x4D190C: mov     [esp+50h+var_10], ebx
0x4D1910: call    ecx
0x4D1912: add     esp, 14h
0x4D1915: xor     esi, esi
0x4D1917: cmp     eax, edi
0x4D1919: jz      short loc_4D1948
0x4D191B: mov     byte ptr [esp+3Ch+var_28+2], bl
0x4D191F: jmp     short loc_4D1948
0x4D1921: mov     eax, [esp+3Ch+var_24]
0x4D1925: cmp     eax, esi
0x4D1927: jz      short loc_4D1948
0x4D1929: mov     ecx, ds:0A853D4h
0x4D192F: mov     edx, [ebp+0]
0x4D1932: mov     edx, [edx+0Ch]
0x4D1935: push    ecx
0x4D1936: lea     ecx, ds:0[eax*8]
0x4D193D: sub     ecx, eax
0x4D193F: add     ecx, ecx
0x4D1941: add     ecx, ecx
0x4D1943: push    ecx
0x4D1944: mov     ecx, ebp
0x4D1946: call    edx
0x4D1948: add     [esp+3Ch+var_20], ebx
0x4D194C: cmp     byte ptr [esp+3Ch+var_28+2], 0
0x4D1951: jz      loc_4D1770
0x4D1957: jmp     short loc_4D196C
0x4D1959: cmp     byte ptr [esp+3Ch+var_28+2], 0
0x4D195E: jnz     short loc_4D196C
0x4D1960: cmp     eax, esi
0x4D1962: jz      short loc_4D196C
0x4D1964: cmp     edi, eax
0x4D1966: jnz     short loc_4D196C
0x4D1968: mov     byte ptr [esp+3Ch+var_28+3], bl
0x4D196C: mov     eax, [ebp+0]
0x4D196F: mov     edx, [eax]
0x4D1971: push    ebx
0x4D1972: mov     ecx, ebp
0x4D1974: call    edx
0x4D1976: mov     al, byte ptr [esp+3Ch+var_28+3]
0x4D197A: mov     ecx, [esp+3Ch+var_C]
0x4D197E: mov     large fs:0, ecx
0x4D1985: pop     ecx
0x4D1986: pop     edi
0x4D1987: pop     esi
0x4D1988: pop     ebp
0x4D1989: pop     ebx
0x4D198A: add     esp, 28h
0x4D198D: retn
