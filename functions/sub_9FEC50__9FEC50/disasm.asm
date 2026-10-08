0x9FEC50: push    offset LockEffect_Make; Verified (Oblivion): registers FourCC LOCK (0x4B434F4C) to LockEffect_Make in NiTMap_AECreatorFuncs. Fallout's LockEffect::Instantiate is registered under EffectArchetypes enum HEALTH by a dynamic initializer and allocates 0x48 bytes; Oblivion's factory allocates 0x38 bytes. Registry key and object layout diverge.
0x9FEC55: push    4B434F4Ch; effectCode
0x9FEC5A: call    ActiveEffect_Base_AddCreationFunc; Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
0x9FEC5F: add     esp, 8
0x9FEC62: mov     byte ptr unk_B3C0B9, al
0x9FEC67: retn
