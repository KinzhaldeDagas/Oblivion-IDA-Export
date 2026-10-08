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

  v4 = *(float *)(this + 8); /*0x9282c8*/
  *(float *)(a3 + 8) = *(float *)(this + 8); /*0x9282cf*/
  *(float *)(a3 + 0xC) = -v4; /*0x9282d4*/
  v6 = *(float **)(a2 + 0x18); /*0x9282d7*/
  v19 = *(float *)(a2 + 8) - *v6; /*0x9282e1*/
  v21 = *v6 - *(float *)(a2 + 4); /*0x9282ea*/
  *v6 = *(float *)(a2 + 8); /*0x9282ee*/
  *(_DWORD *)(a3 + 0x10) = *(_DWORD *)(this + 0xC); /*0x9282f3*/
  *(_DWORD *)(a3 + 0x14) = *(_DWORD *)(this + 0x10); /*0x9282f9*/
  result = *(_DWORD *)(a2 + 0xC); /*0x9282ff*/
  v8 = *(float *)(this + 0x14) * *(float *)(result + 8) * v21; /*0x928305*/
  v20 = *(float *)(this + 0x18) * *(float *)(result + 8); /*0x928315*/
  if ( fabs(v21 - v8) <= v20 ) /*0x928326*/
  {
    v13 = v21; /*0x928343*/
  }
  else
  {
    v10 = v20; /*0x92832e*/
    if ( v11 | v12 ) /*0x928334*/
      v10 = -v10; /*0x928339*/
    v13 = v8 + v10; /*0x92833b*/
  }
  v14 = v13 + *(float *)(a2 + 0x14); /*0x928347*/
  v22 = fabs(v21); /*0x928350*/
  if ( v14 >= v22 ) /*0x92835d*/
    v14 = v22; /*0x928361*/
  v23 = -v22; /*0x92836b*/
  v16 = v14 < v23; /*0x92836f*/
  v17 = 0; /*0x92836f*/
  v18 = v14 == v23; /*0x92836f*/
  LOWORD(result) = v15; /*0x928373*/
  if ( v14 <= v23 ) /*0x928378*/
    v14 = v23; /*0x92837c*/
  *(float *)(a3 + 4) = (v14 - *(float *)(a2 + 0x14) + v19) * *(float *)(*(_DWORD *)(a2 + 0xC) + 0xC); /*0x92838d*/
  *(_DWORD *)a3 = *(_DWORD *)(a2 + 0x14); /*0x928393*/
  *(_DWORD *)(a3 + 0x18) = 1; /*0x928395*/
  return result; /*0x92839c*/
}
