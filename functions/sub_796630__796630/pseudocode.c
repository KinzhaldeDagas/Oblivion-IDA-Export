int __thiscall sub_796630(char **this, float a2, float *a3)
{
  int v4; // ecx
  unsigned int v5; // edi
  int result; // eax
  int v7; // ecx
  unsigned int v8; // edi
  int v9; // edx
  double v10; // st5
  unsigned int v11; // edi
  int v12; // [esp+8h] [ebp-8h] BYREF
  float v13; // [esp+Ch] [ebp-4h]

  v4 = (int)*(this + 0x37);
  v5 = *((unsigned __int16 *)this + 0x11);
  if ( !v4 || v5 >= (unsigned int)&(*(this + 0x38))[-v4] )
    _invalid_parameter_noinfo();
  result = (int)*(this + 0x37);
  if ( LOBYTE(a2) == *(_BYTE *)(v5 + result) )
  {
    v7 = (int)*(this + 0x33);
    v8 = 2 * *((unsigned __int16 *)this + 0x11);
    if ( !v7 || v8 >= (int)&(*(this + 0x34))[-v7] >> 2 )
      _invalid_parameter_noinfo();
    v9 = (int)*(this + 0x33);
    v10 = *(float *)(v9 + 4 * v8);
    v11 = 2 * *((unsigned __int16 *)this + 0x11) + 1;
    *(float *)&v12 = (*a3 - a3[2]) * v10 + a3[2];
    if ( !v9 || v11 >= (int)&(*(this + 0x34))[-v9] >> 2 )
      _invalid_parameter_noinfo();
    v13 = (a3[1] - a3[5]) * *(float *)&(*(this + 0x33))[4 * v11] + a3[5];
    if ( sub_787680() )
      v13 = -v13;
    return sub_796320(this, (float *)&v12, NAN);
  }
  return result;
}
