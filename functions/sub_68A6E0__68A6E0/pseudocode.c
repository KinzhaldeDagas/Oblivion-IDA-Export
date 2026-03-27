bool __thiscall sub_68A6E0(float *this, float *a2)
{
  float **v3; // ecx
  bool result; // al
  float *v5; // eax

  v3 = *((float ***)this + 1);
  result = 1;
  if ( v3 )
  {
    if ( a2 )
    {
      sub_68B110(v3);
      return *(this + 3) >= sub_4D7E30(a2, v5);
    }
  }
  return result;
}
