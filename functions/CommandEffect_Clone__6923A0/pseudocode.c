ActiveEffect *__thiscall CommandEffect_Clone(_DWORD *this)
{
  ActiveEffect *v2; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x38u); /*0x6923cc*/
  if ( v2 ) /*0x6923df*/
  {
    ActiveEffect_Ctor(v2, (MagicCaster *)*(this + 9), (MagicItem *)*(this + 2), (EffectItem *)*(this + 3)); /*0x6923ef*/
    v2->vtbl = (ActiveEffectVtbl *)&CommandEffect::`vftable'; /*0x6923f4*/
  }
  else
  {
    v2 = 0; /*0x6923fc*/
  }
  (*(void (__thiscall **)(_DWORD *, ActiveEffect *))(*this + 0x2C))(this, v2); /*0x69240e*/
  return v2; /*0x692412*/
}
