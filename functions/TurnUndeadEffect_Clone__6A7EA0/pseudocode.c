ActiveEffect *__thiscall TurnUndeadEffect_Clone(_DWORD *this)
{
  int v2; // esi

  v2 = FormHeapAlloc(0x3Cu); /*0x6a7ecc*/
  if ( v2 ) /*0x6a7edf*/
  {
    ActiveEffect_Ctor( /*0x6a7eef*/
      (ActiveEffect *)v2,
      (MagicCaster *)*(this + 9),
      (MagicItem *)*(this + 2),
      (EffectItem *)*(this + 3));
    *(_DWORD *)v2 = &TurnUndeadEffect::`vftable'; /*0x6a7ef4*/
    *(_BYTE *)(v2 + 0x38) = 0; /*0x6a7efa*/
  }
  else
  {
    v2 = 0; /*0x6a7f00*/
  }
  *(_BYTE *)(v2 + 0x38) = *((_BYTE *)this + 0x38); /*0x6a7f05*/
  (*(void (__thiscall **)(_DWORD *, int))(*this + 0x2C))(this, v2); /*0x6a7f18*/
  return (ActiveEffect *)v2; /*0x6a7f1c*/
}
