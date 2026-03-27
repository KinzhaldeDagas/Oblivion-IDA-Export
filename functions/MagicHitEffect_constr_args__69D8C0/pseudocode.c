NiObject *__thiscall MagicHitEffect_constr_args(NiObject *this, TESObjectREFR *a2, int a3)
{
  double v4; // st7

  BSTempEff_constr(this, 0, 0.0);
  this->__vftable = (NiObjectVtbl *)&MagicHitEffect::`vftable';
  *((_DWORD *)this + 7) = a2;
  if ( a2 )
    *((_DWORD *)this + 3) = TESObjectREFR_GetParentCell(a2);
  *((float *)this + 8) = 0.0;
  *((_DWORD *)this + 6) = a3;
  v4 = flt_A32048;
  *((_BYTE *)this + 0x24) = 0;
  *((float *)this + 2) = v4;
  return this;
}
