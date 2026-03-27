_DWORD *__thiscall sub_552730(int *this, _DWORD *a2)
{
  unsigned int v3; // ebp
  unsigned int i; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v9; // [esp+Ch] [ebp-8h]

  v3 = 0;
  sub_552240(a2, *(this + 1), *this);
  if ( *this )
  {
    do
    {
      for ( i = 0; i < *(this + 1); *(float *)(a2[3] + 4 * v7 + 4 * v3) = *(float *)(v9 + 4 * i - 4) )
      {
        v5 = *(this + 3);
        if ( !v5 || !((*(this + 4) - v5) >> 2) )
          _invalid_parameter_noinfo();
        v6 = a2[3];
        v9 = *(this + 3) + 4 * v3 * *(this + 1);
        if ( !v6 || !((a2[4] - v6) >> 2) )
          _invalid_parameter_noinfo();
        v7 = i * a2[1];
        ++i;
      }
      ++v3;
    }
    while ( v3 < *this );
  }
  return a2;
}
