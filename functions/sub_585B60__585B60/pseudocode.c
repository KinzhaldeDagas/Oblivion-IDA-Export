_DWORD *__thiscall sub_585B60(_DWORD *this)
{
  int v2; // edi
  float *v3; // eax
  double v4; // st7
  float v6; // [esp+10h] [ebp-10h]

  *(this + 4) = 0; /*0x585b91*/
  *(this + 2) = 0; /*0x585b94*/
  *(this + 3) = 0; /*0x585b97*/
  *(this + 1) = &NiTList<BSStringT<char>>::`vftable'; /*0x585b9a*/
  *(this + 8) = 0; /*0x585ba1*/
  *(this + 6) = 0; /*0x585ba4*/
  *(this + 7) = 0; /*0x585ba7*/
  *(this + 5) = &NiTList<BSStringT<char>>::`vftable'; /*0x585baa*/
  *((_BYTE *)this + 0x32) = 0; /*0x585bad*/
  *this = 0; /*0x585bb0*/
  *(this + 0xB) = 0; /*0x585bb2*/
  *((_BYTE *)this + 0x31) = 0; /*0x585bb5*/
  *(this + 9) = 0; /*0x585bb8*/
  v2 = dword_B13994 - 1; /*0x585bc6*/
  v3 = *(float **)(FontManager_GetSingleton()[v2] + 0x38); /*0x585bd1*/
  if ( v3 ) /*0x585bd6*/
    v4 = *v3; /*0x585bd8*/
  else
    v4 = 0.0; /*0x585bdc*/
  v6 = v4; /*0x585bde*/
  dword_B13980 = Double_To_SInt32(v6 + dbl_A30E48); /*0x585bf1*/
  return this; /*0x585bf8*/
}
