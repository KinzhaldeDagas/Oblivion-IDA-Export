0x9FEB90: push    offset DisintegrateArmorEffect_Make; Verified (Oblivion): ActiveEffect_Register_DIAR_Factory passes FourCC DIAR (0x52414944) and DisintegrateArmorEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FEB95: push    52414944h; effectCode
0x9FEB9A: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FEB9F: add     esp, 8
0x9FEBA2: mov     byte ptr unk_B3C0AD, al
0x9FEBA7: retn
