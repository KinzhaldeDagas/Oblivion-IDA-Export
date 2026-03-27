0x46A0B2: mov     eax, [ebp+4]
0x46A0B5: push    0; int
0x46A0B7: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x46A0BC: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x46A0C1: push    0; int
0x46A0C3: push    eax; void *
0x46A0C4: call    OblivionDynamicCast
0x46A0C9: add     esp, 14h
0x46A0CC: test    eax, eax
0x46A0CE: jz      short loc_46A0D5
0x46A0D0: mov     ebx, [eax+4]
0x46A0D3: jmp     short loc_46A0D7
0x46A0D5: xor     ebx, ebx
0x46A0D7: test    ebx, ebx
0x46A0D9: mov     eax, [ebp+0]
0x46A0DC: mov     [esp+arg_20], ebp
0x46A0E0: jz      TESContainer_CopyContentsToRef___ContentLoop_AddForms
0x46A0E6: test    eax, eax
0x46A0E8: jle     TESContainer_CopyContentsToRef___ContentLoop_Next
0x46A0EE: mov     [esp+arg_24], eax
