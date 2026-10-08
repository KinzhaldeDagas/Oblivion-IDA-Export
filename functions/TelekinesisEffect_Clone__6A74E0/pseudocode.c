ActiveEffect *__thiscall TelekinesisEffect_Clone(int *this)
{
  ActiveEffect *v2; // eax
  ActiveEffect *v3; // edi

  v2 = (ActiveEffect *)FormHeapAlloc(0x50u); /*0x6a7507*/
  v3 = 0; /*0x6a7513*/
  if ( v2 ) /*0x6a751b*/
    v3 = TelekinesisEffect_constr(v2, (MagicCaster *)*(this + 9), (MagicItem *)*(this + 2), (EffectItem *)*(this + 3)); /*0x6a7530*/
  (*(void (__thiscall **)(int *, ActiveEffect *))(*this + 0x2C))(this, v3); /*0x6a7542*/
  return v3; /*0x6a7546*/
}
