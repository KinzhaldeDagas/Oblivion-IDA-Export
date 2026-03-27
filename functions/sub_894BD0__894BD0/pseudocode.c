void __thiscall sub_894BD0(int this, float a2)
{
  double v3; // st7
  double v4; // st7
  float v5; // [esp+8h] [ebp+4h]

  if ( (*(_BYTE *)(this + 0x1F4) & 1) == 0 )
  {
    v3 = *(float *)(this + 0x3A4) * dbl_A2FAA0;
    if ( a2 > v3 )
      a2 = v3;
    v4 = a2;
    if ( a2 <= 0.0 )
      v4 = *(float *)(this + 0x3A0);
    v5 = v4;
    if ( *(float *)(this + 0x3A8) != v5 )
    {
      if ( *(_DWORD *)(this + 0x370) == 2 )
      {
        *(_DWORD *)(this + 0x370) = *(_DWORD *)(this + 0x36C);
        sub_894940((int *)this, 0);
      }
      *(_DWORD *)(this + 0x3AC) = 2;
      *(float *)(this + 0x3A8) = v5;
    }
  }
}
