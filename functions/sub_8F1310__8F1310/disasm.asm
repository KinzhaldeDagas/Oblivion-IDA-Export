0x8F1310: push    ebp
0x8F1311: mov     ebp, esp
0x8F1313: and     esp, 0FFFFFFF0h
0x8F1316: push    ecx
0x8F1317: mov     ecx, [ebp+arg_0]
0x8F131A: movaps  xmm0, xmmword ptr [ecx+10h]
0x8F131E: push    ebx
0x8F131F: mov     ebx, [ebp+arg_4]
0x8F1322: mov     edx, [ebx+14h]
0x8F1325: cmp     byte ptr [edx+0Ch], 0
0x8F1329: push    esi
0x8F132A: mov     esi, [ebp+arg_8]
0x8F132D: mov     eax, [esi]
0x8F132F: push    edi
0x8F1330: mov     edi, [ebx+18h]
0x8F1333: jnz     short loc_8F1365
0x8F1335: movaps  xmm2, xmmword ptr [edx+70h]
0x8F1339: movaps  xmm3, xmmword ptr [edx+60h]
0x8F133D: movaps  xmm1, xmm0
0x8F1340: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F1344: mulps   xmm2, xmm1
0x8F1347: movaps  xmm1, xmm0
0x8F134A: shufps  xmm1, xmm0, 55h ; 'U'
0x8F134E: mulps   xmm3, xmm1
0x8F1351: movaps  xmm1, xmm0
0x8F1354: shufps  xmm1, xmm0, 0
0x8F1358: movaps  xmm0, xmmword ptr [edx+50h]
0x8F135C: mulps   xmm0, xmm1
0x8F135F: addps   xmm0, xmm3
0x8F1362: addps   xmm0, xmm2
0x8F1365: movaps  xmmword ptr [eax], xmm0
0x8F1368: cmp     byte ptr [edi+0Ch], 0
0x8F136C: jz      short loc_8F1382
0x8F136E: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8F1375: movaps  xmm1, xmmword ptr [ecx+10h]
0x8F1379: xorps   xmm1, xmm0
0x8F137C: movaps  xmmword ptr [eax+10h], xmm1
0x8F1380: jmp     short loc_8F13C4
0x8F1382: movaps  xmm1, xmmword ptr ds:0A965C0h
0x8F1389: movaps  xmm0, xmmword ptr [ecx+10h]
0x8F138D: movaps  xmm2, xmmword ptr [edi+70h]
0x8F1391: movaps  xmm3, xmmword ptr [edi+60h]
0x8F1395: xorps   xmm0, xmm1
0x8F1398: movaps  xmm1, xmm0
0x8F139B: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8F139F: mulps   xmm2, xmm1
0x8F13A2: movaps  xmm1, xmm0
0x8F13A5: shufps  xmm1, xmm0, 55h ; 'U'
0x8F13A9: mulps   xmm3, xmm1
0x8F13AC: movaps  xmm1, xmm0
0x8F13AF: shufps  xmm1, xmm0, 0
0x8F13B3: movaps  xmm0, xmmword ptr [edi+50h]
0x8F13B7: mulps   xmm0, xmm1
0x8F13BA: addps   xmm0, xmm3
0x8F13BD: addps   xmm0, xmm2
0x8F13C0: movaps  xmmword ptr [eax+10h], xmm0
0x8F13C4: movaps  xmm0, xmmword ptr [eax+10h]
0x8F13C8: movaps  xmm2, xmmword ptr [edi+30h]
0x8F13CC: movaps  xmm1, xmmword ptr [eax]
0x8F13CF: movaps  xmm3, xmm0
0x8F13D2: mulps   xmm3, xmm0
0x8F13D5: movaps  xmm0, xmmword ptr [edx+30h]
0x8F13D9: mulps   xmm3, xmm2
0x8F13DC: movaps  xmm2, xmm1
0x8F13DF: mulps   xmm2, xmm1
0x8F13E2: movaps  xmm1, xmm2
0x8F13E5: mulps   xmm1, xmm0
0x8F13E8: movaps  xmm0, xmm1
0x8F13EB: addps   xmm0, xmm3
0x8F13EE: movaps  xmm1, xmm0
0x8F13F1: shufps  xmm1, xmm0, 55h ; 'U'
0x8F13F5: movaps  xmm2, xmm0
0x8F13F8: lea     edx, [esp+10h+var_4]
0x8F13FC: addss   xmm1, xmm0
0x8F1400: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F1404: addss   xmm2, xmm1
0x8F1408: movss   dword ptr [edx], xmm2
0x8F140C: fld     [esp+10h+var_4]
0x8F1410: fadd    dword ptr ds:0A9B1ECh
0x8F1416: lea     edx, [eax+20h]
0x8F1419: pop     edi
0x8F141A: fdivr   dword ptr ds:0A2F948h
0x8F1420: fstp    dword ptr [eax+0Ch]
0x8F1423: fld     dword ptr [ecx+28h]
0x8F1426: fmul    dword ptr [ecx+8]
0x8F1429: fld     dword ptr [ecx+24h]
0x8F142C: fmul    dword ptr [ecx+4]
0x8F142F: faddp   st(1), st
0x8F1431: fld     dword ptr [ecx+20h]
0x8F1434: fmul    dword ptr [ecx]
0x8F1436: mov     ecx, [esi+4]
0x8F1439: mov     dword ptr [ecx], 4040Ch
0x8F143F: mov     [esi], edx
0x8F1441: faddp   st(1), st
0x8F1443: add     ecx, 4
0x8F1446: mov     [esi+4], ecx
0x8F1449: fchs
0x8F144B: pop     esi
0x8F144C: fmul    dword ptr [ebx+4]
0x8F144F: pop     ebx
0x8F1450: fstp    dword ptr [eax+1Ch]
0x8F1453: mov     esp, ebp
0x8F1455: pop     ebp
0x8F1456: retn
