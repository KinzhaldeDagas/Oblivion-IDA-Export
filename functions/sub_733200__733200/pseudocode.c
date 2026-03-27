double __thiscall sub_733200(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  int v4; // edx
  double v5; // st7
  double v6; // st6
  int v7; // eax
  double v9; // st7
  double v10; // st6
  int v11; // eax

  v3 = *(this + 0xB);
  v4 = (a2 + a3) >> 1;
  if ( *(float *)(v3 + 4 * v4) <= (double)*(float *)(v3 + 4 * a2) )
  {
    v9 = *(float *)(v3 + 4 * a2);
    v10 = *(float *)(v3 + 4 * a3);
    v11 = *(this + 0xB);
    if ( v10 > v9 )
      return *(float *)(v11 + 4 * a2);
    if ( *(float *)(v11 + 4 * a3) > (double)*(float *)(v11 + 4 * v4) )
      return *(float *)(*(this + 0xB) + 4 * a3);
    v7 = *(this + 0xB);
    return *(float *)(v7 + 4 * v4);
  }
  v5 = *(float *)(v3 + 4 * v4);
  v6 = *(float *)(v3 + 4 * a3);
  v7 = *(this + 0xB);
  if ( v6 > v5 )
    return *(float *)(v7 + 4 * v4);
  if ( *(float *)(v7 + 4 * a3) > (double)*(float *)(v7 + 4 * a2) )
    return *(float *)(*(this + 0xB) + 4 * a3);
  return *(float *)(*(this + 0xB) + 4 * a2);
}
