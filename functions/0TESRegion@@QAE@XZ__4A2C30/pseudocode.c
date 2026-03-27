TESRegion *__thiscall TESRegion::TESRegion(TESRegion *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  double v5; // st7

  TESForm_constr((TESForm *)this);
  *(_DWORD *)this = &TESRegion::`vftable';
  v2 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v2 )
    v3 = sub_4A43E0(v2, 1);
  else
    v3 = 0;
  *((_DWORD *)this + 6) = v3;
  v4 = (_DWORD *)FormHeapAlloc(8u);
  if ( v4 )
  {
    *v4 = 0;
    v4[1] = 0;
  }
  else
  {
    v4 = 0;
  }
  v5 = flt_A30634;
  *((_DWORD *)this + 7) = v4;
  *((float *)this + 0xA) = v5;
  *((_BYTE *)this + 4) = 0x2F;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  return this;
}
