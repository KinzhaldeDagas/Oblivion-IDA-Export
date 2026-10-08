0x9FEC30: push    offset LightEffect_Make; Verified (Oblivion): ActiveEffect_Register_LGHT_Factory passes FourCC LGHT (0x5448474C) and LightEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FEC35: push    5448474Ch; effectCode
0x9FEC3A: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FEC3F: add     esp, 8
0x9FEC42: mov     byte ptr unk_B3C0B8, al
0x9FEC47: retn
