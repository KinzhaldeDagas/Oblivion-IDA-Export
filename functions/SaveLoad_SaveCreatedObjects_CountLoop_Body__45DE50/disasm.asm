0x45DE50: mov     eax, [edi]
0x45DE52: push    eax; a1
0x45DE53: call    TESForm_LookupByFormID
0x45DE58: mov     esi, eax
0x45DE5A: add     esp, 4
0x45DE5D: test    esi, esi
0x45DE5F: jz      short SaveLoad_SaveCreatedObjects___CountLoop_Next
0x45DE61: push    0; int
0x45DE63: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x45DE68: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45DE6D: push    0; int
0x45DE6F: push    esi; void *
0x45DE70: call    OblivionDynamicCast
0x45DE75: push    0; int
0x45DE77: push    offset ??_R0?AVSpellItem@@@8; struct TypeDescriptor *
0x45DE7C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45DE81: push    0; int
0x45DE83: push    esi; void *
0x45DE84: mov     ebp, eax
0x45DE86: call    OblivionDynamicCast
0x45DE8B: push    0; int
0x45DE8D: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x45DE92: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45DE97: push    0; int
0x45DE99: push    esi; void *
0x45DE9A: mov     ebx, eax
0x45DE9C: call    OblivionDynamicCast
0x45DEA1: add     esp, 3Ch
0x45DEA4: test    eax, eax
0x45DEA6: jz      short loc_45DEC7
0x45DEA8: mov     eax, [eax+4]
0x45DEAB: test    eax, eax
0x45DEAD: jz      short SaveLoad_SaveCreatedObjects___CountLoop_Next_
0x45DEAF: mov     eax, [eax+0Ch]
0x45DEB2: mov     ecx, ds:0B33A98h
0x45DEB8: push    eax; _DWORD
0x45DEB9: call    TESDataHandler_IsFormIDCreated?
0x45DEBE: test    al, al
0x45DEC0: jz      short loc_45DEC7
0x45DEC2: add     [esp+arg_C], 1
0x45DEC7: test    ebp, ebp
0x45DEC9: jnz     short loc_45DECF
0x45DECB: test    ebx, ebx
0x45DECD: jz      short SaveLoad_SaveCreatedObjects___CountLoop_Next_
0x45DECF: add     [esp+arg_C], 1
