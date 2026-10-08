// Verified (Oblivion): registers FourCC LOCK (0x4B434F4C) to LockEffect_Make in NiTMap_AECreatorFuncs. Fallout's LockEffect::Instantiate is registered under EffectArchetypes enum HEALTH by a dynamic initializer and allocates 0x48 bytes; Oblivion's factory allocates 0x38 bytes. Registry key and object layout diverge.
bool __cdecl ActiveEffect_Register_LOCK_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4B434F4Cu, (ActiveEffectFactory)LockEffect_Make); /*0x9fec5a*/
  unk_B3C0B9 = result; /*0x9fec62*/
  return result; /*0x9fec67*/
}
