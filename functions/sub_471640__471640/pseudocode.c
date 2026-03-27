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

  if ( *(this + 0xE) == 1 )
  {
    v2 = dword_B24260;
    v3 = dword_B24264;
    *(float *)&v9[7] = flt_A79E10;
    v4 = dword_B24268;
    v9[0] = v2;
    v5 = dword_B3CBA4;
    v9[1] = v3;
    v6 = dword_B3CBA8;
    v9[2] = v4;
    v7 = dword_B3CBAC;
    v9[3] = v5;
    result = dword_B3CBB0;
    v9[4] = v6;
    v9[5] = v7;
    v9[6] = result;
    qmemcpy(this + 0x30, v9, 0x20u);
    *(this + 0x54) = 1;
  }
  else
  {
    sub_471390((_DWORD *)this + 0xC, &Vector3_InitValue_);
    sub_471430((_DWORD *)this + 0xC, (float *)&dword_B27110);
    result = _isnan(1.0);
    if ( !result )
    {
      result = _finite(1.0);
      if ( result )
        *((float *)this + 0x13) = 1.0;
    }
    *(this + 0x54) = 1;
  }
  return result;
}
