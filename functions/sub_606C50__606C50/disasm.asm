0x606C50: sub     esp, 18h
0x606C53: push    esi
0x606C54: push    edi
0x606C55: mov     esi, ecx
0x606C57: call    sub_567E00
0x606C5C: cmp     byte ptr ds:0B05BACh, 0
0x606C63: mov     ecx, ds:0B33B00h
0x606C69: mov     [esp+20h+var_4], 0
0x606C71: mov     eax, [ecx+14h]
0x606C74: mov     [esp+20h+var_C], 0
0x606C7C: mov     [esp+20h+var_10], eax
0x606C80: jz      short loc_606C86
0x606C82: mov     [esp+20h+var_10], eax
0x606C86: call    sub_45A170
0x606C8B: test    al, al
0x606C8D: jz      short loc_606CC2
0x606C8F: mov     ecx, ds:0B33B00h
0x606C95: push    4; Size
0x606C97: lea     eax, [esp+24h+Src]
0x606C9B: push    eax; Src
0x606C9C: mov     [esp+28h+Src], 4B4F4C42h
0x606CA4: call    SaveLoad_SaveData
0x606CA9: mov     ecx, ds:0B33B00h
0x606CAF: mov     edx, [ecx+14h]
0x606CB2: push    2; Size
0x606CB4: lea     eax, [esp+24h+var_4]
0x606CB8: push    eax; Src
0x606CB9: mov     [esp+28h+var_C], edx
0x606CBD: call    SaveLoad_SaveData
0x606CC2: mov     ecx, ds:0B33B00h
0x606CC8: push    ebp
0x606CC9: push    2; Size
0x606CCB: lea     edx, [esp+28h+var_14]
0x606CCF: mov     [esp+28h+var_14], 0
0x606CD7: mov     ebp, [ecx+14h]
0x606CDA: push    edx; Src
0x606CDB: call    SaveLoad_SaveData
0x606CE0: mov     esi, [esi+3Ch]
0x606CE3: test    esi, esi
0x606CE5: jz      short loc_606D43
0x606CE7: cmp     dword ptr [esi+4], 0
0x606CEB: jnz     short loc_606CF2
0x606CED: cmp     dword ptr [esi], 0
0x606CF0: jz      short loc_606D43
0x606CF2: mov     edi, [esi]
0x606CF4: mov     al, [edi+4]
0x606CF7: push    1; Size
0x606CF9: lea     ecx, [esp+28h+var_15]
0x606CFD: push    ecx; Src
0x606CFE: mov     ecx, ds:0B33B00h
0x606D04: mov     [esp+2Ch+var_15], al
0x606D08: call    SaveLoad_SaveData
0x606D0D: movsx   edx, [esp+24h+var_15]
0x606D12: push    edi
0x606D13: push    edx
0x606D14: mov     ecx, offset ActorProcessManager_ptr
0x606D19: call    sub_675CC0
0x606D1E: movzx   eax, ax
0x606D21: push    2; Size
0x606D23: lea     ecx, [esp+28h+Src]
0x606D27: push    ecx; Src
0x606D28: mov     ecx, ds:0B33B00h
0x606D2E: mov     [esp+2Ch+Src], eax
0x606D32: call    SaveLoad_SaveData
0x606D37: add     [esp+24h+var_14], 1
0x606D3C: mov     esi, [esi+4]
0x606D3F: test    esi, esi
0x606D41: jnz     short loc_606CE7
0x606D43: mov     dx, word ptr [esp+24h+var_14]
0x606D48: mov     [ebp+0], dx
0x606D4C: cmp     byte ptr ds:0B05BACh, 0
0x606D53: pop     ebp
0x606D54: jz      short loc_606DC1
0x606D56: mov     eax, ds:0B33B00h
0x606D5B: mov     edi, [eax+84h]
0x606D61: test    edi, edi
0x606D63: mov     esi, [eax+14h]
0x606D66: jz      short loc_606DA5
0x606D68: mov     eax, [edi]
0x606D6A: push    eax; a1
0x606D6B: call    TESForm_LookupByFormID
0x606D70: mov     ecx, [edi+5]
0x606D73: mov     edx, [eax]
0x606D75: add     esp, 4
0x606D78: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x606D7D: push    216h
0x606D82: push    ecx
0x606D83: mov     ecx, eax
0x606D85: mov     eax, [edx+0D4h]
0x606D8B: call    eax
0x606D8D: mov     ecx, [edi]
0x606D8F: sub     esi, [esp+2Ch+var_10]
0x606D93: push    eax
0x606D94: push    ecx
0x606D95: push    esi; ArgList
0x606D96: push    offset aSavegame5iForF; "SaveGame(): %-5i for form %08X %s with "...
0x606D9B: call    sub_40FEC0
0x606DA0: add     esp, 1Ch
0x606DA3: jmp     short loc_606DC1
0x606DA5: sub     esi, [esp+20h+var_10]
0x606DA9: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x606DAE: push    216h
0x606DB3: push    esi; ArgList
0x606DB4: push    offset aSavegame5iEndi; "SaveGame(): %-5i ending at line %i in f"...
0x606DB9: call    sub_40FEC0
0x606DBE: add     esp, 10h
0x606DC1: mov     ecx, ds:0B33B00h
0x606DC7: call    sub_45A170
0x606DCC: test    al, al
0x606DCE: jz      short loc_606E03
0x606DD0: mov     edx, ds:0B33B00h
0x606DD6: mov     edi, [esp+20h+var_C]
0x606DDA: mov     esi, [edx+14h]
0x606DDD: lea     eax, [edi+0FFFFh]
0x606DE3: cmp     esi, eax
0x606DE5: jbe     short loc_606DFE
0x606DE7: push    216h
0x606DEC: push    offset a_AiAlarmpackag; ".\\AI\\AlarmPackage.cpp"
0x606DF1: push    offset aSaveGameBlockI; "Save Game Block in file %s on line %i i"...
0x606DF6: call    PrintError
0x606DFB: add     esp, 0Ch
0x606DFE: sub     esi, edi
0x606E00: mov     [edi], si
0x606E03: pop     edi
0x606E04: pop     esi
0x606E05: add     esp, 18h
0x606E08: retn
