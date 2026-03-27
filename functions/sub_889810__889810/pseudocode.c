void __cdecl sub_889810(float a1, char a2)
{
  double v2; // st6
  double v3; // st7
  unsigned int v4; // ecx
  double v5; // rt1
  double v6; // st6
  double v7; // st7
  int v8; // eax
  double v9; // st6
  double v10; // st5
  int v11; // eax
  double v12; // st7
  double v13; // st4
  double v14; // st5
  double v15; // st6

  flt_B2E2E4 = a1;
  flt_B2E2E0 = a1 + flt_BA7910;
  v2 = flt_B2E2E0;
  if ( v2 <= flt_A3D14C )
  {
    v3 = 0.0;
    if ( v2 <= 0.0 )
    {
      dword_BA7914 = 0;
      flt_BA790C = 0.0;
      return;
    }
  }
  else
  {
    v3 = 0.0;
    flt_B2E2E0 = flt_A3D14C;
    v2 = flt_B2E2E0;
  }
  v4 = 3 - (a2 != 0);
  if ( fromiUpdateType )
  {
    if ( fromiUpdateType != 0xA )
    {
      if ( flt_A95CA8 <= v2 )
      {
        v5 = v2;
        v6 = v3;
        v7 = v5;
        flt_BA7910 = v6;
        v8 = (__int64)(v5 / fMaxTime);
        dword_BA7914 = v8;
        if ( v8 > v4 )
        {
          v8 = 3 - (a2 != 0);
          dword_BA7914 = v4;
        }
        if ( v8 )
        {
          v9 = (double)v8;
          if ( v8 < 0 )
            v9 = v9 + flt_A2FC78;
          flt_BA790C = v7 / v9;
        }
        else
        {
          flt_BA790C = v7;
          dword_BA7914 = 1;
        }
      }
      else
      {
        flt_BA7910 = v2;
        dword_BA7914 = 0;
        flt_B2E2E0 = v3;
        flt_BA790C = v3;
      }
      return;
    }
    flt_B2E2EC = (v2 - flt_B2E2EC) * flt_B2E2F0 + flt_B2E2EC;
    v2 = flt_B2E2EC;
LABEL_17:
    flt_BA790C = v2;
    dword_BA7914 = 1;
    flt_BA7910 = v3;
    return;
  }
  v10 = fMaxTime;
  flt_BA790C = fMaxTime;
  v11 = (__int64)(v2 / v10);
  dword_BA7914 = v11;
  if ( v11 > v4 )
  {
    v11 = 3 - (a2 != 0);
    dword_BA7914 = v4;
  }
  if ( !v11 )
  {
    if ( v10 * dbl_A2FAA0 > v2 )
    {
      flt_BA7910 = v2;
      flt_B2E2E0 = v3;
      flt_BA790C = v3;
      return;
    }
    goto LABEL_17;
  }
  v12 = v10;
  v13 = (double)v11;
  if ( v11 < 0 )
    v13 = v13 + flt_A2FC78;
  flt_BA7910 = v2 - v13 * v10;
  v14 = v2 - flt_BA7910;
  v15 = flt_BA7910;
  flt_B2E2E0 = v14;
  if ( v15 >= v12 )
    flt_BA7910 = v12;
}
