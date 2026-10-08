int __cdecl _powhlp(double a1, double a2, double *a3)
{
  double v3; // st7
  int v4; // esi
  double v5; // st6
  double *v6; // eax
  int v7; // eax

  v3 = 0.0; /*0x994cee*/
  v4 = 0; /*0x994cf6*/
  v5 = a1; /*0x994cfa*/
  if ( a1 < 0.0 ) /*0x994d00*/
    v5 = -a1; /*0x994d02*/
  if ( HIDWORD(a2) == 0x7FF00000 ) /*0x994d11*/
  {
    if ( !LODWORD(a2) ) /*0x994d16*/
    {
      if ( v5 <= 1.0 ) /*0x994d21*/
      {
        v6 = a3; /*0x994d3d*/
        if ( v5 >= 1.0 ) /*0x994d40*/
          v3 = 1.0; /*0x994d49*/
        goto LABEL_28; /*0x994d49*/
      }
      goto LABEL_6; /*0x994d21*/
    }
  }
  else if ( a2 == -INFINITY ) /*0x994d53*/
  {
    if ( v5 > 1.0 ) /*0x994d63*/
      goto LABEL_27; /*0x994d63*/
    v6 = a3; /*0x994d77*/
    if ( v5 < 1.0 ) /*0x994d7a*/
    {
      v3 = dbl_B31B40; /*0x994d7c*/
LABEL_28:
      *v6 = v3; /*0x994e18*/
      return v4; /*0x994e1a*/
    }
    *a3 = dbl_B31B48; /*0x994d8f*/
    return 1; /*0x994d92*/
  }
  if ( HIDWORD(a1) == 0x7FF00000 ) /*0x994d9c*/
  {
    if ( !LODWORD(a1) ) /*0x994da1*/
    {
      if ( a2 <= 0.0 ) /*0x994dab*/
      {
        v6 = a3; /*0x994db9*/
        if ( a2 >= 0.0 ) /*0x994dbc*/
          v3 = 1.0; /*0x994dc0*/
        goto LABEL_28; /*0x994dc2*/
      }
LABEL_6:
      v3 = dbl_B31B40; /*0x994d27*/
LABEL_27:
      v6 = a3; /*0x994e15*/
      goto LABEL_28; /*0x994e15*/
    }
  }
  else if ( a1 == -INFINITY ) /*0x994dc9*/
  {
    v7 = _d_inttype(a2); /*0x994dd8*/
    v3 = 0.0; /*0x994ddd*/
    if ( a2 <= 0.0 ) /*0x994deb*/
    {
      if ( a2 >= 0.0 ) /*0x994e06*/
      {
        v3 = 1.0; /*0x994e1e*/
      }
      else if ( v7 == 1 ) /*0x994e0b*/
      {
        v3 = dbl_B31B60; /*0x994e0f*/
      }
    }
    else
    {
      v3 = dbl_B31B40; /*0x994df2*/
      if ( v7 == 1 ) /*0x994df8*/
        v3 = -dbl_B31B40; /*0x994dfa*/
    }
    goto LABEL_27; /*0x994dfc*/
  }
  return v4; /*0x994e26*/
}
