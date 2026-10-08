char __cdecl sub_96E5E0(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        char a6,
        _DWORD *a7,
        float *a8,
        float *a9,
        float *a10)
{
  double y; // st7
  double v11; // st5
  double x; // st4
  double v13; // st6
  double z; // st3
  double v15; // st2
  float *v16; // edi
  float *v17; // ebx
  double v18; // st1
  double v19; // st7
  double v20; // st1
  double v21; // st4
  double v22; // st2
  double v23; // st3
  float *v24; // ebp
  float *v25; // ecx
  double v27; // st6
  float *v28; // eax
  float *v29; // eax
  NiPoint3 other; // [esp+18h] [ebp-30h] BYREF
  float v31; // [esp+24h] [ebp-24h] BYREF
  float v32; // [esp+28h] [ebp-20h]
  float v33; // [esp+2Ch] [ebp-1Ch]
  NiPoint3 v34; // [esp+30h] [ebp-18h] BYREF
  NiPoint3 out; // [esp+3Ch] [ebp-Ch] BYREF
  float v36; // [esp+54h] [ebp+Ch]
  float v37; // [esp+54h] [ebp+Ch]
  float v38; // [esp+54h] [ebp+Ch]
  float v39; // [esp+54h] [ebp+Ch]
  float v40; // [esp+54h] [ebp+Ch]
  float v41; // [esp+54h] [ebp+Ch]
  float v42; // [esp+58h] [ebp+10h]
  float v43; // [esp+58h] [ebp+10h]
  float v44; // [esp+58h] [ebp+10h]

  other.x = *a4 - *a3; /*0x96e5f2*/
  other.y = a4[1] - a3[1]; /*0x96e601*/
  other.z = a4[2] - a3[2]; /*0x96e60f*/
  v31 = *a5 - *a3; /*0x96e617*/
  v32 = a5[1] - a3[1]; /*0x96e621*/
  v33 = a5[2] - a3[2]; /*0x96e62b*/
  v34.x = a2[1] * v33 - a2[2] * v32; /*0x96e649*/
  v34.y = a2[2] * v31 - v33 * *a2; /*0x96e662*/
  v34.z = v32 * *a2 - v31 * a2[1]; /*0x96e66f*/
  y = v34.y; /*0x96e673*/
  v11 = other.y; /*0x96e679*/
  x = v34.x; /*0x96e681*/
  v13 = other.x; /*0x96e68f*/
  z = v34.z; /*0x96e69f*/
  v42 = v34.x * other.x + v34.y * other.y + v34.z * other.z; /*0x96e6a1*/
  v15 = v42; /*0x96e6b3*/
  if ( v42 < (double)flt_A3C778 ) /*0x96e6b8*/
  {
    v27 = v34.z; /*0x96e80f*/
    if ( !a6 && flt_AA3D4C >= v15 ) /*0x96e824*/
    {
      v16 = a1; /*0x96e82a*/
      v17 = a9; /*0x96e830*/
      v34.x = *a1 - *a3; /*0x96e836*/
      v34.y = a1[1] - a3[1]; /*0x96e840*/
      v34.z = a1[2] - a3[2]; /*0x96e84a*/
      v39 = v27 * v34.z + y * v34.y + x * v34.x; /*0x96e864*/
      *a9 = v39; /*0x96e86c*/
      if ( v39 <= 0.0 && v39 >= v15 ) /*0x96e884*/
      {
        NiPoint3_CrossProduct(&v34, &out, &other); /*0x96e898*/
        v40 = sub_47D9E0(a2, &out.x); /*0x96e8a9*/
        v24 = a10; /*0x96e8b1*/
        *a10 = v40; /*0x96e8b5*/
        if ( v40 <= 0.0 && v42 <= v40 + *a9 ) /*0x96e8d4*/
        {
          v41 = sub_47D9E0(&v31, &out.x); /*0x96e8e8*/
          v25 = a8; /*0x96e8f0*/
          *a8 = v41; /*0x96e8f4*/
          if ( v41 <= 0.0 ) /*0x96e8ff*/
          {
LABEL_17:
            v43 = 1.0 / v42; /*0x96e901*/
            *v17 = *v17 * v43; /*0x96e91f*/
            *v24 = *v24 * v43; /*0x96e926*/
            v44 = v43 * *v25; /*0x96e92b*/
            *v25 = v44; /*0x96e933*/
            v28 = sub_47DA10(&out.x, v44, a2); /*0x96e939*/
            v29 = sub_47D9B0(v16, &v34.x, v28); /*0x96e949*/
            *a7 = *(_DWORD *)v29; /*0x96e954*/
            a7[1] = *((_DWORD *)v29 + 1); /*0x96e95a*/
            a7[2] = *((_DWORD *)v29 + 2); /*0x96e962*/
            return 1; /*0x96e96b*/
          }
        }
      }
    }
  }
  else
  {
    v16 = a1; /*0x96e6be*/
    v17 = a9; /*0x96e6c6*/
    v34.x = *a1 - *a3; /*0x96e6cc*/
    v34.y = a1[1] - a3[1]; /*0x96e6d6*/
    v34.z = a1[2] - a3[2]; /*0x96e6e0*/
    v18 = y * v34.y; /*0x96e6f4*/
    v19 = v34.x; /*0x96e6f4*/
    v20 = x * v34.x + v18; /*0x96e700*/
    v21 = v34.z; /*0x96e700*/
    v22 = z * v34.z + v20; /*0x96e704*/
    v23 = v34.y; /*0x96e704*/
    v36 = v22; /*0x96e706*/
    *a9 = v36; /*0x96e70e*/
    if ( v36 < 0.0 ) /*0x96e719*/
      return 0; /*0x96e7f3*/
    if ( v42 < (double)v36 ) /*0x96e72a*/
      return 0; /*0x96e807*/
    v24 = a10; /*0x96e732*/
    v34.x = v23 * other.z - v21 * v11; /*0x96e740*/
    v34.y = v21 * v13 - v19 * other.z; /*0x96e752*/
    v34.z = v11 * v19 - v13 * v23; /*0x96e760*/
    v37 = a2[1] * v34.y + v34.x * *a2 + a2[2] * v34.z; /*0x96e77c*/
    *a10 = v37; /*0x96e784*/
    if ( v37 >= 0.0 && v42 >= v37 + *a9 ) /*0x96e7a3*/
    {
      v38 = sub_47D9E0(&v31, &v34.x); /*0x96e7b7*/
      v25 = a8; /*0x96e7bf*/
      *a8 = v38; /*0x96e7c3*/
      if ( v38 < 0.0 ) /*0x96e7ce*/
        return 0; /*0x96e7dd*/
      goto LABEL_17; /*0x96e7ce*/
    }
  }
  return 0; /*0x96e7d5*/
}
