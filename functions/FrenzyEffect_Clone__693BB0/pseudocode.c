ActiveEffect *__thiscall FrenzyEffect_Clone(_DWORD *this)
{
  int v2; // esi

  v2 = FormHeapAlloc(0x40u);
  if ( v2 )
  {
    ValueModifierEffect_constr((ActiveEffect *)v2, *(this + 9), *(this + 2), *(this + 3));
    *(_DWORD *)v2 = &FrenzyEffect::`vftable';
    *(_BYTE *)(v2 + 0x3C) = 0;
  }
  else
  {
    v2 = 0;
  }
  *(_BYTE *)(v2 + 0x3C) = *((_BYTE *)this + 0x3C);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 0x2C))(this, v2);
  return (ActiveEffect *)v2;
}
