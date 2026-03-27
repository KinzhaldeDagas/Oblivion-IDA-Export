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

  qmemcpy(v27, (const void *)(*(_DWORD *)(*this + 4) + 0x48 * a3 + 0x2C), sizeof(v27));
  v4 = 0;
  v28 = 0;
  v25 = 0;
  if ( v27[4] && v27[5] == 2 )
  {
    if ( v27[6] )
    {
      v5 = dword_B17F5C[0x25 * *(this + 0x104E)];
    }
    else
    {
      v25 = dword_B17FB8[0x25 * *(this + 0x104E)];
      v5 = 3 * v25;
      v28 = 0;
    }
  }
  else
  {
    v5 = dword_B17F5C[0x25 * *(this + 0x104E)];
  }
  v6 = (double)v27[2];
  if ( v27[2] < 0 )
    v6 = v6 + dbl_A30E60;
  v26 = pow(dbl_A3D0C0, (v6 - dbl_A77BF8) * dbl_A3C770);
  result = 0;
  if ( *(this + 4) > 0 )
  {
    v8 = v26;
    v9 = this + 7;
    do
    {
      if ( *v9 )
      {
        v10 = *v9;
        if ( *v9 <= 0 )
          v11 = flt_B1BC50[-v10] * -v8;
        else
          v11 = *(float *)(4 * v10 + 0xB1BC50) * v8;
        *(float *)(a2 + 4 * result) = v11;
      }
      else
      {
        *(float *)(a2 + 4 * result) = 0.0;
      }
      ++result;
      ++v9;
    }
    while ( result < *(this + 4) );
  }
  for ( i = 0; i < *(this + 4); *(float *)(a2 + 4 * i - 4) = v23 )
  {
    if ( i != v5 )
      goto LABEL_30;
    if ( v27[4] && v27[5] == 2 )
    {
      v13 = *(this + 0x104E);
      if ( !v27[6] )
        goto LABEL_26;
      v14 = dword_B17F78[0x25 * v13];
      if ( i == v14 )
      {
        v15 = 0x25 * v13;
        v16 = dword_B17FC4[0x25 * v13];
        v17 = dword_B17FC0[v15];
        v5 = 3 * v16;
        v25 = v16 - v17;
        v4 = 3;
        v28 = 3 * v17;
        goto LABEL_30;
      }
      if ( i >= v14 )
      {
LABEL_26:
        v18 = ++v4 + 0x25 * v13;
        v19 = dword_B17FB8[v18];
        v20 = dword_B17FB4[v18];
        v5 = 3 * v19;
        v25 = v19 - v20;
        v28 = 3 * v20;
        goto LABEL_30;
      }
    }
    else
    {
      v13 = *(this + 0x104E);
    }
    v5 = *(_DWORD *)(4 * (++v4 + 0x25 * v13) + 0xB17F5C);
LABEL_30:
    if ( v27[4] && v27[5] == 2 && (!v27[6] || i >= 0x24) )
    {
      v21 = *(float *)(4
                     * ((*(this + 0xD * ((i - v28) / v25) + v4 + 0x1021) << SLOBYTE(v27[0x10]))
                      + 4 * v27[(i - v28) / v25 + 0xA])
                     + 0xB182D0);
    }
    else
    {
      v22 = *(this + v4 + 0x100A);
      if ( v27[0xF] )
        v22 += *(_DWORD *)(4 * v4 + 0xB163A0);
      v21 = *(float *)(4 * (v22 << SLOBYTE(v27[0x10])) + 0xB182D0);
    }
    result = a2;
    v23 = v21 * *(float *)(a2 + 4 * i++);
  }
  v24 = *(this + 4);
  if ( v24 < 0x240 )
  {
    memset((void *)(a2 + 4 * v24), 0, 4 * (0x240 - v24));
    return 0;
  }
  return result;
}
