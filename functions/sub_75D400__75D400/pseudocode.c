void __thiscall sub_75D400(_DWORD *this, float a2)
{
  int v2; // ecx
  double v3; // st7

  v2 = *(this + 0x11);
  if ( a2 < dbl_A2FC68 )
    a2 = 0.0;
  v3 = a2;
  if ( a2 > dbl_A2F928 )
    v3 = (float)1.0;
  *(float *)(v2 + 0x58) = v3;
}
