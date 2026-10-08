0x9FEAD0: push    offset ChameleonEffect_Make; Verified (Oblivion): ActiveEffect_Register_CHML_Factory passes FourCC CHML (0x4C4D4843) and ChameleonEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FEAD5: push    4C4D4843h; effectCode
0x9FEADA: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FEADF: add     esp, 8
0x9FEAE2: mov     byte ptr unk_B3C0A6, al
0x9FEAE7: retn
