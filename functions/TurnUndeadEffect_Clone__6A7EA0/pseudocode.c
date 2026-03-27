ActiveEffect *__thiscall TurnUndeadEffect_Clone(_DWORD *this)
{
  int v2; // esi

  v2 = FormHeapAlloc(0x3Cu);
  if ( v2 )
  {
    ActiveEffect::ActiveEffect(
      (ActiveEffect *)v2,
      (MagicCaster *)*(this + 9),
      (MagicItem *)*(this + 2),
      (EffectItem *)*(this + 3));
    *(_DWORD *)v2 = &TurnUndeadEffect::`vftable';
    *(_BYTE *)(v2 + 0x38) = 0;
  }
  else
  {
    v2 = 0;
  }
  *(_BYTE *)(v2 + 0x38) = *((_BYTE *)this + 0x38);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 0x2C))(this, v2);
  return (ActiveEffect *)v2;
}
