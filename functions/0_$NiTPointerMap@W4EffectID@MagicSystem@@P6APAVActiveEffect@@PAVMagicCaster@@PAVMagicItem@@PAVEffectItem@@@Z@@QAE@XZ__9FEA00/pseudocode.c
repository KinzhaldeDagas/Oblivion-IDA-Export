// Verified (Oblivion): constructor allocates and zeroes the 37-bucket NiTMap_AECreatorFuncs (0x94-byte bucket array), installs its NiTPointerMap vtable, and registers the atexit cleanup. Invocation timing relative to the ActiveEffect_Register_* wrappers remains Unknown.
int __cdecl ActiveEffectCreatorMap_GlobalCtor()
{
  NiTMap_AECreatorFuncs.buckets = (ActiveEffectCreatorEntry **)FormHeapAlloc(0x94u); /*0x9fea2c*/
  _memset((int)NiTMap_AECreatorFuncs.buckets, 0, 4 * NiTMap_AECreatorFuncs.bucketCount); /*0x9fea31*/
  NiTMap_AECreatorFuncs.vftable = &NiTPointerMap<enum MagicSystem::EffectID,ActiveEffect * (__cdecl *)(MagicCaster *,MagicItem *,EffectItem *)>::`vftable';// Verified (Oblivion): stores the NiTPointerMap vtable in NiTMap_AECreatorFuncs after allocation/zeroing. Do not infer from this initializer alone that the effect factory wrappers have run. /*0x9fea3b*/
  return atexit(ActiveEffectCreatorMap_AtexitCleanup); /*0x9fea4d*/
}
