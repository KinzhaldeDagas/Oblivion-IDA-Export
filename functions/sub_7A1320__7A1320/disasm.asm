0x7A1320: push    ecx; Checked insert-one wrapper for vector<st_vector<SFrondGuide>>. Preserves the 0x10-element index across possible reallocation and returns {owner,current}.
0x7A1321: push    ebx
0x7A1322: push    ebp
0x7A1323: mov     ebp, [esp+0Ch+expectedOwner]
0x7A1327: push    esi
0x7A1328: mov     esi, ecx
0x7A132A: mov     ebx, [esi+4]
0x7A132D: test    ebx, ebx
0x7A132F: push    edi
0x7A1330: jz      short loc_7A133E
0x7A1332: mov     eax, [esi+8]
0x7A1335: mov     ecx, eax
0x7A1337: sub     ecx, ebx
0x7A1339: sar     ecx, 4
0x7A133C: jnz     short loc_7A1342
0x7A133E: xor     edi, edi
0x7A1340: jmp     short loc_7A1361
0x7A1342: cmp     ebx, eax
0x7A1344: jbe     short loc_7A134B
0x7A1346: call    __invalid_parameter_noinfo
0x7A134B: test    ebp, ebp
0x7A134D: jz      short loc_7A1353
0x7A134F: cmp     ebp, esi
0x7A1351: jz      short loc_7A1358
0x7A1353: call    __invalid_parameter_noinfo
0x7A1358: mov     edi, [esp+14h+position]
0x7A135C: sub     edi, ebx
0x7A135E: sar     edi, 4
0x7A1361: mov     edx, [esp+14h+value]
0x7A1365: mov     eax, [esp+14h+position]
0x7A1369: push    edx; value
0x7A136A: push    1; count
0x7A136C: push    eax; position
0x7A136D: push    ebp; expectedOwner
0x7A136E: mov     ecx, esi; this
0x7A1370: call    OB_stVector_stVector_SFrondGuide_InsertFill_010201A0; Complete Oblivion insert-fill specialization for vector<st_vector<SFrondGuide>> at CFrondEngine+0x18. Uses an alias-safe deep snapshot, checked max size, 1.5x growth, ownership moves for old levels, deep fill construction, and exception cleanup.
0x7A1375: mov     ebx, [esi+4]
0x7A1378: cmp     ebx, [esi+8]
0x7A137B: jbe     short loc_7A1382
0x7A137D: call    __invalid_parameter_noinfo
0x7A1382: shl     edi, 4
0x7A1385: add     edi, ebx
0x7A1387: cmp     edi, [esi+8]
0x7A138A: mov     [esp+14h+position], ebx
0x7A138E: ja      short loc_7A1395
0x7A1390: cmp     edi, [esi+4]
0x7A1393: jnb     short loc_7A139A
0x7A1395: call    __invalid_parameter_noinfo
0x7A139A: mov     eax, [esp+14h+result]
0x7A139E: mov     [eax+4], edi
0x7A13A1: pop     edi
0x7A13A2: mov     [eax], esi
0x7A13A4: pop     esi
0x7A13A5: pop     ebp
0x7A13A6: pop     ebx
0x7A13A7: pop     ecx
0x7A13A8: retn    10h
