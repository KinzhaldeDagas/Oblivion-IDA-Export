0x8F1790: push    ebp
0x8F1791: mov     ebp, esp
0x8F1793: and     esp, 0FFFFFFF0h
0x8F1796: sub     esp, 14h
0x8F1799: mov     eax, [ebp+arg_4]
0x8F179C: mov     edx, [eax+14h]
0x8F179F: push    ebx
0x8F17A0: push    esi
0x8F17A1: mov     esi, [eax+18h]
0x8F17A4: push    edi
0x8F17A5: mov     edi, [ebp+arg_8]
0x8F17A8: mov     ecx, [edi+4]
0x8F17AB: mov     eax, [edi]
0x8F17AD: mov     [esp+20h+var_4], ecx
0x8F17B1: mov     ecx, [ebp+arg_0]
0x8F17B4: movaps  xmm0, xmmword ptr [ecx+20h]
0x8F17B8: movaps  xmmword ptr [eax], xmm0
0x8F17BB: movaps  xmm1, xmmword ptr [edx+40h]
0x8F17BF: movaps  xmm0, xmmword ptr [ecx]
0x8F17C2: movaps  xmm2, xmmword ptr [esi+40h]
0x8F17C6: mov     bl, [edx+0Ch]
0x8F17C9: test    bl, bl
0x8F17CB: subps   xmm0, xmm1
0x8F17CE: movaps  xmm1, xmmword ptr [ecx+10h]
0x8F17D2: subps   xmm1, xmm2
0x8F17D5: movaps  xmm2, xmmword ptr [ecx+20h]
0x8F17D9: movaps  xmm4, xmm0
0x8F17DC: movaps  xmm3, xmm2
0x8F17DF: shufps  xmm3, xmm2, 0C9h ; 'É'
0x8F17E3: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x8F17E7: mulps   xmm4, xmm3
0x8F17EA: movaps  xmm3, xmm2
0x8F17ED: shufps  xmm3, xmm2, 0D2h ; 'Ò'
0x8F17F1: movaps  xmm2, xmm0
0x8F17F4: shufps  xmm2, xmm0, 0C9h ; 'É'
0x8F17F8: movaps  xmm0, xmm2
0x8F17FB: mulps   xmm0, xmm3
0x8F17FE: subps   xmm0, xmm4
0x8F1801: jnz     short loc_8F1833
0x8F1803: movaps  xmm3, xmmword ptr [edx+70h]
0x8F1807: movaps  xmm4, xmmword ptr [edx+60h]
0x8F180B: movaps  xmm2, xmm0
0x8F180E: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F1812: mulps   xmm3, xmm2
0x8F1815: movaps  xmm2, xmm0
0x8F1818: shufps  xmm2, xmm0, 55h ; 'U'
0x8F181C: mulps   xmm4, xmm2
0x8F181F: movaps  xmm2, xmm0
0x8F1822: shufps  xmm2, xmm0, 0
0x8F1826: movaps  xmm0, xmmword ptr [edx+50h]
0x8F182A: mulps   xmm0, xmm2
0x8F182D: addps   xmm0, xmm4
0x8F1830: addps   xmm0, xmm3
0x8F1833: movaps  xmmword ptr [eax+10h], xmm0
0x8F1837: movaps  xmm0, xmmword ptr [ecx+20h]
0x8F183B: mov     bl, [esi+0Ch]
0x8F183E: test    bl, bl
0x8F1840: movaps  xmm3, xmm0
0x8F1843: movaps  xmm2, xmm1
0x8F1846: shufps  xmm2, xmm1, 0C9h ; 'É'
0x8F184A: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x8F184E: mulps   xmm3, xmm2
0x8F1851: movaps  xmm2, xmm1
0x8F1854: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x8F1858: movaps  xmm1, xmm0
0x8F185B: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8F185F: movaps  xmm0, xmm1
0x8F1862: mulps   xmm0, xmm2
0x8F1865: subps   xmm0, xmm3
0x8F1868: jnz     short loc_8F189A
0x8F186A: movaps  xmm2, xmmword ptr [esi+70h]
0x8F186E: movaps  xmm3, xmmword ptr [esi+60h]
0x8F1872: movaps  xmm1, xmm0
0x8F1875: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F1879: mulps   xmm2, xmm1
0x8F187C: movaps  xmm1, xmm0
0x8F187F: shufps  xmm1, xmm0, 55h ; 'U'
0x8F1883: mulps   xmm3, xmm1
0x8F1886: movaps  xmm1, xmm0
0x8F1889: shufps  xmm1, xmm0, 0
0x8F188D: movaps  xmm0, xmmword ptr [esi+50h]
0x8F1891: mulps   xmm0, xmm1
0x8F1894: addps   xmm0, xmm3
0x8F1897: addps   xmm0, xmm2
0x8F189A: movaps  xmm1, xmmword ptr [eax+10h]
0x8F189E: movaps  xmmword ptr [eax+20h], xmm0
0x8F18A2: fld     dword ptr [esi+3Ch]
0x8F18A5: movaps  xmm0, xmmword ptr [eax+20h]
0x8F18A9: fadd    dword ptr [edx+3Ch]
0x8F18AC: movaps  xmm2, xmmword ptr [esi+30h]
0x8F18B0: movaps  xmm3, xmm0
0x8F18B3: fadd    dword ptr ds:0A9B1ECh
0x8F18B9: mulps   xmm3, xmm0
0x8F18BC: movaps  xmm0, xmmword ptr [edx+30h]
0x8F18C0: mulps   xmm3, xmm2
0x8F18C3: movaps  xmm2, xmm1
0x8F18C6: mulps   xmm2, xmm1
0x8F18C9: movaps  xmm1, xmm2
0x8F18CC: mulps   xmm1, xmm0
0x8F18CF: movaps  xmm0, xmm1
0x8F18D2: addps   xmm0, xmm3
0x8F18D5: movaps  xmm1, xmm0
0x8F18D8: shufps  xmm1, xmm0, 55h ; 'U'
0x8F18DC: addss   xmm1, xmm0
0x8F18E0: movaps  xmm2, xmm0
0x8F18E3: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F18E7: addss   xmm2, xmm1
0x8F18EB: lea     ebx, [esp+20h+var_8]
0x8F18EF: movss   dword ptr [ebx], xmm2
0x8F18F3: fadd    [esp+20h+var_8]
0x8F18F7: lea     edx, [esp+20h+var_8]
0x8F18FB: add     eax, 30h ; '0'
0x8F18FE: fst     dword ptr [eax-4]
0x8F1901: fld     dword ptr ds:0A2F948h
0x8F1907: fdiv    st, st(1)
0x8F1909: fstp    dword ptr [eax-14h]
0x8F190C: movaps  xmm0, xmmword ptr [ecx]
0x8F190F: movaps  xmm2, xmmword ptr [ecx+10h]
0x8F1913: movaps  xmm1, xmmword ptr [ecx+20h]
0x8F1917: fstp    st
0x8F1919: mov     ecx, [ebp+arg_4]
0x8F191C: subps   xmm2, xmm0
0x8F191F: movaps  xmm0, xmm2
0x8F1922: mulps   xmm0, xmm1
0x8F1925: movaps  xmm1, xmm0
0x8F1928: shufps  xmm1, xmm0, 55h ; 'U'
0x8F192C: movaps  xmm2, xmm0
0x8F192F: addss   xmm1, xmm0
0x8F1933: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F1937: addss   xmm2, xmm1
0x8F193B: movss   dword ptr [edx], xmm2
0x8F193F: fld     [esp+20h+var_8]
0x8F1943: fmul    dword ptr [ecx+4]
0x8F1946: mov     ecx, [esp+20h+var_4]
0x8F194A: add     ecx, 4
0x8F194D: fstp    dword ptr [eax-24h]
0x8F1950: mov     dword ptr [ecx-4], 3040Dh
0x8F1957: mov     [edi], eax
0x8F1959: mov     [edi+4], ecx
0x8F195C: pop     edi
0x8F195D: pop     esi
0x8F195E: pop     ebx
0x8F195F: mov     esp, ebp
0x8F1961: pop     ebp
0x8F1962: retn
