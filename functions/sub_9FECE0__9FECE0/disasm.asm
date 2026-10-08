0x9FECE0: push    offset NightEyeEffect_Make; Verified (Oblivion): ActiveEffect_Register_NEYE_Factory passes FourCC NEYE (0x4559454E) and NightEyeEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FECE5: push    4559454Eh; effectCode
0x9FECEA: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FECEF: add     esp, 8
0x9FECF2: mov     byte ptr unk_B3C0DC, al
0x9FECF7: retn
