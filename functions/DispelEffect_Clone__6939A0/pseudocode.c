ActiveEffect *__thiscall DispelEffect_Clone(_DWORD *this)
{
  ActiveEffect *v2; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x38u); /*0x6939cc*/
  if ( v2 ) /*0x6939df*/
  {
    ActiveEffect_Ctor(v2, (MagicCaster *)*(this + 9), (MagicItem *)*(this + 2), (EffectItem *)*(this + 3)); /*0x6939ef*/
    v2->vtbl = (ActiveEffectVtbl *)&DispelEffect::`vftable'; /*0x6939f4*/
  }
  else
  {
    v2 = 0; /*0x6939fc*/
  }
  (*(void (__thiscall **)(_DWORD *, ActiveEffect *))(*this + 0x2C))(this, v2); /*0x693a0e*/
  return v2; /*0x693a12*/
}
