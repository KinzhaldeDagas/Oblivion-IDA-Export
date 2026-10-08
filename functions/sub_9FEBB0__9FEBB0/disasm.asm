0x9FEBB0: push    offset DisintegrateWeaponEffect_Make; Verified (Oblivion): ActiveEffect_Register_DIWE_Factory passes FourCC DIWE (0x45574944) and DisintegrateWeaponEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FEBB5: push    45574944h; effectCode
0x9FEBBA: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FEBBF: add     esp, 8
0x9FEBC2: mov     byte ptr unk_B3C0AE, al
0x9FEBC7: retn
