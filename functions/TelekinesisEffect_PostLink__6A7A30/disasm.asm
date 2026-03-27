0x6A7A30: mov     eax, [esp+arg_0]
0x6A7A34: push    esi
0x6A7A35: push    eax
0x6A7A36: mov     esi, ecx
0x6A7A38: call    ValueModifierEffect_PostLink
0x6A7A3D: mov     eax, [esi+48h]
0x6A7A40: test    eax, eax
0x6A7A42: jz      short loc_6A7A67
0x6A7A44: push    0; int
0x6A7A46: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x6A7A4B: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x6A7A50: push    0; int
0x6A7A52: push    eax; a1
0x6A7A53: call    TESForm_LookupByFormID
0x6A7A58: add     esp, 4
0x6A7A5B: push    eax; void *
0x6A7A5C: call    OblivionDynamicCast
0x6A7A61: add     esp, 14h
0x6A7A64: mov     [esi+48h], eax
0x6A7A67: cmp     dword ptr [esi+48h], 0
0x6A7A6B: jz      short loc_6A7A74
0x6A7A6D: mov     ecx, esi
0x6A7A6F: call    sub_6A7560
0x6A7A74: mov     byte ptr [esi+4Dh], 1
0x6A7A78: pop     esi
0x6A7A79: retn    4
