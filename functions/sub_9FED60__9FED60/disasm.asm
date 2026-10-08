0x9FED60: push    offset SoulTrapEffect_Make; Verified (Oblivion): ActiveEffect_Register_STRP_Factory passes FourCC STRP (0x50525453) and SoulTrapEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FED65: push    50525453h; effectCode
0x9FED6A: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FED6F: add     esp, 8
0x9FED72: mov     byte ptr unk_B3C0E0, al
0x9FED77: retn
