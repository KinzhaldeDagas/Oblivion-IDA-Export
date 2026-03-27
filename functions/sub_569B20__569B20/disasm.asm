0x569B20: push    ecx
0x569B21: push    esi
0x569B22: mov     esi, ecx
0x569B24: cmp     byte ptr [esi], 5
0x569B27: jz      loc_569CE1
0x569B2D: mov     eax, [esi+8]
0x569B30: push    edi
0x569B31: mov     edi, [esp+0Ch+arg_0]
0x569B35: push    0FFFFFFFFh; a2
0x569B37: mov     ecx, edi; this
0x569B39: mov     dword ptr [esp+10h+ArgList], eax
0x569B3D: call    TESForm_GetOverrideFile
0x569B42: push    eax; a2
0x569B43: lea     ecx, [esp+10h+ArgList]
0x569B47: push    ecx; a1
0x569B48: call    TESForm_ResolveFormID
0x569B4D: movsx   eax, byte ptr [esi]
0x569B50: add     esp, 8
0x569B53: sub     eax, 0
0x569B56: jz      loc_569C64
0x569B5C: sub     eax, 1
0x569B5F: jz      short loc_569BDD
0x569B61: sub     eax, 3
0x569B64: jnz     loc_569CE0
0x569B6A: mov     edx, dword ptr [esp+0Ch+ArgList]
0x569B6E: push    edx; a1
0x569B6F: call    TESForm_LookupByFormID
0x569B74: add     esp, 4
0x569B77: test    eax, eax
0x569B79: jz      short loc_569B8D
0x569B7B: cmp     byte ptr [esi], 4
0x569B7E: jnz     loc_569CE0
0x569B84: pop     edi
0x569B85: mov     [esi+8], eax
0x569B88: pop     esi
0x569B89: pop     ecx
0x569B8A: retn    4
0x569B8D: mov     ecx, edi
0x569B8F: call    TESForm__GetEditorNameLen
0x569B94: test    eax, eax
0x569B96: jz      short loc_569BBF
0x569B98: mov     eax, [edi]
0x569B9A: mov     edx, [eax+0D4h]
0x569BA0: mov     ecx, edi
0x569BA2: call    edx
0x569BA4: push    eax
0x569BA5: mov     eax, dword ptr [esp+10h+ArgList]
0x569BA9: push    eax; ArgList
0x569BAA: push    offset aUnableToFin_28; "Unable to find Package Location Object "...
0x569BAF: call    PrintError
0x569BB4: add     esp, 0Ch
0x569BB7: cmp     byte ptr [esi], 4
0x569BBA: jmp     loc_569CD7
0x569BBF: mov     ecx, [edi+0Ch]
0x569BC2: mov     edx, dword ptr [esp+0Ch+ArgList]
0x569BC6: push    ecx
0x569BC7: push    edx; ArgList
0x569BC8: push    offset aUnableToFin_29; "Unable to find Package Location Object "...
0x569BCD: call    PrintError
0x569BD2: add     esp, 0Ch
0x569BD5: cmp     byte ptr [esi], 4
0x569BD8: jmp     loc_569CD7
0x569BDD: mov     eax, dword ptr [esp+0Ch+ArgList]
0x569BE1: push    0; int
0x569BE3: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x569BE8: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x569BED: push    0; int
0x569BEF: push    eax; a1
0x569BF0: call    TESForm_LookupByFormID
0x569BF5: add     esp, 4
0x569BF8: push    eax; void *
0x569BF9: call    OblivionDynamicCast
0x569BFE: add     esp, 14h
0x569C01: test    eax, eax
0x569C03: jz      short loc_569C17
0x569C05: cmp     byte ptr [esi], 1
0x569C08: jnz     loc_569CE0
0x569C0E: pop     edi
0x569C0F: mov     [esi+8], eax
0x569C12: pop     esi
0x569C13: pop     ecx
0x569C14: retn    4
0x569C17: mov     ecx, edi
0x569C19: call    TESForm__GetEditorNameLen
0x569C1E: test    eax, eax
0x569C20: jz      short loc_569C49
0x569C22: mov     edx, [edi]
0x569C24: mov     eax, [edx+0D4h]
0x569C2A: mov     ecx, edi
0x569C2C: call    eax
0x569C2E: mov     ecx, dword ptr [esp+0Ch+ArgList]
0x569C32: push    eax
0x569C33: push    ecx; ArgList
0x569C34: push    offset aUnableToFin_30; "Unable to find Package Location Cell (%"...
0x569C39: call    PrintError
0x569C3E: add     esp, 0Ch
0x569C41: cmp     byte ptr [esi], 1
0x569C44: jmp     loc_569CD7
0x569C49: mov     edx, [edi+0Ch]
0x569C4C: mov     eax, dword ptr [esp+0Ch+ArgList]
0x569C50: push    edx
0x569C51: push    eax; ArgList
0x569C52: push    offset aUnableToFin_31; "Unable to find Package Location Cell (%"...
0x569C57: call    PrintError
0x569C5C: add     esp, 0Ch
0x569C5F: cmp     byte ptr [esi], 1
0x569C62: jmp     short loc_569CD7
0x569C64: mov     ecx, dword ptr [esp+0Ch+ArgList]
0x569C68: push    0; int
0x569C6A: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x569C6F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x569C74: push    0; int
0x569C76: push    ecx; a1
0x569C77: call    TESForm_LookupByFormID
0x569C7C: add     esp, 4
0x569C7F: push    eax; void *
0x569C80: call    OblivionDynamicCast
0x569C85: add     esp, 14h
0x569C88: test    eax, eax
0x569C8A: jz      short loc_569C9A
0x569C8C: cmp     byte ptr [esi], 0
0x569C8F: jnz     short loc_569CE0
0x569C91: pop     edi
0x569C92: mov     [esi+8], eax
0x569C95: pop     esi
0x569C96: pop     ecx
0x569C97: retn    4
0x569C9A: mov     ecx, edi
0x569C9C: call    TESForm__GetEditorNameLen
0x569CA1: test    eax, eax
0x569CA3: jz      short loc_569CBE
0x569CA5: mov     edx, [edi]
0x569CA7: mov     eax, [edx+0D4h]
0x569CAD: mov     ecx, edi
0x569CAF: call    eax
0x569CB1: mov     ecx, dword ptr [esp+0Ch+ArgList]
0x569CB5: push    eax
0x569CB6: push    ecx
0x569CB7: push    offset aUnableToFin_32; "Unable to find Package Location Referen"...
0x569CBC: jmp     short loc_569CCC
0x569CBE: mov     edx, [edi+0Ch]
0x569CC1: mov     eax, dword ptr [esp+0Ch+ArgList]
0x569CC5: push    edx
0x569CC6: push    eax; ArgList
0x569CC7: push    offset aUnableToFin_33; "Unable to find Package Location Referen"...
0x569CCC: call    PrintError
0x569CD1: add     esp, 0Ch
0x569CD4: cmp     byte ptr [esi], 0
0x569CD7: jnz     short loc_569CE0
0x569CD9: mov     dword ptr [esi+8], 0
0x569CE0: pop     edi
0x569CE1: pop     esi
0x569CE2: pop     ecx
0x569CE3: retn    4
