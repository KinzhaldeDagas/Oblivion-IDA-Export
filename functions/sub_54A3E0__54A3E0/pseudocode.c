char __thiscall sub_54A3E0(_DWORD *this, unsigned int a2, float a3)
{
  int v3; // ecx
  double v4; // st7
  float *v5; // ecx

  if ( a2 >= *(this + 4) )
    return 0;
  v3 = *(this + 3);
  v4 = *(float *)(v3 + 4 * a2);
  v5 = (float *)(v3 + 4 * a2);
  if ( a3 == v4 )
    return 0;
  *v5 = a3;
  return 1;
}
