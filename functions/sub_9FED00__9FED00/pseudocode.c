// Verified (Oblivion): registers FourCC OPEN (0x4E45504F) to OpenEffect_Make in NiTMap_AECreatorFuncs. Fallout's OpenEffect::Instantiate is registered under EffectArchetypes enum MELEE_DAMAGE by a dynamic initializer and allocates 0x48 bytes; Oblivion's factory allocates 0x38 bytes. Registry key and object layout diverge.
bool __cdecl ActiveEffect_Register_OPEN_Factory()
{
  bool result; // al

  result = ActiveEffect_Base_AddCreationFunc(0x4E45504Fu, (ActiveEffectFactory)OpenEffect_Make); /*0x9fed0a*/
  unk_B3C0DD = result; /*0x9fed12*/
  return result; /*0x9fed17*/
}
