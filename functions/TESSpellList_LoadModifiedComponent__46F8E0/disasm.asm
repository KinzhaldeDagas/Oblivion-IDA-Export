0x46F8E0: sub     esp, 10h
0x46F8E3: test    byte ptr [esp+10h+arg_0], 20h
0x46F8E8: push    ebx
0x46F8E9: mov     ebx, ecx
0x46F8EB: jz      loc_46FBF8
0x46F8F1: mov     ecx, ds:0B33B00h
0x46F8F7: push    ebp
0x46F8F8: xor     ebp, ebp
0x46F8FA: push    esi
0x46F8FB: mov     [esp+1Ch+var_10], ebp
0x46F8FF: call    sub_45A170
0x46F904: test    al, al
0x46F906: jz      loc_46F9A5
0x46F90C: mov     ecx, ds:0B33B00h
0x46F912: push    4; Size
0x46F914: lea     eax, [esp+20h+Dst]
0x46F918: push    eax; Dst
0x46F919: call    SaveLoad_LoadData
0x46F91E: cmp     [esp+1Ch+Dst], 4B4F4C42h
0x46F926: jz      short loc_46F990
0x46F928: mov     eax, ds:0B33B00h
0x46F92D: mov     esi, [eax+80h]
0x46F933: test    esi, esi
0x46F935: jz      short loc_46F974
0x46F937: mov     ecx, [esi]
0x46F939: push    ecx; a1
0x46F93A: call    TESForm_LookupByFormID
0x46F93F: mov     edx, [esi+5]
0x46F942: movzx   ecx, byte ptr [esi+9]
0x46F946: add     esp, 4
0x46F949: push    edx
0x46F94A: mov     edx, [eax]
0x46F94C: push    ecx
0x46F94D: mov     ecx, eax
0x46F94F: mov     eax, [edx+0D4h]
0x46F955: call    eax
0x46F957: mov     ecx, [esi]
0x46F959: push    eax
0x46F95A: push    ecx
0x46F95B: push    52Fh
0x46F960: push    offset a__TesSharedT_4; "..\\TES Shared\\TESSpellList.cpp"
0x46F965: push    offset aLoadgameBuffer; "LoadGame Buffer error: Block Header is "...
0x46F96A: call    PrintError
0x46F96F: add     esp, 1Ch
0x46F972: jmp     short loc_46F990
0x46F974: movzx   edx, byte ptr [eax+7Ch]
0x46F978: push    edx
0x46F979: push    52Fh
0x46F97E: push    offset a__TesSharedT_4; "..\\TES Shared\\TESSpellList.cpp"
0x46F983: push    offset aLoadgameBuff_0; "LoadGame Buffer error: Block Header is "...
0x46F988: call    PrintError
0x46F98D: add     esp, 10h
0x46F990: mov     ecx, ds:0B33B00h
0x46F996: mov     ebp, [ecx+14h]
0x46F999: push    2; Size
0x46F99B: lea     eax, [esp+20h+var_10]
0x46F99F: push    eax; Dst
0x46F9A0: call    SaveLoad_LoadData
0x46F9A5: push    edi
0x46F9A6: lea     edi, [ebx+4]
0x46F9A9: mov     ecx, edi
0x46F9AB: call    BSSimpleList_Clear
0x46F9B0: add     ebx, 0Ch
0x46F9B3: mov     ecx, ebx
0x46F9B5: call    BSSimpleList_Clear
0x46F9BA: push    2; Size
0x46F9BC: lea     ecx, [esp+24h+arg_0]
0x46F9C0: push    ecx; Dst
0x46F9C1: mov     ecx, ds:0B33B00h
0x46F9C7: call    SaveLoad_LoadData
0x46F9CC: cmp     [esp+20h+arg_0], 0
0x46F9D2: mov     [esp+20h+var_8], 0
0x46F9DA: jbe     loc_46FACF
0x46F9E0: mov     ecx, ds:0B33B00h
0x46F9E6: push    4; Size
0x46F9E8: lea     edx, [esp+24h+ArgList]
0x46F9EC: push    edx; Dst
0x46F9ED: call    SaveLoad_LoadFormID
0x46F9F2: mov     eax, dword ptr [esp+28h+var_14]
0x46F9F6: push    0; int
0x46F9F8: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x46F9FD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46FA02: push    0; int
0x46FA04: push    eax; a1
0x46FA05: call    TESForm_LookupByFormID
0x46FA0A: add     esp, 4
0x46FA0D: push    eax; void *
0x46FA0E: call    OblivionDynamicCast
0x46FA13: mov     ecx, dword ptr [esp+3Ch+var_14]
0x46FA17: add     esp, 14h
0x46FA1A: push    0; int
0x46FA1C: push    offset ??_R0?AVTESLevSpell@@@8; struct TypeDescriptor *
0x46FA21: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46FA26: push    0; int
0x46FA28: push    ecx; a1
0x46FA29: mov     esi, eax
0x46FA2B: call    TESForm_LookupByFormID
0x46FA30: add     esp, 4
0x46FA33: push    eax; void *
0x46FA34: call    OblivionDynamicCast
0x46FA39: add     esp, 14h
0x46FA3C: test    esi, esi
0x46FA3E: jz      short loc_46FA7A
0x46FA40: cmp     dword ptr [edi], 0
0x46FA43: jz      short loc_46FA76
0x46FA45: push    8; Size
0x46FA47: call    FormHeapAlloc
0x46FA4C: add     esp, 4
0x46FA4F: test    eax, eax
0x46FA51: jz      short loc_46FA6B
0x46FA53: mov     edx, [edi]
0x46FA55: mov     [eax], edx
0x46FA57: mov     dword ptr [eax+4], 0
0x46FA5E: mov     ecx, [edi+4]
0x46FA61: mov     [eax+4], ecx
0x46FA64: mov     [edi+4], eax
0x46FA67: mov     [edi], esi
0x46FA69: jmp     short loc_46FAB7
0x46FA6B: mov     ecx, [edi+4]
0x46FA6E: xor     eax, eax
0x46FA70: mov     [eax+4], ecx
0x46FA73: mov     [edi+4], eax
0x46FA76: mov     [edi], esi
0x46FA78: jmp     short loc_46FAB7
0x46FA7A: test    eax, eax
0x46FA7C: jz      short loc_46FAA5
0x46FA7E: mov     edx, ds:0B33B00h
0x46FA84: cmp     byte ptr [edx+7Ch], 47h ; 'G'
0x46FA88: jnb     short loc_46FA9B
0x46FA8A: mov     ecx, ebx
0x46FA8C: test    ecx, ecx
0x46FA8E: jz      short loc_46FA9B
0x46FA90: cmp     [ecx], eax
0x46FA92: jz      short loc_46FAB7
0x46FA94: mov     ecx, [ecx+4]
0x46FA97: test    ecx, ecx
0x46FA99: jnz     short loc_46FA90
0x46FA9B: push    eax
0x46FA9C: mov     ecx, ebx
0x46FA9E: call    BSSimpleList_PushFront
0x46FAA3: jmp     short loc_46FAB7
0x46FAA5: mov     eax, dword ptr [esp+28h+var_14]
0x46FAA9: push    eax; ArgList
0x46FAAA: push    offset aCouldNotFindSp; "Could not find spell %08X"
0x46FAAF: call    PrintError
0x46FAB4: add     esp, 8
0x46FAB7: mov     eax, [esp+28h+var_10]
0x46FABB: movzx   ecx, word ptr [esp+28h+Dst]
0x46FAC0: add     eax, 1
0x46FAC3: cmp     eax, ecx
0x46FAC5: mov     [esp+28h+var_10], eax
0x46FAC9: jl      loc_46F9E0
0x46FACF: mov     ecx, ds:0B33B00h
0x46FAD5: call    sub_45A170
0x46FADA: test    al, al
0x46FADC: jz      loc_46FBF5
0x46FAE2: mov     ecx, ds:0B33B00h
0x46FAE8: mov     edi, [ecx+80h]
0x46FAEE: test    edi, edi
0x46FAF0: mov     esi, [ecx+14h]
0x46FAF3: jz      loc_46FB9B
0x46FAF9: mov     edx, [edi]
0x46FAFB: push    edx; a1
0x46FAFC: call    TESForm_LookupByFormID
0x46FB01: mov     ecx, eax
0x46FB03: movzx   eax, [esp+2Ch+var_18]
0x46FB08: add     eax, ebp
0x46FB0A: add     esp, 4
0x46FB0D: cmp     esi, eax
0x46FB0F: jbe     short loc_46FB53
0x46FB11: mov     edx, [edi+5]
0x46FB14: movzx   eax, byte ptr [edi+9]
0x46FB18: push    edx
0x46FB19: mov     edx, [ecx]
0x46FB1B: push    eax
0x46FB1C: mov     eax, [edx+0D4h]
0x46FB22: call    eax
0x46FB24: mov     ecx, [edi]
0x46FB26: movzx   edx, [esp+30h+var_18]
0x46FB2B: push    eax
0x46FB2C: push    ecx
0x46FB2D: push    553h
0x46FB32: sub     esi, edx
0x46FB34: push    offset a__TesSharedT_4; "..\\TES Shared\\TESSpellList.cpp"
0x46FB39: sub     esi, ebp
0x46FB3B: push    esi; ArgList
0x46FB3C: push    offset aLoadgameBuff_1; "LoadGame Buffer overrun of %i bytes in "...
0x46FB41: call    PrintError
0x46FB46: add     esp, 20h
0x46FB49: pop     edi
0x46FB4A: pop     esi
0x46FB4B: pop     ebp
0x46FB4C: pop     ebx
0x46FB4D: add     esp, 10h
0x46FB50: retn    8
0x46FB53: jnb     loc_46FBF5
0x46FB59: mov     eax, [edi+5]
0x46FB5C: movzx   edx, byte ptr [edi+9]
0x46FB60: push    eax
0x46FB61: mov     eax, [ecx]
0x46FB63: push    edx
0x46FB64: mov     edx, [eax+0D4h]
0x46FB6A: call    edx
0x46FB6C: movzx   ecx, [esp+30h+var_18]
0x46FB71: push    eax
0x46FB72: mov     eax, [edi]
0x46FB74: push    eax
0x46FB75: push    553h
0x46FB7A: sub     ecx, esi
0x46FB7C: push    offset a__TesSharedT_4; "..\\TES Shared\\TESSpellList.cpp"
0x46FB81: add     ecx, ebp
0x46FB83: push    ecx; ArgList
0x46FB84: push    offset aLoadgameBuff_2; "LoadGame Buffer underrun of %i bytes in"...
0x46FB89: call    PrintError
0x46FB8E: add     esp, 20h
0x46FB91: pop     edi
0x46FB92: pop     esi
0x46FB93: pop     ebp
0x46FB94: pop     ebx
0x46FB95: add     esp, 10h
0x46FB98: retn    8
0x46FB9B: movzx   eax, [esp+28h+var_18]
0x46FBA0: lea     edx, [eax+ebp]
0x46FBA3: cmp     esi, edx
0x46FBA5: jbe     short loc_46FBD2
0x46FBA7: movzx   edx, byte ptr [ecx+7Ch]
0x46FBAB: push    edx
0x46FBAC: push    553h
0x46FBB1: sub     esi, eax
0x46FBB3: push    offset a__TesSharedT_4; "..\\TES Shared\\TESSpellList.cpp"
0x46FBB8: sub     esi, ebp
0x46FBBA: push    esi; ArgList
0x46FBBB: push    offset aLoadgameBuff_3; "LoadGame Buffer overrun of %i bytes in "...
0x46FBC0: call    PrintError
0x46FBC5: add     esp, 14h
0x46FBC8: pop     edi
0x46FBC9: pop     esi
0x46FBCA: pop     ebp
0x46FBCB: pop     ebx
0x46FBCC: add     esp, 10h
0x46FBCF: retn    8
0x46FBD2: jnb     short loc_46FBF5
0x46FBD4: movzx   ecx, byte ptr [ecx+7Ch]
0x46FBD8: push    ecx
0x46FBD9: push    553h
0x46FBDE: sub     eax, esi
0x46FBE0: push    offset a__TesSharedT_4; "..\\TES Shared\\TESSpellList.cpp"
0x46FBE5: add     eax, ebp
0x46FBE7: push    eax; ArgList
0x46FBE8: push    offset aLoadgameBuff_4; "LoadGame Buffer underrun of %i bytes in"...
0x46FBED: call    PrintError
0x46FBF2: add     esp, 14h
0x46FBF5: pop     edi
0x46FBF6: pop     esi
0x46FBF7: pop     ebp
0x46FBF8: pop     ebx
0x46FBF9: add     esp, 10h
0x46FBFC: retn    8
