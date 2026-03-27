0x4ED830: push    ecx
0x4ED831: push    esi
0x4ED832: mov     esi, ecx
0x4ED834: mov     eax, [esi+8]
0x4ED837: shr     eax, 3
0x4ED83A: test    al, 1
0x4ED83C: jnz     loc_4ED941
0x4ED842: mov     eax, [esi+38h]
0x4ED845: test    eax, eax
0x4ED847: mov     dword ptr [esp+8+ArgList], eax
0x4ED84B: jz      short loc_4ED8B0
0x4ED84D: push    0FFFFFFFFh; a2
0x4ED84F: call    TESForm_GetOverrideFile
0x4ED854: push    eax; a2
0x4ED855: lea     ecx, [esp+0Ch+ArgList]
0x4ED859: push    ecx; a1
0x4ED85A: call    TESForm_ResolveFormID
0x4ED85F: mov     edx, dword ptr [esp+10h+ArgList]
0x4ED863: add     esp, 8
0x4ED866: push    0; int
0x4ED868: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x4ED86D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4ED872: push    0; int
0x4ED874: push    edx; a1
0x4ED875: call    TESForm_LookupByFormID
0x4ED87A: add     esp, 4
0x4ED87D: push    eax; void *
0x4ED87E: call    OblivionDynamicCast
0x4ED883: add     esp, 14h
0x4ED886: test    eax, eax
0x4ED888: mov     [esi+38h], eax
0x4ED88B: jnz     short loc_4ED8B0
0x4ED88D: mov     eax, [esi+0Ch]
0x4ED890: push    eax
0x4ED891: mov     eax, [esi]
0x4ED893: mov     edx, [eax+0D4h]
0x4ED899: mov     ecx, esi
0x4ED89B: call    edx
0x4ED89D: push    eax
0x4ED89E: mov     eax, dword ptr [esp+10h+ArgList]
0x4ED8A2: push    eax; ArgList
0x4ED8A3: push    offset aCouldNotFindSo; "Could not find sound (%08X) for water t"...
0x4ED8A8: call    PrintError
0x4ED8AD: add     esp, 10h
0x4ED8B0: push    ebx
0x4ED8B1: push    edi
0x4ED8B2: lea     edi, [esi+0A0h]
0x4ED8B8: mov     ebx, 3
0x4ED8BD: lea     ecx, [ecx+0]
0x4ED8C0: mov     eax, [edi]
0x4ED8C2: test    eax, eax
0x4ED8C4: mov     dword ptr [esp+10h+ArgList], eax
0x4ED8C8: jz      short loc_4ED92E
0x4ED8CA: push    0FFFFFFFFh; a2
0x4ED8CC: mov     ecx, esi; this
0x4ED8CE: call    TESForm_GetOverrideFile
0x4ED8D3: push    eax; a2
0x4ED8D4: lea     ecx, [esp+14h+ArgList]
0x4ED8D8: push    ecx; a1
0x4ED8D9: call    TESForm_ResolveFormID
0x4ED8DE: mov     edx, dword ptr [esp+18h+ArgList]
0x4ED8E2: add     esp, 8
0x4ED8E5: push    0; int
0x4ED8E7: push    offset ??_R0?AVTESWaterForm@@@8; struct TypeDescriptor *
0x4ED8EC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4ED8F1: push    0; int
0x4ED8F3: push    edx; a1
0x4ED8F4: call    TESForm_LookupByFormID
0x4ED8F9: add     esp, 4
0x4ED8FC: push    eax; void *
0x4ED8FD: call    OblivionDynamicCast
0x4ED902: add     esp, 14h
0x4ED905: test    eax, eax
0x4ED907: mov     [edi], eax
0x4ED909: jnz     short loc_4ED92E
0x4ED90B: mov     eax, [esi+0Ch]
0x4ED90E: push    eax
0x4ED90F: mov     eax, [esi]
0x4ED911: mov     edx, [eax+0D4h]
0x4ED917: mov     ecx, esi
0x4ED919: call    edx
0x4ED91B: push    eax
0x4ED91C: mov     eax, dword ptr [esp+18h+ArgList]
0x4ED920: push    eax; ArgList
0x4ED921: push    offset aCouldNotFindWa; "Could not find WaterForm (%08X) for wat"...
0x4ED926: call    PrintError
0x4ED92B: add     esp, 10h
0x4ED92E: add     edi, 4
0x4ED931: sub     ebx, 1
0x4ED934: jnz     short loc_4ED8C0
0x4ED936: push    1; a2
0x4ED938: mov     ecx, esi; this
0x4ED93A: call    TESForm_SetIsLinked
0x4ED93F: pop     edi
0x4ED940: pop     ebx
0x4ED941: pop     esi
0x4ED942: pop     ecx
0x4ED943: retn
