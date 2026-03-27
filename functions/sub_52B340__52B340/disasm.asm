0x52B340: push    ecx
0x52B341: push    ebx
0x52B342: push    esi
0x52B343: mov     esi, [esp+0Ch+arg_0]
0x52B347: push    edi
0x52B348: mov     edi, ecx
0x52B34A: mov     eax, [edi+0Ch]
0x52B34D: test    eax, eax
0x52B34F: mov     ecx, esi; this
0x52B351: jz      short loc_52B3BC
0x52B353: push    0FFFFFFFFh; a2
0x52B355: mov     dword ptr [esp+14h+ArgList], eax
0x52B359: call    TESForm_GetOverrideFile
0x52B35E: push    eax; a2
0x52B35F: lea     eax, [esp+14h+ArgList]
0x52B363: push    eax; a1
0x52B364: call    TESForm_ResolveFormID
0x52B369: mov     ecx, dword ptr [esp+18h+ArgList]
0x52B36D: add     esp, 8
0x52B370: push    0; int
0x52B372: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x52B377: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x52B37C: push    0; int
0x52B37E: push    ecx; a1
0x52B37F: call    TESForm_LookupByFormID
0x52B384: add     esp, 4
0x52B387: push    eax; void *
0x52B388: call    OblivionDynamicCast
0x52B38D: add     esp, 14h
0x52B390: test    eax, eax
0x52B392: mov     [edi+0Ch], eax
0x52B395: jnz     short loc_52B3D8
0x52B397: mov     edx, [esi]
0x52B399: mov     eax, [edx+0D4h]
0x52B39F: mov     ebx, [esi+0Ch]
0x52B3A2: mov     ecx, esi
0x52B3A4: call    eax
0x52B3A6: mov     ecx, dword ptr [esp+10h+ArgList]
0x52B3AA: push    eax
0x52B3AB: push    ebx
0x52B3AC: push    ecx; ArgList
0x52B3AD: push    offset aCouldNotFindTa; "Could not find target reference (%08X) "...
0x52B3B2: call    PrintError
0x52B3B7: add     esp, 10h
0x52B3BA: jmp     short loc_52B3D8
0x52B3BC: mov     edx, [esi]
0x52B3BE: mov     eax, [edx+0D4h]
0x52B3C4: mov     ebx, [esi+0Ch]
0x52B3C7: call    eax
0x52B3C9: push    eax
0x52B3CA: push    ebx; ArgList
0x52B3CB: push    offset aNoReferenceOnT; "No reference on target for quest (%08X)"...
0x52B3D0: call    PrintError
0x52B3D5: add     esp, 0Ch
0x52B3D8: lea     ecx, [edi+4]
0x52B3DB: test    ecx, ecx
0x52B3DD: jz      short loc_52B3E5
0x52B3DF: push    esi
0x52B3E0: call    sub_56A480
0x52B3E5: pop     edi
0x52B3E6: pop     esi
0x52B3E7: pop     ebx
0x52B3E8: pop     ecx
0x52B3E9: retn    4
