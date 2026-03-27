0x8E1660: push    ebp
0x8E1661: mov     ebp, esp
0x8E1663: and     esp, 0FFFFFFF0h
0x8E1666: sub     esp, 44h
0x8E1669: mov     eax, [ebp+arg_4]
0x8E166C: movaps  xmm5, xmmword ptr [eax]
0x8E166F: movaps  xmm3, xmmword ptr ds:0B2FC70h
0x8E1676: movaps  xmm2, xmmword ptr ds:0A9A660h
0x8E167D: movaps  xmm1, xmmword ptr ds:0A9A650h
0x8E1684: push    ebx
0x8E1685: push    esi
0x8E1686: push    edi
0x8E1687: mov     edi, ecx
0x8E1689: movaps  xmm4, xmmword ptr [edi+10h]
0x8E168D: movaps  xmm0, xmmword ptr [edi+30h]
0x8E1691: addps   xmm5, xmm4
0x8E1694: movaps  xmm4, xmmword ptr [edi+20h]
0x8E1698: mulps   xmm5, xmm0
0x8E169B: minps   xmm5, xmm3
0x8E169E: maxps   xmm5, xmm2
0x8E16A1: addps   xmm5, xmm1
0x8E16A4: movaps  [esp+50h+var_20], xmm5
0x8E16A9: movaps  xmm5, xmmword ptr [eax+10h]
0x8E16AD: mov     ecx, dword ptr [esp+50h+var_20]
0x8E16B1: mov     edx, dword ptr [esp+50h+var_20+4]
0x8E16B5: shr     ecx, 7
0x8E16B8: addps   xmm5, xmm4
0x8E16BB: mov     word ptr [esp+50h+var_28], cx
0x8E16C0: mov     ecx, dword ptr [esp+50h+var_20+8]
0x8E16C4: mulps   xmm5, xmm0
0x8E16C7: minps   xmm5, xmm3
0x8E16CA: maxps   xmm5, xmm2
0x8E16CD: addps   xmm5, xmm1
0x8E16D0: movaps  [esp+50h+var_20], xmm5
0x8E16D5: mov     eax, dword ptr [esp+50h+var_20]
0x8E16D9: shr     eax, 7
0x8E16DC: movzx   eax, ax
0x8E16DF: shr     ecx, 7
0x8E16E2: or      eax, 1
0x8E16E5: mov     word ptr [esp+50h+var_24], cx
0x8E16EA: mov     ecx, dword ptr [esp+50h+var_20+4]
0x8E16EE: mov     [esp+50h+var_10], eax
0x8E16F2: shr     edx, 7
0x8E16F5: shr     ecx, 7
0x8E16F8: mov     word ptr [esp+50h+var_28+2], dx
0x8E16FD: mov     edx, dword ptr [esp+50h+var_20+8]
0x8E1701: mov     esi, [esp+50h+var_28]
0x8E1705: movzx   eax, cx
0x8E1708: mov     ecx, [edi+44h]
0x8E170B: or      eax, 1
0x8E170E: and     esi, 0FFFEh
0x8E1714: shr     edx, 7
0x8E1717: mov     [esp+50h+var_C], eax
0x8E171B: mov     dword ptr [esp+50h+var_20], esi
0x8E171F: mov     esi, [esp+50h+var_28+2]
0x8E1723: movzx   eax, dx
0x8E1726: mov     edx, [edi+44h]
0x8E1729: or      eax, 1
0x8E172C: and     esi, 0FFFEh
0x8E1732: lea     ebx, [edi+40h]
0x8E1735: mov     [esp+50h+var_8], eax
0x8E1739: mov     eax, [ebx+8]
0x8E173C: mov     dword ptr [esp+50h+var_20+4], esi
0x8E1740: mov     esi, [esp+50h+var_24]
0x8E1744: and     esi, 0FFFEh
0x8E174A: and     eax, 3FFFFFFFh
0x8E174F: cmp     ecx, eax
0x8E1751: mov     dword ptr [esp+50h+var_20+8], esi
0x8E1755: mov     [esp+50h+var_44], edx
0x8E1759: jnz     short loc_8E1766
0x8E175B: push    10h
0x8E175D: push    ebx
0x8E175E: call    sub_8A6EE0
0x8E1763: add     esp, 8
0x8E1766: mov     eax, [ebx+4]
0x8E1769: mov     ecx, [ebx]
0x8E176B: mov     esi, eax
0x8E176D: shl     esi, 4
0x8E1770: add     esi, ecx
0x8E1772: inc     eax
0x8E1773: mov     [ebx+4], eax
0x8E1776: mov     eax, ecx
0x8E1778: lea     ecx, [esi+0Ah]
0x8E177B: push    ecx
0x8E177C: mov     ecx, [esp+54h+var_10]
0x8E1780: lea     edx, [esi+8]
0x8E1783: push    edx
0x8E1784: mov     edx, dword ptr [esp+58h+var_20]
0x8E1788: push    ecx
0x8E1789: mov     ecx, [esp+5Ch+var_44]
0x8E178D: push    edx
0x8E178E: push    ecx
0x8E178F: push    eax
0x8E1790: lea     ecx, [edi+4Ch]
0x8E1793: mov     [esp+68h+var_38], eax
0x8E1797: call    sub_8E1440
0x8E179C: mov     edx, [esp+50h+var_C]
0x8E17A0: mov     ecx, [esp+50h+var_44]
0x8E17A4: lea     eax, [esi+4]
0x8E17A7: push    eax
0x8E17A8: mov     eax, dword ptr [esp+54h+var_20+4]
0x8E17AC: push    esi
0x8E17AD: push    edx
0x8E17AE: mov     edx, [esp+5Ch+var_38]
0x8E17B2: push    eax
0x8E17B3: push    ecx
0x8E17B4: push    edx
0x8E17B5: lea     ecx, [edi+58h]
0x8E17B8: call    sub_8E1440
0x8E17BD: mov     edx, [esp+50h+var_8]
0x8E17C1: lea     eax, [esi+6]
0x8E17C4: push    eax
0x8E17C5: mov     eax, dword ptr [esp+54h+var_20+8]
0x8E17C9: lea     ecx, [esi+2]
0x8E17CC: push    ecx
0x8E17CD: mov     ecx, [esp+58h+var_44]
0x8E17D1: push    edx
0x8E17D2: mov     edx, [esp+5Ch+var_38]
0x8E17D6: push    eax
0x8E17D7: push    ecx
0x8E17D8: push    edx
0x8E17D9: lea     ecx, [edi+64h]
0x8E17DC: call    sub_8E1440
0x8E17E1: mov     eax, [esp+50h+var_44]
0x8E17E5: mov     ecx, [esp+50h+var_38]
0x8E17E9: push    esi
0x8E17EA: push    eax
0x8E17EB: push    ecx
0x8E17EC: mov     ecx, edi
0x8E17EE: call    sub_8E0A30
0x8E17F3: mov     eax, [ebp+arg_0]
0x8E17F6: mov     edx, [esp+50h+var_44]
0x8E17FA: mov     ecx, ds:0BA9DE4h
0x8E1800: mov     [esi+0Ch], eax
0x8E1803: mov     [eax], edx
0x8E1805: mov     edx, large fs:2Ch
0x8E180C: mov     ecx, [edx+ecx*4]
0x8E180F: mov     eax, [edi+44h]
0x8E1812: mov     [esp+50h+var_34], eax
0x8E1816: sar     eax, 5
0x8E1819: mov     [esp+50h+var_28], ecx
0x8E181D: mov     ecx, [ecx+19Ch]
0x8E1823: mov     edx, [ecx+20h]
0x8E1826: lea     eax, ds:30h[eax*4]
0x8E182D: and     eax, 0FFFFFFF0h
0x8E1830: mov     [esp+50h+var_30], edx
0x8E1834: add     edx, eax
0x8E1836: cmp     edx, [ecx+2Ch]
0x8E1839: ja      short loc_8E1844
0x8E183B: mov     eax, [esp+50h+var_30]
0x8E183F: mov     [ecx+20h], edx
0x8E1842: jmp     short loc_8E184A
0x8E1844: mov     edx, [ecx]
0x8E1846: push    eax
0x8E1847: call    dword ptr [edx+0Ch]
0x8E184A: mov     ecx, [esp+50h+var_44]
0x8E184E: mov     edx, dword ptr [esp+50h+var_20]
0x8E1852: push    eax
0x8E1853: push    ecx
0x8E1854: push    esi
0x8E1855: mov     [esp+5Ch+var_38], eax
0x8E1859: mov     eax, [esp+5Ch+var_34]
0x8E185D: push    edx
0x8E185E: push    eax
0x8E185F: mov     ecx, edi
0x8E1861: call    sub_8E0E90
0x8E1866: mov     edx, [esp+50h+var_38]
0x8E186A: mov     eax, [edi+44h]
0x8E186D: mov     ecx, [ebx]
0x8E186F: sar     eax, 5
0x8E1872: lea     ebx, [edx+eax*4+4]
0x8E1876: cmp     edx, ebx
0x8E1878: mov     [esp+50h+var_30], edx
0x8E187C: mov     [esp+50h+var_34], ecx
0x8E1880: mov     [esp+50h+var_2C], ebx
0x8E1884: jnb     loc_8E1997
0x8E188A: lea     ebx, [ebx+0]
0x8E1890: mov     ecx, [esp+50h+var_30]
0x8E1894: mov     ecx, [ecx]
0x8E1896: test    ecx, ecx
0x8E1898: mov     eax, [esp+50h+var_34]
0x8E189C: mov     [esp+50h+var_40], eax
0x8E18A0: mov     [esp+50h+var_3C], ecx
0x8E18A4: jz      loc_8E197C
0x8E18AA: lea     ebx, [ebx+0]
0x8E18B0: test    cl, cl
0x8E18B2: jnz     short loc_8E18C1
0x8E18B4: add     eax, 80h ; '€'
0x8E18B9: shr     ecx, 8
0x8E18BC: jmp     loc_8E1968
0x8E18C1: test    cl, 1
0x8E18C4: jz      loc_8E195F
0x8E18CA: mov     ebx, [esi]
0x8E18CC: mov     edx, [eax+4]
0x8E18CF: sub     edx, ebx
0x8E18D1: mov     ebx, [esi+4]
0x8E18D4: sub     ebx, [eax]
0x8E18D6: or      edx, ebx
0x8E18D8: test    edx, 80008000h
0x8E18DE: jnz     short loc_8E195F
0x8E18E0: mov     ebx, [eax+0Ch]
0x8E18E3: test    bl, 1
0x8E18E6: jnz     short loc_8E1920
0x8E18E8: mov     eax, [ebp+arg_8]
0x8E18EB: mov     ecx, [eax+8]
0x8E18EE: mov     edx, [eax+4]
0x8E18F1: and     ecx, 3FFFFFFFh
0x8E18F7: cmp     edx, ecx
0x8E18F9: jnz     short loc_8E1909
0x8E18FB: push    8
0x8E18FD: push    eax
0x8E18FE: call    sub_8A6EE0
0x8E1903: mov     eax, [ebp+arg_8]
0x8E1906: add     esp, 8
0x8E1909: mov     edx, [eax+4]
0x8E190C: mov     eax, [eax]
0x8E190E: mov     ecx, [ebp+arg_0]
0x8E1911: mov     [eax+edx*8], ecx
0x8E1914: mov     [eax+edx*8+4], ebx
0x8E1918: mov     eax, [ebp+arg_8]
0x8E191B: inc     dword ptr [eax+4]
0x8E191E: jmp     short loc_8E1957
0x8E1920: mov     edx, [edi+78h]
0x8E1923: and     ebx, 0FFFFFFFEh
0x8E1926: mov     eax, [ebx+edx+0Ch]
0x8E192A: mov     ecx, [ebx+edx+8]
0x8E192E: lea     ebx, [ebx+edx+4]
0x8E1932: and     eax, 3FFFFFFFh
0x8E1937: cmp     ecx, eax
0x8E1939: jnz     short loc_8E1946
0x8E193B: push    2
0x8E193D: push    ebx
0x8E193E: call    sub_8A6EE0
0x8E1943: add     esp, 8
0x8E1946: mov     ecx, [ebx+4]
0x8E1949: mov     ax, word ptr [esp+50h+var_44]
0x8E194E: mov     edx, [ebx]
0x8E1950: mov     [edx+ecx*2], ax
0x8E1954: inc     dword ptr [ebx+4]
0x8E1957: mov     ecx, [esp+50h+var_3C]
0x8E195B: mov     eax, [esp+50h+var_40]
0x8E195F: mov     edx, [esp+50h+var_38]
0x8E1963: add     eax, 10h
0x8E1966: shr     ecx, 1
0x8E1968: test    ecx, ecx
0x8E196A: mov     [esp+50h+var_40], eax
0x8E196E: mov     [esp+50h+var_3C], ecx
0x8E1972: jnz     loc_8E18B0
0x8E1978: mov     ebx, [esp+50h+var_2C]
0x8E197C: add     [esp+50h+var_34], 200h
0x8E1984: mov     eax, [esp+50h+var_30]
0x8E1988: add     eax, 4
0x8E198B: cmp     eax, ebx
0x8E198D: mov     [esp+50h+var_30], eax
0x8E1991: jb      loc_8E1890
0x8E1997: mov     ecx, [esp+50h+var_28]
0x8E199B: mov     ecx, [ecx+19Ch]
0x8E19A1: cmp     edx, [ecx+28h]
0x8E19A4: mov     [ecx+20h], edx
0x8E19A7: jnz     short loc_8E19AF
0x8E19A9: mov     eax, [ecx]
0x8E19AB: push    edx
0x8E19AC: call    dword ptr [eax+10h]
0x8E19AF: pop     edi
0x8E19B0: pop     esi
0x8E19B1: pop     ebx
0x8E19B2: mov     esp, ebp
0x8E19B4: pop     ebp
0x8E19B5: retn    0Ch
