char __thiscall sub_4C44C0(_DWORD *this, int a2, float *a3)
{
  int v4; // ebx
  double v6; // rt0
  double v7; // st7
  double v9; // st4
  double v10; // rt2
  double v11; // st5
  double v12; // rt0
  double v13; // st7
  float v14; // [esp+Ch] [ebp-28h]
  float v15[2]; // [esp+10h] [ebp-24h] BYREF
  float v16; // [esp+18h] [ebp-1Ch]
  float v17[2]; // [esp+1Ch] [ebp-18h] BYREF
  float v18; // [esp+24h] [ebp-10h]
  float v19[2]; // [esp+28h] [ebp-Ch] BYREF
  float v20; // [esp+30h] [ebp-4h]
  float v21; // [esp+38h] [ebp+4h]
  float v22; // [esp+38h] [ebp+4h]
  float v23; // [esp+38h] [ebp+4h]
  float v24; // [esp+38h] [ebp+4h]
  float v25; // [esp+38h] [ebp+4h]

  v4 = *(_DWORD *)(a2 + 0x18); /*0x4c44c9*/
  sub_4C1DD0(this, v4, *(_DWORD *)(a2 + 0x40), v17); /*0x4c44db*/
  sub_4C1DD0(this, v4, *(_DWORD *)(a2 + 0x44), v15); /*0x4c44ec*/
  sub_4C1DD0(this, v4, *(_DWORD *)(a2 + 0x48), v19); /*0x4c44fd*/
  if ( *(_BYTE *)(a2 + 0x4C) ) /*0x4c4502*/
  {
    if ( *(_BYTE *)(a2 + 0x4D) ) /*0x4c457e*/
    {
      v9 = dbl_A3F428; /*0x4c4594*/
      v10 = dbl_A46050; /*0x4c45ac*/
      v22 = (v18 - v20) * v10; /*0x4c45ae*/
      v11 = (v9 - *(float *)(a2 + 0x1C)) * v22; /*0x4c45b6*/
      v23 = v10 * (v18 - v16); /*0x4c45c7*/
      *a3 = v18 - ((v9 - *(float *)(a2 + 0x20)) * v23 + v11); /*0x4c45d5*/
      return 1; /*0x4c4592*/
    }
    else
    {
      v12 = dbl_A46050; /*0x4c45f6*/
      v24 = (v16 - v18) * v12; /*0x4c45f8*/
      v13 = v24 * *(float *)(a2 + 0x1C) + v18; /*0x4c460f*/
      v25 = v12 * (v20 - v18); /*0x4c4611*/
      *a3 = v13 + v25 * *(float *)(a2 + 0x20); /*0x4c4620*/
      return 1; /*0x4c4622*/
    }
  }
  else
  {
    v6 = dbl_A46050; /*0x4c4522*/
    v21 = (v18 - v16) * v6; /*0x4c4524*/
    v7 = v16; /*0x4c452e*/
    v14 = v6 * (v20 - v18); /*0x4c4532*/
    if ( *(_BYTE *)(a2 + 0x4D) ) /*0x4c4508*/
    {
      *a3 = v7 + *(float *)(a2 + 0x20) * v21 + *(float *)(a2 + 0x1C) * v14; /*0x4c4576*/
      return 1; /*0x4c4567*/
    }
    else
    {
      *a3 = v7 + *(float *)(a2 + 0x1C) * v21 + *(float *)(a2 + 0x20) * v14; /*0x4c4551*/
      return 1; /*0x4c4553*/
    }
  }
}
