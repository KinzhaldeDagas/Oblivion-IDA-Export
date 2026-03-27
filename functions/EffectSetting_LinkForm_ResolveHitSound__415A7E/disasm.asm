0x415A7E: mov     eax, [esi+88h]
0x415A84: test    eax, eax
0x415A86: mov     [esp+a1.vtbl], eax
0x415A8A: jz      short EffectSetting_LinkForm___ResolveAreaSound
0x415A8C: push    0FFFFFFFFh; a2
0x415A8E: mov     ecx, esi; this
0x415A90: call    TESForm_GetOverrideFile
0x415A95: push    eax; a2
0x415A96: lea     edx, [esp+4+a1]
0x415A9A: push    edx; a1
0x415A9B: call    TESForm_ResolveFormID
0x415AA0: mov     eax, [esp+8+a1.vtbl]
0x415AA4: add     esp, 8
0x415AA7: push    0; int
0x415AA9: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x415AAE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x415AB3: push    0; int
0x415AB5: push    eax; a1
0x415AB6: call    TESForm_LookupByFormID
0x415ABB: add     esp, 4
0x415ABE: push    eax; void *
0x415ABF: call    OblivionDynamicCast
0x415AC4: add     esp, 14h
0x415AC7: mov     [esi+88h], eax
