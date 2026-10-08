// Verified registry map destructor: installs base vtable, clears entries, frees the bucket array, and frees the map object when the scalar-deleting flag requests it.
ActiveEffectCreatorMap *__thiscall NiTMapBase_AECreatorFuncs_VDdestr(ActiveEffectCreatorMap *this, UInt8 freeMemory)
{
  this->vftable = &NiTMapBase<NiTPointerAllocator<unsigned int>,enum MagicSystem::EffectID,ActiveEffect * (__cdecl *)(MagicCaster *,MagicItem *,EffectItem *)>::`vftable'; /*0x68d943*/
  NiTMap_Clear(this); /*0x68d949*/
  FormHeapFree((unsigned int)this->buckets); /*0x68d952*/
  if ( (freeMemory & 1) != 0 ) /*0x68d95f*/
    FormHeapFree((unsigned int)this); /*0x68d962*/
  return this; /*0x68d96c*/
}
