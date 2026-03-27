0x8F15F0: push    ebp
0x8F15F1: mov     ebp, esp
0x8F15F3: and     esp, 0FFFFFFF0h
0x8F15F6: push    ecx
0x8F15F7: mov     eax, [ebp+arg_8]
0x8F15FA: mov     eax, [eax]
0x8F15FC: push    ebx
0x8F15FD: push    esi
0x8F15FE: mov     esi, [ebp+arg_0]
0x8F1601: movaps  xmm0, xmmword ptr [esi+10h]
0x8F1605: push    edi
0x8F1606: mov     edi, [ebp+arg_4]
0x8F1609: mov     ecx, [edi+14h]
0x8F160C: mov     edx, [edi+18h]
0x8F160F: movaps  xmmword ptr [eax], xmm0
0x8F1612: movaps  xmm1, xmmword ptr [esi]
0x8F1615: movaps  xmm2, xmmword ptr [ecx+40h]
0x8F1619: mov     bl, [ecx+0Ch]
0x8F161C: test    bl, bl
0x8F161E: movaps  xmm0, xmm1
0x8F1621: subps   xmm0, xmm2
0x8F1624: movaps  xmm2, xmmword ptr [edx+40h]
0x8F1628: subps   xmm1, xmm2
0x8F162B: movaps  xmm2, xmmword ptr [esi+10h]
0x8F162F: movaps  xmm4, xmm0
0x8F1632: movaps  xmm3, xmm2
0x8F1635: shufps  xmm3, xmm2, 0C9h ; 'É'
0x8F1639: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x8F163D: mulps   xmm4, xmm3
0x8F1640: movaps  xmm3, xmm2
0x8F1643: shufps  xmm3, xmm2, 0D2h ; 'Ò'
0x8F1647: movaps  xmm2, xmm0
0x8F164A: shufps  xmm2, xmm0, 0C9h ; 'É'
0x8F164E: movaps  xmm0, xmm2
0x8F1651: mulps   xmm0, xmm3
0x8F1654: subps   xmm0, xmm4
0x8F1657: jnz     short loc_8F1689
0x8F1659: movaps  xmm3, xmmword ptr [ecx+70h]
0x8F165D: movaps  xmm4, xmmword ptr [ecx+60h]
0x8F1661: movaps  xmm2, xmm0
0x8F1664: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F1668: mulps   xmm3, xmm2
0x8F166B: movaps  xmm2, xmm0
0x8F166E: shufps  xmm2, xmm0, 55h ; 'U'
0x8F1672: mulps   xmm4, xmm2
0x8F1675: movaps  xmm2, xmm0
0x8F1678: shufps  xmm2, xmm0, 0
0x8F167C: movaps  xmm0, xmmword ptr [ecx+50h]
0x8F1680: mulps   xmm0, xmm2
0x8F1683: addps   xmm0, xmm4
0x8F1686: addps   xmm0, xmm3
0x8F1689: movaps  xmmword ptr [eax+10h], xmm0
0x8F168D: movaps  xmm0, xmmword ptr [esi+10h]
0x8F1691: mov     bl, [edx+0Ch]
0x8F1694: test    bl, bl
0x8F1696: movaps  xmm3, xmm0
0x8F1699: movaps  xmm2, xmm1
0x8F169C: shufps  xmm2, xmm1, 0C9h ; 'É'
0x8F16A0: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x8F16A4: mulps   xmm3, xmm2
0x8F16A7: movaps  xmm2, xmm1
0x8F16AA: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x8F16AE: movaps  xmm1, xmm0
0x8F16B1: shufps  xmm1, xmm0, 0C9h ; 'É'
0x8F16B5: movaps  xmm0, xmm1
0x8F16B8: mulps   xmm0, xmm2
0x8F16BB: subps   xmm0, xmm3
0x8F16BE: jnz     short loc_8F16F0
0x8F16C0: movaps  xmm2, xmmword ptr [edx+70h]
0x8F16C4: movaps  xmm3, xmmword ptr [edx+60h]
0x8F16C8: movaps  xmm1, xmm0
0x8F16CB: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F16CF: mulps   xmm2, xmm1
0x8F16D2: movaps  xmm1, xmm0
0x8F16D5: shufps  xmm1, xmm0, 55h ; 'U'
0x8F16D9: mulps   xmm3, xmm1
0x8F16DC: movaps  xmm1, xmm0
0x8F16DF: shufps  xmm1, xmm0, 0
0x8F16E3: movaps  xmm0, xmmword ptr [edx+50h]
0x8F16E7: mulps   xmm0, xmm1
0x8F16EA: addps   xmm0, xmm3
0x8F16ED: addps   xmm0, xmm2
0x8F16F0: movaps  xmm1, xmmword ptr [eax+10h]
0x8F16F4: movaps  xmmword ptr [eax+20h], xmm0
0x8F16F8: fld     dword ptr [edx+3Ch]
0x8F16FB: fadd    dword ptr [ecx+3Ch]
0x8F16FE: movaps  xmm0, xmmword ptr [eax+20h]
0x8F1702: movaps  xmm2, xmmword ptr [edx+30h]
0x8F1706: movaps  xmm3, xmm0
0x8F1709: fadd    dword ptr ds:0A9B1ECh
0x8F170F: mulps   xmm3, xmm0
0x8F1712: movaps  xmm0, xmmword ptr [ecx+30h]
0x8F1716: mulps   xmm3, xmm2
0x8F1719: movaps  xmm2, xmm1
0x8F171C: mulps   xmm2, xmm1
0x8F171F: movaps  xmm1, xmm2
0x8F1722: mulps   xmm1, xmm0
0x8F1725: movaps  xmm0, xmm1
0x8F1728: addps   xmm0, xmm3
0x8F172B: movaps  xmm1, xmm0
0x8F172E: shufps  xmm1, xmm0, 55h ; 'U'
0x8F1732: movaps  xmm2, xmm0
0x8F1735: lea     ebx, [esp+10h+var_4]
0x8F1739: addss   xmm1, xmm0
0x8F173D: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F1741: addss   xmm2, xmm1
0x8F1745: movss   dword ptr [ebx], xmm2
0x8F1749: fadd    [esp+10h+var_4]
0x8F174D: mov     edx, [ebp+arg_8]
0x8F1750: fst     dword ptr [eax+2Ch]
0x8F1753: fld     dword ptr ds:0A2F948h
0x8F1759: fdiv    st, st(1)
0x8F175B: fstp    dword ptr [eax+1Ch]
0x8F175E: mov     ecx, [esi+24h]
0x8F1761: fstp    st
0x8F1763: fld     dword ptr [ecx+4]
0x8F1766: mov     ecx, [edx+4]
0x8F1769: fld     dword ptr [esi+20h]
0x8F176C: lea     esi, [eax+30h]
0x8F176F: fmul    dword ptr [edi]
0x8F1771: mov     dword ptr [ecx], 30806h
0x8F1777: add     ecx, 8
0x8F177A: fstp    dword ptr [ecx-4]
0x8F177D: mov     [edx], esi
0x8F177F: mov     [edx+4], ecx
0x8F1782: fmul    dword ptr [edi+4]
0x8F1785: pop     edi
0x8F1786: pop     esi
0x8F1787: pop     ebx
0x8F1788: fstp    dword ptr [eax+0Ch]
0x8F178B: mov     esp, ebp
0x8F178D: pop     ebp
0x8F178E: retn
