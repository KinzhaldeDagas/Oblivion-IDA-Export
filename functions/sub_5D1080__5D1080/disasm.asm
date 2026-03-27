0x5D1080: push    ebp
0x5D1081: mov     ebp, esp
0x5D1083: and     esp, 0FFFFFFF8h
0x5D1086: push    0FFFFFFFFh
0x5D1088: push    offset SEH_5D1080
0x5D108D: mov     eax, large fs:0
0x5D1093: push    eax
0x5D1094: sub     esp, 158h
0x5D109A: mov     eax, ds:0B30AACh
0x5D109F: xor     eax, esp
0x5D10A1: mov     [esp+164h+var_14], eax
0x5D10A8: push    ebx; a3
0x5D10A9: push    esi; a3
0x5D10AA: push    edi; a3
0x5D10AB: mov     eax, ds:0B30AACh
0x5D10B0: xor     eax, esp
0x5D10B2: push    eax; a3
0x5D10B3: lea     eax, [esp+174h+var_C]
0x5D10BA: mov     large fs:0, eax
0x5D10C0: mov     esi, ecx
0x5D10C2: mov     ecx, ds:0B333C4h
0x5D10C8: test    ecx, ecx
0x5D10CA: mov     [esp+174h+var_158], esi
0x5D10CE: jz      loc_5D1E1C
0x5D10D4: mov     eax, [esi+44h]
0x5D10D7: push    0
0x5D10D9: mov     [esp+178h+var_124], eax
0x5D10DD: call    TESObjectREF_GetTotalEntryCountForITem
0x5D10E2: push    0; int
0x5D10E4: push    offset ??_R0?AVAlchemyMenu@@@8; struct TypeDescriptor *
0x5D10E9: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D10EE: mov     edi, eax
0x5D10F0: push    0; int
0x5D10F2: push    410h
0x5D10F7: mov     [esp+188h+var_15C], edi
0x5D10FB: call    Menu_GetOpenMenuTile
0x5D1100: add     esp, 4
0x5D1103: mov     ecx, eax
0x5D1105: call    Tile_GetParentMenu
0x5D110A: push    eax; void *
0x5D110B: call    OblivionDynamicCast
0x5D1110: mov     ecx, ds:0B333C4h
0x5D1116: add     esp, 14h
0x5D1119: push    0Ch
0x5D111B: mov     [esp+178h+var_13C], eax
0x5D111F: call    Actor_GetSkillMasteryLevel
0x5D1124: xor     ecx, ecx
0x5D1126: cmp     eax, 3
0x5D1129: setl    cl
0x5D112C: sub     ecx, 1
0x5D112F: and     ecx, 19h
0x5D1132: add     ecx, 64h ; 'd'
0x5D1135: mov     [esp+174h+var_140], ecx
0x5D1139: cmp     eax, 2
0x5D113C: lea     ecx, [esi+68h]
0x5D113F: setnl   [esp+174h+var_14D]
0x5D1144: call    sub_5D0D50
0x5D1149: test    edi, edi
0x5D114B: mov     [esp+174h+var_148], 0
0x5D1153: jle     loc_5D1641
0x5D1159: mov     edx, [esp+174h+var_148]
0x5D115D: mov     ecx, ds:0B333C4h; this
0x5D1163: push    0; a3
0x5D1165: push    edx; a2
0x5D1166: call    GetInventoryEntryOfItem
0x5D116B: mov     ebx, eax
0x5D116D: xor     edi, edi
0x5D116F: test    ebx, ebx
0x5D1171: mov     [esp+174h+a3], ebx
0x5D1175: jz      short loc_5D11BD
0x5D1177: mov     eax, ds:0B333C4h
0x5D117C: mov     edi, [ebx+8]
0x5D117F: push    0; a6
0x5D1181: push    1; a5
0x5D1183: push    1; a4
0x5D1185: push    0; a3
0x5D1187: push    eax; a2
0x5D1188: mov     ecx, ebx; this
0x5D118A: mov     [esp+188h+var_138], edi
0x5D118E: call    sub_4854F0
0x5D1193: test    al, al
0x5D1195: jz      short loc_5D11A7
0x5D1197: mov     eax, [ebx+8]
0x5D119A: push    eax
0x5D119B: call    sub_469980
0x5D11A0: add     esp, 4
0x5D11A3: test    al, al
0x5D11A5: jz      short loc_5D1203
0x5D11A7: mov     ecx, ebx
0x5D11A9: call    ContainerEntryExtraData_DestroyDataTable
0x5D11AE: push    ebx
0x5D11AF: call    FormHeapFree
0x5D11B4: add     esp, 4
0x5D11B7: xor     ebx, ebx
0x5D11B9: mov     [esp+174h+a3], ebx
0x5D11BD: mov     ecx, [esp+174h+var_158]
0x5D11C1: mov     eax, [ecx+58h]
0x5D11C4: cmp     eax, 2
0x5D11C7: jnz     loc_5D1470
0x5D11CD: test    ebx, ebx
0x5D11CF: jz      loc_5D14B0
0x5D11D5: mov     al, [edi+4]
0x5D11D8: cmp     al, 14h
0x5D11DA: jz      short loc_5D11E4
0x5D11DC: cmp     al, 21h ; '!'
0x5D11DE: jnz     loc_5D149A
0x5D11E4: push    1
0x5D11E6: mov     ecx, ebx
0x5D11E8: call    ContainerEntryExtraData_GetHealth
0x5D11ED: fcomp   qword ptr ds:0A309F0h
0x5D11F3: fnstsw  ax
0x5D11F5: test    ah, 1
0x5D11F8: jnz     loc_5D14B0
0x5D11FE: jmp     loc_5D149A
0x5D1203: mov     ecx, [esp+174h+var_158]
0x5D1207: mov     eax, [ecx+58h]
0x5D120A: cmp     eax, 3
0x5D120D: jnz     loc_5D130E
0x5D1213: cmp     byte ptr [edi+4], 19h
0x5D1217: jnz     loc_5D149A
0x5D121D: mov     esi, [esp+174h+var_13C]
0x5D1221: test    esi, esi
0x5D1223: jz      loc_5D149A
0x5D1229: mov     edx, [edi]
0x5D122B: mov     eax, [edx+78h]
0x5D122E: mov     ecx, edi
0x5D1230: call    eax
0x5D1232: test    al, al
0x5D1234: jnz     loc_5D149A
0x5D123A: mov     ecx, [esp+174h+var_158]
0x5D123E: cmp     [ecx+65h], al
0x5D1241: jz      loc_5D14B0
0x5D1247: add     esi, 0A8h ; '¨'
0x5D124D: mov     ecx, esi
0x5D124F: mov     [esp+174h+var_14C], esi
0x5D1253: call    BSSimpleList_IsEmpty
0x5D1258: test    al, al
0x5D125A: jnz     loc_5D14B0
0x5D1260: mov     ecx, ds:0B333C4h
0x5D1266: push    13h
0x5D1268: mov     [esp+178h+var_161], al
0x5D126C: call    Actor_GetBaseCalcAVi
0x5D1271: push    eax
0x5D1272: call    Magic_GetWortcraftMaxEffects
0x5D1277: add     esp, 4
0x5D127A: mov     [esp+174h+var_134], eax
0x5D127E: mov     [esp+174h+var_154], 0
0x5D1286: jmp     short loc_5D1294
0x5D1288: jmp     short loc_5D1290
0x5D128A: align 10h
0x5D1290: mov     esi, [esp+174h+var_14C]
0x5D1294: mov     edx, [esp+174h+var_134]
0x5D1298: cmp     [esp+174h+var_154], edx
0x5D129C: jge     short loc_5D12FE
0x5D129E: cmp     [esp+174h+var_161], 0
0x5D12A3: jnz     short loc_5D12ED
0x5D12A5: test    esi, esi
0x5D12A7: jz      short loc_5D12ED
0x5D12A9: mov     edi, [esp+174h+var_138]
0x5D12AD: mov     eax, [esp+174h+var_154]
0x5D12B1: add     edi, 30h ; '0'
0x5D12B4: push    eax
0x5D12B5: mov     ecx, edi
0x5D12B7: call    EffectItemList_GetItemByIndex2
0x5D12BC: test    eax, eax
0x5D12BE: jz      short loc_5D12E3
0x5D12C0: mov     ecx, [esp+174h+var_154]
0x5D12C4: mov     ebx, [esi]
0x5D12C6: push    ecx
0x5D12C7: mov     ecx, edi
0x5D12C9: call    EffectItemList_GetItemByIndex2
0x5D12CE: push    eax
0x5D12CF: mov     ecx, ebx
0x5D12D1: call    EffectItem_Match
0x5D12D6: test    al, al
0x5D12D8: mov     ebx, [esp+174h+a3]
0x5D12DC: jz      short loc_5D12E3
0x5D12DE: mov     [esp+174h+var_161], 1
0x5D12E3: cmp     [esp+174h+var_161], 0
0x5D12E8: mov     esi, [esi+4]
0x5D12EB: jz      short loc_5D12A5
0x5D12ED: add     [esp+174h+var_154], 1
0x5D12F2: cmp     [esp+174h+var_161], 0
0x5D12F7: jz      short loc_5D1290
0x5D12F9: jmp     loc_5D14B0
0x5D12FE: cmp     [esp+174h+var_161], 0
0x5D1303: jnz     loc_5D14B0
0x5D1309: jmp     loc_5D149A
0x5D130E: cmp     eax, 4
0x5D1311: jnz     short loc_5D1389
0x5D1313: mov     eax, [ebx]
0x5D1315: test    eax, eax
0x5D1317: jz      short loc_5D132B
0x5D1319: cmp     dword ptr [eax], 0
0x5D131C: jz      short loc_5D132B
0x5D131E: mov     ecx, [eax]
0x5D1320: call    sub_41DF40
0x5D1325: mov     [esp+174h+var_161], al
0x5D1329: jmp     short loc_5D1330
0x5D132B: mov     [esp+174h+var_161], 0
0x5D1330: mov     al, [edi+4]
0x5D1333: cmp     al, 21h ; '!'
0x5D1335: jz      short loc_5D1343
0x5D1337: cmp     al, 16h
0x5D1339: jz      short loc_5D1343
0x5D133B: cmp     al, 14h
0x5D133D: jnz     loc_5D149A
0x5D1343: mov     edx, [edi]
0x5D1345: mov     eax, [edx+78h]
0x5D1348: mov     ecx, edi
0x5D134A: call    eax
0x5D134C: test    al, al
0x5D134E: jnz     loc_5D149A
0x5D1354: push    0; int
0x5D1356: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5D135B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5D1360: push    0; int
0x5D1362: push    edi; void *
0x5D1363: call    OblivionDynamicCast
0x5D1368: add     esp, 14h
0x5D136B: test    eax, eax
0x5D136D: jz      short loc_5D1379
0x5D136F: cmp     dword ptr [eax+4], 0
0x5D1373: jnz     loc_5D149A
0x5D1379: cmp     [esp+174h+var_161], 0
0x5D137E: jz      loc_5D14B0
0x5D1384: jmp     loc_5D149A
0x5D1389: cmp     eax, 6
0x5D138C: jnz     loc_5D145A
0x5D1392: push    418h
0x5D1397: mov     [esp+178h+var_161], 0
0x5D139C: mov     [esp+178h+var_141], 0
0x5D13A1: call    Menu_GetOpenMenuTile
0x5D13A6: add     esp, 4
0x5D13A9: push    0; int
0x5D13AB: push    offset ??_R0?AVSigilStoneMenu@@@8; struct TypeDescriptor *
0x5D13B0: push    offset ??_R0?AVMenu@@@8; struct _s_RTTICompleteObjectLocator *
0x5D13B5: push    0; int
0x5D13B7: mov     ecx, eax
0x5D13B9: call    Tile_GetParentMenu
0x5D13BE: push    eax; void *
0x5D13BF: call    OblivionDynamicCast
0x5D13C4: mov     esi, eax
0x5D13C6: add     esp, 14h
0x5D13C9: test    esi, esi
0x5D13CB: jz      loc_5D14B0
0x5D13D1: mov     ecx, esi
0x5D13D3: call    sub_5D4700
0x5D13D8: test    al, al
0x5D13DA: jz      short loc_5D13E1
0x5D13DC: mov     [esp+174h+var_161], 1
0x5D13E1: mov     ecx, esi
0x5D13E3: call    sub_5D4760
0x5D13E8: test    al, al
0x5D13EA: mov     al, 1
0x5D13EC: jnz     short loc_5D13F2
0x5D13EE: mov     al, [esp+174h+var_141]
0x5D13F2: cmp     [esp+174h+var_161], 0
0x5D13F7: jz      short loc_5D13FF
0x5D13F9: cmp     byte ptr [edi+4], 21h ; '!'
0x5D13FD: jz      short loc_5D140E
0x5D13FF: test    al, al
0x5D1401: jz      short loc_5D1431
0x5D1403: mov     al, [edi+4]
0x5D1406: cmp     al, 16h
0x5D1408: jz      short loc_5D140E
0x5D140A: cmp     al, 14h
0x5D140C: jnz     short loc_5D1431
0x5D140E: push    edi
0x5D140F: call    TESEnchantableForm_GetFormEnchantment
0x5D1414: add     esp, 4
0x5D1417: test    eax, eax
0x5D1419: jnz     short loc_5D1431
0x5D141B: mov     eax, [ebx]
0x5D141D: test    eax, eax
0x5D141F: jz      short loc_5D1447
0x5D1421: cmp     dword ptr [eax], 0
0x5D1424: jz      short loc_5D1447
0x5D1426: mov     ecx, [eax]
0x5D1428: call    sub_41DF40
0x5D142D: cmp     al, 1
0x5D142F: jnz     short loc_5D1447
0x5D1431: mov     ecx, ebx
0x5D1433: call    ContainerEntryExtraData_DestroyDataTable
0x5D1438: push    ebx
0x5D1439: call    FormHeapFree
0x5D143E: add     esp, 4
0x5D1441: xor     ebx, ebx
0x5D1443: mov     [esp+174h+a3], ebx
0x5D1447: mov     edx, [edi]
0x5D1449: mov     eax, [edx+78h]
0x5D144C: mov     ecx, edi
0x5D144E: call    eax
0x5D1450: test    al, al
0x5D1452: jz      short loc_5D14B0
0x5D1454: test    ebx, ebx
0x5D1456: jz      short loc_5D14AA
0x5D1458: jmp     short loc_5D149A
0x5D145A: cmp     eax, 5
0x5D145D: jnz     loc_5D11BD
0x5D1463: mov     ecx, ebx
0x5D1465: call    EnchantmentMenu_SoulGemInfo_GetSoulLevel
0x5D146A: test    eax, eax
0x5D146C: jnz     short loc_5D14B0
0x5D146E: jmp     short loc_5D149A
0x5D1470: cmp     eax, 1
0x5D1473: jnz     short loc_5D14B0
0x5D1475: test    ebx, ebx
0x5D1477: jz      short loc_5D14B0
0x5D1479: mov     al, [edi+4]
0x5D147C: cmp     al, 14h
0x5D147E: jz      short loc_5D1484
0x5D1480: cmp     al, 21h ; '!'
0x5D1482: jnz     short loc_5D149A
0x5D1484: push    1
0x5D1486: mov     ecx, ebx
0x5D1488: call    ContainerEntryExtraData_GetHealth
0x5D148D: fild    [esp+174h+var_140]
0x5D1491: fcompp
0x5D1493: fnstsw  ax
0x5D1495: test    ah, 41h
0x5D1498: jp      short loc_5D14B0
0x5D149A: mov     ecx, ebx
0x5D149C: call    ContainerEntryExtraData_DestroyDataTable
0x5D14A1: push    ebx
0x5D14A2: call    FormHeapFree
0x5D14A7: add     esp, 4
0x5D14AA: xor     ebx, ebx
0x5D14AC: mov     [esp+174h+a3], ebx; a3
0x5D14B0: test    ebx, ebx
0x5D14B2: mov     edi, [esp+174h+var_158]
0x5D14B6: mov     esi, [edi+6Ch]
0x5D14B9: mov     [esp+174h+var_154], 0
0x5D14C1: jz      short loc_5D14CE
0x5D14C3: mov     ecx, ebx
0x5D14C5: call    sub_485150
0x5D14CA: mov     [esp+174h+var_154], eax; a3
0x5D14CE: mov     eax, [edi+58h]
0x5D14D1: cmp     eax, 3
0x5D14D4: jz      short loc_5D14E5
0x5D14D6: cmp     eax, 6
0x5D14D9: jz      short loc_5D14E5
0x5D14DB: cmp     eax, 5
0x5D14DE: mov     [esp+174h+var_161], 0
0x5D14E3: jnz     short loc_5D14EA
0x5D14E5: mov     [esp+174h+var_161], 1
0x5D14EA: test    esi, esi
0x5D14EC: jz      short loc_5D1556
0x5D14EE: cmp     [esp+174h+a3], 0
0x5D14F3: jz      loc_5D162C
0x5D14F9: lea     eax, [esi+8]
0x5D14FC: mov     eax, [eax]
0x5D14FE: mov     edi, [eax]
0x5D1500: mov     ebx, esi
0x5D1502: mov     esi, [esi]
0x5D1504: mov     ecx, edi
0x5D1506: call    sub_485150
0x5D150B: cmp     [esp+174h+var_161], 0
0x5D1510: jz      short loc_5D151E
0x5D1512: mov     ecx, [edi+8]
0x5D1515: mov     edx, [esp+174h+a3]
0x5D1519: cmp     ecx, [edx+8]
0x5D151C: jz      short loc_5D1581
0x5D151E: mov     ecx, [esp+174h+var_154]
0x5D1522: cmp     eax, ecx
0x5D1524: jl      short loc_5D15A2
0x5D1526: jnz     short loc_5D154E
0x5D1528: mov     ecx, [esp+174h+a3]
0x5D152C: call    sub_488DF0
0x5D1531: mov     ecx, edi
0x5D1533: mov     [esp+174h+var_138], eax
0x5D1537: call    sub_488DF0
0x5D153C: mov     ecx, [esp+174h+var_138]
0x5D1540: push    ecx; unsigned __int8 *
0x5D1541: push    eax; unsigned __int8 *
0x5D1542: call    __mbsicmp
0x5D1547: add     esp, 8
0x5D154A: test    eax, eax
0x5D154C: jle     short loc_5D15A2
0x5D154E: test    esi, esi
0x5D1550: jnz     short loc_5D14EE
0x5D1552: mov     ebx, [esp+174h+a3]
0x5D1556: test    ebx, ebx
0x5D1558: jz      loc_5D162C
0x5D155E: push    8; Size
0x5D1560: call    FormHeapAlloc
0x5D1565: add     esp, 4
0x5D1568: test    eax, eax
0x5D156A: jz      loc_5D15F5
0x5D1570: mov     edx, [esp+174h+a3]
0x5D1574: mov     ecx, [esp+174h+var_148]
0x5D1578: mov     [eax], edx
0x5D157A: mov     [eax+4], ecx
0x5D157D: mov     edi, eax
0x5D157F: jmp     short loc_5D15F7
0x5D1581: mov     ecx, edi
0x5D1583: call    TESHealthForm_GetHealth
0x5D1588: mov     ecx, [esp+174h+a3]
0x5D158C: mov     esi, eax
0x5D158E: call    TESHealthForm_GetHealth
0x5D1593: add     esi, eax
0x5D1595: push    esi
0x5D1596: mov     ecx, edi
0x5D1598: call    sub_60D020
0x5D159D: jmp     loc_5D162C
0x5D15A2: push    8; Size
0x5D15A4: call    FormHeapAlloc
0x5D15A9: add     esp, 4
0x5D15AC: test    eax, eax
0x5D15AE: jz      short loc_5D15C1
0x5D15B0: mov     edx, [esp+174h+a3]
0x5D15B4: mov     ecx, [esp+174h+var_148]
0x5D15B8: mov     [eax], edx
0x5D15BA: mov     [eax+4], ecx
0x5D15BD: mov     edi, eax
0x5D15BF: jmp     short loc_5D15C3
0x5D15C1: xor     edi, edi
0x5D15C3: mov     esi, [esp+174h+var_158]
0x5D15C7: mov     edx, [esi+68h]
0x5D15CA: mov     eax, [edx+4]
0x5D15CD: add     esi, 68h ; 'h'
0x5D15D0: mov     ecx, esi
0x5D15D2: call    eax
0x5D15D4: mov     [eax+8], edi
0x5D15D7: mov     [eax], ebx
0x5D15D9: mov     ecx, [ebx+4]
0x5D15DC: mov     [eax+4], ecx
0x5D15DF: mov     ecx, [ebx+4]
0x5D15E2: test    ecx, ecx
0x5D15E4: jz      short loc_5D15ED
0x5D15E6: mov     [ecx], eax
0x5D15E8: mov     [ebx+4], eax
0x5D15EB: jmp     short loc_5D1628
0x5D15ED: mov     [esi+4], eax
0x5D15F0: mov     [ebx+4], eax
0x5D15F3: jmp     short loc_5D1628
0x5D15F5: xor     edi, edi
0x5D15F7: mov     esi, [esp+174h+var_158]
0x5D15FB: mov     edx, [esi+68h]
0x5D15FE: mov     eax, [edx+4]
0x5D1601: add     esi, 68h ; 'h'
0x5D1604: mov     ecx, esi
0x5D1606: call    eax
0x5D1608: mov     [eax+8], edi
0x5D160B: mov     dword ptr [eax], 0
0x5D1611: mov     ecx, [esi+8]
0x5D1614: mov     [eax+4], ecx
0x5D1617: mov     ecx, [esi+8]
0x5D161A: test    ecx, ecx
0x5D161C: jz      short loc_5D1622
0x5D161E: mov     [ecx], eax
0x5D1620: jmp     short loc_5D1625
0x5D1622: mov     [esi+4], eax
0x5D1625: mov     [esi+8], eax
0x5D1628: add     dword ptr [esi+0Ch], 1
0x5D162C: mov     eax, [esp+174h+var_148]
0x5D1630: add     eax, 1
0x5D1633: cmp     eax, [esp+174h+var_15C]
0x5D1637: mov     [esp+174h+var_148], eax
0x5D163B: jl      loc_5D1159
0x5D1641: mov     edx, [esp+174h+var_124]
0x5D1645: mov     esi, [edx+34h]
0x5D1648: xor     ebx, ebx
0x5D164A: cmp     esi, ebx
0x5D164C: jz      short loc_5D1682
0x5D164E: mov     edi, edi
0x5D1650: mov     edi, [esi+8]
0x5D1653: lea     eax, [esi+8]
0x5D1656: mov     esi, [esi]
0x5D1658: push    0FB8h
0x5D165D: mov     ecx, edi
0x5D165F: call    sub_588B50
0x5D1664: test    eax, eax
0x5D1666: jz      short loc_5D167E
0x5D1668: fld     dword ptr ds:0A690E0h
0x5D166E: push    ecx
0x5D166F: fstp    [esp+178h+a2]; a3
0x5D1672: push    0FAAh; a2
0x5D1677: mov     ecx, edi; this
0x5D1679: call    Tile_SetFloat
0x5D167E: cmp     esi, ebx
0x5D1680: jnz     short loc_5D1650
0x5D1682: mov     edi, [esp+174h+var_158]
0x5D1686: mov     eax, [edi+70h]
0x5D1689: cmp     eax, ebx
0x5D168B: mov     [esp+174h+a3], ebx; a3
0x5D168F: mov     [esp+174h+var_148], ebx
0x5D1693: mov     [esp+174h+var_154], eax
0x5D1697: jz      loc_5D19FC
0x5D169D: lea     ecx, [ecx+0]
0x5D16A0: mov     ecx, [esp+174h+var_154]
0x5D16A4: lea     eax, [ecx+8]
0x5D16A7: mov     eax, [eax]
0x5D16A9: mov     ecx, [ecx+4]
0x5D16AC: mov     esi, [eax]
0x5D16AE: mov     edx, [eax+4]
0x5D16B1: mov     [esp+174h+var_154], ecx; a3
0x5D16B5: mov     ecx, esi
0x5D16B7: mov     [esp+174h+var_15C], eax; a3
0x5D16BB: mov     [esp+174h+var_14C], edx
0x5D16BF: call    sub_485150
0x5D16C4: cmp     eax, [esp+174h+var_148]
0x5D16C8: mov     [esp+174h+var_138], eax
0x5D16CC: jz      short loc_5D16D2
0x5D16CE: mov     [esp+174h+var_148], eax
0x5D16D2: mov     eax, ds:0B333C4h
0x5D16D7: push    eax
0x5D16D8: mov     ecx, esi
0x5D16DA: call    sub_4851B0
0x5D16DF: push    eax
0x5D16E0: push    offset aIcons; "Icons"
0x5D16E5: lea     ecx, [esp+17Ch+var_120]
0x5D16E9: push    offset aSS_2; "%s\\%s"
0x5D16EE: push    ecx
0x5D16EF: call    __sprintf
0x5D16F4: mov     edx, [esp+184h+var_124]
0x5D16F8: mov     ebx, [edx+34h]
0x5D16FB: add     esp, 10h
0x5D16FE: test    ebx, ebx
0x5D1700: jz      short loc_5D1773
0x5D1702: mov     edi, [ebx+8]
0x5D1705: lea     eax, [ebx+8]
0x5D1708: mov     ebx, [ebx]
0x5D170A: push    0FAFh
0x5D170F: mov     ecx, edi
0x5D1711: call    sub_588C10
0x5D1716: test    eax, eax
0x5D1718: jz      short loc_5D176F
0x5D171A: mov     eax, [esp+174h+var_15C]
0x5D171E: mov     ecx, [eax]
0x5D1720: call    sub_488DF0
0x5D1725: test    eax, eax
0x5D1727: jz      short loc_5D176F
0x5D1729: push    0FAAh
0x5D172E: mov     ecx, edi
0x5D1730: call    Tile_GetFloat
0x5D1735: fcomp   dword ptr ds:0A690E0h
0x5D173B: fnstsw  ax
0x5D173D: test    ah, 44h
0x5D1740: jp      short loc_5D176F
0x5D1742: mov     ecx, esi
0x5D1744: call    sub_488DF0
0x5D1749: push    0FAFh
0x5D174E: mov     ecx, edi
0x5D1750: mov     [esp+178h+var_140], eax
0x5D1754: call    sub_588C10
0x5D1759: mov     ecx, [esp+174h+var_140]
0x5D175D: push    ecx; unsigned __int8 *
0x5D175E: push    eax; unsigned __int8 *
0x5D175F: call    __mbscmp
0x5D1764: add     esp, 8
0x5D1767: test    eax, eax
0x5D1769: jz      loc_5D1AAA
0x5D176F: test    ebx, ebx
0x5D1771: jnz     short loc_5D1702
0x5D1773: mov     eax, [esp+174h+var_158]
0x5D1777: cmp     dword ptr [eax+58h], 2
0x5D177B: jnz     short loc_5D17C7
0x5D177D: mov     eax, [esi+8]
0x5D1780: push    eax
0x5D1781: call    TESHealthForm_GetHealthForForm
0x5D1786: mov     [esp+178h+var_140], eax
0x5D178A: mov     eax, [esi+8]
0x5D178D: push    eax
0x5D178E: call    sub_470520
0x5D1793: mov     [esp+17Ch+var_15C], eax
0x5D1797: fild    [esp+17Ch+var_15C]
0x5D179B: add     esp, 4
0x5D179E: mov     ecx, esi
0x5D17A0: fstp    [esp+178h+a2]; float
0x5D17A3: push    0
0x5D17A5: call    ContainerEntryExtraData_GetHealth
0x5D17AA: sub     esp, 8
0x5D17AD: fstp    [esp+180h+var_17C]; float
0x5D17B1: fild    [esp+180h+var_140]
0x5D17B5: fstp    [esp+180h+var_180]; float
0x5D17B8: call    sub_5483C0
0x5D17BD: mov     ebx, eax
0x5D17BF: add     esp, 0Ch
0x5D17C2: cmp     ebx, 1
0x5D17C5: jg      short loc_5D17CC
0x5D17C7: mov     ebx, 1
0x5D17CC: mov     eax, [esp+174h+a3]
0x5D17D0: lea     ecx, [eax+33h]
0x5D17D3: push    ecx
0x5D17D4: push    eax
0x5D17D5: mov     ecx, esi
0x5D17D7: call    sub_485150
0x5D17DC: push    eax
0x5D17DD: mov     ecx, esi
0x5D17DF: call    sub_488DF0
0x5D17E4: mov     ecx, [esp+180h+var_158]
0x5D17E8: push    eax
0x5D17E9: lea     edx, [esp+184h+var_120]
0x5D17ED: push    edx
0x5D17EE: call    sub_5D0E50
0x5D17F3: mov     edi, eax
0x5D17F5: xor     eax, eax
0x5D17F7: mov     [esp+174h+var_12C], eax
0x5D17FB: mov     word ptr [esp+174h+var_128], ax
0x5D1800: mov     word ptr [esp+174h+var_128+2], ax
0x5D1805: push    ebx; ArgList
0x5D1806: lea     eax, [esp+178h+var_12C]
0x5D180A: push    offset aD_0; "%d"
0x5D180F: push    eax; int
0x5D1810: mov     [esp+180h+var_4], 1
0x5D181B: call    BSStringT_Static_Format
0x5D1820: mov     ecx, [esp+180h+var_12C]
0x5D1824: add     esp, 0Ch
0x5D1827: push    ecx
0x5D1828: push    0FB0h
0x5D182D: mov     ecx, edi
0x5D182F: call    Tile_SetString
0x5D1834: push    0
0x5D1836: push    0
0x5D1838: push    0
0x5D183A: push    1
0x5D183C: push    2
0x5D183E: mov     ecx, esi
0x5D1840: call    sub_48F450
0x5D1845: push    eax
0x5D1846: push    0FB1h
0x5D184B: mov     ecx, edi
0x5D184D: call    Tile_SetString
0x5D1852: push    0
0x5D1854: push    0
0x5D1856: push    0
0x5D1858: push    1
0x5D185A: push    3
0x5D185C: mov     ecx, esi
0x5D185E: call    sub_48F450
0x5D1863: push    eax
0x5D1864: push    0FB2h
0x5D1869: mov     ecx, edi
0x5D186B: call    Tile_SetString
0x5D1870: push    0
0x5D1872: push    0
0x5D1874: push    0
0x5D1876: push    1
0x5D1878: push    4
0x5D187A: mov     ecx, esi
0x5D187C: call    sub_48F450
0x5D1881: push    eax
0x5D1882: push    0FB3h
0x5D1887: mov     ecx, edi
0x5D1889: call    Tile_SetString
0x5D188E: push    0
0x5D1890: push    0
0x5D1892: push    0
0x5D1894: push    1
0x5D1896: push    0
0x5D1898: mov     ecx, esi
0x5D189A: call    sub_48F450
0x5D189F: push    eax
0x5D18A0: push    0FB5h
0x5D18A5: mov     ecx, edi
0x5D18A7: call    Tile_SetString
0x5D18AC: push    0
0x5D18AE: mov     ecx, esi
0x5D18B0: call    ContainerEntryExtraData_HasWorn
0x5D18B5: neg     al
0x5D18B7: sbb     eax, eax
0x5D18B9: neg     eax
0x5D18BB: add     eax, 1
0x5D18BE: mov     [esp+174h+var_15C], eax; a3
0x5D18C2: fild    [esp+174h+var_15C]
0x5D18C6: push    ecx
0x5D18C7: mov     ecx, edi; this
0x5D18C9: fstp    [esp+178h+a2]; a3
0x5D18CC: push    0FB8h; a2
0x5D18D1: call    Tile_SetFloat
0x5D18D6: fild    [esp+174h+var_14C]
0x5D18DA: push    ecx
0x5D18DB: mov     ecx, edi; this
0x5D18DD: fstp    [esp+178h+a2]; a3
0x5D18E0: push    0FB9h; a2
0x5D18E5: call    Tile_SetFloat
0x5D18EA: cmp     [esp+174h+var_13C], 0
0x5D18EF: jz      short loc_5D1907
0x5D18F1: mov     ecx, [esp+174h+var_13C]
0x5D18F5: push    esi
0x5D18F6: call    sub_593690
0x5D18FB: test    al, al
0x5D18FD: mov     [esp+174h+var_14C], 2
0x5D1905: jnz     short loc_5D190F
0x5D1907: mov     [esp+174h+var_14C], 1
0x5D190F: fild    [esp+174h+var_14C]
0x5D1913: push    ecx
0x5D1914: mov     ecx, edi; this
0x5D1916: fstp    [esp+178h+a2]; a3
0x5D1919: push    0FBAh; a2
0x5D191E: call    Tile_SetFloat
0x5D1923: mov     edx, [esp+174h+a3]
0x5D1927: xor     ebx, ebx
0x5D1929: cmp     edx, ds:0B3B718h
0x5D192F: jnz     short loc_5D1973
0x5D1931: push    1; arg1
0x5D1933: push    ebx; canCreate
0x5D1934: call    InterfaceManager_GetSingleton
0x5D1939: push    1; arg1
0x5D193B: push    ebx; canCreate
0x5D193C: call    InterfaceManager_GetSingleton
0x5D1941: add     dword ptr [eax+8Ch], 1
0x5D1948: add     eax, 8Ch ; 'Œ'
0x5D194D: mov     eax, [eax]
0x5D194F: test    eax, eax
0x5D1951: mov     [esp+184h+var_15C], eax
0x5D1955: fild    [esp+184h+var_15C]
0x5D1959: jge     short loc_5D1961
0x5D195B: fadd    dword ptr ds:0A2FC78h
0x5D1961: add     esp, 0Ch
0x5D1964: fstp    [esp+178h+a2]; a3
0x5D1967: push    0FF0h; a2
0x5D196C: mov     ecx, edi; this
0x5D196E: call    Tile_SetFloat
0x5D1973: mov     ecx, [esp+174h+var_158]
0x5D1977: cmp     dword ptr [ecx+58h], 1
0x5D197B: jnz     short loc_5D19C1
0x5D197D: mov     esi, [esi+8]
0x5D1980: push    ebx; int
0x5D1981: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5D1986: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5D198B: push    ebx; int
0x5D198C: push    esi; void *
0x5D198D: call    OblivionDynamicCast
0x5D1992: add     esp, 14h
0x5D1995: cmp     eax, ebx
0x5D1997: jz      short loc_5D19C1
0x5D1999: cmp     [eax+4], ebx
0x5D199C: jz      short loc_5D19C1
0x5D199E: mov     dl, [esp+174h+var_14D]
0x5D19A2: neg     dl
0x5D19A4: push    ecx
0x5D19A5: mov     ecx, edi; this
0x5D19A7: sbb     edx, edx
0x5D19A9: add     edx, 2
0x5D19AC: mov     [esp+178h+var_15C], edx
0x5D19B0: fild    [esp+178h+var_15C]
0x5D19B4: fstp    [esp+178h+a2]; a3
0x5D19B7: push    0FAEh; a2
0x5D19BC: call    Tile_SetFloat
0x5D19C1: mov     eax, [esp+174h+var_12C]
0x5D19C5: push    eax
0x5D19C6: mov     [esp+178h+var_4], 0FFFFFFFFh
0x5D19D1: call    FormHeapFree
0x5D19D6: add     esp, 4
0x5D19D9: mov     [esp+174h+var_12C], ebx
0x5D19DD: mov     word ptr [esp+174h+var_128+2], bx
0x5D19E2: mov     word ptr [esp+174h+var_128], bx
0x5D19E7: xor     ebx, ebx
0x5D19E9: add     [esp+174h+a3], 1
0x5D19EE: cmp     [esp+174h+var_154], ebx
0x5D19F2: jnz     loc_5D16A0
0x5D19F8: mov     edi, [esp+174h+var_158]
0x5D19FC: mov     ecx, [esp+174h+a3]
0x5D1A00: add     ecx, 0FFFFFFFFh
0x5D1A03: mov     [esp+174h+var_15C], ecx
0x5D1A07: fild    [esp+174h+var_15C]
0x5D1A0B: push    ecx
0x5D1A0C: mov     ecx, [edi+44h]; this
0x5D1A0F: fstp    [esp+178h+a2]; a3
0x5D1A12: push    0FAEh; a2
0x5D1A17: call    Tile_SetFloat
0x5D1A1C: mov     edx, [esp+174h+var_124]
0x5D1A20: mov     esi, [edx+34h]
0x5D1A23: test    esi, esi
0x5D1A25: jz      short loc_5D1A5A
0x5D1A27: mov     ebx, [esi+8]
0x5D1A2A: lea     eax, [esi+8]
0x5D1A2D: mov     esi, [esi]
0x5D1A2F: push    0FAAh
0x5D1A34: mov     ecx, ebx
0x5D1A36: call    Tile_GetFloat
0x5D1A3B: fcomp   dword ptr ds:0A690E0h
0x5D1A41: fnstsw  ax
0x5D1A43: test    ah, 44h
0x5D1A46: jp      short loc_5D1A56
0x5D1A48: test    ebx, ebx
0x5D1A4A: jz      short loc_5D1A56
0x5D1A4C: mov     eax, [ebx]
0x5D1A4E: mov     edx, [eax]
0x5D1A50: push    1; a3
0x5D1A52: mov     ecx, ebx
0x5D1A54: call    edx
0x5D1A56: test    esi, esi
0x5D1A58: jnz     short loc_5D1A27
0x5D1A5A: cmp     dword ptr [edi+58h], 2
0x5D1A5E: jnz     loc_5D1DA8
0x5D1A64: fld     dword ptr ds:0A379B4h
0x5D1A6A: push    ecx
0x5D1A6B: mov     ecx, [edi+30h]; this
0x5D1A6E: fstp    [esp+17Ch+var_17C]; a3
0x5D1A71: push    0FB1h; a2
0x5D1A76: call    Tile_SetFloat
0x5D1A7B: mov     ecx, edi
0x5D1A7D: call    sub_5D0BE0
0x5D1A82: mov     esi, eax
0x5D1A84: test    esi, esi
0x5D1A86: jle     loc_5D1D95
0x5D1A8C: mov     ecx, ds:0B333C4h
0x5D1A92: call    sub_5E4420
0x5D1A97: cmp     eax, esi
0x5D1A99: jl      loc_5D1D95
0x5D1A9F: fld     dword ptr ds:0A379B4h
0x5D1AA5: jmp     loc_5D1D97
0x5D1AAA: mov     edx, [esp+174h+var_158]
0x5D1AAE: cmp     dword ptr [edx+58h], 2
0x5D1AB2: jnz     short loc_5D1AFF
0x5D1AB4: mov     eax, [esi+8]
0x5D1AB7: push    eax
0x5D1AB8: call    TESHealthForm_GetHealthForForm
0x5D1ABD: mov     [esp+178h+var_140], eax
0x5D1AC1: mov     eax, [esi+8]
0x5D1AC4: push    eax
0x5D1AC5: call    sub_470520
0x5D1ACA: mov     [esp+17Ch+var_15C], eax
0x5D1ACE: fild    [esp+17Ch+var_15C]
0x5D1AD2: add     esp, 4
0x5D1AD5: xor     ebx, ebx
0x5D1AD7: fstp    [esp+178h+a2]; float
0x5D1ADA: push    ebx
0x5D1ADB: mov     ecx, esi
0x5D1ADD: call    ContainerEntryExtraData_GetHealth
0x5D1AE2: sub     esp, 8
0x5D1AE5: fstp    [esp+180h+var_17C]; float
0x5D1AE9: fild    [esp+180h+var_140]
0x5D1AED: fstp    [esp+180h+var_180]; float
0x5D1AF0: call    sub_5483C0
0x5D1AF5: add     esp, 0Ch
0x5D1AF8: cmp     eax, 1
0x5D1AFB: jg      short loc_5D1B06
0x5D1AFD: jmp     short loc_5D1B01
0x5D1AFF: xor     ebx, ebx
0x5D1B01: mov     eax, 1
0x5D1B06: mov     [esp+174h+var_134], ebx
0x5D1B0A: mov     word ptr [esp+174h+var_130], bx
0x5D1B0F: mov     word ptr [esp+174h+var_130+2], bx
0x5D1B14: push    eax; ArgList
0x5D1B15: lea     eax, [esp+178h+var_134]
0x5D1B19: push    offset aD_0; "%d"
0x5D1B1E: push    eax; int
0x5D1B1F: mov     [esp+180h+var_4], ebx
0x5D1B26: call    BSStringT_Static_Format
0x5D1B2B: add     esp, 0Ch
0x5D1B2E: mov     ecx, esi
0x5D1B30: call    sub_488DF0
0x5D1B35: push    eax
0x5D1B36: push    0FAFh
0x5D1B3B: mov     ecx, edi
0x5D1B3D: call    Tile_SetString
0x5D1B42: mov     ecx, [esp+174h+var_134]
0x5D1B46: push    ecx
0x5D1B47: push    0FB0h
0x5D1B4C: mov     ecx, edi
0x5D1B4E: call    Tile_SetString
0x5D1B53: push    ebx
0x5D1B54: push    ebx
0x5D1B55: push    ebx
0x5D1B56: push    1
0x5D1B58: push    2
0x5D1B5A: mov     ecx, esi
0x5D1B5C: call    sub_48F450
0x5D1B61: push    eax
0x5D1B62: push    0FB1h
0x5D1B67: mov     ecx, edi
0x5D1B69: call    Tile_SetString
0x5D1B6E: push    ebx
0x5D1B6F: push    ebx
0x5D1B70: push    ebx
0x5D1B71: push    1
0x5D1B73: push    3
0x5D1B75: mov     ecx, esi
0x5D1B77: call    sub_48F450
0x5D1B7C: push    eax
0x5D1B7D: push    0FB2h
0x5D1B82: mov     ecx, edi
0x5D1B84: call    Tile_SetString
0x5D1B89: push    ebx
0x5D1B8A: push    ebx
0x5D1B8B: push    ebx
0x5D1B8C: push    1
0x5D1B8E: push    4
0x5D1B90: mov     ecx, esi
0x5D1B92: call    sub_48F450
0x5D1B97: push    eax
0x5D1B98: push    0FB3h
0x5D1B9D: mov     ecx, edi
0x5D1B9F: call    Tile_SetString
0x5D1BA4: lea     edx, [esp+174h+var_120]
0x5D1BA8: push    edx
0x5D1BA9: push    0FB4h
0x5D1BAE: mov     ecx, edi
0x5D1BB0: call    Tile_SetString
0x5D1BB5: push    ebx
0x5D1BB6: push    ebx
0x5D1BB7: push    ebx
0x5D1BB8: push    1
0x5D1BBA: push    ebx
0x5D1BBB: mov     ecx, esi
0x5D1BBD: call    sub_48F450
0x5D1BC2: push    eax
0x5D1BC3: push    0FB5h
0x5D1BC8: mov     ecx, edi
0x5D1BCA: call    Tile_SetString
0x5D1BCF: fild    [esp+174h+var_138]
0x5D1BD3: push    ecx
0x5D1BD4: mov     ecx, edi; this
0x5D1BD6: fstp    [esp+178h+a2]; a3
0x5D1BD9: push    0FB7h; a2
0x5D1BDE: call    Tile_SetFloat
0x5D1BE3: push    ebx
0x5D1BE4: mov     ecx, esi
0x5D1BE6: call    ContainerEntryExtraData_HasWorn
0x5D1BEB: neg     al
0x5D1BED: sbb     eax, eax
0x5D1BEF: neg     eax
0x5D1BF1: add     eax, 1
0x5D1BF4: mov     [esp+174h+var_15C], eax
0x5D1BF8: fild    [esp+174h+var_15C]
0x5D1BFC: push    ecx
0x5D1BFD: mov     ecx, edi; this
0x5D1BFF: fstp    [esp+178h+a2]; a3
0x5D1C02: push    0FB8h; a2
0x5D1C07: call    Tile_SetFloat
0x5D1C0C: fild    [esp+174h+var_14C]
0x5D1C10: push    ecx
0x5D1C11: mov     ecx, edi; this
0x5D1C13: fstp    [esp+178h+a2]; a3
0x5D1C16: push    0FB9h; a2
0x5D1C1B: call    Tile_SetFloat
0x5D1C20: mov     ecx, [esp+174h+var_13C]
0x5D1C24: cmp     ecx, ebx
0x5D1C26: jz      short loc_5D1C3A
0x5D1C28: push    esi
0x5D1C29: call    sub_593690
0x5D1C2E: test    al, al
0x5D1C30: mov     [esp+174h+var_14C], 2
0x5D1C38: jnz     short loc_5D1C42
0x5D1C3A: mov     [esp+174h+var_14C], 1
0x5D1C42: fild    [esp+174h+var_14C]
0x5D1C46: push    ecx
0x5D1C47: mov     ecx, edi; this
0x5D1C49: fstp    [esp+178h+a2]; a3
0x5D1C4C: push    0FBAh; a2
0x5D1C51: call    Tile_SetFloat
0x5D1C56: fild    [esp+174h+a3]
0x5D1C5A: push    ecx
0x5D1C5B: mov     ecx, edi; this
0x5D1C5D: fstp    [esp+178h+a2]; a3
0x5D1C60: push    0FAAh; a2
0x5D1C65: call    Tile_SetFloat
0x5D1C6A: mov     eax, [esp+174h+a3]
0x5D1C6E: cmp     eax, ds:0B3B718h
0x5D1C74: jnz     short loc_5D1CBA
0x5D1C76: push    1; arg1
0x5D1C78: push    ebx; canCreate
0x5D1C79: call    InterfaceManager_GetSingleton
0x5D1C7E: push    1; arg1
0x5D1C80: push    ebx; canCreate
0x5D1C81: call    InterfaceManager_GetSingleton
0x5D1C86: add     dword ptr [eax+8Ch], 1
0x5D1C8D: fild    dword ptr [eax+8Ch]
0x5D1C93: mov     ecx, [eax+8Ch]
0x5D1C99: add     eax, 8Ch ; 'Œ'
0x5D1C9E: test    ecx, ecx
0x5D1CA0: jge     short loc_5D1CA8
0x5D1CA2: fadd    dword ptr ds:0A2FC78h
0x5D1CA8: add     esp, 0Ch
0x5D1CAB: fstp    [esp+178h+a2]; a3
0x5D1CAE: push    0FF0h; a2
0x5D1CB3: mov     ecx, edi; this
0x5D1CB5: call    Tile_SetFloat
0x5D1CBA: mov     edx, [esp+174h+var_158]
0x5D1CBE: cmp     dword ptr [edx+58h], 1
0x5D1CC2: jnz     short loc_5D1D08
0x5D1CC4: mov     esi, [esi+8]
0x5D1CC7: push    ebx; int
0x5D1CC8: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5D1CCD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x5D1CD2: push    ebx; int
0x5D1CD3: push    esi; void *
0x5D1CD4: call    OblivionDynamicCast
0x5D1CD9: add     esp, 14h
0x5D1CDC: cmp     eax, ebx
0x5D1CDE: jz      short loc_5D1D08
0x5D1CE0: cmp     [eax+4], ebx
0x5D1CE3: jz      short loc_5D1D08
0x5D1CE5: mov     al, [esp+174h+var_14D]
0x5D1CE9: neg     al
0x5D1CEB: push    ecx
0x5D1CEC: mov     ecx, edi; this
0x5D1CEE: sbb     eax, eax
0x5D1CF0: add     eax, 2
0x5D1CF3: mov     [esp+178h+var_15C], eax
0x5D1CF7: fild    [esp+178h+var_15C]
0x5D1CFB: fstp    [esp+178h+a2]; a3
0x5D1CFE: push    0FAEh; a2
0x5D1D03: call    Tile_SetFloat
0x5D1D08: mov     eax, [edi+10h]
0x5D1D0B: lea     ecx, [eax+30h]
0x5D1D0E: mov     eax, [ecx+4]
0x5D1D11: cmp     eax, ebx
0x5D1D13: jz      short loc_5D1D25
0x5D1D15: cmp     edi, [eax+8]
0x5D1D18: lea     edx, [eax+8]
0x5D1D1B: mov     esi, eax
0x5D1D1D: mov     eax, [eax]
0x5D1D1F: jz      short loc_5D1D27
0x5D1D21: cmp     eax, ebx
0x5D1D23: jnz     short loc_5D1D15
0x5D1D25: xor     esi, esi
0x5D1D27: cmp     esi, ebx
0x5D1D29: mov     [esp+174h+var_15C], esi
0x5D1D2D: jz      short loc_5D1D39
0x5D1D2F: lea     edx, [esp+174h+var_15C]
0x5D1D33: push    edx
0x5D1D34: call    sub_7AA860
0x5D1D39: mov     esi, [edi+10h]
0x5D1D3C: mov     eax, [esi+30h]
0x5D1D3F: mov     edx, [eax+4]
0x5D1D42: add     esi, 30h ; '0'
0x5D1D45: mov     ecx, esi
0x5D1D47: call    edx
0x5D1D49: mov     [eax+8], edi
0x5D1D4C: mov     [eax+4], ebx
0x5D1D4F: mov     ecx, [esi+4]
0x5D1D52: mov     [eax], ecx
0x5D1D54: mov     ecx, [esi+4]
0x5D1D57: cmp     ecx, ebx
0x5D1D59: jz      short loc_5D1D60
0x5D1D5B: mov     [ecx+4], eax
0x5D1D5E: jmp     short loc_5D1D63
0x5D1D60: mov     [esi+8], eax
0x5D1D63: mov     edx, [esp+174h+var_134]
0x5D1D67: add     dword ptr [esi+0Ch], 1
0x5D1D6B: push    edx
0x5D1D6C: mov     [esi+4], eax
0x5D1D6F: mov     [esp+178h+var_4], 0FFFFFFFFh
0x5D1D7A: call    FormHeapFree
0x5D1D7F: add     esp, 4
0x5D1D82: mov     [esp+174h+var_134], ebx
0x5D1D86: mov     word ptr [esp+174h+var_130+2], bx
0x5D1D8B: mov     word ptr [esp+174h+var_130], bx
0x5D1D90: jmp     loc_5D19E9
0x5D1D95: fld1
0x5D1D97: push    ecx
0x5D1D98: mov     ecx, [edi+30h]; this
0x5D1D9B: fstp    [esp+17Ch+var_17C]; a3
0x5D1D9E: push    0FAFh; a2
0x5D1DA3: call    Tile_SetFloat
0x5D1DA8: cmp     dword ptr [edi+58h], 3
0x5D1DAC: jnz     short loc_5D1E1C
0x5D1DAE: fld     dword ptr ds:0A379B4h
0x5D1DB4: push    ecx
0x5D1DB5: mov     ecx, [edi+50h]; this
0x5D1DB8: fstp    [esp+17Ch+var_17C]; a3
0x5D1DBB: push    0FB1h; a2
0x5D1DC0: call    Tile_SetFloat
0x5D1DC5: mov     eax, [esp+178h+var_140]
0x5D1DC9: test    eax, eax
0x5D1DCB: jz      short loc_5D1DE3
0x5D1DCD: cmp     dword ptr [eax+0ACh], 0
0x5D1DD4: jnz     short loc_5D1DE3
0x5D1DD6: cmp     dword ptr [eax+0A8h], 0
0x5D1DDD: jnz     short loc_5D1DE3
0x5D1DDF: fld1
0x5D1DE1: jmp     short loc_5D1DE9
0x5D1DE3: fld     dword ptr ds:0A379B4h
0x5D1DE9: push    ecx
0x5D1DEA: mov     ecx, [edi+50h]; this
0x5D1DED: fstp    [esp+17Ch+var_17C]; a3
0x5D1DF0: push    0FB1h; a2
0x5D1DF5: call    Tile_SetFloat
0x5D1DFA: cmp     byte ptr [edi+65h], 0
0x5D1DFE: jz      short loc_5D1E08
0x5D1E00: mov     eax, ds:0B388A0h
0x5D1E05: push    eax
0x5D1E06: jmp     short loc_5D1E0F
0x5D1E08: mov     ecx, ds:0B38898h
0x5D1E0E: push    ecx
0x5D1E0F: mov     ecx, [edi+50h]
0x5D1E12: push    0FAEh
0x5D1E17: call    Tile_SetString
0x5D1E1C: mov     ecx, [esp+178h+var_10]
0x5D1E23: mov     large fs:0, ecx
0x5D1E2A: pop     ecx
0x5D1E2B: pop     edi
0x5D1E2C: pop     esi
0x5D1E2D: pop     ebx
0x5D1E2E: mov     ecx, [esp+168h+var_18]
0x5D1E35: xor     ecx, esp
0x5D1E37: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5D1E3C: mov     esp, ebp
0x5D1E3E: pop     ebp
0x5D1E3F: retn    4
