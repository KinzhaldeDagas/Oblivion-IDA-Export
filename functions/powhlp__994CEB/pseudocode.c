int __cdecl _powhlp(double a1, double a2, double *a3)
{
  double v3; // st7
  int v4; // esi
  double v5; // st6
  double *v6; // eax
  int v7; // eax

  v3 = 0.0;
  v4 = 0;
  v5 = a1;
  if ( a1 < 0.0 )
    v5 = -a1;
  if ( HIDWORD(a2) == 0x7FF00000 )
  {
    if ( !LODWORD(a2) )
    {
      if ( v5 <= 1.0 )
      {
        v6 = a3;
        if ( v5 >= 1.0 )
          v3 = 1.0;
        goto LABEL_28;
      }
      goto LABEL_6;
    }
  }
  else if ( a2 == -INFINITY )
  {
    if ( v5 > 1.0 )
      goto LABEL_27;
    v6 = a3;
    if ( v5 < 1.0 )
    {
      v3 = dbl_B31B40;
LABEL_28:
      *v6 = v3;
      return v4;
    }
    *a3 = dbl_B31B48;
    return 1;
  }
  if ( HIDWORD(a1) == 0x7FF00000 )
  {
    if ( !LODWORD(a1) )
    {
      if ( a2 <= 0.0 )
      {
        v6 = a3;
        if ( a2 >= 0.0 )
          v3 = 1.0;
        goto LABEL_28;
      }
LABEL_6:
      v3 = dbl_B31B40;
LABEL_27:
      v6 = a3;
      goto LABEL_28;
    }
  }
  else if ( a1 == -INFINITY )
  {
    v7 = _d_inttype(a2);
    v3 = 0.0;
    if ( a2 <= 0.0 )
    {
      if ( a2 >= 0.0 )
      {
        v3 = 1.0;
      }
      else if ( v7 == 1 )
      {
        v3 = dbl_B31B60;
      }
    }
    else
    {
      v3 = dbl_B31B40;
      if ( v7 == 1 )
        v3 = -dbl_B31B40;
    }
    goto LABEL_27;
  }
  return v4;
}
