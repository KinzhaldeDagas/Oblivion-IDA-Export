double __thiscall sub_5511D0(unsigned int *this)
{
  unsigned int i; // ebx
  unsigned int j; // edi
  int v4; // eax
  unsigned int v5; // edx
  float v7; // [esp+8h] [ebp-8h]
  float v8; // [esp+Ch] [ebp-4h]

  v7 = 0.0;
  for ( i = 0; i < *this; ++i )
  {
    for ( j = 0; j < *(this + 1); v7 = v8 + v7 )
    {
      v4 = *(this + 3);
      if ( !v4 || !((int)(*(this + 4) - v4) >> 2) )
        _invalid_parameter_noinfo();
      v5 = j + i * *(this + 1);
      ++j;
      v8 = *(float *)(*(this + 3) + 4 * v5) * *(float *)(*(this + 3) + 4 * v5);
    }
  }
  return v7;
}
