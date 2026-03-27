int __cdecl sub_76EEB0(int a1)
{
  float *v1; // edx
  int *v2; // esi
  int result; // eax
  int v4; // ecx
  int v5; // ebx
  int v6; // ebp
  int v7; // ecx
  int v8; // ecx
  int v9; // ebx
  int v10; // ebp
  int i; // [esp+44h] [ebp-Ch]
  __int16 v12; // [esp+48h] [ebp-8h]
  float v13; // [esp+4Ch] [ebp-4h]
  float v14; // [esp+4Ch] [ebp-4h]
  float v15; // [esp+4Ch] [ebp-4h]
  float v16; // [esp+4Ch] [ebp-4h]
  float v17; // [esp+4Ch] [ebp-4h]
  float v18; // [esp+4Ch] [ebp-4h]
  float v19; // [esp+4Ch] [ebp-4h]
  float v20; // [esp+4Ch] [ebp-4h]

  v1 = *(float **)(a1 + 0x10);
  v2 = *(int **)(a1 + 0x24);
  result = 0;
  v12 = *(_WORD *)(a1 + 4);
  for ( i = 0; (unsigned __int16)i < *(_WORD *)(a1 + 8); ++i )
  {
    if ( v12 == 3 )
    {
      v13 = flt_A40098;
      if ( !v1 )
      {
        *v2 = (int)flt_A40098 | (((int)flt_A40098 | (((int)flt_A40098 | ((int)v13 << 8)) << 8)) << 8);
        goto LABEL_6;
      }
      v4 = (int)v13;
      v14 = *v1 * dbl_A3DDD8;
      v5 = (int)v14;
      v15 = v1[1] * dbl_A3DDD8;
      v6 = (int)v15;
      v16 = v1[2] * dbl_A3DDD8;
      v7 = (int)v16 | ((v6 | ((v5 | (v4 << 8)) << 8)) << 8);
    }
    else
    {
      if ( !v1 )
      {
        *v2 = (int)flt_A40098 | (((int)flt_A40098 | (((int)flt_A40098 | ((int)flt_A40098 << 8)) << 8)) << 8);
        goto LABEL_6;
      }
      v17 = v1[3] * dbl_A3DDD8;
      v8 = (int)v17;
      v18 = *v1 * dbl_A3DDD8;
      v9 = (int)v18;
      v19 = v1[1] * dbl_A3DDD8;
      v10 = (int)v19;
      v20 = v1[2] * dbl_A3DDD8;
      v7 = (int)v20 | ((v10 | ((v9 | (v8 << 8)) << 8)) << 8);
    }
    *v2 = v7;
    v1 = (float *)((char *)v1 + *(_DWORD *)(a1 + 0x18));
LABEL_6:
    v2 = (int *)((char *)v2 + *(_DWORD *)(a1 + 0x20));
    result += *(_DWORD *)(a1 + 0x1C);
  }
  return result;
}
