0x9FED80: push    offset SunDamageEffect_Make; Verified (Oblivion): ActiveEffect_Register_SUDG_Factory passes FourCC SUDG (0x47445553) and SunDamageEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FED85: push    47445553h; effectCode
0x9FED8A: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FED8F: add     esp, 8
0x9FED92: mov     byte ptr unk_B3C0E8, al
0x9FED97: retn
