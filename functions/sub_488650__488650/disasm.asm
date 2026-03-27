0x488650: sub     esp, 10h
0x488653: push    ebp
0x488654: push    esi
0x488655: mov     esi, ecx
0x488657: mov     ecx, ds:0B33B00h
0x48865D: mov     [esp+18h+var_4], 0
0x488665: mov     ebp, [ecx+14h]
0x488668: push    edi
0x488669: mov     [esp+1Ch+var_C], 0
0x488671: call    sub_45A170
0x488676: test    al, al
0x488678: jz      short loc_4886AD
0x48867A: mov     ecx, ds:0B33B00h
0x488680: push    4; Size
0x488682: lea     eax, [esp+20h+Src]
0x488686: push    eax; Src
0x488687: mov     [esp+24h+Src], 4B4F4C42h
0x48868F: call    SaveLoad_SaveData
0x488694: mov     ecx, ds:0B33B00h
0x48869A: mov     edx, [ecx+14h]
0x48869D: push    2; Size
0x48869F: lea     eax, [esp+20h+var_4]
0x4886A3: push    eax; Src
0x4886A4: mov     [esp+24h+var_C], edx
0x4886A8: call    SaveLoad_SaveData
0x4886AD: mov     ecx, ds:0B33B00h
0x4886B3: push    2; Size
0x4886B5: lea     edx, [esp+20h+var_10]
0x4886B9: mov     [esp+20h+var_10], 0
0x4886C1: mov     edi, [ecx+14h]
0x4886C4: push    edx; Src
0x4886C5: call    SaveLoad_SaveData
0x4886CA: mov     esi, [esi]
0x4886CC: test    esi, esi
0x4886CE: jz      short loc_4886F2
0x4886D0: cmp     dword ptr [esi+4], 0
0x4886D4: jnz     short loc_4886DB
0x4886D6: cmp     dword ptr [esi], 0
0x4886D9: jz      short loc_4886F2
0x4886DB: mov     ecx, [esi]
0x4886DD: test    ecx, ecx
0x4886DF: jz      short loc_4886EB
0x4886E1: call    SaveGame
0x4886E6: add     [esp+1Ch+var_10], 1
0x4886EB: mov     esi, [esi+4]
0x4886EE: test    esi, esi
0x4886F0: jnz     short loc_4886D0
0x4886F2: mov     ax, word ptr [esp+1Ch+var_10]
0x4886F7: mov     [edi], ax
0x4886FA: cmp     byte ptr ds:0B05BACh, 0
0x488701: jz      short loc_48876A
0x488703: mov     eax, ds:0B33B00h
0x488708: mov     edi, [eax+84h]
0x48870E: test    edi, edi
0x488710: mov     esi, [eax+14h]
0x488713: jz      short loc_488750
0x488715: mov     ecx, [edi]
0x488717: push    ecx; a1
0x488718: call    TESForm_LookupByFormID
0x48871D: mov     edx, [edi+5]
0x488720: add     esp, 4
0x488723: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x488728: push    214Dh
0x48872D: push    edx
0x48872E: mov     edx, [eax]
0x488730: mov     ecx, eax
0x488732: mov     eax, [edx+0D4h]
0x488738: call    eax
0x48873A: mov     ecx, [edi]
0x48873C: push    eax
0x48873D: push    ecx
0x48873E: sub     esi, ebp
0x488740: push    esi; ArgList
0x488741: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x488746: call    sub_40FEC0
0x48874B: add     esp, 1Ch
0x48874E: jmp     short loc_48876A
0x488750: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x488755: push    214Dh
0x48875A: sub     esi, ebp
0x48875C: push    esi; ArgList
0x48875D: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x488762: call    sub_40FEC0
0x488767: add     esp, 10h
0x48876A: mov     ecx, ds:0B33B00h
0x488770: call    sub_45A170
0x488775: test    al, al
0x488777: jz      short loc_4887AC
0x488779: mov     edx, ds:0B33B00h
0x48877F: mov     edi, [esp+1Ch+var_C]
0x488783: mov     esi, [edx+14h]
0x488786: lea     eax, [edi+0FFFFh]
0x48878C: cmp     esi, eax
0x48878E: jbe     short loc_4887A7
0x488790: push    214Dh
0x488795: push    offset a__TesSharedInv; "..\\TES Shared\\InventoryChanges.cpp"
0x48879A: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x48879F: call    PrintError
0x4887A4: add     esp, 0Ch
0x4887A7: sub     esi, edi
0x4887A9: mov     [edi], si
0x4887AC: pop     edi
0x4887AD: pop     esi
0x4887AE: pop     ebp
0x4887AF: add     esp, 10h
0x4887B2: retn
