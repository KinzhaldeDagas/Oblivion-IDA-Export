0x5B11A0: push    ebx
0x5B11A1: push    ebp
0x5B11A2: push    esi
0x5B11A3: push    edi
0x5B11A4: push    3F6h
0x5B11A9: mov     esi, ecx
0x5B11AB: call    InterfaceManager_MenuModeHasFocus
0x5B11B0: add     esp, 4
0x5B11B3: test    al, al
0x5B11B5: jnz     short loc_5B11E0
0x5B11B7: lea     edi, [esi+0A0h]
0x5B11BD: mov     ebx, 5
0x5B11C2: mov     ecx, [edi]
0x5B11C4: test    ecx, ecx
0x5B11C6: jz      short loc_5B11D8
0x5B11C8: call    sub_6B7260
0x5B11CD: test    al, al
0x5B11CF: jz      short loc_5B11D8
0x5B11D1: mov     ecx, [edi]
0x5B11D3: call    sub_6B7220
0x5B11D8: add     edi, 28h ; '('
0x5B11DB: sub     ebx, 1
0x5B11DE: jnz     short loc_5B11C2
0x5B11E0: mov     eax, [esi+48h]
0x5B11E3: push    eax
0x5B11E4: call    GetLockLevel
0x5B11E9: mov     eax, ds:0B03E1Ch[eax*4]
0x5B11F0: add     esp, 4
0x5B11F3: test    eax, eax
0x5B11F5: jz      short loc_5B11FB
0x5B11F7: mov     eax, [eax]
0x5B11F9: jmp     short loc_5B11FD
0x5B11FB: xor     eax, eax
0x5B11FD: mov     ecx, [esi+28h]
0x5B1200: push    eax
0x5B1201: push    0FB0h
0x5B1206: call    Tile_SetString
0x5B120B: mov     ecx, ds:0B33398h
0x5B1211: mov     ecx, [ecx+20h]
0x5B1214: push    0Ah
0x5B1216: call    sub_6DA150
0x5B121B: cmp     eax, 2
0x5B121E: jnz     short loc_5B125F
0x5B1220: push    3F6h
0x5B1225: call    InterfaceManager_MenuModeHasFocus
0x5B122A: add     esp, 4
0x5B122D: test    al, al
0x5B122F: jz      short loc_5B125F
0x5B1231: cmp     byte ptr ds:0B3B3F4h, 0
0x5B1238: jz      short loc_5B124D
0x5B123A: push    offset aDrslockopenfai; "DRSLockOpenFail"
0x5B123F: mov     ecx, esi
0x5B1241: call    sub_5AFD50
0x5B1246: mov     byte ptr ds:0B3B3F4h, 0
0x5B124D: push    0FFh
0x5B1252: call    sub_583DF0
0x5B1257: add     esp, 4
0x5B125A: call    sub_5AF960
0x5B125F: mov     edx, [esi+40h]
0x5B1262: mov     [esi+44h], edx
0x5B1265: mov     eax, ds:0B33EA0h
0x5B126A: mov     [esi+40h], eax
0x5B126D: mov     eax, [esi+150h]
0x5B1273: cmp     eax, 4; switch 5 cases
0x5B1276: ja      short def_5B1278; jumptable 005B1278 default case, case 2
0x5B1278: jmp     ds:jpt_5B1278[eax*4]; switch jump
0x5B127F: mov     ecx, esi; jumptable 005B1278 case 1
0x5B1281: call    sub_5B0E70
0x5B1286: mov     ecx, esi
0x5B1288: call    sub_5B03B0
0x5B128D: jmp     short def_5B1278; jumptable 005B1278 default case, case 2
0x5B128F: mov     ecx, esi; jumptable 005B1278 case 4
0x5B1291: call    sub_5B0E70
0x5B1296: mov     ecx, esi
0x5B1298: call    sub_5B0620
0x5B129D: jmp     short def_5B1278; jumptable 005B1278 default case, case 2
0x5B129F: mov     ecx, esi; jumptable 005B1278 case 3
0x5B12A1: call    sub_5B0E70
0x5B12A6: mov     ecx, esi
0x5B12A8: call    sub_5AFA40
0x5B12AD: jmp     short def_5B1278; jumptable 005B1278 default case, case 2
0x5B12AF: push    3F6h; jumptable 005B1278 case 0
0x5B12B4: call    InterfaceManager_MenuModeHasFocus
0x5B12B9: add     esp, 4
0x5B12BC: test    al, al
0x5B12BE: jz      short def_5B1278; jumptable 005B1278 default case, case 2
0x5B12C0: mov     ecx, esi
0x5B12C2: call    sub_5AFA80
0x5B12C7: mov     ecx, esi
0x5B12C9: call    sub_5B0E70
0x5B12CE: push    1; jumptable 005B1278 default case, case 2
0x5B12D0: push    0; canCreate
0x5B12D2: call    InterfaceManager_GetSingleton
0x5B12D7: add     esp, 8
0x5B12DA: mov     ebp, eax
0x5B12DC: mov     bl, 1
0x5B12DE: xor     edi, edi
0x5B12E0: push    edi
0x5B12E1: mov     ecx, ebp
0x5B12E3: call    sub_57CFA0
0x5B12E8: test    eax, eax
0x5B12EA: jz      short loc_5B12FD
0x5B12EC: push    edi
0x5B12ED: mov     ecx, ebp
0x5B12EF: call    sub_57CFA0
0x5B12F4: cmp     eax, 3F6h
0x5B12F9: jz      short loc_5B12FD
0x5B12FB: xor     bl, bl
0x5B12FD: add     edi, 1
0x5B1300: cmp     edi, 0Ah
0x5B1303: jl      short loc_5B12E0
0x5B1305: test    bl, bl
0x5B1307: jnz     short loc_5B1316
0x5B1309: push    0FFh
0x5B130E: call    sub_583DF0
0x5B1313: add     esp, 4
0x5B1316: mov     ebp, [esi+168h]
0x5B131C: cmp     ebp, 0FFFFFFFFh
0x5B131F: jle     short loc_5B139A
0x5B1321: fldz
0x5B1323: fcom    dword ptr [esi+158h]
0x5B1329: fnstsw  ax
0x5B132B: test    ah, 44h
0x5B132E: jp      short loc_5B1398
0x5B1330: fcomp   dword ptr [esi+14Ch]
0x5B1336: fnstsw  ax
0x5B1338: test    ah, 44h
0x5B133B: jp      short loc_5B139A
0x5B133D: mov     edi, [esi+160h]
0x5B1343: cmp     ebp, edi
0x5B1345: jz      short loc_5B139A
0x5B1347: fld     dword ptr [esi+148h]
0x5B134D: call    Double_To_SInt32
0x5B1352: mov     ebx, eax
0x5B1354: push    ebx
0x5B1355: mov     ecx, esi
0x5B1357: call    sub_5AF190
0x5B135C: cmp     edi, eax
0x5B135E: jnz     short loc_5B139A
0x5B1360: cmp     ebp, edi
0x5B1362: jge     short loc_5B1369
0x5B1364: add     edi, 0FFFFFFFFh
0x5B1367: jmp     short loc_5B136C
0x5B1369: add     edi, 1
0x5B136C: push    ebx
0x5B136D: mov     ecx, esi
0x5B136F: mov     [esi+160h], edi
0x5B1375: call    sub_5AF190
0x5B137A: lea     ecx, [eax+eax*4]
0x5B137D: cmp     byte ptr [esi+ecx*8+95h], 0
0x5B1385: jnz     short loc_5B139A
0x5B1387: push    offset aUilockpickscra; "UILockPickScrape"
0x5B138C: mov     ecx, esi
0x5B138E: call    sub_5AFD50
0x5B1393: pop     edi
0x5B1394: pop     esi
0x5B1395: pop     ebp
0x5B1396: pop     ebx
0x5B1397: retn
0x5B1398: fstp    st
0x5B139A: pop     edi
0x5B139B: pop     esi
0x5B139C: pop     ebp
0x5B139D: pop     ebx
0x5B139E: retn
