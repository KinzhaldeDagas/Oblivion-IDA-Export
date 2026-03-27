0x4159E0: mov     eax, [esi+80h]
0x4159E6: test    eax, eax
0x4159E8: mov     [esp+a1.vtbl], eax
0x4159EC: jz      short EffectSetting_LinkForm___ResolveBoltSound
0x4159EE: push    0FFFFFFFFh; a2
0x4159F0: mov     ecx, esi; this
0x4159F2: call    TESForm_GetOverrideFile
0x4159F7: push    eax; a2
0x4159F8: lea     ecx, [esp+4+a1]
0x4159FC: push    ecx; a1
0x4159FD: call    TESForm_ResolveFormID
0x415A02: mov     edx, [esp+8+a1.vtbl]
0x415A06: add     esp, 8
0x415A09: push    0; int
0x415A0B: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x415A10: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x415A15: push    0; int
0x415A17: push    edx; a1
0x415A18: call    TESForm_LookupByFormID
0x415A1D: add     esp, 4
0x415A20: push    eax; void *
0x415A21: call    OblivionDynamicCast
0x415A26: add     esp, 14h
0x415A29: mov     [esi+80h], eax
