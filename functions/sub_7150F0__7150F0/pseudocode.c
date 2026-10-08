void __thiscall sub_7150F0(float *this, float *a2)
{
  double v3; // st5
  int v4; // ebx
  int v5; // edi
  int v6; // ebp
  double v7; // st7
  double v8; // st5
  double v9; // st7
  _DWORD v10[3]; // [esp+Ch] [ebp-Ch]
  float v11; // [esp+1Ch] [ebp+4h]
  float v12; // [esp+1Ch] [ebp+4h]
  float v13; // [esp+1Ch] [ebp+4h]
  float v14; // [esp+1Ch] [ebp+4h]
  float v15; // [esp+1Ch] [ebp+4h]
  float v16; // [esp+1Ch] [ebp+4h]
  float v17; // [esp+1Ch] [ebp+4h]
  float v18; // [esp+1Ch] [ebp+4h]
  float v19; // [esp+1Ch] [ebp+4h]
  float v20; // [esp+1Ch] [ebp+4h]

  v11 = *a2 + a2[4] + a2[8]; /*0x715107*/
  if ( v11 <= 0.0 ) /*0x71511a*/
  {
    v4 = *a2 < (double)a2[4]; /*0x715198*/
    if ( a2[4 * v4] < (double)a2[8] ) /*0x7151af*/
      v4 = 2; /*0x7151b1*/
    v5 = *(_DWORD *)(4 * v4 + 0xB27120); /*0x7151b6*/
    v6 = *(_DWORD *)(4 * v5 + 0xB27120); /*0x7151bd*/
    v15 = a2[4 * v4] - a2[4 * v5] - a2[4 * v6] + dbl_A2F928; /*0x7151e2*/
    v16 = sqrt(v15); /*0x7151ef*/
    v7 = v16; /*0x715202*/
    v10[0] = this + 1; /*0x715206*/
    v8 = dbl_A2FAA0; /*0x71520f*/
    v10[1] = this + 2; /*0x715215*/
    v10[2] = this + 3; /*0x715220*/
    v17 = v16 * v8; /*0x715228*/
    *(float *)v10[v4] = v17; /*0x715234*/
    v18 = v8 / v7; /*0x71523b*/
    v9 = v18; /*0x715252*/
    *this = (a2[3 * v6 + v5] - a2[3 * v5 + v6]) * v18; /*0x715254*/
    v19 = (a2[3 * v4 + v5] + a2[3 * v5 + v4]) * v18; /*0x715271*/
    *(float *)v10[v5] = v19; /*0x715279*/
    v20 = v9 * (a2[3 * v4 + v6] + a2[3 * v6 + v4]); /*0x71528b*/
    *(float *)v10[v6] = v20; /*0x715293*/
  }
  else
  {
    v12 = v11 + dbl_A2F928; /*0x715122*/
    v13 = sqrt(v12); /*0x71512f*/
    v3 = dbl_A2FAA0; /*0x715141*/
    *this = v13 * v3; /*0x71514b*/
    v14 = v3 / v13; /*0x71514f*/
    *(this + 1) = (a2[7] - a2[5]) * v14; /*0x715163*/
    *(this + 2) = (a2[2] - a2[6]) * v14; /*0x71516e*/
    *(this + 3) = v14 * (a2[3] - a2[1]); /*0x715179*/
  }
}
