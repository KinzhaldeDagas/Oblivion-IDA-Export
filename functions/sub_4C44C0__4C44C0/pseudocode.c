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

  v4 = *(_DWORD *)(a2 + 0x18);
  sub_4C1DD0(this, v4, *(_DWORD *)(a2 + 0x40), v17);
  sub_4C1DD0(this, v4, *(_DWORD *)(a2 + 0x44), v15);
  sub_4C1DD0(this, v4, *(_DWORD *)(a2 + 0x48), v19);
  if ( *(_BYTE *)(a2 + 0x4C) )
  {
    if ( *(_BYTE *)(a2 + 0x4D) )
    {
      v9 = dbl_A3F428;
      v10 = dbl_A46050;
      v22 = (v18 - v20) * v10;
      v11 = (v9 - *(float *)(a2 + 0x1C)) * v22;
      v23 = v10 * (v18 - v16);
      *a3 = v18 - ((v9 - *(float *)(a2 + 0x20)) * v23 + v11);
      return 1;
    }
    else
    {
      v12 = dbl_A46050;
      v24 = (v16 - v18) * v12;
      v13 = v24 * *(float *)(a2 + 0x1C) + v18;
      v25 = v12 * (v20 - v18);
      *a3 = v13 + v25 * *(float *)(a2 + 0x20);
      return 1;
    }
  }
  else
  {
    v6 = dbl_A46050;
    v21 = (v18 - v16) * v6;
    v7 = v16;
    v14 = v6 * (v20 - v18);
    if ( *(_BYTE *)(a2 + 0x4D) )
    {
      *a3 = v7 + *(float *)(a2 + 0x20) * v21 + *(float *)(a2 + 0x1C) * v14;
      return 1;
    }
    else
    {
      *a3 = v7 + *(float *)(a2 + 0x1C) * v21 + *(float *)(a2 + 0x20) * v14;
      return 1;
    }
  }
}
