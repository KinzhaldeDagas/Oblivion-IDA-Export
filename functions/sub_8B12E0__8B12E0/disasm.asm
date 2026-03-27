0x8B12E0: sub     esp, 20h
0x8B12E3: mov     eax, [esp+20h+arg_0]
0x8B12E7: push    ebx
0x8B12E8: push    ebp
0x8B12E9: cdq
0x8B12EA: push    esi
0x8B12EB: mov     esi, ecx
0x8B12ED: mov     ecx, eax
0x8B12EF: mov     eax, [esi]
0x8B12F1: push    edi
0x8B12F2: dec     dword ptr [esi+4]
0x8B12F5: mov     dword ptr [eax+ecx*8], 0
0x8B12FC: mov     dword ptr [eax+ecx*8+4], 0
0x8B1304: mov     eax, [esi+8]
0x8B1307: mov     ebp, edx
0x8B1309: cdq
0x8B130A: mov     ebx, edx
0x8B130C: mov     edx, [esi]
0x8B130E: mov     dword ptr [esp+30h+var_18], ecx
0x8B1312: mov     edi, eax
0x8B1314: add     eax, ecx
0x8B1316: mov     ecx, ebx
0x8B1318: adc     ecx, ebp
0x8B131A: and     eax, edi
0x8B131C: mov     dword ptr [esp+30h+var_18+4], ebp
0x8B1320: mov     ebp, [edx+eax*8]
0x8B1323: and     ecx, ebx
0x8B1325: or      ebp, [edx+eax*8+4]
0x8B1329: jz      short loc_8B1351
0x8B132B: jmp     short loc_8B1330
0x8B132D: align 10h
0x8B1330: mov     ebp, edi
0x8B1332: add     ebp, eax
0x8B1334: mov     eax, ebx
0x8B1336: adc     eax, ecx
0x8B1338: and     ebp, edi
0x8B133A: and     eax, ebx
0x8B133C: mov     [esp+30h+arg_0], eax
0x8B1340: mov     eax, ebp
0x8B1342: mov     ebp, [esp+30h+arg_0]
0x8B1346: mov     ecx, ebp
0x8B1348: mov     ebp, [edx+eax*8]
0x8B134B: or      ebp, [edx+eax*8+4]
0x8B134F: jnz     short loc_8B1330
0x8B1351: mov     ebp, dword ptr [esp+30h+var_18]
0x8B1355: add     eax, 1
0x8B1358: adc     ecx, 0
0x8B135B: and     eax, edi
0x8B135D: mov     [esp+30h+var_10], eax
0x8B1361: mov     eax, dword ptr [esp+30h+var_18+4]
0x8B1365: and     ecx, ebx
0x8B1367: mov     dword ptr [esp+30h+var_20], ebp
0x8B136B: add     ebp, 1
0x8B136E: mov     dword ptr [esp+30h+var_20+4], eax
0x8B1372: adc     eax, 0
0x8B1375: and     eax, ebx
0x8B1377: and     ebp, edi
0x8B1379: mov     dword ptr [esp+30h+var_18+4], eax
0x8B137D: mov     eax, [esi]
0x8B137F: mov     edx, [eax+ebp*8+4]
0x8B1383: mov     [esp+30h+var_C], ecx
0x8B1387: mov     ecx, [eax+ebp*8]
0x8B138A: or      ecx, edx
0x8B138C: jz      loc_8B149E
0x8B1392: mov     eax, [esi]
0x8B1394: mov     ecx, [eax+ebp*8]
0x8B1397: mov     [esp+30h+arg_0], eax
0x8B139B: mov     eax, [eax+ebp*8+4]
0x8B139F: mov     [esp+30h+var_4], eax
0x8B13A3: shrd    ecx, eax, 4
0x8B13A7: push    0
0x8B13A9: push    9E3779B1h
0x8B13AE: shr     eax, 4
0x8B13B1: push    eax
0x8B13B2: push    ecx
0x8B13B3: call    __allmul
0x8B13B8: mov     ecx, dword ptr [esp+30h+var_18+4]
0x8B13BC: and     edx, ebx
0x8B13BE: mov     ebx, [esp+30h+var_C]
0x8B13C2: and     eax, edi
0x8B13C4: cmp     ecx, ebx
0x8B13C6: jb      short loc_8B13EC
0x8B13C8: ja      short loc_8B13D0
0x8B13CA: cmp     ebp, [esp+30h+var_10]
0x8B13CE: jb      short loc_8B13EC
0x8B13D0: mov     ecx, dword ptr [esp+30h+var_20+4]
0x8B13D4: cmp     edx, ecx
0x8B13D6: ja      loc_8B1475
0x8B13DC: mov     edi, dword ptr [esp+30h+var_20]
0x8B13E0: jb      short loc_8B13F4
0x8B13E2: cmp     eax, edi
0x8B13E4: ja      loc_8B1475
0x8B13EA: jmp     short loc_8B13F4
0x8B13EC: mov     edi, dword ptr [esp+30h+var_20]
0x8B13F0: mov     ecx, dword ptr [esp+30h+var_20+4]
0x8B13F4: cmp     dword ptr [esp+30h+var_18+4], ecx
0x8B13F8: ja      short loc_8B1416
0x8B13FA: jb      short loc_8B1400
0x8B13FC: cmp     ebp, edi
0x8B13FE: jnb     short loc_8B1416
0x8B1400: cmp     edx, ecx
0x8B1402: ja      short loc_8B1475
0x8B1404: jb      short loc_8B140A
0x8B1406: cmp     eax, edi
0x8B1408: ja      short loc_8B1475
0x8B140A: cmp     edx, dword ptr [esp+30h+var_18+4]
0x8B140E: jb      short loc_8B1475
0x8B1410: ja      short loc_8B1416
0x8B1412: cmp     eax, ebp
0x8B1414: jbe     short loc_8B1475
0x8B1416: cmp     edx, ecx
0x8B1418: jb      short loc_8B142C
0x8B141A: ja      short loc_8B1420
0x8B141C: cmp     eax, edi
0x8B141E: jbe     short loc_8B142C
0x8B1420: cmp     edx, ebx
0x8B1422: jb      short loc_8B1475
0x8B1424: ja      short loc_8B142C
0x8B1426: cmp     eax, [esp+30h+var_10]
0x8B142A: jb      short loc_8B1475
0x8B142C: mov     eax, [esp+30h+arg_0]
0x8B1430: mov     ecx, [eax+ebp*8]
0x8B1433: mov     edx, [esp+30h+var_4]
0x8B1437: mov     [eax+edi*8], ecx
0x8B143A: mov     [eax+edi*8+4], edx
0x8B143E: mov     edx, [esi+8]
0x8B1441: mov     eax, [esi]
0x8B1443: lea     ecx, [edx+ebp]
0x8B1446: add     edx, edi
0x8B1448: mov     edi, [eax+ecx*8+8]
0x8B144C: mov     [eax+edx*8+8], edi
0x8B1450: mov     ecx, [eax+ecx*8+0Ch]
0x8B1454: mov     [eax+edx*8+0Ch], ecx
0x8B1458: mov     edx, [esi]
0x8B145A: mov     eax, dword ptr [esp+30h+var_18+4]
0x8B145E: mov     dword ptr [edx+ebp*8], 0
0x8B1465: mov     dword ptr [edx+ebp*8+4], 0
0x8B146D: mov     dword ptr [esp+30h+var_20], ebp
0x8B1471: mov     dword ptr [esp+30h+var_20+4], eax
0x8B1475: mov     eax, [esi+8]
0x8B1478: mov     ecx, dword ptr [esp+30h+var_18+4]
0x8B147C: cdq
0x8B147D: add     ebp, 1
0x8B1480: adc     ecx, 0
0x8B1483: mov     ebx, edx
0x8B1485: mov     edi, eax
0x8B1487: mov     eax, [esi]
0x8B1489: and     ecx, ebx
0x8B148B: and     ebp, edi
0x8B148D: mov     edx, [eax+ebp*8]
0x8B1490: mov     dword ptr [esp+30h+var_18+4], ecx
0x8B1494: or      edx, [eax+ebp*8+4]
0x8B1498: jnz     loc_8B1392
0x8B149E: pop     edi
0x8B149F: pop     esi
0x8B14A0: pop     ebp
0x8B14A1: pop     ebx
0x8B14A2: add     esp, 20h
0x8B14A5: retn    4
