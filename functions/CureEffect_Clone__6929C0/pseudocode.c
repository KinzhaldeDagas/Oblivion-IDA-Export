ActiveEffect *__thiscall CureEffect_Clone(_DWORD *this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // ebx

  if ( *(this + 0xF) != 0xFFFFFFFF )
  {
    v2 = FormHeapAlloc(0x40u);
    if ( v2 )
    {
      v4 = *(this + 0xF);
      ActiveEffect::ActiveEffect(
        (ActiveEffect *)v2,
        (MagicCaster *)*(this + 9),
        (MagicItem *)*(this + 2),
        (EffectItem *)*(this + 3));
      *(_DWORD *)v2 = &CureEffect::`vftable';
      *(_DWORD *)(v2 + 0x3C) = v4;
      *(_DWORD *)(v2 + 0x38) = 0;
      goto LABEL_7;
    }
LABEL_6:
    v2 = 0;
    goto LABEL_7;
  }
  v2 = FormHeapAlloc(0x40u);
  if ( !v2 )
    goto LABEL_6;
  v3 = *(this + 0xE);
  ActiveEffect::ActiveEffect(
    (ActiveEffect *)v2,
    (MagicCaster *)*(this + 9),
    (MagicItem *)*(this + 2),
    (EffectItem *)*(this + 3));
  *(_DWORD *)v2 = &CureEffect::`vftable';
  *(_DWORD *)(v2 + 0x3C) = 0xFFFFFFFF;
  *(_DWORD *)(v2 + 0x38) = v3;
LABEL_7:
  (*(void (__thiscall **)(_DWORD *, int))(*this + 0x2C))(this, v2);
  return (ActiveEffect *)v2;
}
