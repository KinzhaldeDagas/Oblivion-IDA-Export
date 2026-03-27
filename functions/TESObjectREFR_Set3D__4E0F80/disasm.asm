0x4E0F80: push    0FFFFFFFFh
0x4E0F82: push    offset TESObjectREFR_Set3D_SEH
0x4E0F87: mov     eax, large fs:0
0x4E0F8D: push    eax
0x4E0F8E: sub     esp, 44h
0x4E0F91: push    ebx
0x4E0F92: push    ebp
0x4E0F93: push    esi
0x4E0F94: push    edi
0x4E0F95: mov     eax, ds:0B30AACh
0x4E0F9A: xor     eax, esp
0x4E0F9C: push    eax
0x4E0F9D: lea     eax, [esp+64h+var_C]
0x4E0FA1: mov     large fs:0, eax
0x4E0FA7: mov     ebp, ecx
0x4E0FA9: mov     eax, [ebp+3Ch]
0x4E0FAC: mov     edi, [esp+64h+arg_0]
0x4E0FB0: cmp     eax, edi
0x4E0FB2: jnz     short loc_4E0FCD
0x4E0FB4: test    edi, edi
0x4E0FB6: jnz     loc_4E155C
0x4E0FBC: mov     ecx, ds:0B33A1Ch
0x4E0FC2: push    ebp
0x4E0FC3: call    sub_439DC0
0x4E0FC8: jmp     loc_4E155C
0x4E0FCD: mov     ecx, [ebp+30h]
0x4E0FD0: mov     eax, [ebp+2Ch]
0x4E0FD3: mov     edx, [ebp+34h]
0x4E0FD6: mov     [esp+64h+var_38], ecx
0x4E0FDA: mov     ecx, ebp; this
0x4E0FDC: mov     [esp+64h+var_3C], eax
0x4E0FE0: mov     [esp+64h+var_34], edx
0x4E0FE4: call    TESObjectREFR_GetScale
0x4E0FE9: fstp    [esp+64h+var_48]
0x4E0FED: mov     eax, [ebp+0]
0x4E0FF0: mov     edx, [eax+190h]
0x4E0FF6: xor     esi, esi
0x4E0FF8: mov     ecx, ebp
0x4E0FFA: mov     [esp+64h+var_4C], 0
0x4E1002: mov     [esp+64h+var_50], esi
0x4E1006: call    edx
0x4E1008: test    al, al
0x4E100A: jz      short loc_4E1012
0x4E100C: mov     esi, ebp
0x4E100E: mov     [esp+64h+var_50], ebp
0x4E1012: mov     eax, [ebp+3Ch]
0x4E1015: test    eax, eax
0x4E1017: jz      short loc_4E102E
0x4E1019: test    edi, edi
0x4E101B: jz      short loc_4E102E
0x4E101D: mov     eax, [ebp+1Ch]
0x4E1020: test    eax, eax
0x4E1022: jz      short loc_4E102E
0x4E1024: cmp     byte ptr [eax+4], 1Eh
0x4E1028: jz      loc_4E155C
0x4E102E: mov     eax, ds:0B33A98h
0x4E1033: cmp     byte ptr [eax+0CD4h], 0
0x4E103A: jnz     short loc_4E1068
0x4E103C: test    esi, esi
0x4E103E: jz      short loc_4E1068
0x4E1040: mov     edx, [esi]
0x4E1042: mov     eax, [edx+380h]
0x4E1048: mov     ecx, esi
0x4E104A: call    eax
0x4E104C: test    eax, eax
0x4E104E: jz      short loc_4E1068
0x4E1050: mov     edx, [esi]
0x4E1052: mov     eax, [edx+380h]
0x4E1058: mov     ecx, esi
0x4E105A: call    eax
0x4E105C: mov     edx, [eax]
0x4E105E: mov     ecx, eax
0x4E1060: mov     eax, [edx+164h]
0x4E1066: call    eax
0x4E1068: mov     ebx, [ebp+3Ch]
0x4E106B: test    ebx, ebx
0x4E106D: mov     [esp+64h+var_40], ebx
0x4E1071: jz      short loc_4E107D
0x4E1073: lea     ecx, [ebx+4]
0x4E1076: push    ecx; lpAddend
0x4E1077: call    dword ptr ds:0A28078h
0x4E107D: test    ebx, ebx
0x4E107F: mov     [esp+64h+var_4], 0
0x4E1087: jz      loc_4E13BB
0x4E108D: mov     ecx, [ebx+1Ch]
0x4E1090: test    ecx, ecx
0x4E1092: mov     [esp+64h+var_4C], ecx
0x4E1096: jz      loc_4E111C
0x4E109C: mov     edx, [ebp+8]
0x4E109F: shr     edx, 0Eh
0x4E10A2: test    dl, 1
0x4E10A5: jz      short loc_4E10B4
0x4E10A7: mov     eax, [ebp+1Ch]
0x4E10AA: test    eax, eax
0x4E10AC: jz      short loc_4E10B4
0x4E10AE: cmp     byte ptr [eax+4], 1Eh
0x4E10B2: jz      short loc_4E10EA
0x4E10B4: mov     eax, [ecx]
0x4E10B6: mov     eax, [eax+88h]
0x4E10BC: push    ebx
0x4E10BD: lea     edx, [esp+68h+var_44]
0x4E10C1: push    edx
0x4E10C2: call    eax
0x4E10C4: mov     eax, [esp+64h+var_44]
0x4E10C8: test    eax, eax
0x4E10CA: jz      short loc_4E10EA
0x4E10CC: mov     esi, eax
0x4E10CE: add     eax, 4
0x4E10D1: push    eax; lpAddend
0x4E10D2: call    dword ptr ds:0A2807Ch
0x4E10D8: test    eax, eax
0x4E10DA: jnz     short loc_4E10EA
0x4E10DC: test    esi, esi
0x4E10DE: jz      short loc_4E10EA
0x4E10E0: mov     edx, [esi]
0x4E10E2: mov     eax, [edx]
0x4E10E4: push    1
0x4E10E6: mov     ecx, esi
0x4E10E8: call    eax
0x4E10EA: mov     ecx, [ebx+54h]
0x4E10ED: fld     dword ptr [ebx+60h]
0x4E10F0: mov     edx, [ebx+58h]
0x4E10F3: fstp    [esp+64h+var_48]
0x4E10F7: mov     eax, [ebx+5Ch]
0x4E10FA: mov     [esp+64h+var_3C], ecx
0x4E10FE: lea     esi, [ebx+30h]
0x4E1101: mov     ecx, 9
0x4E1106: lea     edi, [esp+64h+var_30]
0x4E110A: rep movsd
0x4E110C: mov     edi, [esp+64h+arg_0]
0x4E1110: mov     esi, [esp+64h+var_50]
0x4E1114: mov     [esp+64h+var_38], edx
0x4E1118: mov     [esp+64h+var_34], eax
0x4E111C: push    ebx
0x4E111D: push    0
0x4E111F: call    GetShadowSceneNode
0x4E1124: add     esp, 4
0x4E1127: mov     ecx, eax
0x4E1129: call    sub_7C5E70
0x4E112E: mov     edx, [ebp+0]
0x4E1131: mov     eax, [edx+188h]
0x4E1137: mov     ecx, ebp
0x4E1139: call    eax
0x4E113B: test    al, al
0x4E113D: jz      short loc_4E1151
0x4E113F: push    ebx
0x4E1140: push    0
0x4E1142: call    GetShadowSceneNode
0x4E1147: add     esp, 4
0x4E114A: mov     ecx, eax
0x4E114C: call    sub_7C76D0
0x4E1151: test    edi, edi
0x4E1153: jnz     loc_4E12F2
0x4E1159: mov     ecx, ebp
0x4E115B: call    sub_4D7470
0x4E1160: mov     ecx, [ebp+8]
0x4E1163: shr     ecx, 5
0x4E1166: test    cl, 1
0x4E1169: jnz     short loc_4E11A7
0x4E116B: test    esi, esi
0x4E116D: jz      short loc_4E118F
0x4E116F: mov     edx, [ebp+0]
0x4E1172: mov     eax, [edx+198h]
0x4E1178: push    edi
0x4E1179: mov     ecx, ebp
0x4E117B: call    eax
0x4E117D: test    al, al
0x4E117F: jz      short loc_4E11A7
0x4E1181: mov     ecx, ds:0B33B00h
0x4E1187: push    ebp
0x4E1188: call    sub_45D220
0x4E118D: jmp     short loc_4E11A7
0x4E118F: mov     ecx, ds:0B33B00h
0x4E1195: push    ebp
0x4E1196: call    sub_45D220
0x4E119B: mov     ecx, ds:0B33B00h
0x4E11A1: push    ebp
0x4E11A2: call    sub_45D390
0x4E11A7: lea     ecx, [ebp+44h]
0x4E11AA: call    sub_41E650
0x4E11AF: mov     edi, eax
0x4E11B1: test    edi, edi
0x4E11B3: jz      short loc_4E1201
0x4E11B5: mov     eax, [edi]
0x4E11B7: test    eax, eax
0x4E11B9: jz      short loc_4E11F5
0x4E11BB: push    eax
0x4E11BC: push    0
0x4E11BE: call    GetShadowSceneNode
0x4E11C3: add     esp, 4
0x4E11C6: mov     ecx, eax
0x4E11C8: call    sub_7C7DC0
0x4E11CD: mov     esi, [edi]
0x4E11CF: test    esi, esi
0x4E11D1: jz      short loc_4E11F5
0x4E11D3: lea     ecx, [esi+4]
0x4E11D6: push    ecx; lpAddend
0x4E11D7: call    dword ptr ds:0A2807Ch
0x4E11DD: test    eax, eax
0x4E11DF: jnz     short loc_4E11EF
0x4E11E1: test    esi, esi
0x4E11E3: jz      short loc_4E11EF
0x4E11E5: mov     edx, [esi]
0x4E11E7: mov     eax, [edx]
0x4E11E9: push    1
0x4E11EB: mov     ecx, esi
0x4E11ED: call    eax
0x4E11EF: mov     dword ptr [edi], 0
0x4E11F5: lea     ecx, [ebp+44h]
0x4E11F8: call    sub_41F5B0
0x4E11FD: mov     esi, [esp+64h+var_50]
0x4E1201: mov     edx, [ebp+0]
0x4E1204: mov     eax, [edx+188h]
0x4E120A: mov     ecx, ebp
0x4E120C: call    eax
0x4E120E: test    al, al
0x4E1210: jz      short loc_4E1244
0x4E1212: mov     edx, [ebp+0]
0x4E1215: mov     eax, [edx+44h]
0x4E1218: push    2000000h
0x4E121D: mov     ecx, ebp
0x4E121F: call    eax
0x4E1221: mov     ecx, [ebp+58h]
0x4E1224: test    ecx, ecx
0x4E1226: jz      short loc_4E1244
0x4E1228: mov     edx, [ecx]
0x4E122A: mov     eax, [edx+8]
0x4E122D: call    eax
0x4E122F: cmp     eax, 1
0x4E1232: ja      short loc_4E1244
0x4E1234: mov     ecx, [ebp+58h]
0x4E1237: test    ecx, ecx
0x4E1239: jz      short loc_4E1244
0x4E123B: push    0
0x4E123D: call    sub_64FFF0
0x4E1242: jmp     short loc_4E1259
0x4E1244: lea     edi, [ebp+44h]
0x4E1247: mov     ecx, edi
0x4E1249: call    BaseExtraList_GetAnimExtraData?
0x4E124E: test    eax, eax
0x4E1250: jz      short loc_4E1259
0x4E1252: mov     ecx, edi
0x4E1254: call    sub_41F590
0x4E1259: test    esi, esi
0x4E125B: jz      short loc_4E127B
0x4E125D: mov     ecx, ebp
0x4E125F: call    UnequipWeapon
0x4E1264: push    0
0x4E1266: mov     ecx, ebp
0x4E1268: call    sub_4DC8F0
0x4E126D: mov     ecx, ebp
0x4E126F: call    UnequipLight
0x4E1274: mov     ecx, ebp
0x4E1276: call    sub_4DCCF0
0x4E127B: mov     edx, [ebp+0]
0x4E127E: mov     eax, [edx+16Ch]
0x4E1284: push    0
0x4E1286: mov     ecx, ebp
0x4E1288: call    eax
0x4E128A: push    offset dword_A7D0EC
0x4E128F: mov     ecx, ebx
0x4E1291: call    NiObjectNET_GetExtraData
0x4E1296: test    eax, eax
0x4E1298: jz      short loc_4E12AE
0x4E129A: mov     ecx, [eax+0Ch]
0x4E129D: shr     ecx, 4
0x4E12A0: test    cl, 1
0x4E12A3: jz      short loc_4E12AE
0x4E12A5: push    ebx
0x4E12A6: call    sub_4DE1C0
0x4E12AB: add     esp, 4
0x4E12AE: test    esi, esi
0x4E12B0: jz      short loc_4E12D9
0x4E12B2: mov     ecx, ebp; this
0x4E12B4: call    MobileObject_GetCharProxy
0x4E12B9: test    eax, eax
0x4E12BB: jz      short loc_4E12C6
0x4E12BD: push    0
0x4E12BF: mov     ecx, eax
0x4E12C1: call    sub_4D9A50
0x4E12C6: mov     ecx, [ebp+58h]
0x4E12C9: test    ecx, ecx
0x4E12CB: jz      short loc_4E12D9
0x4E12CD: mov     edx, [ecx]
0x4E12CF: mov     eax, [edx+470h]
0x4E12D5: push    0
0x4E12D7: call    eax
0x4E12D9: mov     ecx, ds:0B33398h
0x4E12DF: mov     ecx, [ecx+24h]
0x4E12E2: test    ecx, ecx
0x4E12E4: jz      short loc_4E12F2
0x4E12E6: fldz
0x4E12E8: push    ecx
0x4E12E9: fstp    [esp+68h+var_68]; float
0x4E12EC: push    ebp; int
0x4E12ED: call    sub_6AC420
0x4E12F2: mov     eax, [ebp+40h]
0x4E12F5: test    eax, eax
0x4E12F7: jz      short loc_4E12FF
0x4E12F9: cmp     byte ptr [eax+26h], 1
0x4E12FD: jz      short loc_4E131E
0x4E12FF: push    ebp
0x4E1300: mov     ecx, offset ActorProcessManager_ptr
0x4E1305: call    sub_678D90
0x4E130A: cmp     dword ptr ds:0B3B7D0h, 0
0x4E1311: jle     short loc_4E131E
0x4E1313: push    1
0x4E1315: push    ebp
0x4E1316: call    sub_607B90
0x4E131B: add     esp, 8
0x4E131E: push    offset off_A3CEB0
0x4E1323: mov     ecx, ebx
0x4E1325: call    sub_6FFAC0
0x4E132A: lea     edx, [ebx+4]
0x4E132D: push    edx; lpAddend
0x4E132E: call    dword ptr ds:0A2807Ch
0x4E1334: test    eax, eax
0x4E1336: jnz     short loc_4E1342
0x4E1338: mov     eax, [ebx]
0x4E133A: mov     edx, [eax]
0x4E133C: push    1
0x4E133E: mov     ecx, ebx
0x4E1340: call    edx
0x4E1342: mov     eax, [ebp+0]
0x4E1345: mov     edx, [eax+144h]
0x4E134B: mov     ecx, ebp
0x4E134D: mov     [esp+64h+var_40], 0
0x4E1355: call    edx
0x4E1357: push    3
0x4E1359: call    nullsub_returnTrue_0arg
0x4E135E: mov     esi, [ebp+3Ch]
0x4E1361: add     esp, 4
0x4E1364: test    esi, esi
0x4E1366: jz      short loc_4E138B
0x4E1368: lea     eax, [esi+4]
0x4E136B: push    eax; lpAddend
0x4E136C: call    dword ptr ds:0A2807Ch
0x4E1372: test    eax, eax
0x4E1374: jnz     short loc_4E1384
0x4E1376: test    esi, esi
0x4E1378: jz      short loc_4E1384
0x4E137A: mov     edx, [esi]
0x4E137C: mov     eax, [edx]
0x4E137E: push    1
0x4E1380: mov     ecx, esi
0x4E1382: call    eax
0x4E1384: mov     dword ptr [ebp+3Ch], 0
0x4E138B: push    2
0x4E138D: call    nullsub_returnTrue_0arg
0x4E1392: add     esp, 4
0x4E1395: cmp     [esp+64h+arg_0], 0
0x4E139A: jnz     short loc_4E13D4
0x4E139C: cmp     dword ptr [ebp+1Ch], 0
0x4E13A0: jz      short loc_4E13CB
0x4E13A2: test    dword ptr [ebp+8], 80000h
0x4E13A9: push    ebp
0x4E13AA: jnz     short loc_4E13C0
0x4E13AC: mov     ecx, [ebp+1Ch]
0x4E13AF: mov     edx, [ecx]
0x4E13B1: mov     eax, [edx+0F0h]
0x4E13B7: call    eax
0x4E13B9: jmp     short loc_4E13CB
0x4E13BB: test    edi, edi
0x4E13BD: jnz     short loc_4E13D4
0x4E13BF: push    ebp
0x4E13C0: mov     ecx, ds:0B33A1Ch
0x4E13C6: call    sub_439DC0
0x4E13CB: push    0
0x4E13CD: mov     ecx, ebp
0x4E13CF: call    sub_4D9310
0x4E13D4: mov     esi, [esp+64h+arg_0]
0x4E13D8: push    esi
0x4E13D9: mov     ecx, ebp
0x4E13DB: call    sub_4D7D10
0x4E13E0: test    esi, esi
0x4E13E2: jz      loc_4E150F
0x4E13E8: cmp     [esp+64h+var_4C], 0
0x4E13ED: jz      short loc_4E145E
0x4E13EF: mov     ecx, [esp+64h+var_3C]
0x4E13F3: fld     [esp+64h+var_48]
0x4E13F7: mov     edx, [esp+64h+var_38]
0x4E13FB: fabs
0x4E13FD: mov     eax, [esp+64h+var_34]
0x4E1401: fstp    [esp+64h+var_44]
0x4E1405: fld     [esp+64h+var_44]
0x4E1409: mov     ebx, esi
0x4E140B: mov     [ebx+54h], ecx
0x4E140E: fstp    dword ptr [ebx+60h]
0x4E1411: lea     edi, [ebx+30h]
0x4E1414: mov     ecx, 9
0x4E1419: lea     esi, [esp+64h+var_30]
0x4E141D: rep movsd
0x4E141F: mov     ecx, [esp+64h+var_4C]
0x4E1423: mov     [ebx+58h], edx
0x4E1426: mov     [ebx+5Ch], eax
0x4E1429: mov     edx, [ecx]
0x4E142B: mov     eax, [edx+84h]
0x4E1431: push    1
0x4E1433: push    ebx
0x4E1434: call    eax
0x4E1436: push    1
0x4E1438: push    ebx
0x4E1439: call    sub_897A20
0x4E143E: add     esp, 8
0x4E1441: mov     ecx, ebx; this
0x4E1443: call    NiAVObject_InitializePropertyState
0x4E1448: mov     ecx, ebx
0x4E144A: call    NiNode_UpdateDynamicEffectState
0x4E144F: fldz
0x4E1451: push    0; a3
0x4E1453: push    ecx
0x4E1454: mov     ecx, ebx; this
0x4E1456: fstp    [esp+6Ch+a2]; a2
0x4E1459: call    NiAVObject_UpdateNiAVObject
0x4E145E: mov     eax, [ebp+1Ch]
0x4E1461: test    eax, eax
0x4E1463: jz      loc_4E150F
0x4E1469: cmp     byte ptr [eax+4], 1Eh
0x4E146D: jz      loc_4E150F
0x4E1473: mov     ecx, [esp+64h+arg_0]
0x4E1477: movzx   eax, word ptr [ecx+14h]
0x4E147B: movzx   edi, ax
0x4E147E: xor     ebx, ebx
0x4E1480: test    edi, edi
0x4E1482: jz      short loc_4E14CA
0x4E1484: sub     edi, 1
0x4E1487: test    ebx, ebx
0x4E1489: jnz     loc_4E150C
0x4E148F: mov     eax, [esp+64h+arg_0]
0x4E1493: mov     ecx, [eax+10h]
0x4E1496: movzx   edx, di
0x4E1499: mov     esi, [ecx+edx*4]
0x4E149C: test    esi, esi
0x4E149E: jz      short loc_4E14C2
0x4E14A0: mov     edx, [esi]
0x4E14A2: mov     eax, [edx+4]
0x4E14A5: mov     ecx, esi
0x4E14A7: call    eax
0x4E14A9: test    eax, eax
0x4E14AB: jz      short loc_4E14C2
0x4E14AD: lea     ecx, [ecx+0]
0x4E14B0: cmp     eax, offset dword_B35ACC
0x4E14B5: jz      short loc_4E14C0
0x4E14B7: mov     eax, [eax+4]
0x4E14BA: test    eax, eax
0x4E14BC: jnz     short loc_4E14B0
0x4E14BE: jmp     short loc_4E14C2
0x4E14C0: mov     ebx, esi
0x4E14C2: test    edi, edi
0x4E14C4: jnz     short loc_4E1484
0x4E14C6: test    ebx, ebx
0x4E14C8: jnz     short loc_4E150C
0x4E14CA: push    10h; Size
0x4E14CC: call    FormHeapAlloc
0x4E14D1: add     esp, 4
0x4E14D4: mov     [esp+64h+var_44], eax
0x4E14D8: test    eax, eax
0x4E14DA: mov     byte ptr [esp+64h+var_4], 1
0x4E14DF: jz      short loc_4E14FA
0x4E14E1: push    ebp
0x4E14E2: mov     ecx, eax
0x4E14E4: call    sub_4D67C0
0x4E14E9: mov     ecx, [esp+64h+arg_0]
0x4E14ED: push    eax
0x4E14EE: mov     byte ptr [esp+68h+var_4], 0
0x4E14F3: call    NiNode_AddNiExtraData
0x4E14F8: jmp     short loc_4E150F
0x4E14FA: mov     ecx, [esp+64h+arg_0]
0x4E14FE: xor     eax, eax
0x4E1500: push    eax
0x4E1501: mov     byte ptr [esp+68h+var_4], al
0x4E1505: call    NiNode_AddNiExtraData
0x4E150A: jmp     short loc_4E150F
0x4E150C: mov     [ebx+0Ch], ebp
0x4E150F: mov     ecx, ds:0B33B00h
0x4E1515: call    sub_45A500
0x4E151A: test    al, al
0x4E151C: jnz     short loc_4E155C
0x4E151E: cmp     [esp+64h+arg_0], 0
0x4E1523: jnz     short loc_4E155C
0x4E1525: add     ebp, 44h ; 'D'
0x4E1528: mov     ecx, ebp; this
0x4E152A: call    ExtraDataList_GetTeleport
0x4E152F: test    eax, eax
0x4E1531: jz      short loc_4E155C
0x4E1533: mov     ecx, ebp; this
0x4E1535: call    ExtraDataList_GetTeleport
0x4E153A: mov     ecx, eax
0x4E153C: call    sub_42B460
0x4E1541: test    eax, eax
0x4E1543: jz      short loc_4E155C
0x4E1545: mov     ecx, ebp; this
0x4E1547: call    ExtraDataList_GetTeleport
0x4E154C: push    0
0x4E154E: mov     ecx, eax
0x4E1550: call    sub_42B460
0x4E1555: mov     ecx, eax
0x4E1557: call    sub_4CCA60
0x4E155C: mov     ecx, dword ptr [esp+64h+var_C]
0x4E1560: mov     large fs:0, ecx
0x4E1567: pop     ecx
0x4E1568: pop     edi
0x4E1569: pop     esi
0x4E156A: pop     ebp
0x4E156B: pop     ebx
0x4E156C: add     esp, 50h
0x4E156F: retn    4
