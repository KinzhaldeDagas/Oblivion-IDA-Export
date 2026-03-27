0x5021E0: mov     eax, [esp+arg_8]
0x5021E4: test    eax, eax
0x5021E6: jz      short loc_50220D
0x5021E8: push    0; int
0x5021EA: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x5021EF: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x5021F4: push    0; int
0x5021F6: push    eax; void *
0x5021F7: call    OblivionDynamicCast
0x5021FC: add     esp, 14h
0x5021FF: test    eax, eax
0x502201: jz      short loc_50220D
0x502203: push    0
0x502205: lea     ecx, [eax+68h]
0x502208: call    MagicTarget_RemoveNonPersistentEffects
0x50220D: mov     al, 1
0x50220F: retn
