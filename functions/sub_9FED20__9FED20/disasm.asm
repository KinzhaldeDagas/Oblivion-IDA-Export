0x9FED20: push    offset ParalysisEffect_Make; Verified (Oblivion): ActiveEffect_Register_PARA_Factory passes FourCC PARA (0x41524150) and ParalysisEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FED25: push    41524150h; effectCode
0x9FED2A: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FED2F: add     esp, 8
0x9FED32: mov     byte ptr unk_B3C0DE, al
0x9FED37: retn
