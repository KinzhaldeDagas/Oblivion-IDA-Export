0x7B13A0: push    0FFFFFFFFh
0x7B13A2: push    offset SEH_803C90
0x7B13A7: mov     eax, large fs:0
0x7B13AD: push    eax
0x7B13AE: push    ecx
0x7B13AF: push    esi
0x7B13B0: push    edi
0x7B13B1: mov     eax, ds:0B30AACh
0x7B13B6: xor     eax, esp
0x7B13B8: push    eax
0x7B13B9: lea     eax, [esp+1Ch+var_C]
0x7B13BD: mov     large fs:0, eax
0x7B13C3: mov     edi, ecx
0x7B13C5: cmp     dword ptr [edi+30h], 0
0x7B13C9: lea     esi, [edi+30h]
0x7B13CC: jnz     short loc_7B1432
0x7B13CE: push    34h ; '4'; Size
0x7B13D0: call    FormHeapAlloc
0x7B13D5: add     esp, 4
0x7B13D8: mov     [esp+1Ch+var_10], eax
0x7B13DC: test    eax, eax
0x7B13DE: mov     [esp+1Ch+var_4], 0
0x7B13E6: jz      short loc_7B13F5
0x7B13E8: mov     ecx, [edi+14h]
0x7B13EB: push    ecx
0x7B13EC: mov     ecx, eax
0x7B13EE: call    NiD3DShaderCostantMapVertex__Construct
0x7B13F3: jmp     short loc_7B13F7
0x7B13F5: xor     eax, eax
0x7B13F7: push    eax; a2
0x7B13F8: mov     ecx, esi; this
0x7B13FA: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7B1402: call    NiSmartPointer_Set??
0x7B1407: mov     ecx, [esi]
0x7B1409: mov     edx, [ecx]
0x7B140B: mov     edx, [edx+18h]
0x7B140E: push    0
0x7B1410: lea     eax, [edi+0A0h]
0x7B1416: push    eax
0x7B1417: push    4
0x7B1419: push    10h
0x7B141B: push    offset EmptyString
0x7B1420: push    1
0x7B1422: push    6
0x7B1424: push    0
0x7B1426: push    10000007h
0x7B142B: push    offset aTexratio0; "texRatio0"
0x7B1430: call    edx
0x7B1432: cmp     dword ptr [edi+2Ch], 0
0x7B1436: lea     esi, [edi+2Ch]
0x7B1439: jnz     short loc_7B149D
0x7B143B: push    34h ; '4'; Size
0x7B143D: call    FormHeapAlloc
0x7B1442: add     esp, 4
0x7B1445: mov     [esp+1Ch+var_10], eax
0x7B1449: test    eax, eax
0x7B144B: mov     [esp+1Ch+var_4], 1
0x7B1453: jz      short loc_7B1462
0x7B1455: mov     ecx, [edi+14h]
0x7B1458: push    ecx
0x7B1459: mov     ecx, eax
0x7B145B: call    NiD3DShaderCostantMapPixel__Construct
0x7B1460: jmp     short loc_7B1464
0x7B1462: xor     eax, eax
0x7B1464: push    eax; a2
0x7B1465: mov     ecx, esi; this
0x7B1467: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7B146F: call    NiSmartPointer_Set??
0x7B1474: mov     ecx, [esi]
0x7B1476: mov     edx, [ecx]
0x7B1478: mov     eax, [edx+18h]
0x7B147B: push    0
0x7B147D: push    offset flt_B42D50
0x7B1482: push    4
0x7B1484: push    4
0x7B1486: push    offset EmptyString
0x7B148B: push    1
0x7B148D: push    1
0x7B148F: push    0
0x7B1491: push    10000004h
0x7B1496: push    offset aBlendValue; "Blend Value"
0x7B149B: call    eax
0x7B149D: mov     ecx, [esp+1Ch+a2]
0x7B14A1: push    ecx; a2
0x7B14A2: mov     ecx, edi; this
0x7B14A4: call    sub_77AA60
0x7B14A9: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7B14AD: mov     large fs:0, ecx
0x7B14B4: pop     ecx
0x7B14B5: pop     edi
0x7B14B6: pop     esi
0x7B14B7: add     esp, 10h
0x7B14BA: retn    4
