0x4F1630: push    0FFFFFFFFh
0x4F1632: push    offset SEH_798CC0
0x4F1637: mov     eax, large fs:0
0x4F163D: push    eax
0x4F163E: sub     esp, 0Ch
0x4F1641: push    ebx
0x4F1642: push    ebp
0x4F1643: push    esi
0x4F1644: push    edi
0x4F1645: mov     eax, ds:0B30AACh
0x4F164A: xor     eax, esp
0x4F164C: push    eax
0x4F164D: lea     eax, [esp+2Ch+var_C]
0x4F1651: mov     large fs:0, eax
0x4F1657: mov     edi, ecx
0x4F1659: mov     ebx, [esp+2Ch+a2]
0x4F165D: mov     eax, [esp+2Ch+ArgList]
0x4F1661: push    ebx; signed int
0x4F1662: push    eax; signed int
0x4F1663: mov     [esp+34h+var_15], 1
0x4F1668: call    TESWorldSpace__GetCellAtCellCoord
0x4F166D: mov     esi, eax
0x4F166F: test    esi, esi
0x4F1671: mov     ds:0B33AA0h, edi
0x4F1677: jz      short loc_4F1688
0x4F1679: mov     ecx, esi
0x4F167B: call    sub_4C9F80
0x4F1680: test    al, al
0x4F1682: jnz     loc_4F1819
0x4F1688: xor     ecx, ecx
0x4F168A: lea     eax, [edi+10h]
0x4F168D: test    eax, eax
0x4F168F: mov     [esp+2Ch+var_14], ecx
0x4F1693: jz      short loc_4F16A8
0x4F1695: cmp     dword ptr [eax], 0
0x4F1698: jz      short loc_4F169D
0x4F169A: add     ecx, 1
0x4F169D: mov     eax, [eax+4]
0x4F16A0: test    eax, eax
0x4F16A2: jnz     short loc_4F1695
0x4F16A4: mov     [esp+2Ch+var_14], ecx
0x4F16A8: test    ecx, ecx
0x4F16AA: mov     [esp+2Ch+a2], 0
0x4F16B2: jbe     loc_4F17A0
0x4F16B8: mov     ecx, [esp+2Ch+a2]
0x4F16BC: push    ecx; a2
0x4F16BD: mov     ecx, edi; this
0x4F16BF: call    TESForm_GetOverrideFile
0x4F16C4: mov     ecx, eax
0x4F16C6: call    sub_4520F0
0x4F16CB: mov     ebp, eax
0x4F16CD: test    ebp, ebp
0x4F16CF: jz      loc_4F178B
0x4F16D5: mov     ecx, ebp
0x4F16D7: call    TESFile_GetIsMaster
0x4F16DC: test    al, al
0x4F16DE: jz      loc_4F178B
0x4F16E4: mov     edx, [esp+2Ch+ArgList]
0x4F16E8: push    ebx
0x4F16E9: push    edx
0x4F16EA: push    ebp
0x4F16EB: mov     ecx, edi
0x4F16ED: call    TESWorldSpace__FindCellInFile
0x4F16F2: test    al, al
0x4F16F4: jz      loc_4F178B
0x4F16FA: test    esi, esi
0x4F16FC: jnz     short loc_4F177B
0x4F16FE: push    58h ; 'X'; Size
0x4F1700: call    FormHeapAlloc
0x4F1705: add     esp, 4
0x4F1708: mov     [esp+2Ch+var_10], eax
0x4F170C: cmp     eax, esi
0x4F170E: mov     [esp+2Ch+var_4], esi
0x4F1712: jz      short loc_4F171D
0x4F1714: mov     ecx, eax
0x4F1716: call    TESObjectCELL_constr
0x4F171B: mov     esi, eax
0x4F171D: push    0
0x4F171F: mov     ecx, esi
0x4F1721: mov     [esp+30h+var_4], 0FFFFFFFFh
0x4F1729: call    TESObjectCELL__SetIsInterior
0x4F172E: mov     ecx, esi
0x4F1730: call    sub_4CA710
0x4F1735: mov     eax, [esp+2Ch+ArgList]
0x4F1739: push    ebx
0x4F173A: push    eax
0x4F173B: mov     ecx, esi
0x4F173D: call    sub_4C9AC0
0x4F1742: push    esi
0x4F1743: mov     ecx, edi
0x4F1745: call    sub_4EFEF0
0x4F174A: mov     ecx, [esp+2Ch+ArgList]
0x4F174E: mov     eax, [edi+0Ch]
0x4F1751: push    ebx
0x4F1752: push    ecx
0x4F1753: mov     ecx, ds:0B33B00h
0x4F1759: push    eax
0x4F175A: call    sub_459790
0x4F175F: test    eax, eax
0x4F1761: jz      short loc_4F176D
0x4F1763: push    1; a3
0x4F1765: push    eax; a2
0x4F1766: mov     ecx, esi; this
0x4F1768: call    TESForm_SetFormID
0x4F176D: push    ebp
0x4F176E: push    esi
0x4F176F: call    TESDataHandler_LoadForm
0x4F1774: add     esp, 8
0x4F1777: mov     [esp+2Ch+var_15], al
0x4F177B: push    ebp
0x4F177C: mov     ecx, esi
0x4F177E: call    sub_4D1340
0x4F1783: test    al, al
0x4F1785: jnz     short loc_4F178B
0x4F1787: mov     [esp+2Ch+var_15], al
0x4F178B: mov     eax, [esp+2Ch+a2]
0x4F178F: add     eax, 1
0x4F1792: cmp     eax, [esp+2Ch+var_14]
0x4F1796: mov     [esp+2Ch+a2], eax
0x4F179A: jb      loc_4F16B8
0x4F17A0: test    esi, esi
0x4F17A2: jz      short loc_4F17EE
0x4F17A4: push    1
0x4F17A6: mov     ecx, esi
0x4F17A8: call    sub_4C9F90
0x4F17AD: mov     ecx, ds:0B33B00h
0x4F17B3: call    sub_45A500
0x4F17B8: mov     ecx, ds:0B33B00h
0x4F17BE: test    al, al
0x4F17C0: setz    dl
0x4F17C3: mov     byte ptr [esp+2Ch+a2], al
0x4F17C7: push    edx
0x4F17C8: call    sub_45A530
0x4F17CD: mov     eax, [esi]
0x4F17CF: mov     edx, [eax+6Ch]
0x4F17D2: mov     ecx, esi
0x4F17D4: call    edx
0x4F17D6: mov     eax, [esp+2Ch+a2]
0x4F17DA: mov     ecx, ds:0B33B00h
0x4F17E0: push    eax
0x4F17E1: call    sub_45A530
0x4F17E6: push    esi
0x4F17E7: mov     ecx, edi
0x4F17E9: call    sub_4F03F0
0x4F17EE: cmp     [esp+2Ch+var_15], 0
0x4F17F3: jnz     short loc_4F1819
0x4F17F5: mov     eax, [edi+0Ch]
0x4F17F8: mov     edx, [edi]
0x4F17FA: push    eax
0x4F17FB: mov     eax, [edx+0D4h]
0x4F1801: mov     ecx, edi
0x4F1803: call    eax
0x4F1805: mov     ecx, [esp+30h+ArgList]
0x4F1809: push    eax
0x4F180A: push    ebx
0x4F180B: push    ecx; ArgList
0x4F180C: push    offset aFailedToLoadTe; "Failed to load temporary data for cell "...
0x4F1811: call    PrintError
0x4F1816: add     esp, 14h
0x4F1819: mov     eax, esi
0x4F181B: mov     ecx, [esp+2Ch+var_C]
0x4F181F: mov     large fs:0, ecx
0x4F1826: pop     ecx
0x4F1827: pop     edi
0x4F1828: pop     esi
0x4F1829: pop     ebp
0x4F182A: pop     ebx
0x4F182B: add     esp, 18h
0x4F182E: retn    8
