0x8E1310: push    ebx
0x8E1311: mov     ebx, [esp+4+arg_4]
0x8E1315: mov     eax, [ebx+0Ch]
0x8E1318: test    al, 1
0x8E131A: push    esi
0x8E131B: push    edi
0x8E131C: mov     edi, edx
0x8E131E: jnz     short loc_8E135B
0x8E1320: mov     esi, [esp+0Ch+arg_8]
0x8E1324: mov     eax, [esi+8]
0x8E1327: mov     ecx, [esi+4]
0x8E132A: and     eax, 3FFFFFFFh
0x8E132F: cmp     ecx, eax
0x8E1331: jnz     short loc_8E133E
0x8E1333: push    8
0x8E1335: push    esi
0x8E1336: call    sub_8A6EE0
0x8E133B: add     esp, 8
0x8E133E: mov     eax, [esi+4]
0x8E1341: mov     ecx, [esi]
0x8E1343: lea     ecx, [ecx+eax*8]
0x8E1346: inc     eax
0x8E1347: mov     [esi+4], eax
0x8E134A: mov     edx, [edi+0Ch]
0x8E134D: pop     edi
0x8E134E: mov     [ecx], edx
0x8E1350: mov     eax, [ebx+0Ch]
0x8E1353: pop     esi
0x8E1354: mov     [ecx+4], eax
0x8E1357: pop     ebx
0x8E1358: retn    0Ch
0x8E135B: and     eax, 0FFFFFFFEh
0x8E135E: mov     edx, [eax+ecx+8]
0x8E1362: add     eax, ecx
0x8E1364: xor     ecx, ecx
0x8E1366: test    edx, edx
0x8E1368: jle     short loc_8E137E
0x8E136A: mov     esi, [eax+4]
0x8E136D: mov     edi, [esp+0Ch+arg_0]
0x8E1371: cmp     [esi], di
0x8E1374: jz      short loc_8E1381
0x8E1376: inc     ecx
0x8E1377: add     esi, 2
0x8E137A: cmp     ecx, edx
0x8E137C: jl      short loc_8E1371
0x8E137E: or      ecx, 0FFFFFFFFh
0x8E1381: mov     edx, [eax+8]
0x8E1384: dec     edx
0x8E1385: mov     [eax+8], edx
0x8E1388: mov     eax, [eax+4]
0x8E138B: mov     dx, [eax+edx*2]
0x8E138F: pop     edi
0x8E1390: pop     esi
0x8E1391: mov     [eax+ecx*2], dx
0x8E1395: pop     ebx
0x8E1396: retn    0Ch
