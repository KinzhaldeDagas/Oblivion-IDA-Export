0x4F1240: push    ecx
0x4F1241: mov     eax, [esp+4+a2]
0x4F1245: push    ebx
0x4F1246: push    ebp
0x4F1247: mov     ebp, [esp+0Ch+cloneMap]
0x4F124B: push    esi
0x4F124C: push    edi
0x4F124D: push    0; int
0x4F124F: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x4F1254: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F1259: push    0; int
0x4F125B: push    ebp; cloneMap
0x4F125C: push    eax; a2
0x4F125D: mov     ebx, ecx
0x4F125F: call    TESForm_Clone
0x4F1264: push    eax; void *
0x4F1265: call    OblivionDynamicCast
0x4F126A: mov     edi, eax
0x4F126C: mov     ecx, [edi+30h]
0x4F126F: add     esp, 14h
0x4F1272: call    NiTMap_Clear
0x4F1277: mov     edx, [ebx+30h]
0x4F127A: mov     ecx, [edx+4]
0x4F127D: xor     eax, eax
0x4F127F: test    ecx, ecx
0x4F1281: jbe     short loc_4F12A3
0x4F1283: mov     edx, [edx+8]
0x4F1286: mov     esi, edx
0x4F1288: jmp     short loc_4F1290
0x4F128A: align 10h
0x4F1290: cmp     dword ptr [esi], 0
0x4F1293: jnz     loc_4F13C1
0x4F1299: add     eax, 1
0x4F129C: add     esi, 4
0x4F129F: cmp     eax, ecx
0x4F12A1: jb      short loc_4F1290
0x4F12A3: xor     eax, eax
0x4F12A5: test    eax, eax
0x4F12A7: mov     [esp+14h+a2], eax
0x4F12AB: jz      short loc_4F131B
0x4F12AD: lea     ecx, [ecx+0]
0x4F12B0: lea     ecx, [esp+14h+cloneMap]
0x4F12B4: push    ecx
0x4F12B5: mov     ecx, [ebx+30h]
0x4F12B8: lea     edx, [esp+18h+var_4]
0x4F12BC: push    edx
0x4F12BD: lea     eax, [esp+1Ch+a2]
0x4F12C1: push    eax
0x4F12C2: mov     [esp+20h+cloneMap], 0
0x4F12CA: call    sub_452600
0x4F12CF: mov     ecx, [esp+14h+cloneMap]
0x4F12D3: test    ecx, ecx
0x4F12D5: jz      short loc_4F1314
0x4F12D7: mov     edx, [ecx]
0x4F12D9: mov     eax, [edx+38h]
0x4F12DC: push    0; int
0x4F12DE: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x4F12E3: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F12E8: push    0; int
0x4F12EA: push    ebp
0x4F12EB: push    0
0x4F12ED: call    eax
0x4F12EF: push    eax; void *
0x4F12F0: call    OblivionDynamicCast
0x4F12F5: mov     esi, eax
0x4F12F7: add     esp, 14h
0x4F12FA: test    esi, esi
0x4F12FC: jz      short loc_4F1314
0x4F12FE: mov     edx, [esi]
0x4F1300: mov     eax, [edx+90h]
0x4F1306: push    1
0x4F1308: mov     ecx, esi
0x4F130A: call    eax
0x4F130C: push    esi
0x4F130D: mov     ecx, edi
0x4F130F: call    sub_4EFEF0
0x4F1314: cmp     [esp+14h+a2], 0
0x4F1319: jnz     short loc_4F12B0
0x4F131B: mov     ecx, [ebx+34h]
0x4F131E: test    ecx, ecx
0x4F1320: jz      short loc_4F1358
0x4F1322: mov     edx, [ecx]
0x4F1324: mov     eax, [edx+38h]
0x4F1327: push    0; int
0x4F1329: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x4F132E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F1333: push    0; int
0x4F1335: push    ebp
0x4F1336: push    0
0x4F1338: call    eax
0x4F133A: push    eax; void *
0x4F133B: call    OblivionDynamicCast
0x4F1340: add     esp, 14h
0x4F1343: test    eax, eax
0x4F1345: jz      short loc_4F1358
0x4F1347: mov     [edi+34h], eax
0x4F134A: mov     edx, [eax]
0x4F134C: mov     ecx, eax
0x4F134E: mov     eax, [edx+90h]
0x4F1354: push    1
0x4F1356: call    eax
0x4F1358: mov     ecx, [edi+34h]
0x4F135B: test    ecx, ecx
0x4F135D: jz      short loc_4F1365
0x4F135F: push    edi
0x4F1360: call    sub_4D3A00
0x4F1365: mov     ecx, [ebx+54h]
0x4F1368: test    ecx, ecx
0x4F136A: jz      short loc_4F13B7
0x4F136C: mov     edx, [ecx]
0x4F136E: mov     eax, [edx+38h]
0x4F1371: push    0; int
0x4F1373: push    offset ??_R0?AVTESRoad@@@8; struct TypeDescriptor *
0x4F1378: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4F137D: push    0; int
0x4F137F: push    ebp
0x4F1380: push    0
0x4F1382: call    eax
0x4F1384: push    eax; void *
0x4F1385: call    OblivionDynamicCast
0x4F138A: mov     esi, eax
0x4F138C: add     esp, 14h
0x4F138F: test    esi, esi
0x4F1391: jz      short loc_4F13B7
0x4F1393: mov     ecx, [edi+54h]
0x4F1396: test    ecx, ecx
0x4F1398: jz      short loc_4F13A3
0x4F139A: mov     edx, [ecx]
0x4F139C: mov     eax, [edx+10h]
0x4F139F: push    1
0x4F13A1: call    eax
0x4F13A3: mov     [edi+54h], esi
0x4F13A6: mov     edx, [esi]
0x4F13A8: mov     eax, [edx+90h]
0x4F13AE: push    1
0x4F13B0: mov     ecx, esi
0x4F13B2: mov     [esi+2Ch], edi
0x4F13B5: call    eax
0x4F13B7: mov     eax, edi
0x4F13B9: pop     edi
0x4F13BA: pop     esi
0x4F13BB: pop     ebp
0x4F13BC: pop     ebx
0x4F13BD: pop     ecx
0x4F13BE: retn    8
0x4F13C1: mov     eax, [edx+eax*4]
0x4F13C4: jmp     loc_4F12A5
