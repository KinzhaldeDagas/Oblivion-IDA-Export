0x469570: mov     eax, [esp+arg_0]
0x469574: push    0; int
0x469576: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x46957B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x469580: push    0; int
0x469582: push    eax; void *
0x469583: call    OblivionDynamicCast
0x469588: add     esp, 14h
0x46958B: test    eax, eax
0x46958D: jz      short loc_469593
0x46958F: mov     eax, [eax+4]
0x469592: retn
0x469593: xor     eax, eax
0x469595: retn
