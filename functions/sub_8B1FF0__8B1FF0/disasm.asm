0x8B1FF0: push    ebp
0x8B1FF1: mov     ebp, esp
0x8B1FF3: and     esp, 0FFFFFFF0h
0x8B1FF6: push    ecx
0x8B1FF7: mov     edx, [ebp+arg_0]
0x8B1FFA: movaps  xmm2, xmmword ptr [edx+20h]
0x8B1FFE: movaps  xmm1, xmmword ptr [edx]
0x8B2001: movaps  xmm3, xmmword ptr [edx+10h]
0x8B2005: movaps  xmm0, xmm1
0x8B2008: shufps  xmm0, xmm3, 44h ; 'D'
0x8B200C: shufps  xmm1, xmm3, 0EEh ; 'î'
0x8B2010: push    ebx
0x8B2011: mov     ebx, [ebp+arg_4]
0x8B2014: movaps  xmm3, xmm2
0x8B2017: shufps  xmm3, xmm2, 44h ; 'D'
0x8B201B: movaps  xmm4, xmm0
0x8B201E: push    esi
0x8B201F: shufps  xmm4, xmm3, 88h ; 'ˆ'
0x8B2023: shufps  xmm0, xmm3, 0DDh ; 'Ý'
0x8B2027: movaps  xmm3, xmm2
0x8B202A: shufps  xmm3, xmm2, 0EEh ; 'î'
0x8B202E: mov     esi, ecx
0x8B2030: push    edi
0x8B2031: shufps  xmm1, xmm3, 88h ; 'ˆ'
0x8B2035: mov     eax, ebx
0x8B2037: movaps  xmm2, xmm1
0x8B203A: sub     esi, ebx
0x8B203C: mov     edi, 3
0x8B2041: movaps  xmm1, xmmword ptr [eax]
0x8B2044: movaps  xmm3, xmm1
0x8B2047: shufps  xmm3, xmm1, 0AAh ; 'ª'
0x8B204B: movaps  xmm5, xmm2
0x8B204E: mulps   xmm5, xmm3
0x8B2051: movaps  xmm3, xmm1
0x8B2054: shufps  xmm3, xmm1, 55h ; 'U'
0x8B2058: movaps  xmm6, xmm0
0x8B205B: mulps   xmm6, xmm3
0x8B205E: movaps  xmm3, xmm1
0x8B2061: shufps  xmm3, xmm1, 0
0x8B2065: movaps  xmm1, xmm4
0x8B2068: mulps   xmm1, xmm3
0x8B206B: addps   xmm1, xmm6
0x8B206E: addps   xmm1, xmm5
0x8B2071: movaps  xmmword ptr [esi+eax], xmm1
0x8B2075: add     eax, 10h
0x8B2078: dec     edi
0x8B2079: jnz     short loc_8B2041
0x8B207B: movaps  xmm3, xmmword ptr [edx+20h]
0x8B207F: movaps  xmm1, xmmword ptr [edx+30h]
0x8B2083: movaps  xmm0, xmmword ptr [ebx+30h]
0x8B2087: movaps  xmm2, xmmword ptr [edx]
0x8B208A: movaps  xmm5, xmmword ptr [edx+10h]
0x8B208E: subps   xmm0, xmm1
0x8B2091: movaps  xmm4, xmm3
0x8B2094: shufps  xmm4, xmm3, 44h ; 'D'
0x8B2098: movaps  xmm7, xmm3
0x8B209B: movaps  xmm1, xmm2
0x8B209E: shufps  xmm1, xmm5, 44h ; 'D'
0x8B20A2: shufps  xmm7, xmm3, 0EEh ; 'î'
0x8B20A6: shufps  xmm2, xmm5, 0EEh ; 'î'
0x8B20AA: movaps  xmm5, xmm1
0x8B20AD: movaps  xmm3, xmm0
0x8B20B0: shufps  xmm3, xmm0, 55h ; 'U'
0x8B20B4: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x8B20B8: mulps   xmm5, xmm3
0x8B20BB: shufps  xmm1, xmm4, 88h ; 'ˆ'
0x8B20BF: movaps  xmm3, xmm0
0x8B20C2: pop     edi
0x8B20C3: movaps  xmm6, xmm0
0x8B20C6: shufps  xmm3, xmm0, 0
0x8B20CA: mulps   xmm1, xmm3
0x8B20CD: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8B20D1: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x8B20D5: mulps   xmm2, xmm6
0x8B20D8: addps   xmm1, xmm5
0x8B20DB: pop     esi
0x8B20DC: addps   xmm1, xmm2
0x8B20DF: movaps  xmmword ptr [ecx+30h], xmm1
0x8B20E3: pop     ebx
0x8B20E4: mov     esp, ebp
0x8B20E6: pop     ebp
0x8B20E7: retn    8
