0x9FED00: push    offset OpenEffect_Make; Verified (Oblivion): registers FourCC OPEN (0x4E45504F) to OpenEffect_Make in NiTMap_AECreatorFuncs. Fallout's OpenEffect::Instantiate is registered under EffectArchetypes enum MELEE_DAMAGE by a dynamic initializer and allocates 0x48 bytes; Oblivion's factory allocates 0x38 bytes. Registry key and object layout diverge.
0x9FED05: push    4E45504Fh; effectCode
0x9FED0A: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FED0F: add     esp, 8
0x9FED12: mov     byte ptr unk_B3C0DD, al
0x9FED17: retn
