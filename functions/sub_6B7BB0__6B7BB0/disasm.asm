0x6B7BB0: push    esi
0x6B7BB1: mov     esi, ecx
0x6B7BB3: mov     eax, [esi+18h]
0x6B7BB6: test    eax, eax
0x6B7BB8: jz      short loc_6B7BDD
0x6B7BBA: push    0; int
0x6B7BBC: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x6B7BC1: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6B7BC6: push    0; int
0x6B7BC8: push    eax; a1
0x6B7BC9: call    TESForm_LookupByFormID
0x6B7BCE: add     esp, 4
0x6B7BD1: push    eax; void *
0x6B7BD2: call    OblivionDynamicCast
0x6B7BD7: add     esp, 14h
0x6B7BDA: mov     [esi+18h], eax
0x6B7BDD: pop     esi
0x6B7BDE: retn
