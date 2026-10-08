0x9FEB10: push    offset CommandHumanoidEffect_Make; Verified (Oblivion): ActiveEffect_Register_COHU_Factory passes FourCC COHU (0x55484F43) and CommandHumanoidEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FEB15: push    55484F43h; effectCode
0x9FEB1A: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FEB1F: add     esp, 8
0x9FEB22: mov     byte ptr unk_B3C0A8, al
0x9FEB27: retn
