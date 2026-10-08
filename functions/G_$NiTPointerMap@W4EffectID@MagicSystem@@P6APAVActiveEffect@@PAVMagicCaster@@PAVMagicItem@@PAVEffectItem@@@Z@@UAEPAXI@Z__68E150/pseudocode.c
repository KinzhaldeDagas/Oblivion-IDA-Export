ActiveEffectCreatorMap *__thiscall NiTPointerMap<enum MagicSystem::EffectID,ActiveEffect * (__cdecl *)(MagicCaster *,MagicItem *,EffectItem *)>::`scalar deleting destructor'(
        ActiveEffectCreatorMap *this,
        char a2)
{
  ActiveEffectCreatorMap_Destroy(this); /*0x68e153*/
  if ( (a2 & 1) != 0 ) /*0x68e15d*/
    FormHeapFree((unsigned int)this); /*0x68e160*/
  return this; /*0x68e16a*/
}
