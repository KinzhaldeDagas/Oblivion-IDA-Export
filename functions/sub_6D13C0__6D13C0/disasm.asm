0x6D13C0: push    esi
0x6D13C1: mov     esi, ecx
0x6D13C3: cmp     dword ptr [esi+50h], 0
0x6D13C7: jz      loc_6D1470
0x6D13CD: mov     al, [esi+8]
0x6D13D0: shr     al, 5
0x6D13D3: test    al, 1
0x6D13D5: jz      short loc_6D13E6
0x6D13D7: mov     byte ptr [esi+58h], 1
0x6D13DB: fld     dword ptr ds:0A7A164h
0x6D13E1: fstp    dword ptr [esi+28h]
0x6D13E4: jmp     short loc_6D1401
0x6D13E6: fld     [esp+4+arg_0]
0x6D13EA: push    ecx
0x6D13EB: fstp    [esp+8+var_8]; float
0x6D13EE: call    sub_6C36B0
0x6D13F3: test    al, al
0x6D13F5: jz      short loc_6D13FD
0x6D13F7: cmp     byte ptr [esi+5Ah], 0
0x6D13FB: jz      short loc_6D1401
0x6D13FD: mov     byte ptr [esi+58h], 1
0x6D1401: cmp     dword ptr [esi+30h], 0
0x6D1405: jz      short loc_6D1470
0x6D1407: cmp     byte ptr [esi+58h], 0
0x6D140B: jz      short loc_6D1470
0x6D140D: fld     dword ptr [esi+28h]
0x6D1410: push    ecx
0x6D1411: mov     ecx, esi
0x6D1413: fstp    [esp+8+var_8]
0x6D1416: call    sub_6D0B60
0x6D141B: cmp     byte ptr ds:0B3CE19h, 0
0x6D1422: jz      short loc_6D1470
0x6D1424: call    sub_404DD0
0x6D1429: test    al, al
0x6D142B: jz      short loc_6D1470
0x6D142D: mov     ecx, [esi+30h]
0x6D1430: mov     edx, [ecx+0B4h]
0x6D1436: cmp     dword ptr [edx+4], 1
0x6D143A: jnz     short loc_6D1470
0x6D143C: push    edi
0x6D143D: call    sub_6EBF20
0x6D1442: mov     edi, eax
0x6D1444: test    edi, edi
0x6D1446: jz      short loc_6D146F
0x6D1448: mov     eax, [esi+30h]
0x6D144B: push    eax
0x6D144C: push    esi
0x6D144D: mov     ecx, edi
0x6D144F: call    sub_6EBC20
0x6D1454: mov     ecx, ds:0B3F940h
0x6D145A: push    2
0x6D145C: push    edi
0x6D145D: call    sub_6D0660
0x6D1462: test    al, al
0x6D1464: jnz     short loc_6D146F
0x6D1466: mov     edx, [edi]
0x6D1468: mov     eax, [edx+54h]
0x6D146B: mov     ecx, edi
0x6D146D: call    eax
0x6D146F: pop     edi
0x6D1470: pop     esi
0x6D1471: retn    4
