void __thiscall NiTPointerMap<enum MagicSystem::EffectID,ActiveEffect * (__cdecl *)(MagicCaster *,MagicItem *,EffectItem *)>::~NiTPointerMap<enum MagicSystem::EffectID,ActiveEffect * (__cdecl *)(MagicCaster *,MagicItem *,EffectItem *)>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<enum MagicSystem::EffectID,ActiveEffect * (__cdecl *)(MagicCaster *,MagicItem *,EffectItem *)>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,enum MagicSystem::EffectID,ActiveEffect * (__cdecl *)(MagicCaster *,MagicItem *,EffectItem *)>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
