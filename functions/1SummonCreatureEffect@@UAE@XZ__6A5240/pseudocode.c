void __thiscall SummonCreatureEffect::~SummonCreatureEffect(ActiveEffect *this)
{
  char *item; // ecx

  this->vtbl = (ActiveEffectVtbl *)&SummonCreatureEffect::`vftable'; /*0x6a5268*/
  if ( *((_BYTE *)this + 0x61) ) /*0x6a526e*/
  {
    item = (char *)this->members.item; /*0x6a527c*/
    if ( item ) /*0x6a5281*/
      MagicItem_UnloadVFXModels(item, 1); /*0x6a5285*/
  }
  ActiveEffect::~ActiveEffect(this); /*0x6a5294*/
}
