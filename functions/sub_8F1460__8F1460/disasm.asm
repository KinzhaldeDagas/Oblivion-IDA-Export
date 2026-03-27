0x8F1460: push    ebp
0x8F1461: mov     ebp, esp
0x8F1463: and     esp, 0FFFFFFF0h
0x8F1466: sub     esp, 14h
0x8F1469: mov     edx, [ebp+arg_0]
0x8F146C: push    ebx
0x8F146D: mov     ebx, [edx]
0x8F146F: push    esi
0x8F1470: mov     esi, [edx+4]
0x8F1473: mov     [esp+1Ch+var_8], esi
0x8F1477: mov     esi, [edx+0Ch]
0x8F147A: dec     esi
0x8F147B: push    edi
0x8F147C: mov     edi, [ebp+arg_8]
0x8F147F: mov     eax, [edi]
0x8F1481: mov     ecx, [edi+4]
0x8F1484: js      loc_8F15E4
0x8F148A: mov     edi, [esp+20h+var_8]
0x8F148E: mov     edx, [ebp+arg_4]
0x8F1491: add     edi, 4
0x8F1494: inc     esi
0x8F1495: mov     [esp+20h+var_C], edi
0x8F1499: mov     [esp+20h+var_8], esi
0x8F149D: lea     ecx, [ecx+0]
0x8F14A0: mov     esi, [edx+14h]
0x8F14A3: cmp     byte ptr [esi+0Ch], 0
0x8F14A7: mov     edi, [edx+18h]
0x8F14AA: movaps  xmm0, xmmword ptr [ebx]
0x8F14AD: jnz     short loc_8F14DF
0x8F14AF: movaps  xmm2, xmmword ptr [esi+70h]
0x8F14B3: movaps  xmm3, xmmword ptr [esi+60h]
0x8F14B7: movaps  xmm1, xmm0
0x8F14BA: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F14BE: mulps   xmm2, xmm1
0x8F14C1: movaps  xmm1, xmm0
0x8F14C4: shufps  xmm1, xmm0, 55h ; 'U'
0x8F14C8: mulps   xmm3, xmm1
0x8F14CB: movaps  xmm1, xmm0
0x8F14CE: shufps  xmm1, xmm0, 0
0x8F14D2: movaps  xmm0, xmmword ptr [esi+50h]
0x8F14D6: mulps   xmm0, xmm1
0x8F14D9: addps   xmm0, xmm3
0x8F14DC: addps   xmm0, xmm2
0x8F14DF: movaps  xmmword ptr [eax], xmm0
0x8F14E2: cmp     byte ptr [edi+0Ch], 0
0x8F14E6: jz      short loc_8F14FB
0x8F14E8: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8F14EF: movaps  xmm1, xmmword ptr [ebx]
0x8F14F2: xorps   xmm1, xmm0
0x8F14F5: movaps  xmmword ptr [eax+10h], xmm1
0x8F14F9: jmp     short loc_8F153C
0x8F14FB: movaps  xmm1, xmmword ptr ds:0A965C0h
0x8F1502: movaps  xmm0, xmmword ptr [ebx]
0x8F1505: movaps  xmm2, xmmword ptr [edi+70h]
0x8F1509: movaps  xmm3, xmmword ptr [edi+60h]
0x8F150D: xorps   xmm0, xmm1
0x8F1510: movaps  xmm1, xmm0
0x8F1513: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F1517: mulps   xmm2, xmm1
0x8F151A: movaps  xmm1, xmm0
0x8F151D: shufps  xmm1, xmm0, 55h ; 'U'
0x8F1521: mulps   xmm3, xmm1
0x8F1524: movaps  xmm1, xmm0
0x8F1527: shufps  xmm1, xmm0, 0
0x8F152B: movaps  xmm0, xmmword ptr [edi+50h]
0x8F152F: mulps   xmm0, xmm1
0x8F1532: addps   xmm0, xmm3
0x8F1535: addps   xmm0, xmm2
0x8F1538: movaps  xmmword ptr [eax+10h], xmm0
0x8F153C: movaps  xmm0, xmmword ptr [eax+10h]
0x8F1540: movaps  xmm1, xmmword ptr [eax]
0x8F1543: movaps  xmm2, xmmword ptr [edi+30h]
0x8F1547: movaps  xmm3, xmm0
0x8F154A: mulps   xmm3, xmm0
0x8F154D: movaps  xmm0, xmmword ptr [esi+30h]
0x8F1551: mulps   xmm3, xmm2
0x8F1554: movaps  xmm2, xmm1
0x8F1557: mulps   xmm2, xmm1
0x8F155A: movaps  xmm1, xmm2
0x8F155D: mulps   xmm1, xmm0
0x8F1560: movaps  xmm0, xmm1
0x8F1563: addps   xmm0, xmm3
0x8F1566: movaps  xmm1, xmm0
0x8F1569: shufps  xmm1, xmm0, 55h ; 'U'
0x8F156D: movaps  xmm2, xmm0
0x8F1570: lea     esi, [esp+20h+var_4]
0x8F1574: addss   xmm1, xmm0
0x8F1578: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F157C: addss   xmm2, xmm1
0x8F1580: movss   dword ptr [esi], xmm2
0x8F1584: fld     [esp+20h+var_4]
0x8F1588: fadd    dword ptr ds:0A9B1ECh
0x8F158E: mov     esi, [ebp+arg_0]
0x8F1591: add     ecx, 8
0x8F1594: add     ebx, 10h
0x8F1597: fdivr   dword ptr ds:0A2F948h
0x8F159D: add     eax, 20h ; ' '
0x8F15A0: fstp    dword ptr [eax-14h]
0x8F15A3: fld     dword ptr [esi+8]
0x8F15A6: fmul    dword ptr [edx]
0x8F15A8: mov     esi, [esp+20h+var_C]
0x8F15AC: mov     dword ptr [ecx-8], 40809h
0x8F15B3: add     esi, 8
0x8F15B6: mov     [esp+20h+var_C], esi
0x8F15BA: fstp    dword ptr [ecx-4]
0x8F15BD: fld     dword ptr [esi-8]
0x8F15C0: mov     esi, [esp+20h+var_8]
0x8F15C4: fmul    dword ptr [edx+4]
0x8F15C7: dec     esi
0x8F15C8: mov     [esp+20h+var_8], esi
0x8F15CC: fstp    dword ptr [eax-4]
0x8F15CF: jnz     loc_8F14A0
0x8F15D5: mov     edx, [ebp+arg_8]
0x8F15D8: mov     [edx], eax
0x8F15DA: mov     [edx+4], ecx
0x8F15DD: pop     edi
0x8F15DE: pop     esi
0x8F15DF: pop     ebx
0x8F15E0: mov     esp, ebp
0x8F15E2: pop     ebp
0x8F15E3: retn
0x8F15E4: mov     [edi], eax
0x8F15E6: mov     [edi+4], ecx
0x8F15E9: pop     edi
0x8F15EA: pop     esi
0x8F15EB: pop     ebx
0x8F15EC: mov     esp, ebp
0x8F15EE: pop     ebp
0x8F15EF: retn
