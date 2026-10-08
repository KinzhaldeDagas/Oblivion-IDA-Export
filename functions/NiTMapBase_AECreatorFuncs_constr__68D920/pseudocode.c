// Verified base-map construction path for NiTMap_AECreatorFuncs: installs NiTMapBase vtable, clears entries, and frees the old bucket pointer; the derived NiTPointerMap constructor then allocates/zeros 37 buckets and installs its vtable.
void __thiscall NiTMapBase_AECreatorFuncs_constr(ActiveEffectCreatorMap *this)
{
  this->vftable = &NiTMapBase<NiTPointerAllocator<unsigned int>,enum MagicSystem::EffectID,ActiveEffect * (__cdecl *)(MagicCaster *,MagicItem *,EffectItem *)>::`vftable'; /*0x68d923*/
  NiTMap_Clear(this); /*0x68d929*/
  FormHeapFree((unsigned int)this->buckets); /*0x68d932*/
}
