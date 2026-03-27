char **__thiscall sub_78D600(char **this, int a2, int a3)
{
  unsigned int v4; // esi
  _DWORD *v5; // edi
  int v6; // ecx

  v4 = 0;
  v5 = this + 1;
  *this = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  sub_6EF4B0(this + 1, a3, 0);
  if ( a3 > 0 )
  {
    do
    {
      v6 = v5[1];
      if ( !v6 || v4 >= v5[2] - v6 )
        _invalid_parameter_noinfo();
      *(_BYTE *)(v4 + v5[1]) = *(_BYTE *)(v4 + a2);
      ++v4;
    }
    while ( (int)v4 < a3 );
  }
  return this;
}
