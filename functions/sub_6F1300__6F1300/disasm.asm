0x6F1300: mov     ecx, [esp+arg_4]
0x6F1304: mov     edx, [esp+arg_8]
0x6F1308: push    esi
0x6F1309: mov     esi, [esp+4+arg_0]
0x6F130D: mov     eax, ecx
0x6F130F: sub     eax, esi
0x6F1311: sar     eax, 4
0x6F1314: shl     eax, 4
0x6F1317: push    edi
0x6F1318: mov     edi, eax
0x6F131A: mov     eax, edx
0x6F131C: sub     eax, edi
0x6F131E: cmp     esi, ecx
0x6F1320: jz      short loc_6F1346
0x6F1322: sub     edx, ecx
0x6F1324: mov     edi, [ecx-10h]
0x6F1327: sub     ecx, 10h
0x6F132A: cmp     ecx, esi
0x6F132C: mov     [edx+ecx], edi
0x6F132F: mov     edi, [ecx+4]
0x6F1332: mov     [edx+ecx+4], edi
0x6F1336: mov     edi, [ecx+8]
0x6F1339: mov     [edx+ecx+8], edi
0x6F133D: mov     edi, [ecx+0Ch]
0x6F1340: mov     [edx+ecx+0Ch], edi
0x6F1344: jnz     short loc_6F1324
0x6F1346: pop     edi
0x6F1347: pop     esi
0x6F1348: retn
