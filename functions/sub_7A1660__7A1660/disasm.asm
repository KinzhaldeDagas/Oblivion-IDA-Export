0x7A1660: push    0FFFFFFFFh
0x7A1662: push    offset SEH_7A1660
0x7A1667: mov     eax, large fs:0
0x7A166D: push    eax
0x7A166E: sub     esp, 50h
0x7A1671: push    ebx
0x7A1672: push    ebp
0x7A1673: push    esi
0x7A1674: push    edi
0x7A1675: mov     eax, ds:0B30AACh
0x7A167A: xor     eax, esp
0x7A167C: push    eax
0x7A167D: lea     eax, [esp+70h+var_C]
0x7A1681: mov     large fs:0, eax
0x7A1687: mov     ebp, ecx
0x7A1689: mov     [esp+70h+var_58], ebp
0x7A168D: fldz
0x7A168F: xor     edi, edi
0x7A1691: fst     [esp+70h+var_48]
0x7A1695: lea     esi, [ebp+8]
0x7A1698: fstp    [esp+70h+var_50]
0x7A169C: xor     ebx, ebx
0x7A169E: mov     edi, edi
0x7A16A0: mov     eax, [esi+4]
0x7A16A3: test    eax, eax
0x7A16A5: jz      loc_7A1770
0x7A16AB: mov     ecx, [esi+8]
0x7A16AE: sub     ecx, eax
0x7A16B0: mov     eax, 2AAAAAABh
0x7A16B5: imul    ecx
0x7A16B7: sar     edx, 3
0x7A16BA: mov     eax, edx
0x7A16BC: shr     eax, 1Fh
0x7A16BF: add     eax, edx
0x7A16C1: cmp     edi, eax
0x7A16C3: jnb     loc_7A1770
0x7A16C9: mov     eax, [esi+4]
0x7A16CC: test    eax, eax
0x7A16CE: jz      short loc_7A16EA
0x7A16D0: mov     ecx, [esi+8]
0x7A16D3: sub     ecx, eax
0x7A16D5: mov     eax, 2AAAAAABh
0x7A16DA: imul    ecx
0x7A16DC: sar     edx, 3
0x7A16DF: mov     eax, edx
0x7A16E1: shr     eax, 1Fh
0x7A16E4: add     eax, edx
0x7A16E6: cmp     edi, eax
0x7A16E8: jb      short loc_7A16EF
0x7A16EA: call    __invalid_parameter_noinfo
0x7A16EF: mov     eax, [esi+4]
0x7A16F2: test    eax, eax
0x7A16F4: fld     dword ptr [eax+ebx+20h]
0x7A16F8: fadd    [esp+70h+var_48]
0x7A16FC: fstp    [esp+70h+var_48]
0x7A1700: jz      short loc_7A171C
0x7A1702: mov     ecx, [esi+8]
0x7A1705: sub     ecx, eax
0x7A1707: mov     eax, 2AAAAAABh
0x7A170C: imul    ecx
0x7A170E: sar     edx, 3
0x7A1711: mov     eax, edx
0x7A1713: shr     eax, 1Fh
0x7A1716: add     eax, edx
0x7A1718: cmp     edi, eax
0x7A171A: jb      short loc_7A1721
0x7A171C: call    __invalid_parameter_noinfo
0x7A1721: mov     ecx, [esi+4]
0x7A1724: fld     dword ptr [ebx+ecx+20h]
0x7A1728: fld     [esp+70h+var_50]
0x7A172C: fcompp
0x7A172E: fnstsw  ax
0x7A1730: test    ah, 5
0x7A1733: jp      short loc_7A1765
0x7A1735: mov     eax, ecx
0x7A1737: test    eax, eax
0x7A1739: jz      short loc_7A1755
0x7A173B: mov     ecx, [esi+8]
0x7A173E: sub     ecx, eax
0x7A1740: mov     eax, 2AAAAAABh
0x7A1745: imul    ecx
0x7A1747: sar     edx, 3
0x7A174A: mov     eax, edx
0x7A174C: shr     eax, 1Fh
0x7A174F: add     eax, edx
0x7A1751: cmp     edi, eax
0x7A1753: jb      short loc_7A175A
0x7A1755: call    __invalid_parameter_noinfo
0x7A175A: mov     edx, [esi+4]
0x7A175D: fld     dword ptr [edx+ebx+20h]
0x7A1761: fstp    [esp+70h+var_50]
0x7A1765: add     edi, 1
0x7A1768: add     ebx, 30h ; '0'
0x7A176B: jmp     loc_7A16A0
0x7A1770: fld     [esp+70h+var_50]
0x7A1774: lea     ecx, [esp+70h+var_59]
0x7A1778: fmul    st, st
0x7A177A: fstp    [esp+70h+var_34]
0x7A177E: call    sub_78EAF0
0x7A1783: fld     dword ptr [ebp+60h]
0x7A1786: fld1
0x7A1788: xor     ecx, ecx
0x7A178A: fsubrp  st(1), st
0x7A178C: mov     [esp+70h+var_4], ecx
0x7A1790: mov     [esp+70h+var_28], ecx
0x7A1794: mov     [esp+70h+var_24], ecx
0x7A1798: mov     [esp+70h+var_20], ecx
0x7A179C: fstp    [esp+70h+var_44]
0x7A17A0: xor     ebx, ebx
0x7A17A2: xor     edi, edi
0x7A17A4: mov     byte ptr [esp+70h+var_4], 1
0x7A17A9: mov     [esp+70h+var_54], edi
0x7A17AD: lea     ecx, [ecx+0]
0x7A17B0: mov     eax, [esi+4]
0x7A17B3: cmp     eax, ecx
0x7A17B5: jz      loc_7A197B
0x7A17BB: mov     ecx, [esi+8]
0x7A17BE: sub     ecx, eax
0x7A17C0: mov     eax, 2AAAAAABh
0x7A17C5: imul    ecx
0x7A17C7: sar     edx, 3
0x7A17CA: mov     eax, edx
0x7A17CC: shr     eax, 1Fh
0x7A17CF: add     eax, edx
0x7A17D1: cmp     ebx, eax
0x7A17D3: jnb     loc_7A197B
0x7A17D9: mov     eax, [esi+4]
0x7A17DC: test    eax, eax
0x7A17DE: jz      short loc_7A17FA
0x7A17E0: mov     ecx, [esi+8]
0x7A17E3: sub     ecx, eax
0x7A17E5: mov     eax, 2AAAAAABh
0x7A17EA: imul    ecx
0x7A17EC: sar     edx, 3
0x7A17EF: mov     eax, edx
0x7A17F1: shr     eax, 1Fh
0x7A17F4: add     eax, edx
0x7A17F6: cmp     ebx, eax
0x7A17F8: jb      short loc_7A17FF
0x7A17FA: call    __invalid_parameter_noinfo
0x7A17FF: mov     eax, [esi+4]
0x7A1802: fld     dword ptr [edi+eax+20h]
0x7A1806: fstp    [esp+70h+var_4C]
0x7A180A: fld     [esp+70h+var_4C]
0x7A180E: fld     [esp+70h+var_44]
0x7A1812: fmul    [esp+70h+var_50]
0x7A1816: fcompp
0x7A1818: fnstsw  ax
0x7A181A: test    ah, 5
0x7A181D: jp      loc_7A18F5
0x7A1823: mov     eax, [esi+4]
0x7A1826: test    eax, eax
0x7A1828: jz      short loc_7A1844
0x7A182A: mov     ecx, [esi+8]
0x7A182D: sub     ecx, eax
0x7A182F: mov     eax, 2AAAAAABh
0x7A1834: imul    ecx
0x7A1836: sar     edx, 3
0x7A1839: mov     eax, edx
0x7A183B: shr     eax, 1Fh
0x7A183E: add     eax, edx
0x7A1840: cmp     ebx, eax
0x7A1842: jb      short loc_7A1849
0x7A1844: call    __invalid_parameter_noinfo
0x7A1849: mov     ecx, [esi+4]
0x7A184C: add     ecx, edi
0x7A184E: push    ecx
0x7A184F: lea     ecx, [esp+74h+var_2C]
0x7A1853: call    sub_7A0B50
0x7A1858: mov     ebp, [esi+4]
0x7A185B: cmp     ebp, [esi+8]
0x7A185E: jbe     short loc_7A1865
0x7A1860: call    __invalid_parameter_noinfo
0x7A1865: add     edi, ebp
0x7A1867: cmp     edi, [esi+8]
0x7A186A: ja      short loc_7A1871
0x7A186C: cmp     edi, [esi+4]
0x7A186F: jnb     short loc_7A1876
0x7A1871: call    __invalid_parameter_noinfo
0x7A1876: mov     ecx, [esp+70h+var_34]
0x7A187A: mov     byte ptr [esp+70h+var_40], 0
0x7A187F: mov     edx, [esp+70h+var_40]
0x7A1883: push    edx
0x7A1884: mov     edx, [esi+8]
0x7A1887: mov     byte ptr [esp+74h+var_3C], 0
0x7A188C: mov     eax, [esp+74h+var_3C]
0x7A1890: push    eax
0x7A1891: push    ecx
0x7A1892: push    edi
0x7A1893: push    edx
0x7A1894: add     edi, 30h ; '0'
0x7A1897: push    edi
0x7A1898: call    sub_79B700
0x7A189D: mov     ebp, [esi+8]
0x7A18A0: lea     edi, [ebp-30h]
0x7A18A3: add     esp, 18h
0x7A18A6: cmp     edi, ebp
0x7A18A8: jz      short loc_7A18D2
0x7A18AA: xor     ecx, ecx
0x7A18AC: lea     esp, [esp+0]
0x7A18B0: mov     eax, [edi+4]
0x7A18B3: cmp     eax, ecx
0x7A18B5: jz      short loc_7A18C2
0x7A18B7: push    eax
0x7A18B8: call    FormHeapFree
0x7A18BD: add     esp, 4
0x7A18C0: xor     ecx, ecx
0x7A18C2: mov     [edi+4], ecx
0x7A18C5: mov     [edi+8], ecx
0x7A18C8: mov     [edi+0Ch], ecx
0x7A18CB: add     edi, 30h ; '0'
0x7A18CE: cmp     edi, ebp
0x7A18D0: jnz     short loc_7A18B0
0x7A18D2: sub     [esp+70h+var_54], 30h ; '0'
0x7A18D7: add     [esp+70h+var_54], 30h ; '0'
0x7A18DC: add     dword ptr [esi+8], 0FFFFFFD0h
0x7A18E0: mov     edi, [esp+70h+var_54]
0x7A18E4: mov     ebp, [esp+70h+var_58]
0x7A18E8: sub     ebx, 1
0x7A18EB: add     ebx, 1
0x7A18EE: xor     ecx, ecx
0x7A18F0: jmp     loc_7A17B0
0x7A18F5: fld     dword ptr [ebp+5Ch]
0x7A18F8: sub     esp, 8
0x7A18FB: fstp    [esp+78h+var_74]; float
0x7A18FF: lea     ecx, [esp+78h+var_59]
0x7A1903: fldz
0x7A1905: fstp    [esp+78h+var_78]; float
0x7A1908: call    sub_78EA00
0x7A190D: fstp    [esp+70h+var_38]
0x7A1911: fld     [esp+70h+var_38]
0x7A1915: mov     eax, [esi+4]
0x7A1918: test    eax, eax
0x7A191A: fld     st
0x7A191C: fld1
0x7A191E: fsubrp  st(1), st
0x7A1920: fstp    [esp+70h+var_38]
0x7A1924: fld     [esp+70h+var_38]
0x7A1928: fmul    [esp+70h+var_4C]
0x7A192C: fld     [esp+70h+var_34]
0x7A1930: fmulp   st(2), st
0x7A1932: faddp   st(1), st
0x7A1934: fstp    [esp+70h+var_4C]
0x7A1938: jz      short loc_7A1954
0x7A193A: mov     ecx, [esi+8]
0x7A193D: sub     ecx, eax
0x7A193F: mov     eax, 2AAAAAABh
0x7A1944: imul    ecx
0x7A1946: sar     edx, 3
0x7A1949: mov     eax, edx
0x7A194B: shr     eax, 1Fh
0x7A194E: add     eax, edx
0x7A1950: cmp     ebx, eax
0x7A1952: jb      short loc_7A1959
0x7A1954: call    __invalid_parameter_noinfo
0x7A1959: mov     eax, [esi+4]
0x7A195C: fld     [esp+70h+var_4C]
0x7A1960: add     [esp+70h+var_54], 30h ; '0'
0x7A1965: fstp    dword ptr [edi+eax+24h]
0x7A1969: mov     edi, [esp+70h+var_54]
0x7A196D: mov     ebp, [esp+70h+var_58]
0x7A1971: add     ebx, 1
0x7A1974: xor     ecx, ecx
0x7A1976: jmp     loc_7A17B0
0x7A197B: mov     edi, [esi+8]
0x7A197E: cmp     [esi+4], edi
0x7A1981: mov     byte ptr [esp+70h+var_34], 0
0x7A1986: jbe     short loc_7A198D
0x7A1988: call    __invalid_parameter_noinfo
0x7A198D: mov     ebx, [esi+4]
0x7A1990: cmp     ebx, [esi+8]
0x7A1993: jbe     short loc_7A199A
0x7A1995: call    __invalid_parameter_noinfo
0x7A199A: cmp     esi, esi
0x7A199C: jz      short loc_7A19A3
0x7A199E: call    __invalid_parameter_noinfo
0x7A19A3: mov     ecx, [esp+70h+var_34]
0x7A19A7: push    ecx
0x7A19A8: mov     ecx, edi
0x7A19AA: sub     ecx, ebx
0x7A19AC: mov     eax, 2AAAAAABh
0x7A19B1: imul    ecx
0x7A19B3: sar     edx, 3
0x7A19B6: mov     eax, edx
0x7A19B8: shr     eax, 1Fh
0x7A19BB: add     eax, edx
0x7A19BD: push    eax
0x7A19BE: push    edi
0x7A19BF: push    ebx
0x7A19C0: call    sub_79FA30
0x7A19C5: mov     eax, [esp+80h+var_24]
0x7A19C9: mov     ebx, [esp+80h+var_28]
0x7A19CD: add     esp, 10h
0x7A19D0: cmp     ebx, eax
0x7A19D2: mov     byte ptr [esp+70h+var_34], 0
0x7A19D7: mov     edi, eax
0x7A19D9: jbe     short loc_7A19F1
0x7A19DB: call    __invalid_parameter_noinfo
0x7A19E0: mov     eax, [esp+70h+var_24]
0x7A19E4: mov     ebx, [esp+70h+var_28]
0x7A19E8: cmp     ebx, eax
0x7A19EA: jbe     short loc_7A19F1
0x7A19EC: call    __invalid_parameter_noinfo
0x7A19F1: mov     ecx, [esp+70h+var_34]
0x7A19F5: push    ecx
0x7A19F6: mov     ecx, edi
0x7A19F8: sub     ecx, ebx
0x7A19FA: mov     eax, 2AAAAAABh
0x7A19FF: imul    ecx
0x7A1A01: sar     edx, 3
0x7A1A04: mov     eax, edx
0x7A1A06: shr     eax, 1Fh
0x7A1A09: add     eax, edx
0x7A1A0B: push    eax
0x7A1A0C: push    edi
0x7A1A0D: push    ebx
0x7A1A0E: call    sub_79FA30
0x7A1A13: add     esp, 10h
0x7A1A16: xor     ebx, ebx
0x7A1A18: mov     [esp+70h+var_4C], ebx
0x7A1A1C: lea     esp, [esp+0]
0x7A1A20: mov     edi, [esp+70h+var_28]
0x7A1A24: test    edi, edi
0x7A1A26: mov     ebp, [esp+70h+var_24]
0x7A1A2A: jz      short loc_7A1A72
0x7A1A2C: mov     ecx, ebp
0x7A1A2E: sub     ecx, edi
0x7A1A30: mov     eax, 2AAAAAABh
0x7A1A35: imul    ecx
0x7A1A37: sar     edx, 3
0x7A1A3A: mov     eax, edx
0x7A1A3C: shr     eax, 1Fh
0x7A1A3F: add     eax, edx
0x7A1A41: cmp     ebx, eax
0x7A1A43: jnb     short loc_7A1A72
0x7A1A45: mov     ecx, [esp+70h+var_4C]
0x7A1A49: lea     ebp, [ecx+edi]
0x7A1A4C: mov     edi, [esi+4]
0x7A1A4F: cmp     edi, [esi+8]
0x7A1A52: jbe     short loc_7A1A59
0x7A1A54: call    __invalid_parameter_noinfo
0x7A1A59: push    ebp
0x7A1A5A: push    edi
0x7A1A5B: push    esi
0x7A1A5C: lea     edx, [esp+7Ch+var_34]
0x7A1A60: push    edx
0x7A1A61: mov     ecx, esi
0x7A1A63: call    sub_7A0A50
0x7A1A68: add     ebx, 1
0x7A1A6B: add     [esp+70h+var_4C], 30h ; '0'
0x7A1A70: jmp     short loc_7A1A20
0x7A1A72: mov     eax, [esp+70h+var_58]
0x7A1A76: mov     eax, [eax+50h]
0x7A1A79: test    eax, eax
0x7A1A7B: mov     [esp+70h+var_50], 0
0x7A1A83: jbe     loc_7A1C5C
0x7A1A89: mov     ecx, [esp+70h+var_58]
0x7A1A8D: add     ecx, 18h
0x7A1A90: mov     [esp+70h+var_3C], ecx
0x7A1A94: xor     ebx, ebx
0x7A1A96: cmp     eax, 1
0x7A1A99: jnz     short loc_7A1AA4
0x7A1A9B: mov     edx, [esp+70h+var_58]
0x7A1A9F: fld     dword ptr [edx+54h]
0x7A1AA2: jmp     short loc_7A1AEF
0x7A1AA4: mov     ecx, [esp+70h+var_58]
0x7A1AA8: fld     dword ptr [ecx+54h]
0x7A1AAB: mov     edx, [esp+70h+var_50]
0x7A1AAF: test    edx, edx
0x7A1AB1: fstp    [esp+70h+var_38]
0x7A1AB5: fild    [esp+70h+var_50]
0x7A1AB9: jge     short loc_7A1AC1
0x7A1ABB: fadd    dword ptr ds:0A2FC78h
0x7A1AC1: add     eax, 0FFFFFFFFh
0x7A1AC4: test    eax, eax
0x7A1AC6: mov     [esp+70h+var_34], eax
0x7A1ACA: fild    [esp+70h+var_34]
0x7A1ACE: jge     short loc_7A1AD6
0x7A1AD0: fadd    dword ptr ds:0A2FC78h
0x7A1AD6: fdivp   st(1), st
0x7A1AD8: fstp    [esp+70h+var_34]
0x7A1ADC: fld     dword ptr [ecx+58h]
0x7A1ADF: fld     [esp+70h+var_38]
0x7A1AE3: fld     st
0x7A1AE5: fsubp   st(2), st
0x7A1AE7: fxch    st(1)
0x7A1AE9: fmul    [esp+70h+var_34]
0x7A1AED: faddp   st(1), st
0x7A1AEF: fstp    [esp+70h+var_4C]
0x7A1AF3: mov     [esp+70h+var_18], ebx
0x7A1AF7: fld     [esp+70h+var_4C]
0x7A1AFB: mov     [esp+70h+var_14], ebx
0x7A1AFF: fmul    [esp+70h+var_48]
0x7A1B03: mov     [esp+70h+var_10], ebx
0x7A1B07: fstp    [esp+70h+var_54]
0x7A1B0B: fldz
0x7A1B0D: fst     [esp+70h+var_4C]
0x7A1B11: fcomp   [esp+70h+var_54]
0x7A1B15: mov     byte ptr [esp+70h+var_4], 2
0x7A1B1A: fnstsw  ax
0x7A1B1C: test    ah, 5
0x7A1B1F: jp      loc_7A1BDC
0x7A1B25: xor     edi, edi
0x7A1B27: xor     ebp, ebp
0x7A1B29: lea     esp, [esp+0]
0x7A1B30: mov     eax, [esi+4]
0x7A1B33: cmp     eax, ebx
0x7A1B35: jz      loc_7A1BDC
0x7A1B3B: mov     ecx, [esi+8]
0x7A1B3E: sub     ecx, eax
0x7A1B40: mov     eax, 2AAAAAABh
0x7A1B45: imul    ecx
0x7A1B47: sar     edx, 3
0x7A1B4A: mov     eax, edx
0x7A1B4C: shr     eax, 1Fh
0x7A1B4F: add     eax, edx
0x7A1B51: cmp     edi, eax
0x7A1B53: jnb     loc_7A1BDC
0x7A1B59: fld     [esp+70h+var_4C]
0x7A1B5D: fld     [esp+70h+var_54]
0x7A1B61: fcompp
0x7A1B63: fnstsw  ax
0x7A1B65: test    ah, 1
0x7A1B68: jnz     short loc_7A1BDC
0x7A1B6A: mov     eax, [esi+4]
0x7A1B6D: cmp     eax, ebx
0x7A1B6F: jz      short loc_7A1B8B
0x7A1B71: mov     ecx, [esi+8]
0x7A1B74: sub     ecx, eax
0x7A1B76: mov     eax, 2AAAAAABh
0x7A1B7B: imul    ecx
0x7A1B7D: sar     edx, 3
0x7A1B80: mov     eax, edx
0x7A1B82: shr     eax, 1Fh
0x7A1B85: add     eax, edx
0x7A1B87: cmp     edi, eax
0x7A1B89: jb      short loc_7A1B90
0x7A1B8B: call    __invalid_parameter_noinfo
0x7A1B90: mov     eax, [esi+4]
0x7A1B93: cmp     eax, ebx
0x7A1B95: fld     dword ptr [eax+ebp+20h]
0x7A1B99: fadd    [esp+70h+var_4C]
0x7A1B9D: fstp    [esp+70h+var_4C]
0x7A1BA1: jz      short loc_7A1BBD
0x7A1BA3: mov     ecx, [esi+8]
0x7A1BA6: sub     ecx, eax
0x7A1BA8: mov     eax, 2AAAAAABh
0x7A1BAD: imul    ecx
0x7A1BAF: sar     edx, 3
0x7A1BB2: mov     eax, edx
0x7A1BB4: shr     eax, 1Fh
0x7A1BB7: add     eax, edx
0x7A1BB9: cmp     edi, eax
0x7A1BBB: jb      short loc_7A1BC2
0x7A1BBD: call    __invalid_parameter_noinfo
0x7A1BC2: mov     ecx, [esi+4]
0x7A1BC5: add     ecx, ebp
0x7A1BC7: push    ecx
0x7A1BC8: lea     ecx, [esp+74h+var_1C]
0x7A1BCC: call    sub_7A0B50
0x7A1BD1: add     edi, 1
0x7A1BD4: add     ebp, 30h ; '0'
0x7A1BD7: jmp     loc_7A1B30
0x7A1BDC: mov     ecx, [esp+70h+var_3C]
0x7A1BE0: lea     edx, [esp+70h+var_1C]
0x7A1BE4: push    edx
0x7A1BE5: call    sub_7A15D0
0x7A1BEA: mov     edi, [esp+70h+var_18]
0x7A1BEE: cmp     edi, ebx
0x7A1BF0: jz      short loc_7A1C2E
0x7A1BF2: mov     eax, [esp+70h+var_14]
0x7A1BF6: cmp     edi, eax
0x7A1BF8: mov     ebp, eax
0x7A1BFA: jz      short loc_7A1C25
0x7A1BFC: add     edi, 4
0x7A1BFF: nop
0x7A1C00: mov     eax, [edi]
0x7A1C02: cmp     eax, ebx
0x7A1C04: jz      short loc_7A1C0F
0x7A1C06: push    eax
0x7A1C07: call    FormHeapFree
0x7A1C0C: add     esp, 4
0x7A1C0F: mov     [edi], ebx
0x7A1C11: mov     [edi+4], ebx
0x7A1C14: mov     [edi+8], ebx
0x7A1C17: add     edi, 30h ; '0'
0x7A1C1A: lea     eax, [edi-4]
0x7A1C1D: cmp     eax, ebp
0x7A1C1F: jnz     short loc_7A1C00
0x7A1C21: mov     edi, [esp+70h+var_18]
0x7A1C25: push    edi
0x7A1C26: call    FormHeapFree
0x7A1C2B: add     esp, 4
0x7A1C2E: mov     ecx, [esp+70h+var_50]
0x7A1C32: mov     edx, [esp+70h+var_58]
0x7A1C36: mov     eax, [edx+50h]
0x7A1C39: add     ecx, 1
0x7A1C3C: cmp     ecx, eax
0x7A1C3E: mov     [esp+70h+var_18], ebx
0x7A1C42: mov     [esp+70h+var_14], ebx
0x7A1C46: mov     [esp+70h+var_10], ebx
0x7A1C4A: mov     [esp+70h+var_50], ecx
0x7A1C4E: jb      loc_7A1A96
0x7A1C54: mov     ebp, [esp+70h+var_24]
0x7A1C58: mov     edi, [esp+70h+var_28]
0x7A1C5C: xor     ebx, ebx
0x7A1C5E: cmp     edi, ebx
0x7A1C60: jz      short loc_7A1C9E
0x7A1C62: cmp     edi, ebp
0x7A1C64: jz      short loc_7A1C95
0x7A1C66: lea     esi, [edi+4]
0x7A1C69: lea     esp, [esp+0]
0x7A1C70: mov     eax, [esi]
0x7A1C72: cmp     eax, ebx
0x7A1C74: jz      short loc_7A1C7F
0x7A1C76: push    eax
0x7A1C77: call    FormHeapFree
0x7A1C7C: add     esp, 4
0x7A1C7F: mov     [esi], ebx
0x7A1C81: mov     [esi+4], ebx
0x7A1C84: mov     [esi+8], ebx
0x7A1C87: add     esi, 30h ; '0'
0x7A1C8A: lea     eax, [esi-4]
0x7A1C8D: cmp     eax, ebp
0x7A1C8F: jnz     short loc_7A1C70
0x7A1C91: mov     edi, [esp+70h+var_28]
0x7A1C95: push    edi
0x7A1C96: call    FormHeapFree
0x7A1C9B: add     esp, 4
0x7A1C9E: lea     ecx, [esp+70h+var_59]; void *
0x7A1CA2: mov     [esp+70h+var_28], ebx
0x7A1CA6: mov     [esp+70h+var_24], ebx
0x7A1CAA: mov     [esp+70h+var_20], ebx
0x7A1CAE: mov     [esp+70h+var_4], 0FFFFFFFFh
0x7A1CB6: call    ?ClearComponentReferences@TESTexture@@UAEXXZ?
0x7A1CBB: mov     ecx, [esp+70h+var_C]
0x7A1CBF: mov     large fs:0, ecx
0x7A1CC6: pop     ecx
0x7A1CC7: pop     edi
0x7A1CC8: pop     esi
0x7A1CC9: pop     ebp
0x7A1CCA: pop     ebx
0x7A1CCB: add     esp, 5Ch
0x7A1CCE: retn
