0x416000: push    ebx
0x416001: mov     ebx, [esp+4+a2]
0x416005: push    esi
0x416006: push    edi
0x416007: push    0; int
0x416009: push    offset ??_R0?AVEffectSetting@@@8; struct TypeDescriptor *
0x41600E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x416013: push    0; int
0x416015: push    ebx; void *
0x416016: mov     esi, ecx
0x416018: call    OblivionDynamicCast
0x41601D: mov     edi, eax
0x41601F: add     esp, 14h
0x416022: test    edi, edi
0x416024: jz      EffectSetting_CopyFrom___Done
0x41602A: push    ebx; a2
0x41602B: mov     ecx, esi; this
0x41602D: call    TESForm_CopyAllComponentsFrom
