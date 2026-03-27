void __thiscall sub_6DF190(char *this, float *a2, float *a3)
{
  float *v3; // ebx
  float *v4; // ebp
  char *v5; // esi
  int v6; // edi
  double v7; // st7

  v3 = a2;
  *a2 = flt_A7DEB4;
  v4 = a3;
  *a3 = -flt_A7DEB4;
  v5 = this + 0x38;
  v6 = 3;
  do
  {
    if ( *(_DWORD *)v5 )
    {
      (*(void (__thiscall **)(_DWORD, float **, float **))(**(_DWORD **)v5 + 0x80))(*(_DWORD *)v5, &a2, &a3);
      if ( *(float *)&a3 != *(float *)&a2 )
      {
        v7 = *(float *)&a3;
        if ( *v3 > (double)*(float *)&a2 )
          *v3 = *(float *)&a2;
        if ( *v4 < v7 )
          *v4 = v7;
      }
    }
    v5 += 4;
    --v6;
  }
  while ( v6 );
  if ( flt_A7DEB4 == *v3 && -flt_A7DEB4 == *v4 )
  {
    *v3 = 0.0;
    *v4 = 0.0;
  }
}
