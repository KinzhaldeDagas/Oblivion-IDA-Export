// positive sp value has been detected, the output may be wrong!
char __usercall def_96A36B@<al>(int a1@<ebp>)
{
  int v1; // esi
  double v2; // st7
  float *v3; // eax
  float v5; // [esp+18h] [ebp-4h]
  float v6; // [esp+18h] [ebp-4h]
  float v7; // [esp+18h] [ebp-4h]
  float v8; // [esp+38h] [ebp+1Ch]
  float v9; // [esp+3Ch] [ebp+20h]
  float v10; // [esp+40h] [ebp+24h]

  if ( *(_BYTE *)(a1 + 0x24) )
  {
    v1 = *(_DWORD *)(a1 + 0x28);
    v5 = sub_47DA40((float *)v1);
    v2 = v5;
    v6 = v5 - dbl_A2F928;
    v7 = fabs(v6);
    if ( flt_AA3B44 < (double)v7 )
    {
      if ( flt_AA3B44 >= v2 )
      {
        *(_DWORD *)v1 = dword_B258D0;
        *(_DWORD *)(v1 + 4) = dword_B258D4;
        *(_DWORD *)(v1 + 8) = dword_B258D8;
      }
      else
      {
        sub_43F350((float *)v1);
      }
    }
    v8 = -*(float *)v1;
    v9 = -*(float *)(v1 + 4);
    v3 = *(float **)(a1 + 0x2C);
    v10 = -*(float *)(v1 + 8);
    *v3 = v8;
    v3[1] = v9;
    v3[2] = v10;
  }
  return 1;
}
