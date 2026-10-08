ActiveEffect *__thiscall DemoralizeEffect_Clone(_DWORD *this)
{
  int v2; // esi

  v2 = FormHeapAlloc(0x3Cu); /*0x692ddc*/
  if ( v2 ) /*0x692def*/
  {
    ActiveEffect_Ctor( /*0x692dff*/
      (ActiveEffect *)v2,
      (MagicCaster *)*(this + 9),
      (MagicItem *)*(this + 2),
      (EffectItem *)*(this + 3));
    *(_DWORD *)v2 = &DemoralizeEffect::`vftable'; /*0x692e04*/
    *(_BYTE *)(v2 + 0x38) = 0; /*0x692e0a*/
  }
  else
  {
    v2 = 0; /*0x692e10*/
  }
  *(_BYTE *)(v2 + 0x38) = *((_BYTE *)this + 0x38); /*0x692e15*/
  (*(void (__thiscall **)(_DWORD *, int))(*this + 0x2C))(this, v2); /*0x692e28*/
  return (ActiveEffect *)v2; /*0x692e2c*/
}
