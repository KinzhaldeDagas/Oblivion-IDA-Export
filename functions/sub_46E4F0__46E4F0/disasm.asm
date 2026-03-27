0x46E4F0: push    ecx
0x46E4F1: push    edi
0x46E4F2: mov     edi, ecx
0x46E4F4: mov     eax, [edi+4]
0x46E4F7: test    eax, eax
0x46E4F9: jz      loc_46E5AD
0x46E4FF: push    esi
0x46E500: mov     esi, [esp+0Ch+arg_0]
0x46E504: push    0FFFFFFFFh; a2
0x46E506: mov     ecx, esi; this
0x46E508: mov     dword ptr [esp+10h+ArgList], eax
0x46E50C: call    TESForm_GetOverrideFile
0x46E511: push    eax; a2
0x46E512: lea     eax, [esp+10h+ArgList]
0x46E516: push    eax; a1
0x46E517: call    TESForm_ResolveFormID
0x46E51C: mov     ecx, dword ptr [esp+14h+ArgList]
0x46E520: add     esp, 8
0x46E523: push    0; int
0x46E525: push    offset ??_R0?AVTESRace@@@8; struct TypeDescriptor *
0x46E52A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46E52F: push    0; int
0x46E531: push    ecx; a1
0x46E532: call    TESForm_LookupByFormID
0x46E537: add     esp, 4
0x46E53A: push    eax; void *
0x46E53B: call    OblivionDynamicCast
0x46E540: add     esp, 14h
0x46E543: test    eax, eax
0x46E545: mov     [edi+4], eax
0x46E548: jnz     short loc_46E5AC
0x46E54A: test    esi, esi
0x46E54C: jz      short loc_46E59A
0x46E54E: mov     ecx, esi
0x46E550: call    TESForm__GetEditorNameLen
0x46E555: test    eax, eax
0x46E557: jz      short loc_46E57E
0x46E559: mov     edx, [esi]
0x46E55B: mov     eax, [edx+0D4h]
0x46E561: mov     ecx, esi
0x46E563: call    eax
0x46E565: mov     ecx, dword ptr [esp+0Ch+ArgList]
0x46E569: push    eax
0x46E56A: push    ecx; ArgList
0x46E56B: push    offset aUnableToFin_18; "Unable to find race (%08X) on owner obj"...
0x46E570: call    PrintError
0x46E575: add     esp, 0Ch
0x46E578: pop     esi
0x46E579: pop     edi
0x46E57A: pop     ecx
0x46E57B: retn    4
0x46E57E: mov     edx, [esi+0Ch]
0x46E581: mov     eax, dword ptr [esp+0Ch+ArgList]
0x46E585: push    edx
0x46E586: push    eax; ArgList
0x46E587: push    offset aUnableToFin_19; "Unable to find race (%08X) on owner obj"...
0x46E58C: call    PrintError
0x46E591: add     esp, 0Ch
0x46E594: pop     esi
0x46E595: pop     edi
0x46E596: pop     ecx
0x46E597: retn    4
0x46E59A: mov     ecx, dword ptr [esp+0Ch+ArgList]
0x46E59E: push    ecx; ArgList
0x46E59F: push    offset aUnableToFin_20; "Unable to find race (%08X) on unknown o"...
0x46E5A4: call    PrintError
0x46E5A9: add     esp, 8
0x46E5AC: pop     esi
0x46E5AD: pop     edi
0x46E5AE: pop     ecx
0x46E5AF: retn    4
