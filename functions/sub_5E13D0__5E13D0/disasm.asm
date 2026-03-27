0x5E13D0: push    esi
0x5E13D1: mov     esi, ecx
0x5E13D3: mov     eax, [esi]
0x5E13D5: mov     edx, [eax+380h]
0x5E13DB: push    edi
0x5E13DC: call    edx
0x5E13DE: test    eax, eax
0x5E13E0: mov     edi, [esp+8+arg_0]
0x5E13E4: jz      short loc_5E1422
0x5E13E6: mov     eax, [esi]
0x5E13E8: mov     edx, [eax+380h]
0x5E13EE: mov     ecx, esi
0x5E13F0: call    edx
0x5E13F2: mov     edx, [eax]
0x5E13F4: mov     ecx, eax
0x5E13F6: mov     eax, [edx+164h]
0x5E13FC: call    eax
0x5E13FE: test    eax, eax
0x5E1400: jz      short loc_5E1422
0x5E1402: mov     edx, [esi]
0x5E1404: mov     eax, [edx+380h]
0x5E140A: mov     ecx, esi
0x5E140C: call    eax
0x5E140E: mov     edx, [eax]
0x5E1410: mov     ecx, eax
0x5E1412: mov     eax, [edx+164h]
0x5E1418: push    edi
0x5E1419: call    eax
0x5E141B: mov     ecx, eax
0x5E141D: call    sub_473200
0x5E1422: mov     ecx, ds:0B333C4h; this
0x5E1428: cmp     esi, ecx
0x5E142A: jnz     short loc_5E1477
0x5E142C: push    1; a2
0x5E142E: call    Player_GetAnimData
0x5E1433: test    eax, eax
0x5E1435: jz      short loc_5E144C
0x5E1437: mov     ecx, ds:0B333C4h; this
0x5E143D: push    edi
0x5E143E: push    1; a2
0x5E1440: call    Player_GetAnimData
0x5E1445: mov     ecx, eax
0x5E1447: call    sub_473200
0x5E144C: mov     ecx, ds:0B333C4h; this
0x5E1452: push    0; a2
0x5E1454: call    Player_GetAnimData
0x5E1459: test    eax, eax
0x5E145B: jz      short loc_5E149B
0x5E145D: mov     ecx, ds:0B333C4h; this
0x5E1463: push    edi
0x5E1464: push    0; a2
0x5E1466: call    Player_GetAnimData
0x5E146B: mov     ecx, eax
0x5E146D: call    sub_473200
0x5E1472: pop     edi
0x5E1473: pop     esi
0x5E1474: retn    4
0x5E1477: mov     edx, [esi]
0x5E1479: mov     eax, [edx+164h]
0x5E147F: mov     ecx, esi
0x5E1481: call    eax
0x5E1483: test    eax, eax
0x5E1485: jz      short loc_5E149B
0x5E1487: mov     edx, [esi]
0x5E1489: mov     eax, [edx+164h]
0x5E148F: push    edi
0x5E1490: mov     ecx, esi
0x5E1492: call    eax
0x5E1494: mov     ecx, eax
0x5E1496: call    sub_473200
0x5E149B: pop     edi
0x5E149C: pop     esi
0x5E149D: retn    4
