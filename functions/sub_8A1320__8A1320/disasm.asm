0x8A1320: push    ebx
0x8A1321: push    ebp
0x8A1322: push    esi
0x8A1323: push    edi
0x8A1324: mov     edi, ecx
0x8A1326: test    edi, edi
0x8A1328: jz      short loc_8A133C
0x8A132A: mov     ecx, [edi+8]
0x8A132D: test    ecx, ecx
0x8A132F: jz      short loc_8A133C
0x8A1331: mov     eax, [ecx]
0x8A1333: mov     edx, [eax+1Ch]
0x8A1336: call    edx
0x8A1338: mov     ebx, eax
0x8A133A: jmp     short loc_8A133E
0x8A133C: xor     ebx, ebx
0x8A133E: mov     ebp, [esp+10h+arg_0]
0x8A1342: xor     esi, esi
0x8A1344: test    ebx, ebx
0x8A1346: jbe     short loc_8A1377
0x8A1348: test    edi, edi
0x8A134A: jz      short loc_8A1362
0x8A134C: mov     eax, [edi+8]
0x8A134F: test    eax, eax
0x8A1351: jz      short loc_8A1362
0x8A1353: mov     eax, [eax+10h]
0x8A1356: mov     eax, [eax+esi*8]
0x8A1359: test    eax, eax
0x8A135B: jz      short loc_8A1362
0x8A135D: mov     ecx, [eax+8]
0x8A1360: jmp     short loc_8A1364
0x8A1362: xor     ecx, ecx
0x8A1364: test    ecx, ecx
0x8A1366: jz      short loc_8A1370
0x8A1368: mov     edx, [ecx]
0x8A136A: mov     eax, [edx+24h]
0x8A136D: push    ebp
0x8A136E: call    eax
0x8A1370: add     esi, 1
0x8A1373: cmp     esi, ebx
0x8A1375: jb      short loc_8A1348
0x8A1377: push    ebp
0x8A1378: mov     ecx, edi
0x8A137A: call    sub_6EC2C0
0x8A137F: pop     edi
0x8A1380: pop     esi
0x8A1381: pop     ebp
0x8A1382: pop     ebx
0x8A1383: retn    4
