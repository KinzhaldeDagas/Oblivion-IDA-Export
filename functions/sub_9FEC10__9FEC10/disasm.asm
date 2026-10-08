0x9FEC10: push    offset InvisibilityEffect_Make; Verified (Oblivion): ActiveEffect_Register_INVI_Factory passes FourCC INVI (0x49564E49) and InvisibilityEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FEC15: push    49564E49h; effectCode
0x9FEC1A: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FEC1F: add     esp, 8
0x9FEC22: mov     byte ptr unk_B3C0B1, al
0x9FEC27: retn
