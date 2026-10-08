0x9FEDA0: push    offset TelekinesisEffect_Make; Verified (Oblivion): ActiveEffect_Register_TELE_Factory passes FourCC TELE (0x454C4554) and TelekinesisEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FEDA5: push    454C4554h; effectCode
0x9FEDAA: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FEDAF: add     esp, 8
0x9FEDB2: mov     byte ptr unk_B3C0E9, al
0x9FEDB7: retn
