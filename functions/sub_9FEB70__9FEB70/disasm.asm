0x9FEB70: push    offset DetectLifeEffect_Make; Verified (Oblivion): ActiveEffect_Register_DTCT_Factory passes FourCC DTCT (0x54435444) and DetectLifeEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FEB75: push    54435444h; effectCode
0x9FEB7A: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FEB7F: add     esp, 8
0x9FEB82: mov     byte ptr unk_B3C0AC, al
0x9FEB87: retn
