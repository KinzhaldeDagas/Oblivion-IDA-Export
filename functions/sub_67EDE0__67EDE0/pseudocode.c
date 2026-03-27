double __cdecl sub_67EDE0(char *a1, int a2, TESObjectREFR *a3)
{
  double v4; // st7
  float *v5; // esi
  float *v6; // eax
  float v8; // [esp+4h] [ebp-10h]
  float v9[3]; // [esp+8h] [ebp-Ch] BYREF
  float v10; // [esp+18h] [ebp+4h]

  v8 = flt_A32048;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        v10 = sub_5EC1F0(a3, (float *)a2);
        if ( (((unsigned __int8)((unsigned int)a1[0x10] >> 3)
             ^ (unsigned __int8)((unsigned int)*(char *)(a2 + 0x10) >> 3))
            & 1) != 0 )
          v10 = flt_B3A420 + v10;
        if ( (((unsigned __int8)((unsigned int)a1[0x10] >> 6)
             ^ (unsigned __int8)((unsigned int)*(char *)(a2 + 0x10) >> 6))
            & 1) != 0 )
          v10 = flt_B3A428 + v10;
        v4 = 0.0;
        if ( v10 > 0.0 )
        {
          v5 = (float *)sub_4BEF40((char *)a2);
          v6 = (float *)sub_4BEF40(a1);
          v9[0] = *v6 - *v5;
          v9[1] = v6[1] - v5[1];
          v9[2] = v6[2] - v5[2];
          return (float)(sub_404C90(v9) + v10);
        }
        return (float)v4;
      }
    }
  }
  return v8;
}
