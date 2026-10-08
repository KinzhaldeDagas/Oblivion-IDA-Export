0x415B1C: mov     eax, [esi+78h]; Verified (Oblivion): EffectSetting::effectShader (+0x78) resolves through FormID lookup and a TESForm-to-TESEffectShader RTTI cast.
0x415B1F: test    eax, eax
0x415B21: mov     [esp+a1.vtbl], eax
0x415B25: jz      short EffectSetting_LinkForm___ResolveEnchantShader; Verified (Oblivion): the adjacent EffectSetting::enchantEffect at +0x7C is separately resolved through the TESEffectShader RTTI path; shader hit-effect constructors read +0x78, not this enchant-only slot.
0x415B27: push    0FFFFFFFFh; a2
0x415B29: mov     ecx, esi; this
0x415B2B: call    TESForm_GetOverrideFile; TESForm override-file selector. With a2=-1 it walks the entire mod-reference list and returns the last non-null TESFile; TESTopicInfo lazy responses therefore read only the winning override file.
0x415B30: push    eax; a2
0x415B31: lea     eax, [esp+4+a1]
0x415B35: push    eax; a1
0x415B36: call    TESForm_ResolveFormID; Resolves a plugin-record FormID to current load order. During save loading it uses modRefIDTable; otherwise the serialized high byte selects a master, falling back to the current file, while preserving the low 24-bit object ID.
0x415B3B: mov     ecx, [esp+8+a1.vtbl]
0x415B3F: add     esp, 8
0x415B42: push    0; int
0x415B44: push    offset ??_R0?AVTESEffectShader@@@8; struct TypeDescriptor *
0x415B49: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x415B4E: push    0; int
0x415B50: push    ecx; a1
0x415B51: call    TESForm_LookupByFormID; OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
0x415B56: add     esp, 4
0x415B59: push    eax; void *
0x415B5A: call    OblivionDynamicCast
0x415B5F: add     esp, 14h
0x415B62: mov     [esi+78h], eax
