void __thiscall sub_6DF190(char *this, float *a2, float *a3)
{
  float *v3; // ebx
  float *v4; // ebp
  char *v5; // esi
  int v6; // edi
  double v7; // st7

  v3 = a2; /*0x6df197*/
  *a2 = flt_A7DEB4; /*0x6df19b*/
  v4 = a3; /*0x6df1a4*/
  *a3 = -flt_A7DEB4; /*0x6df1ac*/
  v5 = this + 0x38; /*0x6df1af*/
  v6 = 3; /*0x6df1b2*/
  do /*0x6df216*/
  {
    if ( *(_DWORD *)v5 ) /*0x6df1b7*/
    {
      (*(void (__thiscall **)(_DWORD, float **, float **))(**(_DWORD **)v5 + 0x80))(*(_DWORD *)v5, &a2, &a3); /*0x6df1cf*/
      if ( *(float *)&a3 != *(float *)&a2 ) /*0x6df1e6*/
      {
        v7 = *(float *)&a3; /*0x6df1f3*/
        if ( *v3 > (double)*(float *)&a2 ) /*0x6df1f1*/
          *v3 = *(float *)&a2; /*0x6df1f5*/
        if ( *v4 < v7 ) /*0x6df205*/
          *v4 = v7; /*0x6df207*/
      }
    }
    v5 += 4; /*0x6df210*/
    --v6; /*0x6df213*/
  }
  while ( v6 ); /*0x6df216*/
  if ( flt_A7DEB4 == *v3 && -flt_A7DEB4 == *v4 ) /*0x6df23b*/
  {
    *v3 = 0.0; /*0x6df240*/
    *v4 = 0.0; /*0x6df243*/
  }
}
