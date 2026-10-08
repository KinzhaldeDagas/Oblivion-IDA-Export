char __thiscall sub_892D90(__m128 *this)
{
  _DWORD *v2; // edi
  int v3; // ecx
  int v4; // eax
  int **v5; // esi
  int *v6; // ebx
  int v7; // eax
  __m128 *v8; // edx
  int v9; // edi
  double v10; // st7
  int v11; // edx
  void (__thiscall *v12)(int *, char *, __m128 *, _BYTE *); // edx
  double v13; // st7
  int v14; // esi
  int v15; // edx
  void (__thiscall *v16)(int *, char *, __m128 *, _BYTE *); // edx
  char v18; // [esp+17h] [ebp-E1h]
  float v19; // [esp+18h] [ebp-E0h]
  int v20; // [esp+18h] [ebp-E0h]
  int v21; // [esp+1Ch] [ebp-DCh]
  char v22; // [esp+22h] [ebp-D6h] BYREF
  char v23; // [esp+23h] [ebp-D5h] BYREF
  float v24; // [esp+24h] [ebp-D4h]
  __m128 v25; // [esp+28h] [ebp-D0h] BYREF
  __m128 v26; // [esp+38h] [ebp-C0h] BYREF
  __m128 v27; // [esp+48h] [ebp-B0h] BYREF
  int v28; // [esp+58h] [ebp-A0h]
  int v29; // [esp+5Ch] [ebp-9Ch]
  __m128 v30; // [esp+68h] [ebp-90h] BYREF
  _BYTE v31[20]; // [esp+78h] [ebp-80h] BYREF
  float v32; // [esp+8Ch] [ebp-6Ch]
  __m128 v33; // [esp+98h] [ebp-60h] BYREF
  __m128 v34[4]; // [esp+A8h] [ebp-50h] BYREF

  v2 = *((_DWORD **)this + 0xD9); /*0x892daf*/
  if ( v2 ) /*0x892db7*/
    v21 = v2[2]; /*0x892dbc*/
  else
    v21 = 0; /*0x892dc2*/
  v24 = *((float *)this + 0xCF) * dbl_A3C770; /*0x892dd6*/
  v19 = bhkCharacterController_GetRadius(this->m128_f32) + dbl_A967E8; /*0x892def*/
  v25.m128_f32[0] = 0.0; /*0x892df5*/
  v25.m128_f32[1] = v19; /*0x892dfd*/
  v25.m128_f32[2] = 0.0; /*0x892e01*/
  v25.m128_f32[3] = 0.0; /*0x892e05*/
  bhkRefObject_CopyHavokObjectTransform(v2, v34); /*0x892e09*/
  hkBasis_TransformVector(&v25, v34, &v25); /*0x892e1d*/
  bhkCharacterController_ReadRelativePosition(this, &v30); /*0x892e29*/
  v3 = v21; /*0x892e38*/
  v4 = 0; /*0x892e3c*/
  v33 = _mm_add_ps(v30, v25); /*0x892e41*/
  v20 = 0; /*0x892e4f*/
  if ( *(int *)(v21 + 0x124) <= 0 ) /*0x892e53*/
    return 0; /*0x892fe6*/
  while ( 1 ) /*0x892e66*/
  {
    v5 = *(int ***)(*(_DWORD *)(v3 + 0x120) + 4 * v4); /*0x892e66*/
    if ( v5 ) /*0x892e6b*/
    {
      switch ( (unsigned int)v5[7] & 0x3F ) /*0x892e86*/
      {
        case 4u: /*0x892e86*/
        case 5u: /*0x892e86*/
        case 6u: /*0x892e86*/
        case 7u: /*0x892e86*/
        case 8u: /*0x892e86*/
        case 0xAu: /*0x892e86*/
        case 0xBu: /*0x892e86*/
        case 0xCu: /*0x892e86*/
        case 0x10u: /*0x892e86*/
        case 0x11u: /*0x892e86*/
        case 0x14u: /*0x892e86*/
          goto LABEL_19;
        default:
          v6 = *v5; /*0x892e8d*/
          v7 = (*(int (__thiscall **)(int *))(**v5 + 8))(*v5); /*0x892e96*/
          if ( v7 != 3 && v7 != 9 && v7 != 0x18 ) /*0x892ea5*/
            goto LABEL_19; /*0x892ea5*/
          v8 = (__m128 *)v5[2]; /*0x892eab*/
          v32 = 1.0; /*0x892eb4*/
          v9 = 0; /*0x892ebc*/
          v28 = 0; /*0x892ec3*/
          v29 = 0; /*0x892ec7*/
          sub_88FD10(&v26, v8, &v30); /*0x892ecb*/
          sub_88FD10(&v27, (__m128 *)v5[2], &v33); /*0x892ee0*/
          v10 = 1.0; /*0x892ee5*/
          v18 = 0; /*0x892ee7*/
          break; /*0x892ee7*/
      }
      while ( 1 ) /*0x892eec*/
      {
        v11 = *v6; /*0x892eec*/
        v32 = v10; /*0x892eee*/
        v12 = *(void (__thiscall **)(int *, char *, __m128 *, _BYTE *))(v11 + 0x14); /*0x892ef9*/
        v26.m128_f32[2] = v26.m128_f32[2] + v24; /*0x892f14*/
        v27.m128_f32[2] = v24 + v27.m128_f32[2]; /*0x892f1f*/
        v12(v6, &v22, &v26, v31); /*0x892f23*/
        v10 = 1.0; /*0x892f25*/
        if ( v32 < 1.0 ) /*0x892f33*/
          break; /*0x892f33*/
        if ( (unsigned int)++v9 >= 3 ) /*0x892f3b*/
          goto LABEL_15; /*0x892f3b*/
      }
      v18 = 1; /*0x892f3f*/
LABEL_15:
      sub_88FD10(&v26, (__m128 *)v5[2], &v33); /*0x892f56*/
      sub_88FD10(&v27, (__m128 *)v5[2], &v30); /*0x892f68*/
      if ( !v18 ) /*0x892f72*/
        break; /*0x892f72*/
    }
LABEL_19:
    v3 = v21; /*0x892fcb*/
    v4 = ++v20; /*0x892fd3*/
    if ( v20 >= *(_DWORD *)(v21 + 0x124) ) /*0x892fe0*/
      return 0; /*0x892fe0*/
  }
  v13 = 1.0; /*0x892f74*/
  v14 = 0; /*0x892f76*/
  while ( 1 ) /*0x892f78*/
  {
    v15 = *v6; /*0x892f78*/
    v32 = v13; /*0x892f7a*/
    v16 = *(void (__thiscall **)(int *, char *, __m128 *, _BYTE *))(v15 + 0x14); /*0x892f85*/
    v26.m128_f32[2] = v26.m128_f32[2] + v24; /*0x892fa0*/
    v27.m128_f32[2] = v24 + v27.m128_f32[2]; /*0x892fab*/
    v16(v6, &v23, &v26, v31); /*0x892faf*/
    v13 = 1.0; /*0x892fb1*/
    if ( v32 < 1.0 ) /*0x892fbf*/
      return 1; /*0x892fe8*/
    if ( (unsigned int)++v14 >= 3 ) /*0x892fc7*/
      goto LABEL_19; /*0x892fc7*/
  }
}
