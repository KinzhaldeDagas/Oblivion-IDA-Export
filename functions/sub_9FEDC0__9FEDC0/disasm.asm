0x9FEDC0: push    offset TurnUndeadEffect_Make; Verified (Oblivion): ActiveEffect_Register_TURN_Factory passes FourCC TURN (0x4E525554) and TurnUndeadEffect_Make to ActiveEffect_Base_AddCreationFunc, adding this code-to-factory mapping to NiTMap_AECreatorFuncs.
0x9FEDC5: push    4E525554h; effectCode
0x9FEDCA: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FEDCF: add     esp, 8
0x9FEDD2: mov     byte ptr unk_B3C0EA, al
0x9FEDD7: retn
