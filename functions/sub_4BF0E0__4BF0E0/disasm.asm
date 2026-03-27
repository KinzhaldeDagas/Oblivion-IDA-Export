0x4BF0E0: mov     eax, [esp+cloneMap]
0x4BF0E4: push    0; int
0x4BF0E6: push    offset ??_R0?AVTESObjectLAND@@@8; struct TypeDescriptor *
0x4BF0EB: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4BF0F0: push    0; int
0x4BF0F2: push    eax; cloneMap
0x4BF0F3: push    0; a2
0x4BF0F5: call    TESForm_Clone
0x4BF0FA: push    eax; void *
0x4BF0FB: call    OblivionDynamicCast
0x4BF100: add     esp, 14h
0x4BF103: retn    8
