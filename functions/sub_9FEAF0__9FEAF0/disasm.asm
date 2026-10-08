0x9FEAF0: push    offset CommandCreatureEffect_Make; Verified (Oblivion): ActiveEffect_Register_COCR_Factory passes FourCC COCR (0x52434F43) and CommandCreatureEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FEAF5: push    52434F43h; effectCode
0x9FEAFA: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FEAFF: add     esp, 8
0x9FEB02: mov     byte ptr unk_B3C0A7, al
0x9FEB07: retn
