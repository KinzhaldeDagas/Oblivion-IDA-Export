0x415ACD: mov     eax, [esi+8Ch]
0x415AD3: test    eax, eax
0x415AD5: mov     [esp+a1.vtbl], eax
0x415AD9: jz      short EffectSetting_LinkForm___ResolveEffectShader
0x415ADB: push    0FFFFFFFFh; a2
0x415ADD: mov     ecx, esi; this
0x415ADF: call    TESForm_GetOverrideFile
0x415AE4: push    eax; a2
0x415AE5: lea     ecx, [esp+4+a1]
0x415AE9: push    ecx; a1
0x415AEA: call    TESForm_ResolveFormID
0x415AEF: mov     edx, [esp+8+a1.vtbl]
0x415AF3: add     esp, 8
0x415AF6: push    0; int
0x415AF8: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x415AFD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x415B02: push    0; int
0x415B04: push    edx; a1
0x415B05: call    TESForm_LookupByFormID
0x415B0A: add     esp, 4
0x415B0D: push    eax; void *
0x415B0E: call    OblivionDynamicCast
0x415B13: add     esp, 14h
0x415B16: mov     [esi+8Ch], eax
