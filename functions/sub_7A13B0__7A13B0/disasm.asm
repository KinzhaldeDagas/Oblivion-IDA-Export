0x7A13B0: push    0FFFFFFFFh
0x7A13B2: push    offset SEH_7A13B0
0x7A13B7: mov     eax, large fs:0
0x7A13BD: push    eax
0x7A13BE: sub     esp, 28h
0x7A13C1: push    ebx
0x7A13C2: push    esi
0x7A13C3: push    edi
0x7A13C4: mov     eax, ds:0B30AACh
0x7A13C9: xor     eax, esp
0x7A13CB: push    eax
0x7A13CC: lea     eax, [esp+44h+var_C]
0x7A13D0: mov     large fs:0, eax
0x7A13D6: mov     esi, ecx
0x7A13D8: mov     [esp+44h+var_30], esi
0x7A13DC: xor     ebx, ebx
0x7A13DE: mov     [esp+44h+var_34], ebx
0x7A13E2: mov     [esi], ebx
0x7A13E4: mov     [esi+4], ebx
0x7A13E7: mov     [esi+0Ch], ebx
0x7A13EA: mov     [esi+10h], ebx
0x7A13ED: mov     [esi+14h], ebx
0x7A13F0: mov     [esp+44h+var_4], ebx
0x7A13F4: mov     [esi+1Ch], ebx
0x7A13F7: mov     [esi+20h], ebx
0x7A13FA: mov     [esi+24h], ebx
0x7A13FD: mov     dword ptr [esi+28h], 1
0x7A1404: mov     eax, 2
0x7A1409: mov     [esi+2Ch], eax
0x7A140C: mov     ecx, 4
0x7A1411: mov     [esi+34h], ecx
0x7A1414: mov     dword ptr [esi+38h], 1
0x7A141B: mov     [esi+3Ch], bl
0x7A141E: mov     [esi+44h], ebx
0x7A1421: mov     [esi+48h], ebx
0x7A1424: mov     [esi+4Ch], ebx
0x7A1427: fld1
0x7A1429: fstp    dword ptr [esi+54h]
0x7A142C: push    5Ch ; '\'; Size
0x7A142E: fldz
0x7A1430: mov     byte ptr [esp+48h+var_4], al
0x7A1434: fst     dword ptr [esi+58h]
0x7A1437: mov     [esi+50h], ecx
0x7A143A: fstp    dword ptr [esi+5Ch]
0x7A143D: mov     [esi+64h], eax
0x7A1440: fld     dword ptr ds:0A43328h
0x7A1446: mov     dword ptr [esi+68h], 1
0x7A144D: fstp    dword ptr [esi+60h]
0x7A1450: call    FormHeapAlloc
0x7A1455: mov     edi, eax
0x7A1457: add     esp, 4
0x7A145A: mov     [esp+44h+var_2C], edi
0x7A145E: cmp     edi, ebx
0x7A1460: mov     byte ptr [esp+44h+var_4], 3
0x7A1465: jz      short loc_7A14A6
0x7A1467: push    99h ; '™'; MaxCount
0x7A146C: push    offset aBezierspline0_; "BezierSpline 0.0 1.0 0.0 { 3 0 0.001388"...
0x7A1471: lea     ecx, [esp+4Ch+var_28]
0x7A1475: mov     [esp+4Ch+var_10], 0Fh
0x7A147D: mov     [esp+4Ch+var_14], ebx
0x7A1481: mov     byte ptr [esp+4Ch+var_24], bl
0x7A1485: call    sub_414500
0x7A148A: lea     eax, [esp+44h+var_28]
0x7A148E: mov     ebx, 1
0x7A1493: push    eax
0x7A1494: mov     ecx, edi
0x7A1496: mov     byte ptr [esp+48h+var_4], 4
0x7A149B: mov     [esp+48h+var_34], ebx
0x7A149F: call    sub_786D60
0x7A14A4: jmp     short loc_7A14A8
0x7A14A6: xor     eax, eax
0x7A14A8: test    bl, 1
0x7A14AB: mov     [esi+30h], eax
0x7A14AE: jz      short loc_7A14C4
0x7A14B0: cmp     [esp+44h+var_10], 10h
0x7A14B5: jb      short loc_7A14C4
0x7A14B7: mov     ecx, [esp+44h+var_24]
0x7A14BB: push    ecx
0x7A14BC: call    FormHeapFree
0x7A14C1: add     esp, 4
0x7A14C4: mov     eax, esi
0x7A14C6: mov     ecx, [esp+44h+var_C]
0x7A14CA: mov     large fs:0, ecx
0x7A14D1: pop     ecx
0x7A14D2: pop     edi
0x7A14D3: pop     esi
0x7A14D4: pop     ebx
0x7A14D5: add     esp, 34h
0x7A14D8: retn
