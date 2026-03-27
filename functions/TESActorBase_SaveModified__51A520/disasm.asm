0x51A520: sub     esp, 0Ch
0x51A523: push    ebp
0x51A524: push    esi
0x51A525: push    edi
0x51A526: mov     esi, ecx
0x51A528: mov     ecx, ds:0B33B00h
0x51A52E: xor     edi, edi
0x51A530: mov     [esp+18h+var_4], edi
0x51A534: mov     ebp, [ecx+14h]
0x51A537: mov     [esp+18h+var_C], edi
0x51A53B: call    sub_45A170
0x51A540: test    al, al
0x51A542: jz      short loc_51A577
0x51A544: mov     ecx, ds:0B33B00h
0x51A54A: push    4; Size
0x51A54C: lea     eax, [esp+1Ch+Src]
0x51A550: push    eax; Src
0x51A551: mov     [esp+20h+Src], 4B4F4C42h
0x51A559: call    SaveLoad_SaveData
0x51A55E: mov     ecx, ds:0B33B00h
0x51A564: mov     edx, [ecx+14h]
0x51A567: push    2; Size
0x51A569: lea     eax, [esp+1Ch+var_4]
0x51A56D: push    eax; Src
0x51A56E: mov     [esp+20h+var_C], edx
0x51A572: call    SaveLoad_SaveData
0x51A577: mov     ecx, ds:0B33B00h
0x51A57D: cmp     byte ptr [ecx+7Ch], 6Dh ; 'm'
0x51A581: push    ebx
0x51A582: mov     ebx, dword ptr [esp+1Ch+a2]
0x51A586: jb      short loc_51A590
0x51A588: push    ebx; a2
0x51A589: mov     ecx, esi; this
0x51A58B: call    TESForm_SaveModifiedForm
0x51A590: push    ebx
0x51A591: lea     ecx, [esi+88h]
0x51A597: call    TESAttributes_SaveModified
0x51A59C: push    ebx
0x51A59D: lea     ecx, [esi+24h]
0x51A5A0: call    TESActorBaseData_SaveModifiedComponent
0x51A5A5: push    ebx
0x51A5A6: lea     ecx, [esi+54h]
0x51A5A9: call    TESSpellList_SaveModifiedComponent
0x51A5AE: push    ebx
0x51A5AF: lea     ecx, [esi+68h]
0x51A5B2: call    TESAIForm_SaveModifiedComponent
0x51A5B7: test    bl, 4
0x51A5BA: jz      short loc_51A5D4
0x51A5BC: mov     edx, [esi+84h]
0x51A5C2: push    4; a2
0x51A5C4: lea     eax, [esp+20h+a2]
0x51A5C8: push    eax; a1
0x51A5C9: mov     ecx, esi
0x51A5CB: mov     dword ptr [esp+24h+a2], edx
0x51A5CF: call    TESForm_SaveDataToCurrentSaveGame
0x51A5D4: test    ebx, 10000000h
0x51A5DA: jz      short loc_51A5E7
0x51A5DC: lea     ecx, [esi+0D0h]
0x51A5E2: call    AVCollection_Save
0x51A5E7: test    bl, bl
0x51A5E9: pop     ebx
0x51A5EA: jns     short loc_51A633
0x51A5EC: mov     eax, [esi+0A4h]
0x51A5F2: cmp     eax, edi
0x51A5F4: mov     edi, eax
0x51A5F6: jnz     short loc_51A5FD
0x51A5F8: mov     edi, offset EmptyString
0x51A5FD: mov     eax, edi
0x51A5FF: lea     edx, [eax+1]
0x51A602: mov     cl, [eax]
0x51A604: add     eax, 1
0x51A607: test    cl, cl
0x51A609: jnz     short loc_51A602
0x51A60B: push    1; a2
0x51A60D: lea     ecx, [esp+1Ch+a2]
0x51A611: sub     eax, edx
0x51A613: push    ecx; a1
0x51A614: mov     ecx, esi
0x51A616: mov     [esp+20h+a2], al
0x51A61A: call    TESForm_SaveDataToCurrentSaveGame
0x51A61F: mov     al, [esp+18h+a2]
0x51A623: test    al, al
0x51A625: jz      short loc_51A633
0x51A627: movzx   edx, al
0x51A62A: push    edx; a2
0x51A62B: push    edi; a1
0x51A62C: mov     ecx, esi
0x51A62E: call    TESForm_SaveDataToCurrentSaveGame
0x51A633: cmp     byte ptr ds:0B05BACh, 0
0x51A63A: jz      short loc_51A6A3
0x51A63C: mov     eax, ds:0B33B00h
0x51A641: mov     edi, [eax+84h]
0x51A647: test    edi, edi
0x51A649: mov     esi, [eax+14h]
0x51A64C: jz      short loc_51A689
0x51A64E: mov     eax, [edi]
0x51A650: push    eax; a1
0x51A651: call    TESForm_LookupByFormID
0x51A656: mov     ecx, [edi+5]
0x51A659: mov     edx, [eax]
0x51A65B: add     esp, 4
0x51A65E: push    offset a__TesSharedT_8; "..\\TES Shared\\TESActorBase.cpp"
0x51A663: push    231h
0x51A668: push    ecx
0x51A669: mov     ecx, eax
0x51A66B: mov     eax, [edx+0D4h]
0x51A671: call    eax
0x51A673: mov     ecx, [edi]
0x51A675: push    eax
0x51A676: push    ecx
0x51A677: sub     esi, ebp
0x51A679: push    esi; ArgList
0x51A67A: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x51A67F: call    sub_40FEC0
0x51A684: add     esp, 1Ch
0x51A687: jmp     short loc_51A6A3
0x51A689: push    offset a__TesSharedT_8; "..\\TES Shared\\TESActorBase.cpp"
0x51A68E: push    231h
0x51A693: sub     esi, ebp
0x51A695: push    esi; ArgList
0x51A696: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x51A69B: call    sub_40FEC0
0x51A6A0: add     esp, 10h
0x51A6A3: mov     ecx, ds:0B33B00h
0x51A6A9: call    sub_45A170
0x51A6AE: test    al, al
0x51A6B0: jz      short loc_51A6E5
0x51A6B2: mov     edx, ds:0B33B00h
0x51A6B8: mov     edi, [esp+18h+var_C]
0x51A6BC: mov     esi, [edx+14h]
0x51A6BF: lea     eax, [edi+0FFFFh]
0x51A6C5: cmp     esi, eax
0x51A6C7: jbe     short loc_51A6E0
0x51A6C9: push    231h
0x51A6CE: push    offset a__TesSharedT_8; "..\\TES Shared\\TESActorBase.cpp"
0x51A6D3: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x51A6D8: call    PrintError
0x51A6DD: add     esp, 0Ch
0x51A6E0: sub     esi, edi
0x51A6E2: mov     [edi], si
0x51A6E5: pop     edi
0x51A6E6: pop     esi
0x51A6E7: pop     ebp
0x51A6E8: add     esp, 0Ch
0x51A6EB: retn    4
