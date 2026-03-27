char __stdcall sub_78FD30(float *a1, unsigned int a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // eax
  char v5; // bl
  int v6; // eax
  _DWORD *v7; // ebp
  unsigned int v8; // edi
  double v9; // st7
  unsigned int v10; // edi
  double v11; // st7
  int v12; // ecx
  int v13; // ecx
  double v14; // st5
  float *v15; // ecx
  float v17; // [esp+14h] [ebp+8h]
  float v18; // [esp+14h] [ebp+8h]

  v3 = dword_B429B8;
  v4 = *(_DWORD *)(dword_B429B8 + 0x14);
  v5 = 1;
  if ( !v4 || !((*(_DWORD *)(v3 + 0x18) - v4) / 0x54) )
    return 0;
  v6 = *(_DWORD *)(v3 + 0x14);
  v7 = (_DWORD *)(v3 + 0x14);
  if ( !v6 || a2 >= (*(_DWORD *)(v3 + 0x18) - v6) / 0x54 )
  {
    _invalid_parameter_noinfo();
    v3 = dword_B429B8;
  }
  v8 = *v7 + 0x54 * a2;
  if ( *(float *)(v8 + 0x4C) >= (double)*(float *)(v8 + 0x48) )
    v9 = *(float *)(v8 + 0x4C);
  else
    v9 = *(float *)(v8 + 0x48);
  v17 = v9;
  v10 = 0;
  v18 = *(float *)(v3 + 0x20) * v17;
  if ( sub_78FA80(a3) )
  {
    while ( 1 )
    {
      v11 = v18;
      if ( !v5 )
        break;
      v12 = a3[1];
      if ( !v12 || v10 >= (a3[2] - v12) >> 2 )
      {
        _invalid_parameter_noinfo();
        v11 = v18;
      }
      v13 = *(_DWORD *)(a3[1] + 4 * v10);
      v14 = *(float *)(v13 + 4);
      v15 = (float *)(v13 + 4);
      if ( v14 + v11 > *a1
        && *v15 - v11 < *a1
        && v15[1] + v11 > a1[1]
        && v15[1] - v11 < a1[1]
        && v15[2] + v11 > a1[2]
        && a1[2] > v15[2] - v11 )
      {
        v5 = 0;
      }
      if ( ++v10 >= sub_78FA80(a3) )
        return v5;
    }
  }
  return v5;
}
