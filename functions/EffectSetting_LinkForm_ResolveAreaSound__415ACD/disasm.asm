0x415ACD: mov     eax, [esi+8Ch]
0x415AD3: test    eax, eax
0x415AD5: mov     [esp+a1.vtbl], eax
0x415AD9: jz      short EffectSetting_LinkForm___ResolveEffectShader; Verified (Oblivion): EffectSetting::effectShader (+0x78) resolves through FormID lookup and a TESForm-to-TESEffectShader RTTI cast.
0x415ADB: push    0FFFFFFFFh; a2
0x415ADD: mov     ecx, esi; this
0x415ADF: call    TESForm_GetOverrideFile; TESForm override-file selector. With a2=-1 it walks the entire mod-reference list and returns the last non-null TESFile; TESTopicInfo lazy responses therefore read only the winning override file.
0x415AE4: push    eax; a2
0x415AE5: lea     ecx, [esp+4+a1]
0x415AE9: push    ecx; a1
0x415AEA: call    TESForm_ResolveFormID; Resolves a plugin-record FormID to current load order. During save loading it uses modRefIDTable; otherwise the serialized high byte selects a master, falling back to the current file, while preserving the low 24-bit object ID.
0x415AEF: mov     edx, [esp+8+a1.vtbl]
0x415AF3: add     esp, 8
0x415AF6: push    0; int
0x415AF8: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x415AFD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x415B02: push    0; int
0x415B04: push    edx; a1
0x415B05: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x415B0A: add     esp, 4
0x415B0D: push    eax; void *
0x415B0E: call    OblivionDynamicCast
0x415B13: add     esp, 14h
0x415B16: mov     [esi+8Ch], eax
