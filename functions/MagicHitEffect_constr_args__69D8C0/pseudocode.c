NiObject *__thiscall MagicHitEffect_constr_args(NiObject *this, TESChildCELL *a2, int a3)
{
  double v4; // st7

  BSTempEffect_Constructor((BSTempEffect *)this, 0, 0.0); /*0x69d8f0*/
  this->__vftable = (NiObjectVtbl *)&MagicHitEffect::`vftable'; /*0x69d903*/
  *((_DWORD *)this + 7) = a2; /*0x69d909*/
  if ( a2 ) /*0x69d90c*/
    *((_DWORD *)this + 3) = Shared_GetDwordAtOffset40(a2); /*0x69d913*/
  *((float *)this + 8) = 0.0; /*0x69d91c*/
  *((_DWORD *)this + 6) = a3; /*0x69d91f*/
  v4 = flt_A32048; /*0x69d922*/
  *((_BYTE *)this + 0x24) = 0; /*0x69d928*/
  *((float *)this + 2) = v4; /*0x69d92c*/
  return this; /*0x69d931*/
}
