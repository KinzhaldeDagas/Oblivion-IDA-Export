0x4695D0: push    ecx
0x4695D1: push    esi
0x4695D2: push    edi
0x4695D3: mov     edi, [esp+0Ch+arg_0]
0x4695D7: mov     esi, ecx
0x4695D9: mov     eax, [esi+4]
0x4695DC: push    0FFFFFFFFh; a2
0x4695DE: mov     ecx, edi; this
0x4695E0: mov     dword ptr [esp+10h+ArgList], eax
0x4695E4: call    TESForm_GetOverrideFile
0x4695E9: push    eax; a2
0x4695EA: lea     ecx, [esp+10h+ArgList]
0x4695EE: push    ecx; a1
0x4695EF: call    TESForm_ResolveFormID
0x4695F4: mov     edx, dword ptr [esp+14h+ArgList]
0x4695F8: add     esp, 8
0x4695FB: push    0; int
0x4695FD: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x469602: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x469607: push    0; int
0x469609: push    edx; a1
0x46960A: call    TESForm_LookupByFormID
0x46960F: add     esp, 4
0x469612: push    eax; void *
0x469613: call    OblivionDynamicCast
0x469618: add     esp, 14h
0x46961B: test    eax, eax
0x46961D: mov     [esi+4], eax
0x469620: jnz     short loc_469684
0x469622: test    edi, edi
0x469624: jz      short loc_469672
0x469626: mov     ecx, edi
0x469628: call    TESForm__GetEditorNameLen
0x46962D: test    eax, eax
0x46962F: jz      short loc_469656
0x469631: mov     eax, [edi]
0x469633: mov     edx, [eax+0D4h]
0x469639: mov     ecx, edi
0x46963B: call    edx
0x46963D: push    eax
0x46963E: mov     eax, dword ptr [esp+10h+ArgList]
0x469642: push    eax; ArgList
0x469643: push    offset aUnableToFindCo; "Unable to find container object (%08X) "...
0x469648: call    PrintError
0x46964D: add     esp, 0Ch
0x469650: pop     edi
0x469651: pop     esi
0x469652: pop     ecx
0x469653: retn    4
0x469656: mov     ecx, [edi+0Ch]
0x469659: mov     edx, dword ptr [esp+0Ch+ArgList]
0x46965D: push    ecx
0x46965E: push    edx; ArgList
0x46965F: push    offset aUnableToFind_9; "Unable to find container object (%08X) "...
0x469664: call    PrintError
0x469669: add     esp, 0Ch
0x46966C: pop     edi
0x46966D: pop     esi
0x46966E: pop     ecx
0x46966F: retn    4
0x469672: mov     eax, dword ptr [esp+0Ch+ArgList]
0x469676: push    eax; ArgList
0x469677: push    offset aUnableToFin_10; "Unable to find container object (%08X) "...
0x46967C: call    PrintError
0x469681: add     esp, 8
0x469684: pop     edi
0x469685: pop     esi
0x469686: pop     ecx
0x469687: retn    4
