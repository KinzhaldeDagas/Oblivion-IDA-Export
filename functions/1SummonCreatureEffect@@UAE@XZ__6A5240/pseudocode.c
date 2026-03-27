void __thiscall SummonCreatureEffect::~SummonCreatureEffect(ActiveEffect *this)
{
  char *item; // ecx

  this->vtbl = (ActiveEffectVtbl *)&SummonCreatureEffect::`vftable';
  if ( *((_BYTE *)this + 0x61) )
  {
    item = (char *)this->members.item;
    if ( item )
      sub_419F10(item, 1);
  }
  ActiveEffect::~ActiveEffect(this);
}
