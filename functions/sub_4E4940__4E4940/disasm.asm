0x4E4940: mov     eax, [esp+cloneMap]
0x4E4944: push    0; int
0x4E4946: push    offset ??_R0?AVTESPathGrid@@@8; struct TypeDescriptor *
0x4E494B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4E4950: push    0; int
0x4E4952: push    eax; cloneMap
0x4E4953: push    0; a2
0x4E4955: call    TESForm_Clone
0x4E495A: push    eax; void *
0x4E495B: call    OblivionDynamicCast
0x4E4960: add     esp, 14h
0x4E4963: retn    8
