NiObject *__thiscall MagicHitEffect_constr(NiObject *this)
{
  double v2; // st7

  BSTempEff_constr(this, 0, 0.0);
  *((float *)this + 8) = 0.0;
  this->__vftable = (NiObjectVtbl *)&MagicHitEffect::`vftable';
  v2 = flt_A32048;
  *((_DWORD *)this + 7) = 0;
  *((float *)this + 2) = v2;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 0x24) = 0;
  return this;
}
