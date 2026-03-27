0x8D1700: push    ebp
0x8D1701: mov     ebp, esp
0x8D1703: and     esp, 0FFFFFFF0h
0x8D1706: sub     esp, 20h
0x8D1709: mov     ecx, [ebp+arg_4]
0x8D170C: mov     eax, [ebp+arg_8]
0x8D170F: movaps  xmm3, xmmword ptr [eax]
0x8D1712: movaps  xmm4, xmmword ptr [ecx]
0x8D1715: mov     edx, [ebp+arg_C]
0x8D1718: movaps  xmm5, xmmword ptr [edx]
0x8D171B: movaps  xmm1, xmm4
0x8D171E: subps   xmm1, xmm3
0x8D1721: movaps  xmm0, xmm1
0x8D1724: mulps   xmm0, xmm1
0x8D1727: movaps  xmm6, xmm0
0x8D172A: shufps  xmm6, xmm0, 55h ; 'U'
0x8D172E: addss   xmm6, xmm0
0x8D1732: movaps  xmm7, xmm0
0x8D1735: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x8D1739: addss   xmm7, xmm6
0x8D173D: movaps  xmm2, xmm5
0x8D1740: subps   xmm2, xmm3
0x8D1743: lea     eax, [esp+20h+var_18]
0x8D1747: movss   dword ptr [eax], xmm7
0x8D174B: movaps  xmm0, xmm2
0x8D174E: mulps   xmm0, xmm2
0x8D1751: movaps  xmm6, xmm0
0x8D1754: shufps  xmm6, xmm0, 55h ; 'U'
0x8D1758: addss   xmm6, xmm0
0x8D175C: movaps  xmm7, xmm0
0x8D175F: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x8D1763: addss   xmm7, xmm6
0x8D1767: lea     ecx, [esp+20h+var_10]
0x8D176B: movss   dword ptr [ecx], xmm7
0x8D176F: fld     [esp+20h+var_10]
0x8D1773: fmul    [esp+20h+var_18]
0x8D1777: movaps  xmm0, xmm2
0x8D177A: mulps   xmm0, xmm1
0x8D177D: movaps  xmm6, xmm0
0x8D1780: shufps  xmm6, xmm0, 55h ; 'U'
0x8D1784: movaps  xmm7, xmm0
0x8D1787: lea     eax, [esp+20h+var_14]
0x8D178B: addss   xmm6, xmm0
0x8D178F: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x8D1793: addss   xmm7, xmm6
0x8D1797: movss   dword ptr [eax], xmm7
0x8D179B: fld     [esp+20h+var_14]
0x8D179F: fmul    [esp+20h+var_14]
0x8D17A3: fsubp   st(1), st
0x8D17A5: fst     [esp+20h+var_C]
0x8D17A9: fcomp   dword ptr ds:0A2FAA8h
0x8D17AF: fnstsw  ax
0x8D17B1: test    ah, 41h
0x8D17B4: jnz     loc_8D1866
0x8D17BA: mov     ecx, [ebp+arg_0]
0x8D17BD: fld     dword ptr ds:0A2F948h
0x8D17C3: fdiv    [esp+20h+var_C]
0x8D17C7: movaps  xmm0, xmmword ptr [ecx]
0x8D17CA: subps   xmm3, xmm0
0x8D17CD: movaps  xmm0, xmm3
0x8D17D0: mulps   xmm0, xmm1
0x8D17D3: movaps  xmm1, xmm0
0x8D17D6: shufps  xmm1, xmm0, 55h ; 'U'
0x8D17DA: addss   xmm1, xmm0
0x8D17DE: mulps   xmm3, xmm2
0x8D17E1: movaps  xmm4, xmm0
0x8D17E4: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8D17E8: movaps  xmm0, xmm3
0x8D17EB: addss   xmm4, xmm1
0x8D17EF: movaps  xmm1, xmm0
0x8D17F2: shufps  xmm1, xmm0, 55h ; 'U'
0x8D17F6: movaps  xmm2, xmm0
0x8D17F9: lea     eax, [esp+20h+var_4]
0x8D17FD: addss   xmm1, xmm0
0x8D1801: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8D1805: addss   xmm2, xmm1
0x8D1809: movss   dword ptr [eax], xmm2
0x8D180D: mov     eax, [ebp+arg_10]
0x8D1810: lea     edx, [esp+20h+var_8]
0x8D1814: movss   dword ptr [edx], xmm4
0x8D1818: fld     [esp+20h+var_4]
0x8D181C: fmul    [esp+20h+var_14]
0x8D1820: fld     [esp+20h+var_8]
0x8D1824: fmul    [esp+20h+var_10]
0x8D1828: fsubp   st(1), st
0x8D182A: fld     [esp+20h+var_14]
0x8D182E: fmul    [esp+20h+var_8]
0x8D1832: fld     [esp+20h+var_4]
0x8D1836: fmul    [esp+20h+var_18]
0x8D183A: fsubp   st(1), st
0x8D183C: fstp    [esp+20h+var_4]
0x8D1840: fld     st
0x8D1842: fmul    st, st(2)
0x8D1844: fstp    dword ptr [eax]
0x8D1846: fld     [esp+20h+var_C]
0x8D184A: fsub    st, st(1)
0x8D184C: fsub    [esp+20h+var_4]
0x8D1850: fmul    st, st(2)
0x8D1852: fstp    dword ptr [eax+4]
0x8D1855: fstp    st
0x8D1857: fld     [esp+20h+var_4]
0x8D185B: fmul    st, st(1)
0x8D185D: fstp    dword ptr [eax+8]
0x8D1860: fstp    st
0x8D1862: mov     esp, ebp
0x8D1864: pop     ebp
0x8D1865: retn
0x8D1866: fld     [esp+20h+var_18]
0x8D186A: subps   xmm4, xmm5
0x8D186D: fcomp   [esp+20h+var_10]
0x8D1871: movaps  xmm0, xmm4
0x8D1874: mulps   xmm0, xmm4
0x8D1877: movaps  xmm6, xmm0
0x8D187A: shufps  xmm6, xmm0, 55h ; 'U'
0x8D187E: movaps  xmm7, xmm0
0x8D1881: fnstsw  ax
0x8D1883: addss   xmm6, xmm0
0x8D1887: test    ah, 1
0x8D188A: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x8D188E: lea     ecx, [esp+20h+var_14]
0x8D1892: addss   xmm7, xmm6
0x8D1896: movss   dword ptr [ecx], xmm7
0x8D189A: fld     [esp+20h+var_14]
0x8D189E: jnz     loc_8D1977
0x8D18A4: fcomp   [esp+20h+var_18]
0x8D18A8: fnstsw  ax
0x8D18AA: test    ah, 1
0x8D18AD: jnz     short loc_8D1926
0x8D18AF: fld     [esp+20h+var_14]
0x8D18B3: mov     ecx, [ebp+arg_10]
0x8D18B6: fcomp   dword ptr ds:0A2FAA8h
0x8D18BC: mov     dword ptr [ecx+4], 0
0x8D18C3: fnstsw  ax
0x8D18C5: test    ah, 41h
0x8D18C8: jnz     short loc_8D1915
0x8D18CA: movaps  xmm0, xmmword ptr [edx]
0x8D18CD: mov     edx, [ebp+arg_0]
0x8D18D0: movaps  xmm1, xmmword ptr [edx]
0x8D18D3: subps   xmm1, xmm0
0x8D18D6: movaps  xmm0, xmm1
0x8D18D9: mulps   xmm0, xmm4
0x8D18DC: movaps  xmm1, xmm0
0x8D18DF: shufps  xmm1, xmm0, 55h ; 'U'
0x8D18E3: movaps  xmm2, xmm0
0x8D18E6: addss   xmm1, xmm0
0x8D18EA: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8D18EE: lea     eax, [esp+20h+var_4]
0x8D18F2: addss   xmm2, xmm1
0x8D18F6: movss   dword ptr [eax], xmm2
0x8D18FA: fld     [esp+20h+var_4]
0x8D18FE: fdiv    [esp+20h+var_14]
0x8D1902: fst     dword ptr [ecx]
0x8D1904: fld     dword ptr ds:0A2F948h
0x8D190A: fsub    st, st(1)
0x8D190C: fstp    dword ptr [ecx+8]
0x8D190F: fstp    st
0x8D1911: mov     esp, ebp
0x8D1913: pop     ebp
0x8D1914: retn
0x8D1915: mov     dword ptr [ecx], 0
0x8D191B: mov     dword ptr [ecx+8], 0
0x8D1922: mov     esp, ebp
0x8D1924: pop     ebp
0x8D1925: retn
0x8D1926: mov     ecx, [ebp+arg_0]
0x8D1929: movaps  xmm0, xmmword ptr [ecx]
0x8D192C: subps   xmm0, xmm3
0x8D192F: mulps   xmm0, xmm1
0x8D1932: movaps  xmm1, xmm0
0x8D1935: shufps  xmm1, xmm0, 55h ; 'U'
0x8D1939: movaps  xmm2, xmm0
0x8D193C: addss   xmm1, xmm0
0x8D1940: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8D1944: lea     edx, [esp+20h+var_4]
0x8D1948: addss   xmm2, xmm1
0x8D194C: movss   dword ptr [edx], xmm2
0x8D1950: fld     [esp+20h+var_4]
0x8D1954: fdiv    [esp+20h+var_18]
0x8D1958: mov     eax, [ebp+arg_10]
0x8D195B: mov     dword ptr [eax+8], 0
0x8D1962: fld     st
0x8D1964: fstp    dword ptr [eax]
0x8D1966: fld     dword ptr ds:0A2F948h
0x8D196C: fsub    st, st(1)
0x8D196E: fstp    dword ptr [eax+4]
0x8D1971: fstp    st
0x8D1973: mov     esp, ebp
0x8D1975: pop     ebp
0x8D1976: retn
0x8D1977: fcomp   [esp+20h+var_10]
0x8D197B: fnstsw  ax
0x8D197D: test    ah, 1
0x8D1980: jnz     short loc_8D19D3
0x8D1982: mov     eax, [ebp+arg_0]
0x8D1985: movaps  xmm0, xmmword ptr [eax]
0x8D1988: subps   xmm0, xmm5
0x8D198B: mulps   xmm0, xmm4
0x8D198E: movaps  xmm1, xmm0
0x8D1991: shufps  xmm1, xmm0, 55h ; 'U'
0x8D1995: movaps  xmm2, xmm0
0x8D1998: addss   xmm1, xmm0
0x8D199C: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8D19A0: lea     ecx, [esp+20h+var_4]
0x8D19A4: addss   xmm2, xmm1
0x8D19A8: movss   dword ptr [ecx], xmm2
0x8D19AC: fld     [esp+20h+var_4]
0x8D19B0: fdiv    [esp+20h+var_14]
0x8D19B4: mov     eax, [ebp+arg_10]
0x8D19B7: mov     dword ptr [eax+4], 0
0x8D19BE: fld     st
0x8D19C0: fstp    dword ptr [eax]
0x8D19C2: fld     dword ptr ds:0A2F948h
0x8D19C8: fsub    st, st(1)
0x8D19CA: fstp    dword ptr [eax+8]
0x8D19CD: fstp    st
0x8D19CF: mov     esp, ebp
0x8D19D1: pop     ebp
0x8D19D2: retn
0x8D19D3: mov     edx, [ebp+arg_0]
0x8D19D6: movaps  xmm0, xmmword ptr [edx]
0x8D19D9: subps   xmm0, xmm3
0x8D19DC: mulps   xmm0, xmm2
0x8D19DF: movaps  xmm1, xmm0
0x8D19E2: shufps  xmm1, xmm0, 55h ; 'U'
0x8D19E6: movaps  xmm2, xmm0
0x8D19E9: lea     eax, [esp+20h+var_4]
0x8D19ED: addss   xmm1, xmm0
0x8D19F1: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8D19F5: addss   xmm2, xmm1
0x8D19F9: movss   dword ptr [eax], xmm2
0x8D19FD: fld     [esp+20h+var_4]
0x8D1A01: fdiv    [esp+20h+var_10]
0x8D1A05: mov     eax, [ebp+arg_10]
0x8D1A08: mov     dword ptr [eax], 0
0x8D1A0E: fst     dword ptr [eax+8]
0x8D1A11: fld     dword ptr ds:0A2F948h
0x8D1A17: fsub    st, st(1)
0x8D1A19: fstp    dword ptr [eax+4]
0x8D1A1C: fstp    st
0x8D1A1E: mov     esp, ebp
0x8D1A20: pop     ebp
0x8D1A21: retn
