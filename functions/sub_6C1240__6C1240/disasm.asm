0x6C1240: push    esi
0x6C1241: mov     esi, [esp+4+arg_4]
0x6C1245: push    edi
0x6C1246: mov     edi, [esp+8+arg_0]
0x6C124A: push    esi
0x6C124B: push    edi
0x6C124C: call    sub_6BD530
0x6C1251: mov     eax, [edi+220h]
0x6C1257: push    1
0x6C1259: lea     ecx, [esp+14h+arg_4]
0x6C125D: push    ecx
0x6C125E: push    4
0x6C1260: lea     edx, [esi+14h]
0x6C1263: push    edx
0x6C1264: push    eax
0x6C1265: mov     eax, [eax+8]
0x6C1268: mov     [esp+24h+arg_4], 4
0x6C1270: call    eax
0x6C1272: mov     eax, [edi+220h]
0x6C1278: push    1
0x6C127A: lea     ecx, [esp+28h+arg_4]
0x6C127E: push    ecx
0x6C127F: push    4
0x6C1281: lea     edx, [esi+18h]
0x6C1284: push    edx
0x6C1285: push    eax
0x6C1286: mov     eax, [eax+8]
0x6C1289: mov     [esp+38h+arg_4], 4
0x6C1291: call    eax
0x6C1293: mov     edi, [edi+220h]
0x6C1299: mov     edx, [edi+8]
0x6C129C: push    1
0x6C129E: lea     ecx, [esp+3Ch+arg_4]
0x6C12A2: push    ecx
0x6C12A3: push    4
0x6C12A5: add     esi, 1Ch
0x6C12A8: push    esi
0x6C12A9: push    edi
0x6C12AA: mov     [esp+4Ch+arg_4], 4
0x6C12B2: call    edx
0x6C12B4: add     esp, 44h
0x6C12B7: pop     edi
0x6C12B8: pop     esi
0x6C12B9: retn
