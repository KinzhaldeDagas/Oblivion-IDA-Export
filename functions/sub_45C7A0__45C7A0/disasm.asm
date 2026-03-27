0x45C7A0: mov     eax, ds:0B33398h
0x45C7A5: push    esi
0x45C7A6: mov     esi, [eax+10h]
0x45C7A9: push    edi; ArgList
0x45C7AA: mov     edi, ecx
0x45C7AC: call    dword ptr ds:0A2808Ch
0x45C7B2: cmp     eax, esi
0x45C7B4: jnz     short loc_45C7BB
0x45C7B6: mov     al, [edi+18h]
0x45C7B9: jmp     short loc_45C7C1
0x45C7BB: mov     eax, [edi+18h]
0x45C7BE: shr     eax, 12h
0x45C7C1: and     al, 1
0x45C7C3: test    al, al
0x45C7C5: jnz     short loc_45C7D4
0x45C7C7: push    offset aDeleteformWasC; "DeleteForm() was called, but the game i"...
0x45C7CC: call    PrintError
0x45C7D1: add     esp, 4
0x45C7D4: mov     esi, [esp+8+arg_0]
0x45C7D8: mov     ecx, [esi+0Ch]
0x45C7DB: push    1
0x45C7DD: push    ecx
0x45C7DE: mov     ecx, [edi]
0x45C7E0: call    sub_452DF0
0x45C7E5: push    0; int
0x45C7E7: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x45C7EC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45C7F1: push    0; int
0x45C7F3: push    esi; void *
0x45C7F4: call    OblivionDynamicCast
0x45C7F9: mov     edx, [esi+8]
0x45C7FC: shr     edx, 0Eh
0x45C7FF: add     esp, 14h
0x45C802: test    dl, 1
0x45C805: jnz     short loc_45C84C
0x45C807: test    eax, eax
0x45C809: jnz     short loc_45C84C
0x45C80B: push    1; a3
0x45C80D: push    eax; a2
0x45C80E: mov     ecx, esi; this
0x45C810: call    TESForm_SetFormID
0x45C815: mov     ecx, esi; this
0x45C817: call    TESForm_RemoveFromGlobalLists
0x45C81C: mov     eax, [esi]
0x45C81E: mov     edx, [eax+0D8h]
0x45C824: push    offset EmptyString
0x45C829: mov     ecx, esi
0x45C82B: call    edx
0x45C82D: lea     ecx, [edi+30h]
0x45C830: mov     eax, ecx
0x45C832: test    eax, eax
0x45C834: jz      short loc_45C841
0x45C836: cmp     [eax], esi
0x45C838: jz      short loc_45C861
0x45C83A: mov     eax, [eax+4]
0x45C83D: test    eax, eax
0x45C83F: jnz     short loc_45C836
0x45C841: push    esi
0x45C842: call    BSSimpleList_PushFront
0x45C847: pop     edi
0x45C848: pop     esi
0x45C849: retn    4
0x45C84C: mov     ecx, ds:0B33A98h
0x45C852: push    1; a3
0x45C854: call    TESDataHandler_ReserveNextFormID
0x45C859: push    eax; a2
0x45C85A: mov     ecx, esi; this
0x45C85C: call    TESForm_SetFormID
0x45C861: pop     edi
0x45C862: pop     esi
0x45C863: retn    4
