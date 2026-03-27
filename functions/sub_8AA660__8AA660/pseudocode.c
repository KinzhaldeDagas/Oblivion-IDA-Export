int __thiscall sub_8AA660(_DWORD *this)
{
  unsigned int v1; // edx
  float v2; // ebp
  int v3; // esi
  float *v4; // eax
  int result; // eax
  float v6; // [esp+8h] [ebp-4h]

  v1 = 0;
  if ( *(this + 3) )
  {
    v2 = flt_A30634;
    v3 = 0;
    v6 = 0.0 / fCostant_100;
    do
    {
      v4 = (float *)(v3 + *(this + 1));
      *v4 = v2;
      v4[1] = v6;
      ++v1;
      v4[2] = v6;
      v3 += 0xC;
    }
    while ( v1 < *(this + 3) );
    *(this + 3) = 0;
    *(this + 4) = 0;
    return 0;
  }
  else
  {
    *(this + 3) = 0;
    *(this + 4) = 0;
  }
  return result;
}
