int __cdecl sub_91BAC0(int a1, int a2, float a3)
{
  int v3; // edx
  int result; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // edx
  _DWORD *v13; // esi
  __m128 *v14; // ecx
  double v15; // st7
  int v16; // eax
  _DWORD *v17; // edx
  int v18; // [esp+Ch] [ebp-54h]
  _DWORD *v19; // [esp+18h] [ebp-48h]
  int i; // [esp+1Ch] [ebp-44h]
  __m128 v21[4]; // [esp+20h] [ebp-40h] BYREF

  v3 = a2; /*0x91bacc*/
  if ( a3 < (double)*(float *)&SrcStr ) /*0x91badd*/
    a3 = *(float *)(a2 + 0x10); /*0x91bae2*/
  result = *(_DWORD *)(a2 + 0x3C); /*0x91bae5*/
  v5 = 0; /*0x91bae8*/
  for ( i = 0; v5 < result; i = v5 ) /*0x91baf0*/
  {
    v6 = *(_DWORD *)(*(_DWORD *)(v3 + 0x38) + 4 * v5); /*0x91baf9*/
    v7 = *(_DWORD *)(v6 + 0x38); /*0x91bafc*/
    v8 = (_DWORD *)(v6 + 0x34); /*0x91baff*/
    v19 = v8; /*0x91bb04*/
    v18 = 0; /*0x91bb08*/
    if ( v7 > 0 ) /*0x91bb10*/
    {
      while ( 1 ) /*0x91bb26*/
      {
        v9 = *(_DWORD **)(*v8 + 4 * v18); /*0x91bb26*/
        v10 = v9[0x12]; /*0x91bb29*/
        v11 = 0; /*0x91bb2c*/
        if ( v10 <= 0 ) /*0x91bb30*/
        {
LABEL_11:
          v13 = v9 + 5; /*0x91bb54*/
        }
        else
        {
          v12 = (_DWORD *)v9[0x11]; /*0x91bb35*/
          while ( *v12 != 0x1134 ) /*0x91bb46*/
          {
            ++v11; /*0x91bb4c*/
            v12 += 4; /*0x91bb4d*/
            if ( v11 >= v10 ) /*0x91bb52*/
              goto LABEL_11; /*0x91bb52*/
          }
          v16 = 0; /*0x91bbd1*/
          v17 = (_DWORD *)v9[0x11]; /*0x91bbd7*/
          while ( *v17 != 0x1134 ) /*0x91bbe6*/
          {
            ++v16; /*0x91bbe8*/
            v17 += 4; /*0x91bbe9*/
            if ( v16 >= v10 ) /*0x91bbee*/
            {
              v13 = 0; /*0x91bbf0*/
              goto LABEL_12; /*0x91bbf6*/
            }
          }
          v13 = *(_DWORD **)(0x10 * v16 + v9[0x11] + 8); /*0x91bbfe*/
        }
LABEL_12:
        v14 = (__m128 *)v9[0x14]; /*0x91bb57*/
        v15 = (a3 - v14[5].m128_f32[3]) * v14[6].m128_f32[3]; /*0x91bb60*/
        if ( fabs(v15 - fConstant_1) >= flt_A3C778 && *(float *)&SrcStr == fabs((double)(v15 > flt_A31C80)) ) /*0x91bbae*/
        {
          sub_89DB70(v14, a3, v21); /*0x91bbb9*/
          (*(void (__stdcall **)(__m128 *, _DWORD *, int))(*(_DWORD *)a1 + 0xC))(v21, v13, unk_BA8438); /*0x91bbcf*/
        }
        else
        {
          (*(void (__stdcall **)(__m128 *, _DWORD *, int))(*(_DWORD *)a1 + 0xC))(v14 + 1, v13, unk_BA8438); /*0x91bc24*/
        }
        if ( ++v18 >= v19[1] ) /*0x91bc39*/
          break; /*0x91bc39*/
        v8 = v19; /*0x91bb18*/
      }
      v3 = a2; /*0x91bc3f*/
      v5 = i; /*0x91bc42*/
    }
    result = *(_DWORD *)(v3 + 0x3C); /*0x91bc46*/
    ++v5; /*0x91bc49*/
  }
  return result; /*0x91bc59*/
}
