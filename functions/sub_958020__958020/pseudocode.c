double __thiscall sub_958020(float *this, int a2)
{
  double v3; // st7
  double v4; // st6
  float v6; // [esp+Ch] [ebp-20h]

  v3 = sub_957E90(this, a2); /*0x95802c*/
  (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 0x10))(this, a2); /*0x95803a*/
  if ( *(_DWORD *)(a2 + 0x2C) - *(_DWORD *)(a2 + 0x28) >= 0x10 ) /*0x958046*/
    v4 = *(float *)&SrcStr; /*0x95805f*/
  else
    v4 = *(this + 6) * flt_AA357C; /*0x95804c*/
  v6 = v3; /*0x958031*/
  return v3 + v4 + v6; /*0x958059*/
}
