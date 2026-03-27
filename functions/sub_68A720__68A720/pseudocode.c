double __thiscall sub_68A720(float ***this, float *a2)
{
  float **v2; // ecx
  float *v3; // eax
  float v5; // [esp+0h] [ebp-4h]

  v2 = *(this + 1);
  v5 = 0.0;
  if ( a2 )
  {
    if ( v2 )
    {
      sub_68B110(v2);
      return (float)sub_4D7E30(a2, v3);
    }
  }
  return v5;
}
