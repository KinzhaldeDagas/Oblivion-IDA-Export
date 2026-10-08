0x4EEDD0: push    ebp; Verified: Oblivion weather-list chunk record is 8 bytes: TESWeather FormID plus selectionWeight. Fallout's 12-byte WeatherEntry adds TESGlobal* pChanceVar; this is a documented cross-game layout divergence.
0x4EEDD1: mov     ebp, [esp+4+a2]
0x4EEDD5: test    ebp, ebp
0x4EEDD7: jz      loc_4EEEE9
0x4EEDDD: mov     ecx, [esp+4+list]
0x4EEDE1: test    ecx, ecx
0x4EEDE3: jz      loc_4EEEE9
0x4EEDE9: push    esi
0x4EEDEA: mov     esi, [esp+8+owner]
0x4EEDEE: test    esi, esi
0x4EEDF0: jz      loc_4EEEE8
0x4EEDF6: push    edi
0x4EEDF7: mov     edi, [ebp+254h]
0x4EEDFD: shr     edi, 3
0x4EEE00: jz      loc_4EEEE7
0x4EEE06: push    ebx
0x4EEE07: call    sub_5B1D70
0x4EEE0C: xor     ecx, ecx
0x4EEE0E: mov     eax, edi
0x4EEE10: mov     edx, 8
0x4EEE15: mul     edx
0x4EEE17: seto    cl
0x4EEE1A: neg     ecx
0x4EEE1C: or      ecx, eax
0x4EEE1E: push    ecx; Size
0x4EEE1F: call    FormHeapAlloc
0x4EEE24: mov     ebx, eax
0x4EEE26: add     esp, 4
0x4EEE29: lea     eax, ds:0[edi*8]
0x4EEE30: push    eax; a4
0x4EEE31: push    ebx; Dst
0x4EEE32: mov     ecx, ebp; a1
0x4EEE34: mov     [esp+18h+a2], ebx
0x4EEE38: call    TESFile_GetChunkData; Bounded GetChunkData semantics for DIAL/DATA maxSize=1: size zero leaves destination unchanged; size one copies the byte; size greater than one writes destination[0]=0 and copies zero payload bytes. TESCS peer is TESFile_ReadCurrentChunkData 0x4879D0.
0x4EEE3D: test    al, al
0x4EEE3F: jnz     short loc_4EEE52
0x4EEE41: mov     ecx, [esi+0Ch]
0x4EEE44: push    ecx; ArgList
0x4EEE45: push    offset aErrorGettingTe; "Error getting TESWeatherList chunk for "...
0x4EEE4A: call    PrintError
0x4EEE4F: add     esp, 8
0x4EEE52: test    edi, edi
0x4EEE54: jbe     short loc_4EEECF
0x4EEE56: mov     esi, ebx
0x4EEE58: mov     ebx, edi
0x4EEE5A: lea     ebx, [ebx+0]
0x4EEE60: push    ebp; a2
0x4EEE61: push    esi; a1
0x4EEE62: call    TESForm_ResolveFormID; Resolves a plugin-record FormID to current load order. During save loading it uses modRefIDTable; otherwise the serialized high byte selects a master, falling back to the current file, while preserving the low 24-bit object ID.
0x4EEE67: push    8; Size
0x4EEE69: call    FormHeapAlloc
0x4EEE6E: mov     edx, [esi]
0x4EEE70: add     esp, 0Ch
0x4EEE73: push    0; int
0x4EEE75: push    offset ??_R0?AVTESWeather@@@8; struct TypeDescriptor *
0x4EEE7A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4EEE7F: push    0; int
0x4EEE81: push    edx; a1
0x4EEE82: mov     edi, eax
0x4EEE84: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x4EEE89: add     esp, 4
0x4EEE8C: push    eax; void *
0x4EEE8D: call    OblivionDynamicCast
0x4EEE92: add     esp, 14h
0x4EEE95: test    eax, eax
0x4EEE97: mov     [edi], eax
0x4EEE99: jnz     short loc_4EEEB3
0x4EEE9B: mov     eax, [esi]
0x4EEE9D: push    eax; ArgList
0x4EEE9E: push    offset aErrorWhileLoad; "Error while loading weather list...cann"...
0x4EEEA3: call    PrintError
0x4EEEA8: push    edi
0x4EEEA9: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4EEEAE: add     esp, 0Ch
0x4EEEB1: jmp     short loc_4EEEC3
0x4EEEB3: mov     ecx, [esi+4]
0x4EEEB6: mov     [edi+4], ecx
0x4EEEB9: mov     ecx, [esp+10h+list]
0x4EEEBD: push    edi
0x4EEEBE: call    BSSimpleList_PushFront
0x4EEEC3: add     esi, 8
0x4EEEC6: sub     ebx, 1
0x4EEEC9: jnz     short loc_4EEE60
0x4EEECB: mov     ebx, [esp+10h+a2]
0x4EEECF: mov     ecx, [esp+10h+list]
0x4EEED3: push    offset OblivionTESWeatherList_CompareSelectionWeight; Verified: sorts entries ascending by selectionWeight. The same field is consumed by Oblivion's weighted random weather selector.
0x4EEED8: call    BSSimpleList_SortViaArrayAndRebuild
0x4EEEDD: push    ebx
0x4EEEDE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x4EEEE3: add     esp, 4
0x4EEEE6: pop     ebx
0x4EEEE7: pop     edi
0x4EEEE8: pop     esi
0x4EEEE9: pop     ebp
0x4EEEEA: retn
