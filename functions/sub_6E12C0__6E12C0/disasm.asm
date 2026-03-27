0x6E12C0: push    0FFFFFFFFh
0x6E12C2: push    offset SEH_6E12C0
0x6E12C7: mov     eax, large fs:0
0x6E12CD: push    eax
0x6E12CE: sub     esp, 38h
0x6E12D1: push    ebx
0x6E12D2: push    ebp
0x6E12D3: push    esi
0x6E12D4: push    edi
0x6E12D5: mov     eax, ds:0B30AACh
0x6E12DA: xor     eax, esp
0x6E12DC: push    eax
0x6E12DD: lea     eax, [esp+58h+var_C]
0x6E12E1: mov     large fs:0, eax
0x6E12E7: mov     ebp, ecx
0x6E12E9: mov     [esp+58h+var_18], ebp
0x6E12ED: mov     edi, [esp+58h+arg_0]
0x6E12F1: push    edi
0x6E12F2: call    sub_715F40
0x6E12F7: cmp     dword ptr [edi+0D8h], 4010003h
0x6E1301: mov     eax, [edi+21Ch]
0x6E1307: mov     [esp+58h+arg_0], 4
0x6E130F: lea     ecx, [esp+58h+arg_0]
0x6E1313: jnb     loc_6E159F
0x6E1319: mov     esi, 1
0x6E131E: push    esi
0x6E131F: push    ecx
0x6E1320: push    4
0x6E1322: lea     edx, [esp+64h+var_30]
0x6E1326: push    edx
0x6E1327: push    eax
0x6E1328: mov     eax, [eax+4]
0x6E132B: call    eax
0x6E132D: xor     ebx, ebx
0x6E132F: add     esp, 14h
0x6E1332: cmp     [esp+58h+var_30], ebx
0x6E1336: jz      loc_6E1681
0x6E133C: lea     esp, [esp+0]
0x6E1340: mov     eax, [edi+21Ch]
0x6E1346: sub     [esp+58h+var_30], esi
0x6E134A: push    esi
0x6E134B: lea     ecx, [esp+5Ch+var_34]
0x6E134F: push    ecx
0x6E1350: push    esi
0x6E1351: lea     edx, [esp+64h+arg_0]
0x6E1355: push    edx
0x6E1356: push    eax
0x6E1357: mov     eax, [eax+4]
0x6E135A: mov     [esp+6Ch+var_34], esi
0x6E135E: call    eax
0x6E1360: add     esp, 14h
0x6E1363: lea     ecx, [esp+58h+Src]
0x6E1367: push    ecx
0x6E1368: mov     ecx, edi
0x6E136A: mov     [esp+5Ch+Src], ebx
0x6E136E: call    sub_713620
0x6E1373: cmp     byte ptr [esp+58h+arg_0], bl
0x6E1377: jz      short loc_6E13DF
0x6E1379: lea     edx, [esp+58h+var_34]
0x6E137D: push    edx
0x6E137E: mov     ecx, edi
0x6E1380: mov     [esp+5Ch+var_34], ebx
0x6E1384: call    sub_713620
0x6E1389: mov     eax, [edi+21Ch]
0x6E138F: push    esi
0x6E1390: lea     ecx, [esp+5Ch+var_24]
0x6E1394: push    ecx
0x6E1395: push    4
0x6E1397: lea     edx, [esp+64h+var_20]
0x6E139B: push    edx
0x6E139C: push    eax
0x6E139D: mov     eax, [eax+4]
0x6E13A0: mov     [esp+6Ch+var_24], 4
0x6E13A8: call    eax
0x6E13AA: mov     ecx, [esp+6Ch+var_20]
0x6E13AE: mov     edx, [esp+6Ch+Src]
0x6E13B2: mov     eax, [esp+6Ch+var_34]
0x6E13B6: add     esp, 14h
0x6E13B9: push    ecx; int
0x6E13BA: push    edx; Src
0x6E13BB: push    eax; int
0x6E13BC: mov     ecx, ebp
0x6E13BE: call    sub_6E11E0
0x6E13C3: mov     ecx, [esp+58h+var_34]
0x6E13C7: push    ecx
0x6E13C8: call    FormHeapFree
0x6E13CD: mov     edx, [esp+5Ch+Src]
0x6E13D1: push    edx
0x6E13D2: call    FormHeapFree
0x6E13D7: add     esp, 8
0x6E13DA: jmp     loc_6E1590
0x6E13DF: push    40h ; '@'; Size
0x6E13E1: call    FormHeapAlloc
0x6E13E6: add     esp, 4
0x6E13E9: mov     [esp+58h+var_10], eax
0x6E13ED: cmp     eax, ebx
0x6E13EF: mov     [esp+58h+var_4], ebx
0x6E13F3: jz      short loc_6E13FE
0x6E13F5: mov     ecx, eax
0x6E13F7: call    sub_6E0EF0
0x6E13FC: jmp     short loc_6E1400
0x6E13FE: xor     eax, eax
0x6E1400: lea     esi, [eax+10h]
0x6E1403: mov     ds:0B3E040h, eax
0x6E1408: movzx   ebp, word ptr [esi+0Ah]
0x6E140C: movzx   eax, word ptr [esi+8]
0x6E1410: cmp     ebp, eax
0x6E1412: mov     [esp+58h+var_4], 0FFFFFFFFh
0x6E141A: jb      short loc_6E142A
0x6E141C: movzx   ecx, word ptr [esi+0Eh]
0x6E1420: add     ecx, ebp
0x6E1422: push    ecx
0x6E1423: mov     ecx, esi
0x6E1425: call    NiTArray_SetSize
0x6E142A: lea     edx, [esp+58h+Src]
0x6E142E: push    edx
0x6E142F: push    ebp
0x6E1430: mov     ecx, esi
0x6E1432: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E1437: mov     eax, [edi+21Ch]
0x6E143D: push    1
0x6E143F: lea     ecx, [esp+5Ch+var_24]
0x6E1443: push    ecx
0x6E1444: push    4
0x6E1446: lea     edx, [esp+64h+var_1C]
0x6E144A: push    edx
0x6E144B: push    eax
0x6E144C: mov     eax, [eax+4]
0x6E144F: mov     [esp+6Ch+var_24], 4
0x6E1457: call    eax
0x6E1459: mov     ecx, ds:0B3E040h
0x6E145F: movzx   esi, word ptr [ecx+0Ah]
0x6E1463: movzx   edx, word ptr [ecx+8]
0x6E1467: add     esp, 14h
0x6E146A: cmp     esi, edx
0x6E146C: mov     ebp, ecx
0x6E146E: jb      short loc_6E147C
0x6E1470: movzx   eax, word ptr [ecx+0Eh]
0x6E1474: add     eax, esi
0x6E1476: push    eax
0x6E1477: call    NiTArray_SetSize
0x6E147C: lea     ecx, [esp+58h+var_1C]
0x6E1480: push    ecx
0x6E1481: push    esi
0x6E1482: mov     ecx, ebp
0x6E1484: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E1489: mov     ecx, edi
0x6E148B: call    sub_712A20
0x6E1490: mov     eax, [edi+21Ch]
0x6E1496: push    1
0x6E1498: lea     edx, [esp+5Ch+var_24]
0x6E149C: push    edx
0x6E149D: mov     edx, [eax+4]
0x6E14A0: push    4
0x6E14A2: lea     ecx, [esp+64h+var_40]
0x6E14A6: push    ecx
0x6E14A7: push    eax
0x6E14A8: mov     [esp+6Ch+var_24], 4
0x6E14B0: call    edx
0x6E14B2: mov     esi, ds:0B3E040h
0x6E14B8: movzx   ebp, word ptr [esi+2Ah]
0x6E14BC: movzx   eax, word ptr [esi+28h]
0x6E14C0: add     esi, 20h ; ' '
0x6E14C3: add     esp, 14h
0x6E14C6: cmp     ebp, eax
0x6E14C8: jb      short loc_6E14D8
0x6E14CA: movzx   ecx, word ptr [esi+0Eh]
0x6E14CE: add     ecx, ebp
0x6E14D0: push    ecx
0x6E14D1: mov     ecx, esi
0x6E14D3: call    NiTArray_SetSize
0x6E14D8: lea     edx, [esp+58h+var_40]
0x6E14DC: push    edx
0x6E14DD: push    ebp
0x6E14DE: mov     ecx, esi
0x6E14E0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x6E14E5: cmp     [esp+58h+var_40], ebx
0x6E14E9: jz      loc_6E1582
0x6E14EF: nop
0x6E14F0: sub     [esp+58h+var_40], 1
0x6E14F5: lea     eax, [esp+58h+var_34]
0x6E14F9: push    eax
0x6E14FA: mov     ecx, edi
0x6E14FC: mov     [esp+5Ch+var_34], ebx
0x6E1500: call    sub_713620
0x6E1505: mov     esi, ds:0B3E040h
0x6E150B: movzx   ebp, word ptr [esi+3Ah]
0x6E150F: movzx   ecx, word ptr [esi+38h]
0x6E1513: add     esi, 30h ; '0'
0x6E1516: cmp     ebp, ecx
0x6E1518: jb      short loc_6E1528
0x6E151A: movzx   edx, word ptr [esi+0Eh]
0x6E151E: add     edx, ebp
0x6E1520: push    edx
0x6E1521: mov     ecx, esi
0x6E1523: call    NiTArray_SetSize
0x6E1528: movzx   eax, word ptr [esi+0Ah]
0x6E152C: cmp     ebp, eax
0x6E152E: jb      short loc_6E1544
0x6E1530: lea     ecx, [ebp+1]
0x6E1533: mov     [esi+0Ah], cx
0x6E1537: cmp     [esp+58h+var_34], ebx
0x6E153B: jz      short loc_6E1567
0x6E153D: add     word ptr [esi+0Ch], 1
0x6E1542: jmp     short loc_6E1567
0x6E1544: cmp     [esp+58h+var_34], ebx
0x6E1548: jz      short loc_6E1559
0x6E154A: mov     edx, [esi+4]
0x6E154D: cmp     [edx+ebp*4], ebx
0x6E1550: jnz     short loc_6E1567
0x6E1552: add     word ptr [esi+0Ch], 1
0x6E1557: jmp     short loc_6E1567
0x6E1559: mov     eax, [esi+4]
0x6E155C: cmp     [eax+ebp*4], ebx
0x6E155F: jz      short loc_6E1567
0x6E1561: add     word ptr [esi+0Ch], 0FFFFh
0x6E1567: mov     ecx, [esi+4]
0x6E156A: mov     edx, [esp+58h+var_34]
0x6E156E: mov     [ecx+ebp*4], edx
0x6E1571: mov     ecx, edi
0x6E1573: call    sub_712A20
0x6E1578: cmp     [esp+58h+var_40], ebx
0x6E157C: jnz     loc_6E14F0
0x6E1582: sub     [esp+58h+var_40], 1
0x6E1587: mov     ebp, [esp+58h+var_18]
0x6E158B: mov     esi, 1
0x6E1590: cmp     [esp+58h+var_30], ebx
0x6E1594: jnz     loc_6E1340
0x6E159A: jmp     loc_6E1681
0x6E159F: push    1
0x6E15A1: push    ecx
0x6E15A2: push    4
0x6E15A4: lea     edx, [esp+64h+var_3C]
0x6E15A8: push    edx
0x6E15A9: push    eax
0x6E15AA: mov     eax, [eax+4]
0x6E15AD: xor     ebx, ebx
0x6E15AF: xor     esi, esi
0x6E15B1: call    eax
0x6E15B3: add     esp, 14h
0x6E15B6: cmp     [esp+58h+var_3C], ebx
0x6E15BA: jz      loc_6E1674
0x6E15C0: mov     eax, [edi+21Ch]
0x6E15C6: mov     ecx, 1
0x6E15CB: sub     [esp+58h+var_3C], ecx
0x6E15CF: push    ecx
0x6E15D0: lea     edx, [esp+5Ch+arg_0]
0x6E15D4: push    edx
0x6E15D5: mov     edx, [eax+4]
0x6E15D8: push    ecx
0x6E15D9: mov     [esp+64h+arg_0], ecx
0x6E15DD: lea     ecx, [esp+64h+var_41]
0x6E15E1: push    ecx
0x6E15E2: push    eax
0x6E15E3: call    edx
0x6E15E5: add     esp, 14h
0x6E15E8: cmp     [esp+58h+var_41], bl
0x6E15EC: mov     ecx, edi
0x6E15EE: jz      short loc_6E1662
0x6E15F0: lea     eax, [esp+58h+var_2C]
0x6E15F4: push    eax
0x6E15F5: mov     [esp+5Ch+var_2C], ebx
0x6E15F9: call    sub_713620
0x6E15FE: lea     ecx, [esp+58h+var_28]
0x6E1602: push    ecx
0x6E1603: mov     ecx, edi
0x6E1605: mov     [esp+5Ch+var_28], ebx
0x6E1609: call    sub_713620
0x6E160E: mov     eax, [edi+21Ch]
0x6E1614: push    1
0x6E1616: lea     edx, [esp+5Ch+var_14]
0x6E161A: push    edx
0x6E161B: mov     edx, [eax+4]
0x6E161E: push    4
0x6E1620: lea     ecx, [esp+64h+var_10]
0x6E1624: push    ecx
0x6E1625: push    eax
0x6E1626: mov     [esp+6Ch+var_14], 4
0x6E162E: call    edx
0x6E1630: mov     eax, [esp+6Ch+var_10]
0x6E1634: mov     ecx, [esp+6Ch+var_2C]
0x6E1638: mov     edx, [esp+6Ch+var_28]
0x6E163C: add     esp, 14h
0x6E163F: push    eax; int
0x6E1640: push    ecx; Src
0x6E1641: push    edx; int
0x6E1642: mov     ecx, ebp
0x6E1644: call    sub_6E11E0
0x6E1649: mov     eax, [esp+58h+var_2C]
0x6E164D: push    eax
0x6E164E: call    FormHeapFree
0x6E1653: mov     ecx, [esp+5Ch+var_28]
0x6E1657: push    ecx
0x6E1658: call    FormHeapFree
0x6E165D: add     esp, 8
0x6E1660: jmp     short loc_6E166A
0x6E1662: call    sub_712A20
0x6E1667: add     esi, 1
0x6E166A: cmp     [esp+58h+var_3C], ebx
0x6E166E: jnz     loc_6E15C0
0x6E1674: sub     [esp+58h+var_3C], 1
0x6E1679: push    esi
0x6E167A: mov     ecx, edi
0x6E167C: call    sub_712BC0
0x6E1681: mov     ecx, [esp+58h+var_C]
0x6E1685: mov     large fs:0, ecx
0x6E168C: pop     ecx
0x6E168D: pop     edi
0x6E168E: pop     esi
0x6E168F: pop     ebp
0x6E1690: pop     ebx
0x6E1691: add     esp, 44h
0x6E1694: retn    4
