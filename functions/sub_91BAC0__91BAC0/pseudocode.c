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
  _BYTE v21[64]; // [esp+20h] [ebp-40h] BYREF

  v3 = a2;
  if ( a3 < (double)*(float *)&SrcStr )
    a3 = *(float *)(a2 + 0x10);
  result = *(_DWORD *)(a2 + 0x3C);
  v5 = 0;
  for ( i = 0; v5 < result; i = v5 )
  {
    v6 = *(_DWORD *)(*(_DWORD *)(v3 + 0x38) + 4 * v5);
    v7 = *(_DWORD *)(v6 + 0x38);
    v8 = (_DWORD *)(v6 + 0x34);
    v19 = v8;
    v18 = 0;
    if ( v7 > 0 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD **)(*v8 + 4 * v18);
        v10 = v9[0x12];
        v11 = 0;
        if ( v10 <= 0 )
        {
LABEL_11:
          v13 = v9 + 5;
        }
        else
        {
          v12 = (_DWORD *)v9[0x11];
          while ( *v12 != 0x1134 )
          {
            ++v11;
            v12 += 4;
            if ( v11 >= v10 )
              goto LABEL_11;
          }
          v16 = 0;
          v17 = (_DWORD *)v9[0x11];
          while ( *v17 != 0x1134 )
          {
            ++v16;
            v17 += 4;
            if ( v16 >= v10 )
            {
              v13 = 0;
              goto LABEL_12;
            }
          }
          v13 = *(_DWORD **)(0x10 * v16 + v9[0x11] + 8);
        }
LABEL_12:
        v14 = (__m128 *)v9[0x14];
        v15 = (a3 - v14[5].m128_f32[3]) * v14[6].m128_f32[3];
        if ( fabs(v15 - fConstant_1) >= flt_A3C778 && *(float *)&SrcStr == fabs((double)(v15 > flt_A31C80)) )
        {
          sub_89DB70(v14, a3, (int)v21);
          (*(void (__stdcall **)(_BYTE *, _DWORD *, int))(*(_DWORD *)a1 + 0xC))(v21, v13, dword_BA8438);
        }
        else
        {
          (*(void (__stdcall **)(__m128 *, _DWORD *, int))(*(_DWORD *)a1 + 0xC))(v14 + 1, v13, dword_BA8438);
        }
        if ( ++v18 >= v19[1] )
          break;
        v8 = v19;
      }
      v3 = a2;
      v5 = i;
    }
    result = *(_DWORD *)(v3 + 0x3C);
    ++v5;
  }
  return result;
}
