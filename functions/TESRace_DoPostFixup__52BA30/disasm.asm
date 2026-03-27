0x52BA30: push    ecx
0x52BA31: push    esi
0x52BA32: mov     esi, ecx
0x52BA34: mov     eax, [esi+8]
0x52BA37: shr     eax, 3
0x52BA3A: test    al, 1
0x52BA3C: jnz     loc_52BC41
0x52BA42: mov     eax, [esi+300h]
0x52BA48: test    eax, eax
0x52BA4A: jz      short loc_52BAB6
0x52BA4C: push    0FFFFFFFFh; a2
0x52BA4E: mov     dword ptr [esp+0Ch+ArgList], eax
0x52BA52: call    TESForm_GetOverrideFile
0x52BA57: push    eax; a2
0x52BA58: lea     ecx, [esp+0Ch+ArgList]
0x52BA5C: push    ecx; a1
0x52BA5D: call    TESForm_ResolveFormID
0x52BA62: mov     edx, dword ptr [esp+10h+ArgList]
0x52BA66: add     esp, 8
0x52BA69: push    0; int
0x52BA6B: push    offset ??_R0?AVTESRace@@@8; struct TypeDescriptor *
0x52BA70: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52BA75: push    0; int
0x52BA77: push    edx; a1
0x52BA78: call    TESForm_LookupByFormID
0x52BA7D: add     esp, 4
0x52BA80: push    eax; void *
0x52BA81: call    OblivionDynamicCast
0x52BA86: add     esp, 14h
0x52BA89: test    eax, eax
0x52BA8B: mov     [esi+300h], eax
0x52BA91: jnz     short loc_52BAB6
0x52BA93: mov     eax, [esi+0Ch]
0x52BA96: push    eax
0x52BA97: mov     eax, [esi]
0x52BA99: mov     edx, [eax+0D4h]
0x52BA9F: mov     ecx, esi
0x52BAA1: call    edx
0x52BAA3: push    eax
0x52BAA4: mov     eax, dword ptr [esp+10h+ArgList]
0x52BAA8: push    eax; ArgList
0x52BAA9: push    offset aCouldNotFindMa; "Could not find male voice race (%08X) f"...
0x52BAAE: call    PrintError
0x52BAB3: add     esp, 10h
0x52BAB6: mov     eax, [esi+304h]
0x52BABC: test    eax, eax
0x52BABE: jz      short loc_52BB2C
0x52BAC0: push    0FFFFFFFFh; a2
0x52BAC2: mov     ecx, esi; this
0x52BAC4: mov     dword ptr [esp+0Ch+ArgList], eax
0x52BAC8: call    TESForm_GetOverrideFile
0x52BACD: push    eax; a2
0x52BACE: lea     ecx, [esp+0Ch+ArgList]
0x52BAD2: push    ecx; a1
0x52BAD3: call    TESForm_ResolveFormID
0x52BAD8: mov     edx, dword ptr [esp+10h+ArgList]
0x52BADC: add     esp, 8
0x52BADF: push    0; int
0x52BAE1: push    offset ??_R0?AVTESRace@@@8; struct TypeDescriptor *
0x52BAE6: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52BAEB: push    0; int
0x52BAED: push    edx; a1
0x52BAEE: call    TESForm_LookupByFormID
0x52BAF3: add     esp, 4
0x52BAF6: push    eax; void *
0x52BAF7: call    OblivionDynamicCast
0x52BAFC: add     esp, 14h
0x52BAFF: test    eax, eax
0x52BB01: mov     [esi+304h], eax
0x52BB07: jnz     short loc_52BB2C
0x52BB09: mov     eax, [esi+0Ch]
0x52BB0C: push    eax
0x52BB0D: mov     eax, [esi]
0x52BB0F: mov     edx, [eax+0D4h]
0x52BB15: mov     ecx, esi
0x52BB17: call    edx
0x52BB19: push    eax
0x52BB1A: mov     eax, dword ptr [esp+10h+ArgList]
0x52BB1E: push    eax; ArgList
0x52BB1F: push    offset aCouldnotFindFe; "Couldnot find female voice race (%08X) "...
0x52BB24: call    PrintError
0x52BB29: add     esp, 10h
0x52BB2C: mov     eax, [esi+94h]
0x52BB32: test    eax, eax
0x52BB34: jz      short loc_52BBA2
0x52BB36: push    0FFFFFFFFh; a2
0x52BB38: mov     ecx, esi; this
0x52BB3A: mov     dword ptr [esp+0Ch+ArgList], eax
0x52BB3E: call    TESForm_GetOverrideFile
0x52BB43: push    eax; a2
0x52BB44: lea     ecx, [esp+0Ch+ArgList]
0x52BB48: push    ecx; a1
0x52BB49: call    TESForm_ResolveFormID
0x52BB4E: mov     edx, dword ptr [esp+10h+ArgList]
0x52BB52: add     esp, 8
0x52BB55: push    0; int
0x52BB57: push    offset ??_R0?AVTESHair@@@8; struct TypeDescriptor *
0x52BB5C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52BB61: push    0; int
0x52BB63: push    edx; a1
0x52BB64: call    TESForm_LookupByFormID
0x52BB69: add     esp, 4
0x52BB6C: push    eax; void *
0x52BB6D: call    OblivionDynamicCast
0x52BB72: add     esp, 14h
0x52BB75: test    eax, eax
0x52BB77: mov     [esi+94h], eax
0x52BB7D: jnz     short loc_52BBA2
0x52BB7F: mov     eax, [esi+0Ch]
0x52BB82: push    eax
0x52BB83: mov     eax, [esi]
0x52BB85: mov     edx, [eax+0D4h]
0x52BB8B: mov     ecx, esi
0x52BB8D: call    edx
0x52BB8F: push    eax
0x52BB90: mov     eax, dword ptr [esp+10h+ArgList]
0x52BB94: push    eax; ArgList
0x52BB95: push    offset aCouldNotFin_12; "Could not find male default hair (%08X)"...
0x52BB9A: call    PrintError
0x52BB9F: add     esp, 10h
0x52BBA2: mov     eax, [esi+98h]
0x52BBA8: test    eax, eax
0x52BBAA: jz      short loc_52BC18
0x52BBAC: push    0FFFFFFFFh; a2
0x52BBAE: mov     ecx, esi; this
0x52BBB0: mov     dword ptr [esp+0Ch+ArgList], eax
0x52BBB4: call    TESForm_GetOverrideFile
0x52BBB9: push    eax; a2
0x52BBBA: lea     ecx, [esp+0Ch+ArgList]
0x52BBBE: push    ecx; a1
0x52BBBF: call    TESForm_ResolveFormID
0x52BBC4: mov     edx, dword ptr [esp+10h+ArgList]
0x52BBC8: add     esp, 8
0x52BBCB: push    0; int
0x52BBCD: push    offset ??_R0?AVTESHair@@@8; struct TypeDescriptor *
0x52BBD2: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52BBD7: push    0; int
0x52BBD9: push    edx; a1
0x52BBDA: call    TESForm_LookupByFormID
0x52BBDF: add     esp, 4
0x52BBE2: push    eax; void *
0x52BBE3: call    OblivionDynamicCast
0x52BBE8: add     esp, 14h
0x52BBEB: test    eax, eax
0x52BBED: mov     [esi+98h], eax
0x52BBF3: jnz     short loc_52BC18
0x52BBF5: mov     eax, [esi+0Ch]
0x52BBF8: push    eax
0x52BBF9: mov     eax, [esi]
0x52BBFB: mov     edx, [eax+0D4h]
0x52BC01: mov     ecx, esi
0x52BC03: call    edx
0x52BC05: push    eax
0x52BC06: mov     eax, dword ptr [esp+10h+ArgList]
0x52BC0A: push    eax; ArgList
0x52BC0B: push    offset aCouldNotFindFe; "Could not find female default hair (%08"...
0x52BC10: call    PrintError
0x52BC15: add     esp, 10h
0x52BC18: push    esi
0x52BC19: lea     ecx, [esi+2Ch]
0x52BC1C: call    TESSpellList_LinkComponent
0x52BC21: push    esi; ArgList
0x52BC22: lea     ecx, [esi+40h]
0x52BC25: call    sub_46E6B0
0x52BC2A: cmp     byte ptr ds:0B3630Ch, 0
0x52BC31: jnz     short loc_52BC38
0x52BC33: call    sub_52B6A0
0x52BC38: push    1; a2
0x52BC3A: mov     ecx, esi; this
0x52BC3C: call    TESForm_SetIsLinked
0x52BC41: pop     esi
0x52BC42: pop     ecx
0x52BC43: retn
