0x4B0C70: push    ecx
0x4B0C71: push    esi
0x4B0C72: mov     esi, ecx
0x4B0C74: mov     eax, [esi+8]
0x4B0C77: shr     eax, 3
0x4B0C7A: test    al, 1
0x4B0C7C: jnz     loc_4B0D06
0x4B0C82: push    esi
0x4B0C83: lea     ecx, [esi+54h]
0x4B0C86: call    TESScriptableForm_Link
0x4B0C8B: mov     eax, [esi+8Ch]
0x4B0C91: test    eax, eax
0x4B0C93: jz      short loc_4B0CFD
0x4B0C95: push    0FFFFFFFFh; a2
0x4B0C97: mov     ecx, esi; this
0x4B0C99: mov     dword ptr [esp+0Ch+ArgList], eax
0x4B0C9D: call    TESForm_GetOverrideFile
0x4B0CA2: push    eax; a2
0x4B0CA3: lea     ecx, [esp+0Ch+ArgList]
0x4B0CA7: push    ecx; a1
0x4B0CA8: call    TESForm_ResolveFormID
0x4B0CAD: mov     edx, dword ptr [esp+10h+ArgList]
0x4B0CB1: add     esp, 8
0x4B0CB4: push    0; int
0x4B0CB6: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x4B0CBB: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B0CC0: push    0; int
0x4B0CC2: push    edx; a1
0x4B0CC3: call    TESForm_LookupByFormID
0x4B0CC8: add     esp, 4
0x4B0CCB: push    eax; void *
0x4B0CCC: call    OblivionDynamicCast
0x4B0CD1: add     esp, 14h
0x4B0CD4: test    eax, eax
0x4B0CD6: mov     [esi+8Ch], eax
0x4B0CDC: jnz     short loc_4B0CFD
0x4B0CDE: mov     eax, [esi]
0x4B0CE0: mov     edx, [eax+0D4h]
0x4B0CE6: mov     ecx, esi
0x4B0CE8: call    edx
0x4B0CEA: push    eax
0x4B0CEB: mov     eax, dword ptr [esp+0Ch+ArgList]
0x4B0CEF: push    eax; ArgList
0x4B0CF0: push    offset aUnableToFindSo; "Unable to find sound (%08X) on object '"...
0x4B0CF5: call    PrintError
0x4B0CFA: add     esp, 0Ch
0x4B0CFD: push    1; a2
0x4B0CFF: mov     ecx, esi; this
0x4B0D01: call    TESForm_SetIsLinked
0x4B0D06: pop     esi
0x4B0D07: pop     ecx
0x4B0D08: retn
