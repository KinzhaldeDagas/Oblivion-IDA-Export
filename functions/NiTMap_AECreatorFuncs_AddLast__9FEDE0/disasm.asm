0x9FEDE0: push    offset VampirismEffect_Make; Verified (Oblivion): ActiveEffect_Register_VAMP_Factory passes FourCC VAMP (0x504D4156) and VampirismEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FEDE5: push    504D4156h; effectCode
0x9FEDEA: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FEDEF: add     esp, 8
0x9FEDF2: mov     byte ptr unk_B3C0EB, al
0x9FEDF7: retn
