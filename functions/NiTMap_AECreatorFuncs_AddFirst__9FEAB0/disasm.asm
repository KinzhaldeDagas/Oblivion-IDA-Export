0x9FEAB0: push    offset CalmEffect_Make; Verified (Oblivion): ActiveEffect_Register_CALM_Factory passes FourCC CALM (0x4D4C4143) and CalmEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FEAB5: push    4D4C4143h; effectCode
0x9FEABA: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FEABF: add     esp, 8
0x9FEAC2: mov     byte ptr unk_B3C0A5, al
0x9FEAC7: retn
