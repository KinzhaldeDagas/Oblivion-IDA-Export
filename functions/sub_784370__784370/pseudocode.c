double __thiscall sub_784370(float *this, float a2)
{
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  float v7; // [esp+4h] [ebp-20h]
  float v8; // [esp+14h] [ebp-10h]
  float v9; // [esp+14h] [ebp-10h]
  float v10; // [esp+28h] [ebp+4h]
  float v11; // [esp+28h] [ebp+4h]

  v3 = *((_DWORD *)this + 0x10);
  v8 = 0.0;
  if ( v3 )
  {
    if ( (*((_DWORD *)this + 0x11) - v3) / 0x18 == 0x1F4 )
    {
      v4 = Double_To_SInt32(a2 * dbl_A8BA00 + dbl_A2FAA0);
      v5 = *((_DWORD *)this + 0x10);
      if ( !v5 || v4 >= (*((_DWORD *)this + 0x11) - v5) / 0x18 )
        _invalid_parameter_noinfo();
      v9 = *(float *)(*((_DWORD *)this + 0x10) + 0x18 * v4 + 4);
      if ( (dword_B42968 & 1) == 0 )
      {
        dword_B42968 |= 1u;
        sub_78EAF0(&unk_B42964);
        atexit(sub_A26E20);
      }
      v10 = *(this + 2) * v9;
      v7 = v10;
      v11 = v9 * -*(this + 2);
      return (float)sub_78EA00(v11, v7);
    }
  }
  return v8;
}
