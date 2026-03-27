0x69DEF7: mov     eax, [esp+a1]
0x69DEFB: push    eax; a1
0x69DEFC: call    TESForm_LookupByFormID
0x69DF01: push    0; int
0x69DF03: push    offset ??_R0?AVTESObjectLIGH@@@8; struct TypeDescriptor *
0x69DF08: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x69DF0D: push    0; int
0x69DF0F: push    eax; void *
0x69DF10: call    OblivionDynamicCast
0x69DF15: add     esp, 18h
0x69DF18: test    eax, eax
0x69DF1A: mov     [edi+4], eax
0x69DF1D: jz      loc_69E08E
