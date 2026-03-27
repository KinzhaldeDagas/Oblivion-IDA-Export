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

  v3 = *((_DWORD *)this + 0x14);
  if ( !v3 )
    return 0x80004005;
  *(this + 0xF) = a2;
  sound = (float *)OSGlobals->sound;
  if ( a2 <= 1.0 )
  {
    if ( a2 < 0.0 )
      a2 = 0.0;
  }
  else
  {
    a2 = 1.0;
  }
  if ( sound )
  {
    v11 = sound[0x2E] * a2;
    if ( (*(_DWORD *)this & 8) != 0 )
    {
      v5 = sound[0x2F];
    }
    else if ( (*(_DWORD *)this & 4) != 0 )
    {
      v5 = sound[0x30];
    }
    else
    {
      v5 = sound[0x31];
    }
    a2 = v5 * v11;
  }
  v6 = a2;
  v7 = dbl_A785E8;
  if ( v7 > a2 )
    v6 = v7;
  v12 = v6;
  v13 = log10(v12);
  v8 = Double_To_SInt32(v13 * dbl_A77098);
  if ( *((_BYTE *)this + 0x4A) )
    return (*(int (__stdcall **)(int, unsigned int))(*(_DWORD *)v3 + 0x3C))(v3, 0xFFFFD8F0);
  v9 = v8 - *((unsigned __int16 *)this + 0x24) - *((unsigned __int16 *)this + 0x23) - *((unsigned __int16 *)this + 0x22);
  if ( v9 <= (int)0xFFFFD8F0 )
    return (*(int (__stdcall **)(int, unsigned int))(*(_DWORD *)v3 + 0x3C))(v3, 0xFFFFD8F0);
  if ( v9 >= 0 )
    v9 = 0;
  return (*(int (__stdcall **)(int, int))(*(_DWORD *)v3 + 0x3C))(v3, v9);
}
