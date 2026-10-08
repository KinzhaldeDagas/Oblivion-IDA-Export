0x9FEB50: push    offset DemoralizeEffect_Make; Verified (Oblivion): ActiveEffect_Register_DEMO_Factory passes FourCC DEMO (0x4F4D4544) and DemoralizeEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FEB55: push    4F4D4544h; effectCode
0x9FEB5A: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FEB5F: add     esp, 8
0x9FEB62: mov     byte ptr unk_B3C0AA, al
0x9FEB67: retn
