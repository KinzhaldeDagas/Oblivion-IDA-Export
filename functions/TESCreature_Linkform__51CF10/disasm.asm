0x51CF10: push    ecx
0x51CF11: push    esi
0x51CF12: mov     esi, ecx
0x51CF14: mov     eax, [esi+8]
0x51CF17: shr     eax, 3
0x51CF1A: test    al, 1
0x51CF1C: jnz     loc_51D0C6
0x51CF22: push    esi
0x51CF23: lea     ecx, [esi+0C4h]
0x51CF29: call    TESScriptableForm_Link
0x51CF2E: push    esi
0x51CF2F: lea     ecx, [esi+44h]
0x51CF32: call    TESContainer_LinkComponent
0x51CF37: push    esi
0x51CF38: lea     ecx, [esi+54h]
0x51CF3B: call    TESSpellList_LinkComponent
0x51CF40: push    esi
0x51CF41: lea     ecx, [esi+68h]
0x51CF44: call    TESAIForm_LinkComponent
0x51CF49: push    esi
0x51CF4A: lea     ecx, [esi+24h]
0x51CF4D: call    TESActorBaseData_LinkComponent
0x51CF52: mov     eax, [esi+28h]
0x51CF55: test    al, 1
0x51CF57: jz      short loc_51CF61
0x51CF59: and     eax, 0FFFBFF8Fh
0x51CF5E: mov     [esi+28h], eax
0x51CF61: mov     ecx, [esi+28h]
0x51CF64: shr     ecx, 8
0x51CF67: test    cl, 1
0x51CF6A: push    edi
0x51CF6B: jnz     short loc_51CFE3
0x51CF6D: mov     eax, [esi+100h]
0x51CF73: test    eax, eax
0x51CF75: mov     dword ptr [esp+0Ch+ArgList], eax
0x51CF79: jz      short loc_51CFE3
0x51CF7B: push    0FFFFFFFFh; a2
0x51CF7D: mov     ecx, esi; this
0x51CF7F: call    TESForm_GetOverrideFile
0x51CF84: push    eax; a2
0x51CF85: lea     edx, [esp+10h+ArgList]
0x51CF89: push    edx; a1
0x51CF8A: call    TESForm_ResolveFormID
0x51CF8F: mov     eax, dword ptr [esp+14h+ArgList]
0x51CF93: add     esp, 8
0x51CF96: push    0; int
0x51CF98: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x51CF9D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51CFA2: push    0; int
0x51CFA4: push    eax; a1
0x51CFA5: call    TESForm_LookupByFormID
0x51CFAA: add     esp, 4
0x51CFAD: push    eax; void *
0x51CFAE: call    OblivionDynamicCast
0x51CFB3: add     esp, 14h
0x51CFB6: test    eax, eax
0x51CFB8: mov     [esi+100h], eax
0x51CFBE: jnz     short loc_51CFE3
0x51CFC0: mov     edx, [esi]
0x51CFC2: mov     eax, [edx+0D4h]
0x51CFC8: mov     edi, [esi+0Ch]
0x51CFCB: mov     ecx, esi
0x51CFCD: call    eax
0x51CFCF: mov     ecx, dword ptr [esp+0Ch+ArgList]
0x51CFD3: push    eax
0x51CFD4: push    edi
0x51CFD5: push    ecx; ArgList
0x51CFD6: push    offset aSoundCreature0; "Sound Creature (%08X) not found in Init"...
0x51CFDB: call    PrintError
0x51CFE0: add     esp, 10h
0x51CFE3: mov     edx, [esi]
0x51CFE5: mov     eax, [edx+120h]
0x51CFEB: mov     ecx, esi
0x51CFED: call    eax
0x51CFEF: test    eax, eax
0x51CFF1: jz      loc_51D078
0x51CFF7: mov     edx, [esi]
0x51CFF9: mov     eax, [edx+120h]
0x51CFFF: mov     ecx, esi
0x51D001: call    eax
0x51D003: test    eax, eax
0x51D005: mov     dword ptr [esp+0Ch+ArgList], eax
0x51D009: jz      short loc_51D078
0x51D00B: push    0FFFFFFFFh; a2
0x51D00D: mov     ecx, esi; this
0x51D00F: call    TESForm_GetOverrideFile
0x51D014: push    eax; a2
0x51D015: lea     ecx, [esp+10h+ArgList]
0x51D019: push    ecx; a1
0x51D01A: call    TESForm_ResolveFormID
0x51D01F: mov     edx, dword ptr [esp+14h+ArgList]
0x51D023: add     esp, 8
0x51D026: push    0; int
0x51D028: push    offset ??_R0?AVTESCombatStyle@@@8; struct TypeDescriptor *
0x51D02D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x51D032: push    0; int
0x51D034: push    edx; a1
0x51D035: call    TESForm_LookupByFormID
0x51D03A: add     esp, 4
0x51D03D: push    eax; void *
0x51D03E: call    OblivionDynamicCast
0x51D043: mov     edx, [esi]
0x51D045: add     esp, 14h
0x51D048: test    eax, eax
0x51D04A: mov     ecx, esi
0x51D04C: jz      short loc_51D059
0x51D04E: push    eax
0x51D04F: mov     eax, [edx+124h]
0x51D055: call    eax
0x51D057: jmp     short loc_51D078
0x51D059: mov     eax, [edx+0D4h]
0x51D05F: mov     edi, [esi+0Ch]
0x51D062: call    eax
0x51D064: mov     ecx, dword ptr [esp+0Ch+ArgList]
0x51D068: push    eax
0x51D069: push    edi
0x51D06A: push    ecx; ArgList
0x51D06B: push    offset aCombatStyle08x; "Combat Style (%08X) not found in InitIt"...
0x51D070: call    PrintError
0x51D075: add     esp, 10h
0x51D078: cmp     word ptr [esi+108h], 6
0x51D080: pop     edi
0x51D081: jbe     short loc_51D08C
0x51D083: mov     word ptr [esi+108h], 3
0x51D08C: mov     edx, [esi+80h]
0x51D092: mov     eax, [edx+10h]
0x51D095: lea     ecx, [esi+80h]
0x51D09B: call    eax
0x51D09D: test    eax, eax
0x51D09F: mov     ecx, esi
0x51D0A1: ja      short loc_51D0B6
0x51D0A3: push    1
0x51D0A5: call    sub_46AB40
0x51D0AA: push    1; a2
0x51D0AC: mov     ecx, esi; this
0x51D0AE: call    TESForm_SetIsLinked
0x51D0B3: pop     esi
0x51D0B4: pop     ecx
0x51D0B5: retn
0x51D0B6: push    0
0x51D0B8: call    sub_46AB40
0x51D0BD: push    1; a2
0x51D0BF: mov     ecx, esi; this
0x51D0C1: call    TESForm_SetIsLinked
0x51D0C6: pop     esi
0x51D0C7: pop     ecx
0x51D0C8: retn
