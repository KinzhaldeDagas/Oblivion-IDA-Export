0x4AF950: push    ecx
0x4AF951: push    esi
0x4AF952: mov     esi, ecx
0x4AF954: mov     eax, [esi+8]
0x4AF957: shr     eax, 3
0x4AF95A: test    al, 1
0x4AF95C: jnz     loc_4AFA69
0x4AF962: mov     eax, [esi+40h]
0x4AF965: test    eax, eax
0x4AF967: jz      short loc_4AF9D0
0x4AF969: push    0FFFFFFFFh; a2
0x4AF96B: mov     dword ptr [esp+0Ch+ArgList], eax
0x4AF96F: call    TESForm_GetOverrideFile
0x4AF974: push    eax; a2
0x4AF975: lea     ecx, [esp+0Ch+ArgList]
0x4AF979: push    ecx; a1
0x4AF97A: call    TESForm_ResolveFormID
0x4AF97F: mov     edx, dword ptr [esp+10h+ArgList]
0x4AF983: add     esp, 8
0x4AF986: push    0; int
0x4AF988: push    offset ??_R0?AVTESActorBase@@@8; struct TypeDescriptor *
0x4AF98D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4AF992: push    0; int
0x4AF994: push    edx; a1
0x4AF995: call    TESForm_LookupByFormID
0x4AF99A: add     esp, 4
0x4AF99D: push    eax; void *
0x4AF99E: call    OblivionDynamicCast
0x4AF9A3: add     esp, 14h
0x4AF9A6: test    eax, eax
0x4AF9A8: mov     [esi+40h], eax
0x4AF9AB: jnz     short loc_4AF9D0
0x4AF9AD: mov     eax, [esi+0Ch]
0x4AF9B0: push    eax
0x4AF9B1: mov     eax, [esi]
0x4AF9B3: mov     edx, [eax+0D4h]
0x4AF9B9: mov     ecx, esi
0x4AF9BB: call    edx
0x4AF9BD: push    eax
0x4AF9BE: mov     eax, dword ptr [esp+10h+ArgList]
0x4AF9C2: push    eax; ArgList
0x4AF9C3: push    offset aUnableToFindTe; "Unable to find template actorbase (%08X"...
0x4AF9C8: call    PrintError
0x4AF9CD: add     esp, 10h
0x4AF9D0: push    edi
0x4AF9D1: push    esi
0x4AF9D2: lea     ecx, [esi+24h]
0x4AF9D5: call    TESLeveledList_LinkComponent
0x4AF9DA: push    esi
0x4AF9DB: lea     ecx, [esi+34h]
0x4AF9DE: call    TESScriptableForm_Link
0x4AF9E3: lea     edi, [esi+28h]
0x4AF9E6: test    edi, edi
0x4AF9E8: jz      short loc_4AFA5F
0x4AF9EA: push    ebx
0x4AF9EB: jmp     short loc_4AF9F0
0x4AF9ED: align 10h
0x4AF9F0: cmp     dword ptr [edi+4], 0
0x4AF9F4: jnz     short loc_4AF9FB
0x4AF9F6: cmp     dword ptr [edi], 0
0x4AF9F9: jz      short loc_4AFA5E
0x4AF9FB: mov     eax, [edi]
0x4AF9FD: mov     ecx, [eax+4]
0x4AFA00: push    0; int
0x4AFA02: push    offset ??_R0?AVTESActorBase@@@8; struct TypeDescriptor *
0x4AFA07: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4AFA0C: push    0; int
0x4AFA0E: push    ecx; void *
0x4AFA0F: call    OblivionDynamicCast
0x4AFA14: add     esp, 14h
0x4AFA17: test    eax, eax
0x4AFA19: jz      short loc_4AFA57
0x4AFA1B: mov     edx, [eax+28h]
0x4AFA1E: shr     edx, 9
0x4AFA21: not     dl
0x4AFA23: test    dl, 1
0x4AFA26: jz      short loc_4AFA57
0x4AFA28: mov     ecx, [eax+0Ch]
0x4AFA2B: mov     edx, [eax]
0x4AFA2D: mov     ebx, [esi+0Ch]
0x4AFA30: push    ecx
0x4AFA31: mov     ecx, eax
0x4AFA33: mov     eax, [edx+0D4h]
0x4AFA39: call    eax
0x4AFA3B: mov     edx, [esi]
0x4AFA3D: push    eax
0x4AFA3E: mov     eax, [edx+0D4h]
0x4AFA44: push    ebx
0x4AFA45: mov     ecx, esi
0x4AFA47: call    eax
0x4AFA49: push    eax; ArgList
0x4AFA4A: push    offset aLeveledcreatur; "LeveledCreature '%s' (%08X) contains ac"...
0x4AFA4F: call    PrintError
0x4AFA54: add     esp, 14h
0x4AFA57: mov     edi, [edi+4]
0x4AFA5A: test    edi, edi
0x4AFA5C: jnz     short loc_4AF9F0
0x4AFA5E: pop     ebx
0x4AFA5F: push    1; a2
0x4AFA61: mov     ecx, esi; this
0x4AFA63: call    TESForm_SetIsLinked
0x4AFA68: pop     edi
0x4AFA69: pop     esi
0x4AFA6A: pop     ecx
0x4AFA6B: retn
