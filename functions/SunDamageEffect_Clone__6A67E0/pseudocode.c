int __thiscall SunDamageEffect_Clone(float *this)
{
  int v2; // esi

  v2 = FormHeapAlloc(0x40u);
  if ( v2 )
  {
    ActiveEffect::ActiveEffect(
      (ActiveEffect *)v2,
      *((MagicCaster **)this + 9),
      *((MagicItem **)this + 2),
      *((EffectItem **)this + 3));
    *(float *)(v2 + 0x38) = 0.0;
    *(_DWORD *)v2 = &SunDamageEffect::`vftable';
    *(_BYTE *)(v2 + 0x3D) = 0;
    *(_BYTE *)(v2 + 0x3C) = 0;
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 0x2C))(this, v2);
  *(float *)(v2 + 0x38) = *(this + 0xE);
  *(_BYTE *)(v2 + 0x3C) = *((_BYTE *)this + 0x3C);
  *(_BYTE *)(v2 + 0x3D) = *((_BYTE *)this + 0x3D);
  return v2;
}
