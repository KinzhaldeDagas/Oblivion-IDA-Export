unsigned int *__thiscall NiTPointerMap<enum MagicSystem::EffectID,ActiveEffect * (__cdecl *)(MagicCaster *,MagicItem *,EffectItem *)>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<enum MagicSystem::EffectID,ActiveEffect * (__cdecl *)(MagicCaster *,MagicItem *,EffectItem *)>::~NiTPointerMap<enum MagicSystem::EffectID,ActiveEffect * (__cdecl *)(MagicCaster *,MagicItem *,EffectItem *)>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
