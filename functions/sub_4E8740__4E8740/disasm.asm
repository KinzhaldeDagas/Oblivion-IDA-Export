0x4E8740: mov     eax, [esp+cloneMap]
0x4E8744: push    0; int
0x4E8746: push    offset ??_R0?AVTESRoad@@@8; struct TypeDescriptor *
0x4E874B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4E8750: push    0; int
0x4E8752: push    eax; cloneMap
0x4E8753: push    0; a2
0x4E8755: call    TESForm_Clone
0x4E875A: push    eax; void *
0x4E875B: call    OblivionDynamicCast
0x4E8760: add     esp, 14h
0x4E8763: retn    8
