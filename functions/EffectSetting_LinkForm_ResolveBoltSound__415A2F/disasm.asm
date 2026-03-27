0x415A2F: mov     eax, [esi+84h]
0x415A35: test    eax, eax
0x415A37: mov     [esp+a1.vtbl], eax
0x415A3B: jz      short EffectSetting_LinkForm___ResolveHitSound
0x415A3D: push    0FFFFFFFFh; a2
0x415A3F: mov     ecx, esi; this
0x415A41: call    TESForm_GetOverrideFile
0x415A46: push    eax; a2
0x415A47: lea     eax, [esp+4+a1]
0x415A4B: push    eax; a1
0x415A4C: call    TESForm_ResolveFormID
0x415A51: mov     ecx, [esp+8+a1.vtbl]
0x415A55: add     esp, 8
0x415A58: push    0; int
0x415A5A: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x415A5F: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x415A64: push    0; int
0x415A66: push    ecx; a1
0x415A67: call    TESForm_LookupByFormID
0x415A6C: add     esp, 4
0x415A6F: push    eax; void *
0x415A70: call    OblivionDynamicCast
0x415A75: add     esp, 14h
0x415A78: mov     [esi+84h], eax
