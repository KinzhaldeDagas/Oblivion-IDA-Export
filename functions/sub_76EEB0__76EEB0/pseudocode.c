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

  v1 = *(float **)(a1 + 0x10); /*0x76eebd*/
  v2 = *(int **)(a1 + 0x24); /*0x76eec0*/
  result = 0; /*0x76eec3*/
  v12 = *(_WORD *)(a1 + 4); /*0x76eec9*/
  for ( i = 0; (unsigned __int16)i < *(_WORD *)(a1 + 8); ++i ) /*0x76eec5*/
  {
    if ( v12 == 3 ) /*0x76eeec*/
    {
      v13 = flt_A40098; /*0x76eef4*/
      if ( !v1 ) /*0x76eef8*/
      {
        *v2 = (int)flt_A40098 | (((int)flt_A40098 | (((int)flt_A40098 | ((int)v13 << 8)) << 8)) << 8); /*0x76efe4*/
        goto LABEL_6; /*0x76efe6*/
      }
      v4 = (int)v13; /*0x76ef0e*/
      v14 = *v1 * dbl_A3DDD8; /*0x76ef12*/
      v5 = (int)v14; /*0x76ef21*/
      v15 = v1[1] * dbl_A3DDD8; /*0x76ef2b*/
      v6 = (int)v15; /*0x76ef3a*/
      v16 = v1[2] * dbl_A3DDD8; /*0x76ef44*/
      v7 = (int)v16 | ((v6 | ((v5 | (v4 << 8)) << 8)) << 8); /*0x76ef5d*/
    }
    else
    {
      if ( !v1 ) /*0x76efed*/
      {
        *v2 = (int)flt_A40098 | (((int)flt_A40098 | (((int)flt_A40098 | ((int)flt_A40098 << 8)) << 8)) << 8); /*0x76f0c5*/
        goto LABEL_6; /*0x76f0c7*/
      }
      v17 = v1[3] * dbl_A3DDD8; /*0x76effa*/
      v8 = (int)v17; /*0x76f008*/
      v18 = *v1 * dbl_A3DDD8; /*0x76f012*/
      v9 = (int)v18; /*0x76f021*/
      v19 = v1[1] * dbl_A3DDD8; /*0x76f02b*/
      v10 = (int)v19; /*0x76f03a*/
      v20 = v1[2] * dbl_A3DDD8; /*0x76f044*/
      v7 = (int)v20 | ((v10 | ((v9 | (v8 << 8)) << 8)) << 8); /*0x76f05d*/
    }
    *v2 = v7; /*0x76ef61*/
    v1 = (float *)((char *)v1 + *(_DWORD *)(a1 + 0x18)); /*0x76ef63*/
LABEL_6:
    v2 = (int *)((char *)v2 + *(_DWORD *)(a1 + 0x20)); /*0x76ef66*/
    result += *(_DWORD *)(a1 + 0x1C); /*0x76ef6d*/
  }
  return result; /*0x76ef83*/
}
