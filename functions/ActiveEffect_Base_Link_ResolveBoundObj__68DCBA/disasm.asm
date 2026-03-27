0x68DCBA: test    esi, esi
0x68DCBC: mov     eax, [edi+30h]
0x68DCBF: jz      short ActiveEffect_Base_Link___ResolveHitEffects
0x68DCC1: push    0; int
0x68DCC3: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x68DCC8: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x68DCCD: push    0; int
0x68DCCF: push    eax; a1
0x68DCD0: call    TESForm_LookupByFormID
0x68DCD5: add     esp, 4
0x68DCD8: push    eax; void *
0x68DCD9: call    OblivionDynamicCast
0x68DCDE: add     esp, 14h
0x68DCE1: mov     [edi+30h], eax
