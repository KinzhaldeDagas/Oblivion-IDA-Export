0x65A7F0: push    esi
0x65A7F1: push    edi
0x65A7F2: mov     edi, [esp+8+arg_0]
0x65A7F6: test    edi, 8000000h
0x65A7FC: mov     esi, ecx
0x65A7FE: jz      short loc_65A81C
0x65A800: call    UnequipWeapon
0x65A805: mov     ecx, esi
0x65A807: call    sub_4DCCF0
0x65A80C: push    0
0x65A80E: mov     ecx, esi
0x65A810: call    sub_4DC8F0
0x65A815: mov     ecx, esi
0x65A817: call    UnequipLight
0x65A81C: push    edi
0x65A81D: mov     ecx, esi
0x65A81F: call    TESObjectREFR_PreLoadModifiedForm
0x65A824: mov     ecx, [esi+58h]
0x65A827: test    ecx, ecx
0x65A829: jz      short loc_65A837
0x65A82B: mov     eax, [ecx]
0x65A82D: mov     edx, [eax+404h]
0x65A833: push    esi
0x65A834: push    edi
0x65A835: call    edx
0x65A837: mov     ecx, ds:0B33B00h
0x65A83D: mov     eax, [ecx+44h]
0x65A840: cmp     eax, 60000000h
0x65A845: jz      short loc_65A84E
0x65A847: cmp     eax, 7FFFF000h
0x65A84C: jnz     short loc_65A89C
0x65A84E: mov     eax, [ecx+18h]
0x65A851: shr     eax, 6
0x65A854: test    al, 1
0x65A856: jz      short loc_65A89C
0x65A858: mov     ecx, [esi+58h]
0x65A85B: test    ecx, ecx
0x65A85D: jz      short loc_65A89C
0x65A85F: mov     eax, [esi+8]
0x65A862: mov     edx, eax
0x65A864: shr     edx, 0Bh
0x65A867: test    dl, 1
0x65A86A: jnz     short loc_65A873
0x65A86C: shr     eax, 5
0x65A86F: test    al, 1
0x65A871: jz      short loc_65A89C
0x65A873: mov     eax, [ecx]
0x65A875: mov     edx, [eax+8]
0x65A878: call    edx
0x65A87A: push    eax
0x65A87B: push    esi
0x65A87C: mov     ecx, offset ActorProcessManager_ptr
0x65A881: call    sub_674550
0x65A886: mov     ecx, [esi+58h]
0x65A889: test    ecx, ecx
0x65A88B: jz      short loc_65A895
0x65A88D: mov     eax, [ecx]
0x65A88F: mov     edx, [eax]
0x65A891: push    1
0x65A893: call    edx
0x65A895: mov     dword ptr [esi+58h], 0
0x65A89C: pop     edi
0x65A89D: pop     esi
0x65A89E: retn    4
