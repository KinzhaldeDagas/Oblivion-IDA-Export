0x415B65: mov     eax, [esi+7Ch]
0x415B68: test    eax, eax
0x415B6A: mov     [esp+a1.vtbl], eax
0x415B6E: jz      short EffectSetting_LinkForm___SetFormsResolvedFlag
0x415B70: push    0FFFFFFFFh; a2
0x415B72: mov     ecx, esi; this
0x415B74: call    TESForm_GetOverrideFile
0x415B79: push    eax; a2
0x415B7A: lea     edx, [esp+4+a1]
0x415B7E: push    edx; a1
0x415B7F: call    TESForm_ResolveFormID
0x415B84: mov     eax, [esp+8+a1.vtbl]
0x415B88: add     esp, 8
0x415B8B: push    0; int
0x415B8D: push    offset ??_R0?AVTESEffectShader@@@8; struct TypeDescriptor *
0x415B92: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x415B97: push    0; int
0x415B99: push    eax; a1
0x415B9A: call    TESForm_LookupByFormID
0x415B9F: add     esp, 4
0x415BA2: push    eax; void *
0x415BA3: call    OblivionDynamicCast
0x415BA8: add     esp, 14h
0x415BAB: mov     [esi+7Ch], eax
