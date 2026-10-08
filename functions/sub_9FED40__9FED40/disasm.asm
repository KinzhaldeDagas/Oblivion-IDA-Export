0x9FED40: push    offset ReanimateEffect_Make; Verified (Oblivion): ActiveEffect_Register_REAN_Factory passes FourCC REAN (0x4E414552) and ReanimateEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FED45: push    4E414552h; effectCode
0x9FED4A: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FED4F: add     esp, 8
0x9FED52: mov     byte ptr unk_B3C0DF, al
0x9FED57: retn
