void __thiscall NiTMapBase_AECreatorFuncs_constr(unsigned int *this)
{
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,enum MagicSystem::EffectID,ActiveEffect * (__cdecl *)(MagicCaster *,MagicItem *,EffectItem *)>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
