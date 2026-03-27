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

  v2 = *((_DWORD **)this + 0xD9);
  if ( v2 )
    v21 = v2[2];
  else
    v21 = 0;
  v24 = *((float *)this + 0xCF) * dbl_A3C770;
  v19 = sub_8913C0(this->m128_f32) + dbl_A967E8;
  v25.m128_f32[0] = 0.0;
  v25.m128_f32[1] = v19;
  v25.m128_f32[2] = 0.0;
  v25.m128_f32[3] = 0.0;
  sub_6848D0(v2, v34);
  sub_88FE00(&v25, v34, &v25);
  sub_891440(this, &v30);
  v3 = v21;
  v4 = 0;
  v33 = _mm_add_ps(v30, v25);
  v20 = 0;
  if ( *(int *)(v21 + 0x124) <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = *(int ***)(*(_DWORD *)(v3 + 0x120) + 4 * v4);
    if ( v5 )
    {
      switch ( (unsigned int)v5[7] & 0x3F )
      {
        case 4u:
        case 5u:
        case 6u:
        case 7u:
        case 8u:
        case 0xAu:
        case 0xBu:
        case 0xCu:
        case 0x10u:
        case 0x11u:
        case 0x14u:
          goto LABEL_19;
        default:
          v6 = *v5;
          v7 = (*(int (__thiscall **)(int *))(**v5 + 8))(*v5);
          if ( v7 != 3 && v7 != 9 && v7 != 0x18 )
            goto LABEL_19;
          v8 = (__m128 *)v5[2];
          v32 = 1.0;
          v9 = 0;
          v28 = 0;
          v29 = 0;
          sub_88FD10(&v26, v8, &v30);
          sub_88FD10(&v27, (__m128 *)v5[2], &v33);
          v10 = 1.0;
          v18 = 0;
          break;
      }
      while ( 1 )
      {
        v11 = *v6;
        v32 = v10;
        v12 = *(void (__thiscall **)(int *, char *, __m128 *, _BYTE *))(v11 + 0x14);
        v26.m128_f32[2] = v26.m128_f32[2] + v24;
        v27.m128_f32[2] = v24 + v27.m128_f32[2];
        v12(v6, &v22, &v26, v31);
        v10 = 1.0;
        if ( v32 < 1.0 )
          break;
        if ( (unsigned int)++v9 >= 3 )
          goto LABEL_15;
      }
      v18 = 1;
LABEL_15:
      sub_88FD10(&v26, (__m128 *)v5[2], &v33);
      sub_88FD10(&v27, (__m128 *)v5[2], &v30);
      if ( !v18 )
        break;
    }
LABEL_19:
    v3 = v21;
    v4 = ++v20;
    if ( v20 >= *(_DWORD *)(v21 + 0x124) )
      return 0;
  }
  v13 = 1.0;
  v14 = 0;
  while ( 1 )
  {
    v15 = *v6;
    v32 = v13;
    v16 = *(void (__thiscall **)(int *, char *, __m128 *, _BYTE *))(v15 + 0x14);
    v26.m128_f32[2] = v26.m128_f32[2] + v24;
    v27.m128_f32[2] = v24 + v27.m128_f32[2];
    v16(v6, &v23, &v26, v31);
    v13 = 1.0;
    if ( v32 < 1.0 )
      return 1;
    if ( (unsigned int)++v14 >= 3 )
      goto LABEL_19;
  }
}
