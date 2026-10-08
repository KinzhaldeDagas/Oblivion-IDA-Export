ActiveEffect *__thiscall CureEffect_Clone(_DWORD *this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // ebx

  if ( *(this + 0xF) != 0xFFFFFFFF ) /*0x6929ef*/
  {
    v2 = FormHeapAlloc(0x40u); /*0x692a34*/
    if ( v2 ) /*0x692a47*/
    {
      v4 = *(this + 0xF); /*0x692a52*/
      ActiveEffect_Ctor( /*0x692a5a*/
        (ActiveEffect *)v2,
        (MagicCaster *)*(this + 9),
        (MagicItem *)*(this + 2),
        (EffectItem *)*(this + 3));
      *(_DWORD *)v2 = &CureEffect::`vftable'; /*0x692a5f*/
      *(_DWORD *)(v2 + 0x3C) = v4; /*0x692a65*/
      *(_DWORD *)(v2 + 0x38) = 0; /*0x692a68*/
      goto LABEL_7; /*0x692a6f*/
    }
LABEL_6:
    v2 = 0; /*0x692a71*/
    goto LABEL_7; /*0x692a71*/
  }
  v2 = FormHeapAlloc(0x40u); /*0x6929f6*/
  if ( !v2 ) /*0x692a09*/
    goto LABEL_6; /*0x692a09*/
  v3 = *(this + 0xE); /*0x692a14*/
  ActiveEffect_Ctor((ActiveEffect *)v2, (MagicCaster *)*(this + 9), (MagicItem *)*(this + 2), (EffectItem *)*(this + 3)); /*0x692a1c*/
  *(_DWORD *)v2 = &CureEffect::`vftable'; /*0x692a21*/
  *(_DWORD *)(v2 + 0x3C) = 0xFFFFFFFF; /*0x692a27*/
  *(_DWORD *)(v2 + 0x38) = v3; /*0x692a2a*/
LABEL_7:
  (*(void (__thiscall **)(_DWORD *, int))(*this + 0x2C))(this, v2); /*0x692a73*/
  return (ActiveEffect *)v2; /*0x692a83*/
}
