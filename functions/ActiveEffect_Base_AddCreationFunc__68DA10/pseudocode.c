// Verified (Oblivion): inserts an effectCode/factory pair into NiTMap_AECreatorFuncs. The 23 ActiveEffect_Register_* wrappers call this function, but their runtime invocation path is not established by current xrefs/initializer table evidence.
bool __cdecl ActiveEffect_Base_AddCreationFunc(ActiveEffectFactoryCode effectCode, ActiveEffectFactory factory)
{
  NiTMap_SetAt(&NiTMap_AECreatorFuncs, effectCode, (int)factory); /*0x68da1f*/
  return 1; /*0x68da26*/
}
