0x46E220: push    ecx
0x46E221: push    edi
0x46E222: mov     edi, ecx
0x46E224: mov     eax, [edi+4]
0x46E227: test    eax, eax
0x46E229: jz      loc_46E2DD
0x46E22F: push    esi
0x46E230: mov     esi, [esp+0Ch+arg_0]
0x46E234: push    0FFFFFFFFh; a2
0x46E236: mov     ecx, esi; this
0x46E238: mov     dword ptr [esp+10h+ArgList], eax
0x46E23C: call    TESForm_GetOverrideFile
0x46E241: push    eax; a2
0x46E242: lea     eax, [esp+10h+ArgList]
0x46E246: push    eax; a1
0x46E247: call    TESForm_ResolveFormID
0x46E24C: mov     ecx, dword ptr [esp+14h+ArgList]
0x46E250: add     esp, 8
0x46E253: push    0; int
0x46E255: push    offset ??_R0?AVIngredientItem@@@8; struct TypeDescriptor *
0x46E25A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46E25F: push    0; int
0x46E261: push    ecx; a1
0x46E262: call    TESForm_LookupByFormID
0x46E267: add     esp, 4
0x46E26A: push    eax; void *
0x46E26B: call    OblivionDynamicCast
0x46E270: add     esp, 14h
0x46E273: test    eax, eax
0x46E275: mov     [edi+4], eax
0x46E278: jnz     short loc_46E2DC
0x46E27A: test    esi, esi
0x46E27C: jz      short loc_46E2CA
0x46E27E: mov     ecx, esi
0x46E280: call    TESForm__GetEditorNameLen
0x46E285: test    eax, eax
0x46E287: jz      short loc_46E2AE
0x46E289: mov     edx, [esi]
0x46E28B: mov     eax, [edx+0D4h]
0x46E291: mov     ecx, esi
0x46E293: call    eax
0x46E295: mov     ecx, dword ptr [esp+0Ch+ArgList]
0x46E299: push    eax
0x46E29A: push    ecx; ArgList
0x46E29B: push    offset aUnableToFindIn; "Unable to find ingredient (%08X) on own"...
0x46E2A0: call    PrintError
0x46E2A5: add     esp, 0Ch
0x46E2A8: pop     esi
0x46E2A9: pop     edi
0x46E2AA: pop     ecx
0x46E2AB: retn    4
0x46E2AE: mov     edx, [esi+0Ch]
0x46E2B1: mov     eax, dword ptr [esp+0Ch+ArgList]
0x46E2B5: push    edx
0x46E2B6: push    eax; ArgList
0x46E2B7: push    offset aUnableToFin_16; "Unable to find ingredient (%08X) on own"...
0x46E2BC: call    PrintError
0x46E2C1: add     esp, 0Ch
0x46E2C4: pop     esi
0x46E2C5: pop     edi
0x46E2C6: pop     ecx
0x46E2C7: retn    4
0x46E2CA: mov     ecx, dword ptr [esp+0Ch+ArgList]
0x46E2CE: push    ecx; ArgList
0x46E2CF: push    offset aUnableToFin_17; "Unable to find ingredient (%08X) on unk"...
0x46E2D4: call    PrintError
0x46E2D9: add     esp, 8
0x46E2DC: pop     esi
0x46E2DD: pop     edi
0x46E2DE: pop     ecx
0x46E2DF: retn    4
