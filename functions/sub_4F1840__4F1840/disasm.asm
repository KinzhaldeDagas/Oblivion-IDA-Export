0x4F1840: push    esi
0x4F1841: mov     esi, [esp+4+arg_0]
0x4F1845: test    esi, esi
0x4F1847: push    edi
0x4F1848: mov     edi, ecx
0x4F184A: jz      short loc_4F18A1
0x4F184C: mov     ecx, esi; this
0x4F184E: call    TESObjectCELL_GetWorldSpace
0x4F1853: cmp     eax, edi
0x4F1855: jnz     short loc_4F18A1
0x4F1857: push    0FFFFFFFFh; a2
0x4F1859: mov     ecx, esi; this
0x4F185B: call    TESForm_GetOverrideFile
0x4F1860: test    eax, eax
0x4F1862: jz      short loc_4F187B
0x4F1864: mov     ecx, eax
0x4F1866: call    TESFile_GetIsMaster
0x4F186B: test    al, al
0x4F186D: jnz     short loc_4F187B
0x4F186F: mov     ecx, esi
0x4F1871: call    sub_4D1570
0x4F1876: pop     edi
0x4F1877: pop     esi
0x4F1878: retn    4
0x4F187B: mov     ecx, esi
0x4F187D: call    sub_4D1570
0x4F1882: mov     ecx, ds:0B33B00h
0x4F1888: push    esi
0x4F1889: call    sub_463A90
0x4F188E: push    esi
0x4F188F: mov     ecx, edi
0x4F1891: call    TESWorldSpace_RemoveCellFromCellMap
0x4F1896: mov     eax, [esi]
0x4F1898: mov     edx, [eax+10h]
0x4F189B: push    1
0x4F189D: mov     ecx, esi
0x4F189F: call    edx
0x4F18A1: pop     edi
0x4F18A2: pop     esi
0x4F18A3: retn    4
