int NiTPointerMap<enum MagicSystem::EffectID,ActiveEffect * (__cdecl *)(MagicCaster *,MagicItem *,EffectItem *)>::NiTPointerMap<enum MagicSystem::EffectID,ActiveEffect * (__cdecl *)(MagicCaster *,MagicItem *,EffectItem *)>()
{
  dword_B15A14 = FormHeapAlloc(0x94u);
  _memset(dword_B15A14, 0, 4 * dword_B15A10);
  NiTMap_AECreatorFuncs = &NiTPointerMap<enum MagicSystem::EffectID,ActiveEffect * (__cdecl *)(MagicCaster *,MagicItem *,EffectItem *)>::`vftable';
  return atexit(sub_A25F90);
}
