0x45DF33: mov     ecx, [esp+arg_10]
0x45DF37: mov     ebp, [ecx]
0x45DF39: push    ebp; a1
0x45DF3A: mov     [esp+4+arg_14], ebp
0x45DF3E: call    TESForm_LookupByFormID
0x45DF43: mov     edi, eax
0x45DF45: add     esp, 4
0x45DF48: test    edi, edi
0x45DF4A: jz      SaveLoad_SaveCreatedObjects___FormLoop_Next
0x45DF50: push    0; int
0x45DF52: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x45DF57: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45DF5C: push    0; int
0x45DF5E: push    edi; void *
0x45DF5F: call    OblivionDynamicCast
0x45DF64: push    0; int
0x45DF66: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x45DF6B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45DF70: push    0; int
0x45DF72: push    edi; void *
0x45DF73: mov     esi, eax
0x45DF75: call    OblivionDynamicCast
0x45DF7A: add     esp, 28h
0x45DF7D: test    esi, esi
0x45DF7F: jnz     short SaveLoad_SaveCreatedObjects___CheckForEnch
0x45DF81: test    eax, eax
0x45DF83: jz      SaveLoad_SaveCreatedObjects___FormLoop_Next
