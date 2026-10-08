// Verified ActiveEffectCreatorMap destructor: clears entries, restores the NiTMapBase vtable, clears the base map, and frees the bucket array. The global object itself is static storage.
void __thiscall ActiveEffectCreatorMap_Destroy(ActiveEffectCreatorMap *this)
{
  this->vftable = &NiTPointerMap<enum MagicSystem::EffectID,ActiveEffect * (__cdecl *)(MagicCaster *,MagicItem *,EffectItem *)>::`vftable'; /*0x68e108*/
  NiTMap_Clear(this); /*0x68e116*/
  this->vftable = &NiTMapBase<NiTPointerAllocator<unsigned int>,enum MagicSystem::EffectID,ActiveEffect * (__cdecl *)(MagicCaster *,MagicItem *,EffectItem *)>::`vftable'; /*0x68e125*/
  NiTMap_Clear(this); /*0x68e12b*/
  FormHeapFree((unsigned int)this->buckets); /*0x68e134*/
}
