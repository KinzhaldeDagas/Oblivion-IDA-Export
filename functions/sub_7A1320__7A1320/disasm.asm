0x7A1320: push    ecx
0x7A1321: push    ebx
0x7A1322: push    ebp
0x7A1323: mov     ebp, [esp+0Ch+arg_4]
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
0x7A1358: mov     edi, [esp+14h+arg_8]
0x7A135C: sub     edi, ebx
0x7A135E: sar     edi, 4
0x7A1361: mov     edx, [esp+14h+arg_C]
0x7A1365: mov     eax, [esp+14h+arg_8]
0x7A1369: push    edx
0x7A136A: push    1
0x7A136C: push    eax
0x7A136D: push    ebp
0x7A136E: mov     ecx, esi
0x7A1370: call    sub_7A1040
