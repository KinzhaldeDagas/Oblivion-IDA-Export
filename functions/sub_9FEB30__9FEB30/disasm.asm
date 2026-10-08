0x9FEB30: push    offset DarknessEffect_Make; Verified (Oblivion): ActiveEffect_Register_DARK_Factory passes FourCC DARK (0x4B524144) and DarknessEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FEB35: push    4B524144h; effectCode
0x9FEB3A: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FEB3F: add     esp, 8
0x9FEB42: mov     byte ptr unk_B3C0A9, al
0x9FEB47: retn
