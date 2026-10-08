ActiveEffect *__thiscall AssociatedItemEffect_Clone(int *this)
{
  ActiveEffect *v2; // eax
  ActiveEffect *v3; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x3Cu); /*0x68f367*/
  v3 = 0; /*0x68f373*/
  if ( v2 ) /*0x68f37b*/
    v3 = AssociatedItemEffect_constr( /*0x68f390*/
           v2,
           (MagicCaster *)*(this + 9),
           (MagicItem *)*(this + 2),
           (EffectItem *)*(this + 3));
  (*(void (__thiscall **)(int *, ActiveEffect *))(*this + 0x2C))(this, v3); /*0x68f3a2*/
  return v3; /*0x68f3a6*/
}
