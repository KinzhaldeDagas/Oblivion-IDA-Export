ActiveEffect *__thiscall SoulTrapEffect_Clone(_DWORD *this)
{
  ActiveEffect *v2; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x38u); /*0x6a4c1c*/
  if ( v2 ) /*0x6a4c2f*/
  {
    ActiveEffect_Ctor(v2, (MagicCaster *)*(this + 9), (MagicItem *)*(this + 2), (EffectItem *)*(this + 3)); /*0x6a4c3f*/
    v2->vtbl = (ActiveEffectVtbl *)&SoulTrapEffect::`vftable'; /*0x6a4c44*/
  }
  else
  {
    v2 = 0; /*0x6a4c4c*/
  }
  (*(void (__thiscall **)(_DWORD *, ActiveEffect *))(*this + 0x2C))(this, v2); /*0x6a4c5e*/
  return v2; /*0x6a4c62*/
}
