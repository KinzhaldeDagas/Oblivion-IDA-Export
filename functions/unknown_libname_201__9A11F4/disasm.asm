0x9A11F4: push    ebp
0x9A11F5: mov     ebp, esp
0x9A11F7: sub     esp, 2Ch
0x9A11FA: mov     eax, ___security_cookie
0x9A11FF: xor     eax, ebp
0x9A1201: mov     [ebp+var_4], eax
0x9A1204: mov     eax, [ebp+arg_C]
0x9A1207: push    ebx
0x9A1208: push    esi
0x9A1209: push    edi
0x9A120A: xor     edi, edi
0x9A120C: cmp     dword_BAA87C, edi
0x9A1212: mov     ebx, edx
0x9A1214: mov     esi, ecx
0x9A1216: mov     [ebp+lpMultiByteStr], ebx
0x9A1219: mov     [ebp+var_1C], eax
0x9A121C: jnz     short loc_9A1256
0x9A121E: push    1; cchCount2
0x9A1220: mov     eax, offset SrcStr
0x9A1225: push    eax; lpString2
0x9A1226: push    1; cchCount1
0x9A1228: push    eax; lpString1
0x9A1229: push    edi; dwCmpFlags
0x9A122A: push    edi; Locale
0x9A122B: call    ds:CompareStringW
0x9A1231: test    eax, eax
0x9A1233: jz      short loc_9A1241
0x9A1235: mov     dword_BAA87C, 1
0x9A123F: jmp     short loc_9A1256
0x9A1241: call    ds:GetLastError
0x9A1247: cmp     eax, 78h ; 'x'
0x9A124A: jnz     short loc_9A1256
0x9A124C: mov     dword_BAA87C, 2
0x9A1256: cmp     [ebp+cbMultiByte], edi
0x9A1259: jle     short loc_9A129C
0x9A125B: mov     ecx, [ebp+cbMultiByte]
0x9A125E: mov     eax, ebx
0x9A1260: dec     ecx
0x9A1261: cmp     byte ptr [eax], 0
0x9A1264: jz      short loc_9A126E
0x9A1266: inc     eax
0x9A1267: cmp     ecx, edi
0x9A1269: jnz     short loc_9A1260
0x9A126B: or      ecx, 0FFFFFFFFh
0x9A126E: or      eax, 0FFFFFFFFh
0x9A1271: sub     eax, ecx
0x9A1273: add     [ebp+cbMultiByte], eax
0x9A1276: mov     edx, [ebp+arg_10]
0x9A1279: cmp     edx, edi
0x9A127B: jle     short loc_9A12A9
0x9A127D: mov     eax, [ebp+var_1C]
0x9A1280: mov     ecx, edx
0x9A1282: dec     ecx
0x9A1283: cmp     byte ptr [eax], 0
0x9A1286: jz      short loc_9A1290
0x9A1288: inc     eax
0x9A1289: cmp     ecx, edi
0x9A128B: jnz     short loc_9A1282
0x9A128D: or      ecx, 0FFFFFFFFh
0x9A1290: or      eax, 0FFFFFFFFh
0x9A1293: sub     eax, ecx
0x9A1295: add     edx, eax
0x9A1297: mov     [ebp+arg_10], edx
0x9A129A: jmp     short loc_9A12AE
0x9A129C: cmp     [ebp+cbMultiByte], 0FFFFFFFFh
0x9A12A0: jge     short loc_9A1276
0x9A12A2: xor     eax, eax
0x9A12A4: jmp     loc_9A156B
0x9A12A9: cmp     edx, 0FFFFFFFFh
0x9A12AC: jl      short loc_9A12A2
0x9A12AE: mov     ecx, dword_BAA87C
0x9A12B4: cmp     ecx, 2
0x9A12B7: jz      loc_9A14B6
0x9A12BD: cmp     ecx, edi
0x9A12BF: jz      loc_9A14B6
0x9A12C5: xor     eax, eax
0x9A12C7: inc     eax
0x9A12C8: cmp     ecx, eax
0x9A12CA: jnz     short loc_9A12A2
0x9A12CC: cmp     [ebp+CodePage], edi
0x9A12CF: mov     [ebp+var_28], edi
0x9A12D2: jnz     short loc_9A12DC
0x9A12D4: mov     ecx, [esi]
0x9A12D6: mov     ecx, [ecx+4]
0x9A12D9: mov     [ebp+CodePage], ecx
0x9A12DC: cmp     [ebp+cbMultiByte], edi
0x9A12DF: jz      short loc_9A12E9
0x9A12E1: cmp     edx, edi
0x9A12E3: jnz     loc_9A1383
0x9A12E9: cmp     [ebp+cbMultiByte], edx
0x9A12EC: jnz     short loc_9A12F6
0x9A12EE: push    2
0x9A12F0: pop     eax
0x9A12F1: jmp     loc_9A156B
0x9A12F6: cmp     edx, eax
0x9A12F8: jg      loc_9A156B
0x9A12FE: cmp     [ebp+cbMultiByte], eax
0x9A1301: jle     short loc_9A1307
0x9A1303: push    3
0x9A1305: jmp     short loc_9A12F0
0x9A1307: lea     eax, [ebp+CPInfo]
0x9A130A: push    eax; lpCPInfo
0x9A130B: push    [ebp+CodePage]; CodePage
0x9A130E: call    ds:GetCPInfo
0x9A1314: test    eax, eax
0x9A1316: jz      short loc_9A12A2
0x9A1318: cmp     [ebp+cbMultiByte], edi
0x9A131B: jle     short loc_9A1346
0x9A131D: cmp     [ebp+CPInfo.MaxCharSize], 2
0x9A1321: jb      short loc_9A1303
0x9A1323: cmp     [ebp+CPInfo.LeadByte], 0
0x9A1327: lea     eax, [ebp+CPInfo.LeadByte]
0x9A132A: jz      short loc_9A1303
0x9A132C: mov     dl, [eax+1]
0x9A132F: test    dl, dl
0x9A1331: jz      short loc_9A1303
0x9A1333: mov     cl, [ebx]
0x9A1335: cmp     cl, [eax]
0x9A1337: jb      short loc_9A133D
0x9A1339: cmp     cl, dl
0x9A133B: jbe     short loc_9A12EE
0x9A133D: inc     eax
0x9A133E: inc     eax
0x9A133F: cmp     byte ptr [eax], 0
0x9A1342: jnz     short loc_9A132C
0x9A1344: jmp     short loc_9A1303
0x9A1346: cmp     [ebp+arg_10], edi
0x9A1349: jle     short loc_9A1383
0x9A134B: cmp     [ebp+CPInfo.MaxCharSize], 2
0x9A134F: jnb     short loc_9A1359
0x9A1351: xor     eax, eax
0x9A1353: inc     eax
0x9A1354: jmp     loc_9A156B
0x9A1359: cmp     [ebp+CPInfo.LeadByte], 0
0x9A135D: lea     eax, [ebp+CPInfo.LeadByte]
0x9A1360: jz      short loc_9A1351
0x9A1362: mov     dl, [eax+1]
0x9A1365: test    dl, dl
0x9A1367: jz      short loc_9A1351
0x9A1369: mov     ecx, [ebp+var_1C]
0x9A136C: mov     cl, [ecx]
0x9A136E: cmp     cl, [eax]
0x9A1370: jb      short loc_9A137A
0x9A1372: cmp     cl, dl
0x9A1374: jbe     loc_9A12EE
0x9A137A: inc     eax
0x9A137B: inc     eax
0x9A137C: cmp     byte ptr [eax], 0
0x9A137F: jnz     short loc_9A1362
0x9A1381: jmp     short loc_9A1351
0x9A1383: mov     esi, ds:MultiByteToWideChar
0x9A1389: push    edi; cchWideChar
0x9A138A: push    edi; lpWideCharStr
0x9A138B: push    [ebp+cbMultiByte]; cbMultiByte
0x9A138E: push    ebx; lpMultiByteStr
0x9A138F: push    9; dwFlags
0x9A1391: push    [ebp+CodePage]; CodePage
0x9A1394: call    esi ; MultiByteToWideChar
0x9A1396: mov     ebx, eax
0x9A1398: cmp     ebx, edi
0x9A139A: mov     [ebp+cchCount1], ebx
0x9A139D: jz      loc_9A12A2
0x9A13A3: test    ebx, ebx
0x9A13A5: mov     edi, 400h
0x9A13AA: jle     short loc_9A13EC
0x9A13AC: push    0FFFFFFE0h
0x9A13AE: xor     edx, edx
0x9A13B0: pop     eax
0x9A13B1: div     ebx
0x9A13B3: cmp     eax, 2
0x9A13B6: jb      short loc_9A13EC
0x9A13B8: lea     eax, [ebx+ebx+8]
0x9A13BC: cmp     eax, edi
0x9A13BE: ja      short loc_9A13D3
0x9A13C0: call    __alloca?
0x9A13C5: mov     eax, esp
0x9A13C7: test    eax, eax
0x9A13C9: jz      short loc_9A13E7
0x9A13CB: mov     dword ptr [eax], 0CCCCh
0x9A13D1: jmp     short loc_9A13E4
0x9A13D3: push    eax; Size
0x9A13D4: call    _malloc
0x9A13D9: test    eax, eax
0x9A13DB: pop     ecx
0x9A13DC: jz      short loc_9A13E7
0x9A13DE: mov     dword ptr [eax], 0DDDDh
0x9A13E4: add     eax, 8
0x9A13E7: mov     [ebp+lpWideCharStr], eax
0x9A13EA: jmp     short loc_9A13F0
0x9A13EC: and     [ebp+lpWideCharStr], 0
0x9A13F0: cmp     [ebp+lpWideCharStr], 0
0x9A13F4: jz      loc_9A12A2
0x9A13FA: push    ebx; cchWideChar
0x9A13FB: push    [ebp+lpWideCharStr]; lpWideCharStr
0x9A13FE: push    [ebp+cbMultiByte]; cbMultiByte
0x9A1401: push    [ebp+lpMultiByteStr]; lpMultiByteStr
0x9A1404: push    1; dwFlags
0x9A1406: push    [ebp+CodePage]; CodePage
0x9A1409: call    esi ; MultiByteToWideChar
0x9A140B: test    eax, eax
0x9A140D: jz      unknown_libname_201___unknown_libname_202
0x9A1413: push    0; cchWideChar
0x9A1415: push    0; lpWideCharStr
0x9A1417: push    [ebp+arg_10]; cbMultiByte
0x9A141A: push    [ebp+var_1C]; lpMultiByteStr
0x9A141D: push    9; dwFlags
0x9A141F: push    [ebp+CodePage]; CodePage
0x9A1422: call    esi ; MultiByteToWideChar
0x9A1424: mov     ebx, eax
0x9A1426: test    ebx, ebx
0x9A1428: jz      short unknown_libname_201___unknown_libname_202
0x9A142A: jle     short loc_9A146E
0x9A142C: push    0FFFFFFE0h
0x9A142E: xor     edx, edx
0x9A1430: pop     eax
0x9A1431: div     ebx
0x9A1433: cmp     eax, 2
0x9A1436: jb      short loc_9A146E
0x9A1438: lea     eax, [ebx+ebx+8]
0x9A143C: cmp     eax, edi
0x9A143E: ja      short loc_9A1456
0x9A1440: call    __alloca?
0x9A1445: mov     edi, esp
0x9A1447: test    edi, edi
0x9A1449: jz      short unknown_libname_201___unknown_libname_202
0x9A144B: mov     dword ptr [edi], 0CCCCh
0x9A1451: add     edi, 8
0x9A1454: jmp     short loc_9A1470
0x9A1456: push    eax; Size
0x9A1457: call    _malloc
0x9A145C: test    eax, eax
0x9A145E: pop     ecx
0x9A145F: jz      short loc_9A146A
0x9A1461: mov     dword ptr [eax], 0DDDDh
0x9A1467: add     eax, 8
0x9A146A: mov     edi, eax
0x9A146C: jmp     short loc_9A1470
0x9A146E: xor     edi, edi
0x9A1470: test    edi, edi
0x9A1472: jz      short unknown_libname_201___unknown_libname_202
0x9A1474: push    ebx; cchWideChar
0x9A1475: push    edi; lpWideCharStr
0x9A1476: push    [ebp+arg_10]; cbMultiByte
0x9A1479: push    [ebp+var_1C]; lpMultiByteStr
0x9A147C: push    1; dwFlags
0x9A147E: push    [ebp+CodePage]; CodePage
0x9A1481: call    esi ; MultiByteToWideChar
0x9A1483: test    eax, eax
0x9A1485: jz      short loc_9A149E
0x9A1487: push    ebx; cchCount2
0x9A1488: push    edi; lpString2
0x9A1489: push    [ebp+cchCount1]; cchCount1
0x9A148C: push    [ebp+lpWideCharStr]; lpString1
0x9A148F: push    [ebp+dwCmpFlags]; dwCmpFlags
0x9A1492: push    [ebp+Locale]; Locale
0x9A1495: call    ds:CompareStringW
0x9A149B: mov     [ebp+var_28], eax
0x9A149E: push    edi; Memory
0x9A149F: call    __freea
0x9A14A4: pop     ecx
