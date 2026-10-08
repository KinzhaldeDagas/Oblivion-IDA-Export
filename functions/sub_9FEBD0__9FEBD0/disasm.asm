0x9FEBD0: push    offset DispelEffect_Make; Verified (Oblivion): ActiveEffect_Register_DSPL_Factory passes FourCC DSPL (0x4C505344) and DispelEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FEBD5: push    4C505344h; effectCode
0x9FEBDA: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FEBDF: add     esp, 8
0x9FEBE2: mov     byte ptr unk_B3C0AF, al
0x9FEBE7: retn
