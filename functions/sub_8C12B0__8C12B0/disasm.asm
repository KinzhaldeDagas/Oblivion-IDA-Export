0x8C12B0: sub     esp, 0Ch
0x8C12B3: push    esi
0x8C12B4: mov     esi, [esp+10h+arg_0]
0x8C12B8: push    edi
0x8C12B9: push    esi
0x8C12BA: mov     edi, ecx
0x8C12BC: call    sub_8A0D20
0x8C12C1: mov     edi, [edi+4]
0x8C12C4: test    edi, edi
0x8C12C6: jz      loc_8C160A
0x8C12CC: push    ebx
0x8C12CD: lea     eax, [edi+10h]
0x8C12D0: push    eax
0x8C12D1: lea     ecx, [esp+1Ch+var_C]
0x8C12D5: push    ecx
0x8C12D6: call    sub_4D68A0
0x8C12DB: add     esp, 8
0x8C12DE: push    offset aPivotina; "PivotInA"
0x8C12E3: lea     ecx, [esp+1Ch+var_C]
0x8C12E7: call    sub_707280
0x8C12EC: movzx   ebx, word ptr [esi+0Ah]
0x8C12F0: movzx   edx, word ptr [esi+8]
0x8C12F4: cmp     ebx, edx
0x8C12F6: mov     [esp+18h+arg_0], eax
0x8C12FA: jb      short loc_8C130A
0x8C12FC: movzx   eax, word ptr [esi+0Eh]
0x8C1300: add     eax, ebx
0x8C1302: push    eax
0x8C1303: mov     ecx, esi
0x8C1305: call    NiTArray_SetSize
0x8C130A: lea     ecx, [esp+18h+arg_0]
0x8C130E: push    ecx
0x8C130F: push    ebx
0x8C1310: mov     ecx, esi
0x8C1312: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C1317: lea     edx, [edi+20h]
0x8C131A: push    edx
0x8C131B: lea     eax, [esp+1Ch+var_C]
0x8C131F: push    eax
0x8C1320: call    sub_4D68A0
0x8C1325: add     esp, 8
0x8C1328: push    offset aPlaneaxisa; "planeAxisA"
0x8C132D: lea     ecx, [esp+1Ch+var_C]
0x8C1331: call    sub_707280
0x8C1336: movzx   ebx, word ptr [esi+0Ah]
0x8C133A: movzx   ecx, word ptr [esi+8]
0x8C133E: cmp     ebx, ecx
0x8C1340: mov     [esp+18h+arg_0], eax
0x8C1344: jb      short loc_8C1354
0x8C1346: movzx   edx, word ptr [esi+0Eh]
0x8C134A: add     edx, ebx
0x8C134C: push    edx
0x8C134D: mov     ecx, esi
0x8C134F: call    NiTArray_SetSize
0x8C1354: lea     eax, [esp+18h+arg_0]
0x8C1358: push    eax
0x8C1359: push    ebx
0x8C135A: mov     ecx, esi
0x8C135C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C1361: lea     ecx, [edi+30h]
0x8C1364: push    ecx
0x8C1365: lea     edx, [esp+1Ch+var_C]
0x8C1369: push    edx
0x8C136A: call    sub_4D68A0
0x8C136F: add     esp, 8
0x8C1372: push    offset aTwistaxisa; "twistAxisA"
0x8C1377: lea     ecx, [esp+1Ch+var_C]
0x8C137B: call    sub_707280
0x8C1380: movzx   ebx, word ptr [esi+0Ah]
0x8C1384: mov     [esp+18h+arg_0], eax
0x8C1388: movzx   eax, word ptr [esi+8]
0x8C138C: cmp     ebx, eax
0x8C138E: jb      short loc_8C139E
0x8C1390: movzx   ecx, word ptr [esi+0Eh]
0x8C1394: add     ecx, ebx
0x8C1396: push    ecx
0x8C1397: mov     ecx, esi
0x8C1399: call    NiTArray_SetSize
0x8C139E: lea     edx, [esp+18h+arg_0]
0x8C13A2: push    edx
0x8C13A3: push    ebx
0x8C13A4: mov     ecx, esi
0x8C13A6: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C13AB: lea     eax, [edi+40h]
0x8C13AE: push    eax
0x8C13AF: lea     ecx, [esp+1Ch+var_C]
0x8C13B3: push    ecx
0x8C13B4: call    sub_4D68A0
0x8C13B9: add     esp, 8
0x8C13BC: push    offset aPivotinb; "PivotInB"
0x8C13C1: lea     ecx, [esp+1Ch+var_C]
0x8C13C5: call    sub_707280
0x8C13CA: movzx   ebx, word ptr [esi+0Ah]
0x8C13CE: movzx   edx, word ptr [esi+8]
0x8C13D2: cmp     ebx, edx
0x8C13D4: mov     [esp+18h+arg_0], eax
0x8C13D8: jb      short loc_8C13E8
0x8C13DA: movzx   eax, word ptr [esi+0Eh]
0x8C13DE: add     eax, ebx
0x8C13E0: push    eax
0x8C13E1: mov     ecx, esi
0x8C13E3: call    NiTArray_SetSize
0x8C13E8: lea     ecx, [esp+18h+arg_0]
0x8C13EC: push    ecx
0x8C13ED: push    ebx
0x8C13EE: mov     ecx, esi
0x8C13F0: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C13F5: lea     edx, [edi+50h]
0x8C13F8: push    edx
0x8C13F9: lea     eax, [esp+1Ch+var_C]
0x8C13FD: push    eax
0x8C13FE: call    sub_4D68A0
0x8C1403: add     esp, 8
0x8C1406: push    offset aPlaneaxisb; "planeAxisB"
0x8C140B: lea     ecx, [esp+1Ch+var_C]
0x8C140F: call    sub_707280
0x8C1414: movzx   ebx, word ptr [esi+0Ah]
0x8C1418: movzx   ecx, word ptr [esi+8]
0x8C141C: cmp     ebx, ecx
0x8C141E: mov     [esp+18h+arg_0], eax
0x8C1422: jb      short loc_8C1432
0x8C1424: movzx   edx, word ptr [esi+0Eh]
0x8C1428: add     edx, ebx
0x8C142A: push    edx
0x8C142B: mov     ecx, esi
0x8C142D: call    NiTArray_SetSize
0x8C1432: lea     eax, [esp+18h+arg_0]
0x8C1436: push    eax
0x8C1437: push    ebx
0x8C1438: mov     ecx, esi
0x8C143A: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C143F: lea     ecx, [edi+60h]
0x8C1442: push    ecx
0x8C1443: lea     edx, [esp+1Ch+var_C]
0x8C1447: push    edx
0x8C1448: call    sub_4D68A0
0x8C144D: add     esp, 8
0x8C1450: push    offset aTwistaxisb; "twistAxisB"
0x8C1455: lea     ecx, [esp+1Ch+var_C]
0x8C1459: call    sub_707280
0x8C145E: movzx   ebx, word ptr [esi+0Ah]
0x8C1462: mov     [esp+18h+arg_0], eax
0x8C1466: movzx   eax, word ptr [esi+8]
0x8C146A: cmp     ebx, eax
0x8C146C: jb      short loc_8C147C
0x8C146E: movzx   ecx, word ptr [esi+0Eh]
0x8C1472: add     ecx, ebx
0x8C1474: push    ecx
0x8C1475: mov     ecx, esi
0x8C1477: call    NiTArray_SetSize
0x8C147C: lea     edx, [esp+18h+arg_0]
0x8C1480: push    edx
0x8C1481: push    ebx
0x8C1482: mov     ecx, esi
0x8C1484: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C1489: fld     dword ptr [edi+70h]
0x8C148C: push    ecx
0x8C148D: fstp    [esp+1Ch+var_1C]; float
0x8C1490: push    offset aConeminangle; "ConeMinAngle"
0x8C1495: call    TESOutput_PrintLabeledFloat
0x8C149A: movzx   ebx, word ptr [esi+0Ah]
0x8C149E: mov     [esp+20h+arg_0], eax
0x8C14A2: movzx   eax, word ptr [esi+8]
0x8C14A6: add     esp, 8
0x8C14A9: cmp     ebx, eax
0x8C14AB: jb      short loc_8C14BB
0x8C14AD: movzx   ecx, word ptr [esi+0Eh]
0x8C14B1: add     ecx, ebx
0x8C14B3: push    ecx
0x8C14B4: mov     ecx, esi
0x8C14B6: call    NiTArray_SetSize
0x8C14BB: lea     edx, [esp+18h+arg_0]
0x8C14BF: push    edx
0x8C14C0: push    ebx
0x8C14C1: mov     ecx, esi
0x8C14C3: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C14C8: fld     dword ptr [edi+74h]
0x8C14CB: push    ecx
0x8C14CC: fstp    [esp+1Ch+var_1C]; float
0x8C14CF: push    offset aPlaneminangle; "PlaneMinAngle"
0x8C14D4: call    TESOutput_PrintLabeledFloat
0x8C14D9: movzx   ebx, word ptr [esi+0Ah]
0x8C14DD: mov     [esp+20h+arg_0], eax
0x8C14E1: movzx   eax, word ptr [esi+8]
0x8C14E5: add     esp, 8
0x8C14E8: cmp     ebx, eax
0x8C14EA: jb      short loc_8C14FA
0x8C14EC: movzx   ecx, word ptr [esi+0Eh]
0x8C14F0: add     ecx, ebx
0x8C14F2: push    ecx
0x8C14F3: mov     ecx, esi
0x8C14F5: call    NiTArray_SetSize
0x8C14FA: lea     edx, [esp+18h+arg_0]
0x8C14FE: push    edx
0x8C14FF: push    ebx
0x8C1500: mov     ecx, esi
0x8C1502: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C1507: fld     dword ptr [edi+78h]
0x8C150A: push    ecx
0x8C150B: fstp    [esp+1Ch+var_1C]; float
0x8C150E: push    offset aPlanemaxangle; "PlaneMaxAngle"
0x8C1513: call    TESOutput_PrintLabeledFloat
0x8C1518: movzx   ebx, word ptr [esi+0Ah]
0x8C151C: mov     [esp+20h+arg_0], eax
0x8C1520: movzx   eax, word ptr [esi+8]
0x8C1524: add     esp, 8
0x8C1527: cmp     ebx, eax
0x8C1529: jb      short loc_8C1539
0x8C152B: movzx   ecx, word ptr [esi+0Eh]
0x8C152F: add     ecx, ebx
0x8C1531: push    ecx
0x8C1532: mov     ecx, esi
0x8C1534: call    NiTArray_SetSize
0x8C1539: lea     edx, [esp+18h+arg_0]
0x8C153D: push    edx
0x8C153E: push    ebx
0x8C153F: mov     ecx, esi
0x8C1541: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C1546: fld     dword ptr [edi+7Ch]
0x8C1549: push    ecx
0x8C154A: fstp    [esp+1Ch+var_1C]; float
0x8C154D: push    offset aTwistminangle; "TwistMinAngle"
0x8C1552: call    TESOutput_PrintLabeledFloat
0x8C1557: movzx   ebx, word ptr [esi+0Ah]
0x8C155B: mov     [esp+20h+arg_0], eax
0x8C155F: movzx   eax, word ptr [esi+8]
0x8C1563: add     esp, 8
0x8C1566: cmp     ebx, eax
0x8C1568: jb      short loc_8C1578
0x8C156A: movzx   ecx, word ptr [esi+0Eh]
0x8C156E: add     ecx, ebx
0x8C1570: push    ecx
0x8C1571: mov     ecx, esi
0x8C1573: call    NiTArray_SetSize
0x8C1578: lea     edx, [esp+18h+arg_0]
0x8C157C: push    edx
0x8C157D: push    ebx
0x8C157E: mov     ecx, esi
0x8C1580: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C1585: fld     dword ptr [edi+80h]
0x8C158B: push    ecx
0x8C158C: fstp    [esp+1Ch+var_1C]; float
0x8C158F: push    offset aTwistmaxangle; "TwistMaxAngle"
0x8C1594: call    TESOutput_PrintLabeledFloat
0x8C1599: movzx   ebx, word ptr [esi+0Ah]
0x8C159D: mov     [esp+20h+arg_0], eax
0x8C15A1: movzx   eax, word ptr [esi+8]
0x8C15A5: add     esp, 8
0x8C15A8: cmp     ebx, eax
0x8C15AA: jb      short loc_8C15BA
0x8C15AC: movzx   ecx, word ptr [esi+0Eh]
0x8C15B0: add     ecx, ebx
0x8C15B2: push    ecx
0x8C15B3: mov     ecx, esi
0x8C15B5: call    NiTArray_SetSize
0x8C15BA: lea     edx, [esp+18h+arg_0]
0x8C15BE: push    edx
0x8C15BF: push    ebx
0x8C15C0: mov     ecx, esi
0x8C15C2: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C15C7: fld     dword ptr [edi+84h]
0x8C15CD: push    ecx
0x8C15CE: fstp    [esp+1Ch+var_1C]; float
0x8C15D1: push    offset aMaxfrictiontrq; "MaxFrictionTrq"
0x8C15D6: call    TESOutput_PrintLabeledFloat
0x8C15DB: movzx   edi, word ptr [esi+0Ah]
0x8C15DF: mov     [esp+20h+arg_0], eax
0x8C15E3: movzx   eax, word ptr [esi+8]
0x8C15E7: add     esp, 8
0x8C15EA: cmp     edi, eax
0x8C15EC: pop     ebx
0x8C15ED: jb      short loc_8C15FD
0x8C15EF: movzx   ecx, word ptr [esi+0Eh]
0x8C15F3: add     ecx, edi
0x8C15F5: push    ecx
0x8C15F6: mov     ecx, esi
0x8C15F8: call    NiTArray_SetSize
0x8C15FD: lea     edx, [esp+14h+arg_0]
0x8C1601: push    edx
0x8C1602: push    edi
0x8C1603: mov     ecx, esi
0x8C1605: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x8C160A: pop     edi
0x8C160B: pop     esi
0x8C160C: add     esp, 0Ch
0x8C160F: retn    4
