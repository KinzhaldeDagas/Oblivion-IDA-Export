0x5E6830: push    esi
0x5E6831: mov     esi, ecx
0x5E6833: mov     ecx, ds:0B33B00h
0x5E6839: call    sub_45A500
0x5E683E: test    al, al
0x5E6840: jnz     short loc_5E6896
0x5E6842: mov     ecx, [esi+58h]
0x5E6845: test    ecx, ecx
0x5E6847: jz      short loc_5E6896
0x5E6849: mov     eax, [ecx]
0x5E684B: mov     edx, [eax+4CCh]
0x5E6851: call    edx
0x5E6853: test    eax, eax
0x5E6855: jnz     short loc_5E6898
0x5E6857: cmp     [esi+58h], eax
0x5E685A: jz      short loc_5E6896
0x5E685C: mov     ecx, [esi+58h]
0x5E685F: mov     eax, [ecx]
0x5E6861: mov     edx, [eax+184h]
0x5E6867: call    edx
0x5E6869: test    eax, eax
0x5E686B: jz      short loc_5E6896
0x5E686D: cmp     esi, ds:0B333C4h
0x5E6873: jz      short loc_5E6896
0x5E6875: mov     ecx, esi
0x5E6877: call    sub_5E2E00
0x5E687C: test    eax, eax
0x5E687E: jz      short loc_5E6896
0x5E6880: push    0
0x5E6882: push    esi
0x5E6883: mov     ecx, eax
0x5E6885: call    TesObjectREF_GetDistance
0x5E688A: fstp    st
0x5E688C: mov     ecx, offset unk_B36AC0
0x5E6891: call    GameSetting_GetSafeFloatPointer
0x5E6896: xor     eax, eax
0x5E6898: pop     esi
0x5E6899: retn
