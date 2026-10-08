ActiveEffect *__thiscall CommandHumanoidEffect_Clone(int *this)
{
  ActiveEffect *v2; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x38u); /*0x69280c*/
  if ( v2 ) /*0x69281f*/
  {
    CommandEffect_constr(v2, (MagicCaster *)*(this + 9), (MagicItem *)*(this + 2), (EffectItem *)*(this + 3)); /*0x69282f*/
    v2->vtbl = (ActiveEffectVtbl *)&CommandHumanoidEffect::`vftable'; /*0x692834*/
  }
  else
  {
    v2 = 0; /*0x69283c*/
  }
  (*(void (__thiscall **)(int *, ActiveEffect *))(*this + 0x2C))(this, v2); /*0x69284e*/
  return v2; /*0x692852*/
}
