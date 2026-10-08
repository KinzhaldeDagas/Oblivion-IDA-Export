int __thiscall SunDamageEffect_Clone(float *this)
{
  int v2; // esi

  v2 = FormHeapAlloc(0x40u); /*0x6a680c*/
  if ( v2 ) /*0x6a681f*/
  {
    ActiveEffect_Ctor( /*0x6a682f*/
      (ActiveEffect *)v2,
      *((MagicCaster **)this + 9),
      *((MagicItem **)this + 2),
      *((EffectItem **)this + 3));
    *(float *)(v2 + 0x38) = 0.0; /*0x6a6836*/
    *(_DWORD *)v2 = &SunDamageEffect::`vftable'; /*0x6a6839*/
    *(_BYTE *)(v2 + 0x3D) = 0; /*0x6a683f*/
    *(_BYTE *)(v2 + 0x3C) = 0; /*0x6a6843*/
  }
  else
  {
    v2 = 0; /*0x6a6849*/
  }
  (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 0x2C))(this, v2); /*0x6a685b*/
  *(float *)(v2 + 0x38) = *(this + 0xE); /*0x6a6860*/
  *(_BYTE *)(v2 + 0x3C) = *((_BYTE *)this + 0x3C); /*0x6a6866*/
  *(_BYTE *)(v2 + 0x3D) = *((_BYTE *)this + 0x3D); /*0x6a686c*/
  return v2; /*0x6a6871*/
}
