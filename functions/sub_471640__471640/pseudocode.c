int __thiscall sub_471640(_BYTE *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int result; // eax
  _DWORD v9[8]; // [esp+14h] [ebp-20h] BYREF

  if ( *(this + 0xE) == 1 ) /*0x47164d*/
  {
    v2 = dword_B24260; /*0x47164f*/
    v3 = dword_B24264; /*0x47165a*/
    *(float *)&v9[7] = flt_A79E10; /*0x471660*/
    v4 = dword_B24268; /*0x471664*/
    v9[0] = v2; /*0x47166a*/
    v5 = flt_B3CBA4; /*0x47166e*/
    v9[1] = v3; /*0x471674*/
    v6 = flt_B3CBA8; /*0x471678*/
    v9[2] = v4; /*0x47167e*/
    v7 = flt_B3CBAC; /*0x471682*/
    v9[3] = v5; /*0x471688*/
    result = flt_B3CBB0; /*0x47168c*/
    v9[4] = v6; /*0x471691*/
    v9[5] = v7; /*0x4716a1*/
    v9[6] = result; /*0x4716a5*/
    qmemcpy(this + 0x30, v9, 0x20u); /*0x4716a9*/
    *(this + 0x54) = 1; /*0x4716ad*/
  }
  else
  {
    sub_471390((_DWORD *)this + 0xC, &g_zeroNiPoint3); /*0x4716c0*/
    sub_471430((_DWORD *)this + 0xC, (float *)&dword_B27110); /*0x4716cc*/
    result = _isnan(1.0); /*0x4716d9*/
    if ( !result ) /*0x4716e3*/
    {
      result = _finite(1.0); /*0x4716ed*/
      if ( result ) /*0x4716f7*/
        *((float *)this + 0x13) = 1.0; /*0x4716fb*/
    }
    *(this + 0x54) = 1; /*0x4716ff*/
  }
  return result; /*0x4716ac*/
}
