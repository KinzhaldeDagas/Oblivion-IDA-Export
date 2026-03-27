_DWORD *__thiscall sub_585B60(_DWORD *this)
{
  int v2; // edi
  float *v3; // eax
  double v4; // st7
  float v6; // [esp+10h] [ebp-10h]

  *(this + 4) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 1) = &NiTList<BSStringT<char>>::`vftable';
  *(this + 8) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 5) = &NiTList<BSStringT<char>>::`vftable';
  *((_BYTE *)this + 0x32) = 0;
  *this = 0;
  *(this + 0xB) = 0;
  *((_BYTE *)this + 0x31) = 0;
  *(this + 9) = 0;
  v2 = dword_B13994 - 1;
  v3 = *(float **)(FontManager_GetSingleton()[v2] + 0x38);
  if ( v3 )
    v4 = *v3;
  else
    v4 = 0.0;
  v6 = v4;
  dword_B13980 = Double_To_SInt32(v6 + dbl_A30E48);
  return this;
}
