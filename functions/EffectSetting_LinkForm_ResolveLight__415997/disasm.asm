0x415997: mov     eax, [esi+70h]
0x41599A: test    eax, eax
0x41599C: mov     [esp+a1.vtbl], eax
0x4159A0: jz      short EffectSetting_LinkForm___ResolveCastingSound
0x4159A2: push    0FFFFFFFFh; a2
0x4159A4: mov     ecx, esi; this
0x4159A6: call    TESForm_GetOverrideFile
0x4159AB: push    eax; a2
0x4159AC: lea     edx, [esp+4+a1]
0x4159B0: push    edx; a1
0x4159B1: call    TESForm_ResolveFormID
0x4159B6: mov     eax, [esp+8+a1.vtbl]
0x4159BA: add     esp, 8
0x4159BD: push    0; int
0x4159BF: push    offset ??_R0?AVTESObjectLIGH@@@8; struct TypeDescriptor *
0x4159C4: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4159C9: push    0; int
0x4159CB: push    eax; a1
0x4159CC: call    TESForm_LookupByFormID
0x4159D1: add     esp, 4
0x4159D4: push    eax; void *
0x4159D5: call    OblivionDynamicCast
0x4159DA: add     esp, 14h
0x4159DD: mov     [esi+70h], eax
