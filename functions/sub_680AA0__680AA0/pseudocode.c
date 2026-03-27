double __cdecl sub_680AA0(int a1, float *a2, TESObjectREFR **a3, TESObjectREFR *a4, char a5)
{
  double v5; // st7
  float v7; // [esp+0h] [ebp-1Ch]
  float v8[3]; // [esp+4h] [ebp-18h] BYREF
  float v9[3]; // [esp+10h] [ebp-Ch] BYREF

  v7 = flt_A32048;
  if ( a1 )
  {
    if ( a3 )
    {
      if ( sub_6803A0(a3, a1, v8) )
      {
        if ( *a2 == dbl_A3A5B0 )
        {
          v5 = 0.0;
        }
        else
        {
          v9[0] = *a2 - v8[0];
          v9[1] = a2[1] - v8[1];
          v9[2] = a2[2] - v8[2];
          v5 = sub_404C90(v9);
        }
        v7 = v5;
        if ( a5 )
          return (float)(sub_6807F0(a3, a4) + v7);
      }
    }
  }
  return v7;
}
