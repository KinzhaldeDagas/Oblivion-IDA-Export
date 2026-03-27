0x467CA0: sub     esp, 14h
0x467CA3: push    ebp
0x467CA4: push    esi
0x467CA5: mov     esi, ecx
0x467CA7: mov     ecx, ds:0B33B00h
0x467CAD: xor     ebp, ebp
0x467CAF: push    edi
0x467CB0: mov     [esp+20h+var_10], ebp
0x467CB4: call    sub_45A170
0x467CB9: test    al, al
0x467CBB: jz      loc_467D5A
0x467CC1: mov     ecx, ds:0B33B00h
0x467CC7: push    4; Size
0x467CC9: lea     eax, [esp+24h+Dst]
0x467CCD: push    eax; Dst
0x467CCE: call    SaveLoad_LoadData
0x467CD3: cmp     [esp+20h+Dst], 4B4F4C42h
0x467CDB: jz      short loc_467D45
0x467CDD: mov     eax, ds:0B33B00h
0x467CE2: mov     edi, [eax+80h]
0x467CE8: test    edi, edi
0x467CEA: jz      short loc_467D29
0x467CEC: mov     ecx, [edi]
0x467CEE: push    ecx; a1
0x467CEF: call    TESForm_LookupByFormID
0x467CF4: mov     edx, [edi+5]
0x467CF7: movzx   ecx, byte ptr [edi+9]
0x467CFB: add     esp, 4
0x467CFE: push    edx
0x467CFF: mov     edx, [eax]
0x467D01: push    ecx
0x467D02: mov     ecx, eax
0x467D04: mov     eax, [edx+0D4h]
0x467D0A: call    eax
0x467D0C: mov     ecx, [edi]
0x467D0E: push    eax
0x467D0F: push    ecx
0x467D10: push    678h
0x467D15: push    offset a__TesSharedT_2; "..\\TES Shared\\TESActorBaseData.cpp"
0x467D1A: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x467D1F: call    PrintError
0x467D24: add     esp, 1Ch
0x467D27: jmp     short loc_467D45
0x467D29: movzx   edx, byte ptr [eax+7Ch]
0x467D2D: push    edx
0x467D2E: push    678h
0x467D33: push    offset a__TesSharedT_2; "..\\TES Shared\\TESActorBaseData.cpp"
0x467D38: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x467D3D: call    PrintError
0x467D42: add     esp, 10h
0x467D45: mov     ecx, ds:0B33B00h
0x467D4B: mov     ebp, [ecx+14h]
0x467D4E: push    2; Size
0x467D50: lea     eax, [esp+24h+var_10]
0x467D54: push    eax; Dst
0x467D55: call    SaveLoad_LoadData
0x467D5A: push    ebx
0x467D5B: mov     bl, [esp+24h+arg_0]
0x467D5F: test    bl, 10h
0x467D62: jz      short loc_467D75
0x467D64: push    10h; Size
0x467D66: lea     ecx, [esi+4]
0x467D69: push    ecx; Dst
0x467D6A: mov     ecx, ds:0B33B00h
0x467D70: call    SaveLoad_LoadData
0x467D75: test    bl, 40h
0x467D78: jz      loc_467E44
0x467D7E: mov     ecx, esi
0x467D80: call    TESActorBaseData_ClearFactionList
0x467D85: mov     ecx, ds:0B33B00h
0x467D8B: push    2; Size
0x467D8D: lea     edx, [esp+28h+var_14]
0x467D91: push    edx; Dst
0x467D92: call    SaveLoad_LoadData
0x467D97: cmp     word ptr [esp+24h+var_14], 0
0x467D9D: mov     [esp+24h+a1], 0
0x467DA5: jbe     loc_467E44
0x467DAB: jmp     short loc_467DB0
0x467DAD: align 10h
0x467DB0: mov     ecx, ds:0B33B00h
0x467DB6: push    4; Size
0x467DB8: lea     eax, [esp+28h+var_4]
0x467DBC: push    eax; Dst
0x467DBD: call    SaveLoad_LoadFormID
0x467DC2: push    1; Size
0x467DC4: lea     ecx, [esp+30h+var_4]
0x467DC8: push    ecx; Dst
0x467DC9: mov     ecx, ds:0B33B00h
0x467DCF: call    SaveLoad_LoadData
0x467DD4: mov     edx, [esp+2Ch+a1]
0x467DD8: push    edx; a1
0x467DD9: call    TESForm_LookupByFormID
0x467DDE: mov     ebx, eax
0x467DE0: add     esp, 4
0x467DE3: test    ebx, ebx
0x467DE5: jz      short loc_467E2C
0x467DE7: push    8; Size
0x467DE9: call    FormHeapAlloc
0x467DEE: mov     edi, eax
0x467DF0: mov     [edi], ebx
0x467DF2: mov     al, [esp+30h+var_4]
0x467DF6: add     esp, 4
0x467DF9: mov     [edi+4], al
0x467DFC: cmp     dword ptr [esi+18h], 0
0x467E00: jz      short loc_467E29
0x467E02: push    8; Size
0x467E04: call    FormHeapAlloc
0x467E09: add     esp, 4
0x467E0C: test    eax, eax
0x467E0E: jz      short loc_467E1E
0x467E10: mov     ecx, [esi+18h]
0x467E13: mov     [eax], ecx
0x467E15: mov     dword ptr [eax+4], 0
0x467E1C: jmp     short loc_467E20
0x467E1E: xor     eax, eax
0x467E20: mov     edx, [esi+1Ch]
0x467E23: mov     [eax+4], edx
0x467E26: mov     [esi+1Ch], eax
0x467E29: mov     [esi+18h], edi
0x467E2C: mov     eax, [esp+2Ch+var_14]
0x467E30: movzx   ecx, [esp+2Ch+var_1C]
0x467E35: add     eax, 1
0x467E38: cmp     eax, ecx
0x467E3A: mov     [esp+2Ch+var_14], eax
0x467E3E: jl      loc_467DB0
0x467E44: mov     ecx, ds:0B33B00h
0x467E4A: call    sub_45A170
0x467E4F: test    al, al
0x467E51: pop     ebx
0x467E52: jz      loc_467F68
0x467E58: mov     ecx, ds:0B33B00h
0x467E5E: mov     edi, [ecx+80h]
0x467E64: test    edi, edi
0x467E66: mov     esi, [ecx+14h]
0x467E69: jz      loc_467F0F
0x467E6F: mov     edx, [edi]
0x467E71: push    edx; a1
0x467E72: call    TESForm_LookupByFormID
0x467E77: mov     ecx, eax
0x467E79: movzx   eax, [esp+2Ch+var_18]
0x467E7E: add     eax, ebp
0x467E80: add     esp, 4
0x467E83: cmp     esi, eax
0x467E85: jbe     short loc_467EC8
0x467E87: mov     edx, [edi+5]
0x467E8A: movzx   eax, byte ptr [edi+9]
0x467E8E: push    edx
0x467E8F: mov     edx, [ecx]
0x467E91: push    eax
0x467E92: mov     eax, [edx+0D4h]
0x467E98: call    eax
0x467E9A: mov     ecx, [edi]
0x467E9C: movzx   edx, [esp+30h+var_18]
0x467EA1: push    eax
0x467EA2: push    ecx
0x467EA3: push    69Ah
0x467EA8: sub     esi, edx
0x467EAA: push    offset a__TesSharedT_2; "..\\TES Shared\\TESActorBaseData.cpp"
0x467EAF: sub     esi, ebp
0x467EB1: push    esi; ArgList
0x467EB2: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x467EB7: call    PrintError
0x467EBC: add     esp, 20h
0x467EBF: pop     edi
0x467EC0: pop     esi
0x467EC1: pop     ebp
0x467EC2: add     esp, 14h
0x467EC5: retn    8
0x467EC8: jnb     loc_467F68
0x467ECE: mov     eax, [edi+5]
0x467ED1: movzx   edx, byte ptr [edi+9]
0x467ED5: push    eax
0x467ED6: mov     eax, [ecx]
0x467ED8: push    edx
0x467ED9: mov     edx, [eax+0D4h]
0x467EDF: call    edx
0x467EE1: movzx   ecx, [esp+30h+var_18]
0x467EE6: push    eax
0x467EE7: mov     eax, [edi]
0x467EE9: push    eax
0x467EEA: push    69Ah
0x467EEF: sub     ecx, esi
0x467EF1: push    offset a__TesSharedT_2; "..\\TES Shared\\TESActorBaseData.cpp"
0x467EF6: add     ecx, ebp
0x467EF8: push    ecx; ArgList
0x467EF9: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x467EFE: call    PrintError
0x467F03: add     esp, 20h
0x467F06: pop     edi
0x467F07: pop     esi
0x467F08: pop     ebp
0x467F09: add     esp, 14h
0x467F0C: retn    8
0x467F0F: movzx   eax, [esp+28h+var_18]
0x467F14: lea     edx, [eax+ebp]
0x467F17: cmp     esi, edx
0x467F19: jbe     short loc_467F45
0x467F1B: movzx   edx, byte ptr [ecx+7Ch]
0x467F1F: push    edx
0x467F20: push    69Ah
0x467F25: sub     esi, eax
0x467F27: push    offset a__TesSharedT_2; "..\\TES Shared\\TESActorBaseData.cpp"
0x467F2C: sub     esi, ebp
0x467F2E: push    esi; ArgList
0x467F2F: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x467F34: call    PrintError
0x467F39: add     esp, 14h
0x467F3C: pop     edi
0x467F3D: pop     esi
0x467F3E: pop     ebp
0x467F3F: add     esp, 14h
0x467F42: retn    8
0x467F45: jnb     short loc_467F68
0x467F47: movzx   ecx, byte ptr [ecx+7Ch]
0x467F4B: push    ecx
0x467F4C: push    69Ah
0x467F51: sub     eax, esi
0x467F53: push    offset a__TesSharedT_2; "..\\TES Shared\\TESActorBaseData.cpp"
0x467F58: add     eax, ebp
0x467F5A: push    eax; ArgList
0x467F5B: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x467F60: call    PrintError
0x467F65: add     esp, 14h
0x467F68: pop     edi
0x467F69: pop     esi
0x467F6A: pop     ebp
0x467F6B: add     esp, 14h
0x467F6E: retn    8
