ActiveEffect *__thiscall CommandCreatureEffect_Clone(int *this)
{
  ActiveEffect *v2; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x38u); /*0x69224c*/
  if ( v2 ) /*0x69225f*/
  {
    CommandEffect_constr(v2, (MagicCaster *)*(this + 9), (MagicItem *)*(this + 2), (EffectItem *)*(this + 3)); /*0x69226f*/
    v2->vtbl = (ActiveEffectVtbl *)&CommandCreatureEffect::`vftable'; /*0x692274*/
  }
  else
  {
    v2 = 0; /*0x69227c*/
  }
  (*(void (__thiscall **)(int *, ActiveEffect *))(*this + 0x2C))(this, v2); /*0x69228e*/
  return v2; /*0x692292*/
}
