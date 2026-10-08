// Verified MagicHitEffect constructor starts from the 24-byte BSTempEffect base, nulls ownerActiveEffect (+0x18) and targetReference (+0x1C), zeros elapsedSeconds (+0x20) and bFinished (+0x24), establishing a 40-byte base layout.
NiObject *__thiscall MagicHitEffect_constr(NiObject *this)
{
  double v2; // st7

  BSTempEffect_Constructor((BSTempEffect *)this, 0, 0.0); /*0x69d88b*/
  *((float *)this + 8) = 0.0; /*0x69d892*/
  this->__vftable = (NiObjectVtbl *)&MagicHitEffect::`vftable'; /*0x69d895*/
  v2 = flt_A32048; /*0x69d89b*/
  *((_DWORD *)this + 7) = 0; /*0x69d8a1*/
  *((float *)this + 2) = v2; /*0x69d8a8*/
  *((_DWORD *)this + 6) = 0; /*0x69d8ab*/
  *((_BYTE *)this + 0x24) = 0; /*0x69d8b2*/
  return this; /*0x69d8b8*/
}
