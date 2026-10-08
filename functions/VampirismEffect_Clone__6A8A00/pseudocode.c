ActiveEffect *__thiscall VampirismEffect_Clone(_DWORD *this)
{
  ActiveEffect *v2; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x38u); /*0x6a8a2c*/
  if ( v2 ) /*0x6a8a3f*/
  {
    ActiveEffect_Ctor(v2, (MagicCaster *)*(this + 9), (MagicItem *)*(this + 2), (EffectItem *)*(this + 3)); /*0x6a8a4f*/
    v2->vtbl = (ActiveEffectVtbl *)&VampirismEffect::`vftable'; /*0x6a8a54*/
  }
  else
  {
    v2 = 0; /*0x6a8a5c*/
  }
  (*(void (__thiscall **)(_DWORD *, ActiveEffect *))(*this + 0x2C))(this, v2); /*0x6a8a6e*/
  return v2; /*0x6a8a72*/
}
