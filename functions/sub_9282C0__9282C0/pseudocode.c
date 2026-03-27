int __thiscall sub_9282C0(int this, int a2, int a3)
{
  double v4; // st6
  float *v6; // eax
  int result; // eax
  double v8; // st7
  double v10; // st6
  unsigned __int8 v11; // c0
  unsigned __int8 v12; // c3
  double v13; // st7
  double v14; // st7
  __int16 v15; // fps
  bool v16; // c0
  char v17; // c2
  bool v18; // c3
  float v19; // [esp+4h] [ebp-4h]
  float v20; // [esp+Ch] [ebp+4h]
  float v21; // [esp+10h] [ebp+8h]
  float v22; // [esp+10h] [ebp+8h]
  float v23; // [esp+10h] [ebp+8h]

  v4 = *(float *)(this + 8);
  *(float *)(a3 + 8) = *(float *)(this + 8);
  *(float *)(a3 + 0xC) = -v4;
  v6 = *(float **)(a2 + 0x18);
  v19 = *(float *)(a2 + 8) - *v6;
  v21 = *v6 - *(float *)(a2 + 4);
  *v6 = *(float *)(a2 + 8);
  *(_DWORD *)(a3 + 0x10) = *(_DWORD *)(this + 0xC);
  *(_DWORD *)(a3 + 0x14) = *(_DWORD *)(this + 0x10);
  result = *(_DWORD *)(a2 + 0xC);
  v8 = *(float *)(this + 0x14) * *(float *)(result + 8) * v21;
  v20 = *(float *)(this + 0x18) * *(float *)(result + 8);
  if ( fabs(v21 - v8) <= v20 )
  {
    v13 = v21;
  }
  else
  {
    v10 = v20;
    if ( v11 | v12 )
      v10 = -v10;
    v13 = v8 + v10;
  }
  v14 = v13 + *(float *)(a2 + 0x14);
  v22 = fabs(v21);
  if ( v14 >= v22 )
    v14 = v22;
  v23 = -v22;
  v16 = v14 < v23;
  v17 = 0;
  v18 = v14 == v23;
  LOWORD(result) = v15;
  if ( v14 <= v23 )
    v14 = v23;
  *(float *)(a3 + 4) = (v14 - *(float *)(a2 + 0x14) + v19) * *(float *)(*(_DWORD *)(a2 + 0xC) + 0xC);
  *(_DWORD *)a3 = *(_DWORD *)(a2 + 0x14);
  *(_DWORD *)(a3 + 0x18) = 1;
  return result;
}
