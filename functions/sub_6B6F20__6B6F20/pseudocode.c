int __thiscall sub_6B6F20(float *this, float a2)
{
  int v3; // edi
  float *sound; // ecx
  double v5; // st7
  double v6; // st7
  double v7; // st6
  int v8; // eax
  int v9; // eax
  float v11; // [esp+Ch] [ebp+4h]
  float v12; // [esp+Ch] [ebp+4h]
  float v13; // [esp+Ch] [ebp+4h]

  v3 = *((_DWORD *)this + 0x14); /*0x6b6f24*/
  if ( !v3 ) /*0x6b6f29*/
    return 0x80004005; /*0x6b703b*/
  *(this + 0xF) = a2; /*0x6b6f33*/
  sound = (float *)MEMORY[0xB33398]->sound; /*0x6b6f3d*/
  if ( a2 <= 1.0 ) /*0x6b6f47*/
  {
    if ( a2 < 0.0 ) /*0x6b6f5e*/
      a2 = 0.0; /*0x6b6f60*/
  }
  else
  {
    a2 = 1.0; /*0x6b6f4b*/
  }
  if ( sound ) /*0x6b6f6a*/
  {
    v11 = sound[0x2E] * a2; /*0x6b6f7a*/
    if ( (*(_DWORD *)this & 8) != 0 ) /*0x6b6f7e*/
    {
      v5 = sound[0x2F]; /*0x6b6f80*/
    }
    else if ( (*(_DWORD *)this & 4) != 0 ) /*0x6b6f8a*/
    {
      v5 = sound[0x30]; /*0x6b6f8c*/
    }
    else
    {
      v5 = sound[0x31]; /*0x6b6f94*/
    }
    a2 = v5 * v11; /*0x6b6f9e*/
  }
  v6 = a2; /*0x6b6fa2*/
  v7 = dbl_A785E8; /*0x6b6fa6*/
  if ( v7 > a2 ) /*0x6b6fb3*/
    v6 = v7; /*0x6b6fb5*/
  v12 = v6; /*0x6b6fbb*/
  v13 = log10(v12); /*0x6b6fc8*/
  v8 = Double_To_SInt32(v13 * dbl_A77098); /*0x6b6fd6*/
  if ( *((_BYTE *)this + 0x4A) ) /*0x6b6fdb*/
    return (*(int (__stdcall **)(int, unsigned int))(*(_DWORD *)v3 + 0x3C))(v3, 0xFFFFD8F0); /*0x6b6fdb*/
  v9 = v8 - *((unsigned __int16 *)this + 0x24) - *((unsigned __int16 *)this + 0x23) - *((unsigned __int16 *)this + 0x22); /*0x6b6ff1*/
  if ( v9 <= (int)0xFFFFD8F0 ) /*0x6b6ff8*/
    return (*(int (__stdcall **)(int, unsigned int))(*(_DWORD *)v3 + 0x3C))(v3, 0xFFFFD8F0); /*0x6b7011*/
  if ( v9 >= 0 ) /*0x6b6ffc*/
    v9 = 0; /*0x6b7018*/
  return (*(int (__stdcall **)(int, int))(*(_DWORD *)v3 + 0x3C))(v3, v9); /*0x6b7013*/
}
