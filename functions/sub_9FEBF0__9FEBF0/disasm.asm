0x9FEBF0: push    offset FrenzyEffect_Make; Verified (Oblivion): ActiveEffect_Register_FRNZ_Factory passes FourCC FRNZ (0x5A4E5246) and FrenzyEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FEBF5: push    5A4E5246h; effectCode
0x9FEBFA: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FEBFF: add     esp, 8
0x9FEC02: mov     byte ptr unk_B3C0B0, al
0x9FEC07: retn
