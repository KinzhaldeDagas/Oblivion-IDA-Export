0x7B1670: push    0FFFFFFFFh
0x7B1672: push    offset SEH_7B1670
0x7B1677: mov     eax, large fs:0
0x7B167D: push    eax
0x7B167E: sub     esp, 8
0x7B1681: push    ebx
0x7B1682: push    ebp
0x7B1683: push    esi
0x7B1684: push    edi
0x7B1685: mov     eax, ds:0B30AACh
0x7B168A: xor     eax, esp
0x7B168C: push    eax
0x7B168D: lea     eax, [esp+28h+var_C]
0x7B1691: mov     large fs:0, eax
0x7B1697: mov     edi, ecx
0x7B1699: xor     esi, esi
0x7B169B: xor     ebx, ebx
0x7B169D: mov     [esp+28h+var_14], esi
0x7B16A1: lea     eax, [esp+28h+var_10]
0x7B16A5: push    eax
0x7B16A6: mov     [esp+2Ch+var_4], ebx
0x7B16AA: call    sub_7606A0
0x7B16AF: add     esp, 4
0x7B16B2: mov     ebp, eax
0x7B16B4: mov     ecx, [edi+94h]
0x7B16BA: cmp     ecx, [ebp+0]
0x7B16BD: mov     byte ptr [esp+28h+var_4], 1
0x7B16C2: jz      short loc_7B16E4
0x7B16C4: cmp     ecx, ebx
0x7B16C6: jz      short loc_7B16D3
0x7B16C8: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x7B16CC: jnz     short loc_7B16D3
0x7B16CE: call    sub_7604D0
0x7B16D3: mov     eax, [ebp+0]
0x7B16D6: cmp     eax, ebx
0x7B16D8: mov     [edi+94h], eax
0x7B16DE: jz      short loc_7B16E4
0x7B16E0: add     dword ptr [eax+60h], 1
0x7B16E4: mov     eax, [esp+28h+var_10]
0x7B16E8: cmp     eax, ebx
0x7B16EA: mov     byte ptr [esp+28h+var_4], bl
0x7B16EE: jz      short loc_7B1702
0x7B16F0: add     dword ptr [eax+60h], 0FFFFFFFFh
0x7B16F4: mov     ecx, eax
0x7B16F6: add     eax, 60h ; '`'
0x7B16F9: cmp     [eax], ebx
0x7B16FB: jnz     short loc_7B1702
0x7B16FD: call    sub_7604D0
0x7B1702: lea     ecx, [esp+28h+var_10]
0x7B1706: push    ecx
0x7B1707: call    sub_772630
0x7B170C: add     esp, 4
0x7B170F: mov     eax, [eax]
0x7B1711: cmp     eax, ebx
0x7B1713: jz      short loc_7B171F
0x7B1715: mov     esi, eax
0x7B1717: add     dword ptr [esi+5Ch], 1
0x7B171B: mov     [esp+28h+var_14], esi
0x7B171F: mov     eax, [esp+28h+var_10]
0x7B1723: cmp     eax, ebx
0x7B1725: mov     byte ptr [esp+28h+var_4], bl
0x7B1729: jz      short loc_7B173D
0x7B172B: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7B172F: mov     ecx, eax
0x7B1731: add     eax, 5Ch ; '\'
0x7B1734: cmp     [eax], ebx
0x7B1736: jnz     short loc_7B173D
0x7B1738: call    sub_772560
0x7B173D: push    2
0x7B173F: push    3
0x7B1741: push    ebx
0x7B1742: push    esi
0x7B1743: call    sub_801110
0x7B1748: add     esp, 10h
0x7B174B: push    1
0x7B174D: mov     ecx, esi
0x7B174F: call    sub_771640
0x7B1754: mov     ecx, [edi+94h]; this
0x7B175A: mov     edx, [ecx+14h]
0x7B175D: push    esi; a3
0x7B175E: push    edx; a2
0x7B175F: call    sub_760010
0x7B1764: lea     eax, [esp+28h+var_10]
0x7B1768: push    eax
0x7B1769: call    sub_772630
0x7B176E: add     esp, 4
0x7B1771: mov     ebp, eax
0x7B1773: cmp     esi, [ebp+0]
0x7B1776: mov     byte ptr [esp+28h+var_4], 3
0x7B177B: jz      short loc_7B179D
0x7B177D: cmp     esi, ebx
0x7B177F: jz      short loc_7B178E
0x7B1781: add     dword ptr [esi+5Ch], 0FFFFFFFFh
0x7B1785: jnz     short loc_7B178E
0x7B1787: mov     ecx, esi
0x7B1789: call    sub_772560
0x7B178E: mov     esi, [ebp+0]
0x7B1791: cmp     esi, ebx
0x7B1793: mov     [esp+28h+var_14], esi
0x7B1797: jz      short loc_7B179D
0x7B1799: add     dword ptr [esi+5Ch], 1
0x7B179D: mov     eax, [esp+28h+var_10]
0x7B17A1: cmp     eax, ebx
0x7B17A3: mov     byte ptr [esp+28h+var_4], bl
0x7B17A7: jz      short loc_7B17BB
0x7B17A9: add     dword ptr [eax+5Ch], 0FFFFFFFFh
0x7B17AD: mov     ecx, eax
0x7B17AF: add     eax, 5Ch ; '\'
0x7B17B2: cmp     [eax], ebx
0x7B17B4: jnz     short loc_7B17BB
0x7B17B6: call    sub_772560
0x7B17BB: push    2
0x7B17BD: push    3
0x7B17BF: push    1
0x7B17C1: push    esi
0x7B17C2: call    sub_801110
0x7B17C7: add     esp, 10h
0x7B17CA: push    ebx
0x7B17CB: mov     ecx, esi
0x7B17CD: call    sub_771640
0x7B17D2: mov     ecx, [edi+94h]; this
0x7B17D8: mov     edx, [ecx+14h]
0x7B17DB: push    esi; a3
0x7B17DC: push    edx; a2
0x7B17DD: call    sub_760010
0x7B17E2: mov     ebp, [edi+94h]
0x7B17E8: cmp     [ebp+30h], ebx
0x7B17EB: jnz     short loc_7B17F5
0x7B17ED: call    sub_772DF0
0x7B17F2: mov     [ebp+30h], eax
0x7B17F5: mov     ecx, [ebp+30h]
0x7B17F8: push    ebx
0x7B17F9: push    ebx
0x7B17FA: push    7
0x7B17FC: call    sub_772CD0
0x7B1801: mov     ebp, [edi+94h]
0x7B1807: cmp     [ebp+30h], ebx
0x7B180A: jnz     short loc_7B1814
0x7B180C: call    sub_772DF0
0x7B1811: mov     [ebp+30h], eax
0x7B1814: mov     ecx, [ebp+30h]
0x7B1817: push    ebx
0x7B1818: push    ebx
0x7B1819: push    0Eh
0x7B181B: call    sub_772CD0
0x7B1820: mov     ebp, [edi+94h]
0x7B1826: cmp     [ebp+30h], ebx
0x7B1829: jnz     short loc_7B1833
0x7B182B: call    sub_772DF0
0x7B1830: mov     [ebp+30h], eax
0x7B1833: mov     ecx, [ebp+30h]
0x7B1836: push    ebx
0x7B1837: push    ebx
0x7B1838: push    1Bh
0x7B183A: call    sub_772CD0
0x7B183F: mov     ebp, [edi+94h]
0x7B1845: cmp     [ebp+30h], ebx
0x7B1848: jnz     short loc_7B1852
0x7B184A: call    sub_772DF0
0x7B184F: mov     [ebp+30h], eax
0x7B1852: mov     ecx, [ebp+30h]
0x7B1855: push    ebx
0x7B1856: push    ebx
0x7B1857: push    0Fh
0x7B1859: call    sub_772CD0
0x7B185E: mov     ebp, [edi+94h]
0x7B1864: cmp     [ebp+30h], ebx
0x7B1867: jnz     short loc_7B1871
0x7B1869: call    sub_772DF0
0x7B186E: mov     [ebp+30h], eax
0x7B1871: mov     ecx, [ebp+30h]
0x7B1874: push    ebx
0x7B1875: push    0Fh
0x7B1877: push    0A8h ; '¨'
0x7B187C: call    sub_772CD0
0x7B1881: mov     eax, [edi]
0x7B1883: mov     edx, [eax+0B8h]
0x7B1889: mov     ecx, edi
0x7B188B: call    edx
0x7B188D: or      eax, 0FFFFFFFFh
0x7B1890: cmp     esi, ebx
0x7B1892: mov     [esp+28h+var_4], eax
0x7B1896: jz      short loc_7B18A4
0x7B1898: add     [esi+5Ch], eax
0x7B189B: jnz     short loc_7B18A4
0x7B189D: mov     ecx, esi
0x7B189F: call    sub_772560
0x7B18A4: mov     al, 1
0x7B18A6: mov     ecx, [esp+28h+var_C]
0x7B18AA: mov     large fs:0, ecx
0x7B18B1: pop     ecx
0x7B18B2: pop     edi
0x7B18B3: pop     esi
0x7B18B4: pop     ebp
0x7B18B5: pop     ebx
0x7B18B6: add     esp, 14h
0x7B18B9: retn
