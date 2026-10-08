int __thiscall sub_6B2F30(int *this, int a2, int a3)
{
  int v4; // esi
  int v5; // ebp
  double v6; // st7
  int result; // eax
  double v8; // st7
  int *v9; // edx
  int v10; // ecx
  double v11; // st5
  int i; // edi
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // edx
  int v18; // eax
  int v19; // edx
  int v20; // eax
  double v21; // st7
  int v22; // eax
  double v23; // st7
  int v24; // ebx
  int v25; // [esp+10h] [ebp-50h]
  float v26; // [esp+14h] [ebp-4Ch]
  _DWORD v27[18]; // [esp+18h] [ebp-48h] BYREF
  int v28; // [esp+68h] [ebp+8h]

  qmemcpy(v27, (const void *)(*(_DWORD *)(*this + 4) + 0x48 * a3 + 0x2C), sizeof(v27)); /*0x6b2f52*/
  v4 = 0; /*0x6b2f54*/
  v28 = 0; /*0x6b2f5a*/
  v25 = 0; /*0x6b2f5e*/
  if ( v27[4] && v27[5] == 2 ) /*0x6b2f69*/
  {
    if ( v27[6] ) /*0x6b2f6f*/
    {
      v5 = dword_B17F5C[0x25 * *(this + 0x104E)]; /*0x6b2f7d*/
    }
    else
    {
      v25 = dword_B17FB8[0x25 * *(this + 0x104E)]; /*0x6b2f97*/
      v5 = 3 * v25; /*0x6b2f9b*/
      v28 = 0; /*0x6b2f9f*/
    }
  }
  else
  {
    v5 = dword_B17F5C[0x25 * *(this + 0x104E)]; /*0x6b2fb1*/
  }
  v6 = (double)v27[2]; /*0x6b2fbb*/
  if ( v27[2] < 0 ) /*0x6b2fc1*/
    v6 = v6 + dbl_A30E60; /*0x6b2fc3*/
  v26 = pow(dbl_A3D0C0, (v6 - dbl_A77BF8) * dbl_A3C770); /*0x6b2fe2*/
  result = 0; /*0x6b2fe6*/
  if ( *(this + 4) > 0 ) /*0x6b2feb*/
  {
    v8 = v26; /*0x6b2fed*/
    v9 = this + 7; /*0x6b2ff1*/
    do /*0x6b3037*/
    {
      if ( *v9 ) /*0x6b2ff6*/
      {
        v10 = *v9; /*0x6b3003*/
        if ( *v9 <= 0 ) /*0x6b3007*/
          v11 = flt_B1BC50[-v10] * -v8; /*0x6b3025*/
        else
          v11 = *(float *)(4 * v10 + 0xB1BC50) * v8; /*0x6b3010*/
        *(float *)(a2 + 4 * result) = v11; /*0x6b302b*/
      }
      else
      {
        *(float *)(a2 + 4 * result) = 0.0; /*0x6b2ffe*/
      }
      ++result; /*0x6b302e*/
      ++v9; /*0x6b3031*/
    }
    while ( result < *(this + 4) ); /*0x6b3037*/
  }
  for ( i = 0; i < *(this + 4); *(float *)(a2 + 4 * i - 4) = v23 ) /*0x6b303d*/
  {
    if ( i != v5 ) /*0x6b304a*/
      goto LABEL_30; /*0x6b304a*/
    if ( v27[4] && v27[5] == 2 ) /*0x6b3060*/
    {
      v13 = *(this + 0x104E); /*0x6b306b*/
      if ( !v27[6] ) /*0x6b3071*/
        goto LABEL_26; /*0x6b3071*/
      v14 = dword_B17F78[0x25 * v13]; /*0x6b307b*/
      if ( i == v14 ) /*0x6b3083*/
      {
        v15 = 0x25 * v13; /*0x6b3087*/
        v16 = dword_B17FC4[0x25 * v13]; /*0x6b308d*/
        v17 = dword_B17FC0[v15]; /*0x6b3093*/
        v5 = 3 * v16; /*0x6b3099*/
        v25 = v16 - v17; /*0x6b309e*/
        v4 = 3; /*0x6b30a5*/
        v28 = 3 * v17; /*0x6b30aa*/
        goto LABEL_30; /*0x6b30ae*/
      }
      if ( i >= v14 ) /*0x6b30b0*/
      {
LABEL_26:
        v18 = ++v4 + 0x25 * v13; /*0x6b30ba*/
        v19 = dword_B17FB8[v18]; /*0x6b30bc*/
        v20 = dword_B17FB4[v18]; /*0x6b30c5*/
        v5 = 3 * v19; /*0x6b30cb*/
        v25 = v19 - v20; /*0x6b30d3*/
        v28 = 3 * v20; /*0x6b30d7*/
        goto LABEL_30; /*0x6b30db*/
      }
    }
    else
    {
      v13 = *(this + 0x104E); /*0x6b3108*/
    }
    v5 = *(_DWORD *)(4 * (++v4 + 0x25 * v13) + 0xB17F5C); /*0x6b3116*/
LABEL_30:
    if ( v27[4] && v27[5] == 2 && (!v27[6] || i >= 0x24) ) /*0x6b3135*/
    {
      v21 = *(float *)(4 /*0x6b315d*/
                     * ((*(this + 0xD * ((i - v28) / v25) + v4 + 0x1021) << SLOBYTE(v27[0x10]))
                      + 4 * v27[(i - v28) / v25 + 0xA])
                     + 0xB182D0);
    }
    else
    {
      v22 = *(this + v4 + 0x100A); /*0x6b316b*/
      if ( v27[0xF] ) /*0x6b3172*/
        v22 += *(_DWORD *)(4 * v4 + 0xB163A0); /*0x6b3174*/
      v21 = *(float *)(4 * (v22 << SLOBYTE(v27[0x10])) + 0xB182D0); /*0x6b3181*/
    }
    result = a2; /*0x6b3188*/
    v23 = v21 * *(float *)(a2 + 4 * i++); /*0x6b318c*/
  }
  v24 = *(this + 4); /*0x6b319f*/
  if ( v24 < 0x240 ) /*0x6b31a8*/
  {
    memset((void *)(a2 + 4 * v24), 0, 4 * (0x240 - v24)); /*0x6b31ba*/
    return 0; /*0x6b31b8*/
  }
  return result; /*0x6b31bc*/
}
