// Oblivion generic authored-key range copier. For non-type-4 tracks, counts existing timestamps inclusively in [start,end], allocates through content/type dispatch, type-copies each selected record, and rebases its timestamp to time-start. Does not synthesize boundary samples. For rotation type 4, recursively slices three scalar axes, allocates one 0x4C outer Euler record, and installs the axis results.
void __cdecl NiAnimationKey_CopyRangeRebased(
        int a1,
        int a2,
        float *a3,
        unsigned int a4,
        float a5,
        float a6,
        int **a7,
        _DWORD *a8)
{
  int i; // ebx
  int v9; // eax
  int *v10; // esi
  int v11; // edx
  int *v12; // ecx
  double v13; // st7
  double v14; // st6
  unsigned int v15; // esi
  int v16; // eax
  unsigned int v17; // edx
  float *v18; // esi
  int v19; // ecx
  float *v20; // ebx
  double v21; // st4
  double v22; // st4
  double v23; // st4
  double v24; // st4
  float *v25; // ecx
  double v26; // st5
  double v27; // st7
  float *v28; // ebx
  float *v29; // esi
  int v30; // [esp-Ch] [ebp-68h]
  float *v31; // [esp-8h] [ebp-64h]
  unsigned int v32; // [esp-4h] [ebp-60h]
  int v33; // [esp+Ch] [ebp-50h]
  double v34; // [esp+24h] [ebp-38h]
  int v35; // [esp+2Ch] [ebp-30h]
  void (__cdecl *v36)(float *, float *); // [esp+30h] [ebp-2Ch]
  unsigned int v37; // [esp+34h] [ebp-28h]
  int v38[3]; // [esp+38h] [ebp-24h] BYREF
  int v39[3]; // [esp+44h] [ebp-18h] BYREF
  unsigned int v40; // [esp+58h] [ebp-4h]
  unsigned __int8 v41; // [esp+64h] [ebp+8h]

  if ( a2 == 4 ) /*0x6d323e*/
  {
    for ( i = 0; i < 3; ++i ) /*0x6d3248*/
    {
      v32 = LODWORD(a3[(unsigned __int8)i + 5]); /*0x6d3275*/
      v31 = (float *)LODWORD(a3[(unsigned __int8)i + 0xC]); /*0x6d3276*/
      v30 = LODWORD(a3[(unsigned __int8)i + 8]); /*0x6d3277*/
      *((_DWORD *)&v34 + i) = v30; /*0x6d327a*/
      NiAnimationKey_CopyRangeRebased(0, v30, v31, v32, a5, a6, (int **)&v39[i], &v38[i]); /*0x6d327e*/
    }
    v9 = FormHeapAlloc(0x4Cu); /*0x6d3290*/
    v40 = 0; /*0x6d329e*/
    if ( v9 ) /*0x6d32a6*/
    {
      v10 = (int *)(v9 + 4); /*0x6d32b4*/
      *(_DWORD *)v9 = 1; /*0x6d32ba*/
      ArrayConstructor((char *)(v9 + 4), 0x48u, 1, (void (__thiscall *)(char *))sub_6BE430, Shared_NoOpVirtual_60D0A0); /*0x6d32c0*/
    }
    else
    {
      v10 = 0; /*0x6d32c7*/
    }
    v33 = v35; /*0x6d32d5*/
    v11 = v39[2]; /*0x6d32d6*/
    *a7 = v10; /*0x6d32da*/
    *a8 = 1; /*0x6d32dc*/
    v12 = *a7; /*0x6d3305*/
    v40 = 0xFFFFFFFF; /*0x6d3308*/
    NiEulerRotKey_SetAxisTracks(v12, v39[0], v38[0], SLODWORD(v34), v39[1], v38[1], SHIDWORD(v34), v11, v38[2], v33); /*0x6d3310*/
  }
  else
  {
    v13 = a6; /*0x6d332d*/
    v14 = a5; /*0x6d3335*/
    v15 = a2 + 6 * a1; /*0x6d3340*/
    *a8 = 0; /*0x6d3343*/
    LOBYTE(v16) = byte_B3D3E8[v15]; /*0x6d3349*/
    v17 = 0; /*0x6d334f*/
    v37 = v15; /*0x6d3354*/
    v41 = v16; /*0x6d3358*/
    if ( (int)a4 >= 4 ) /*0x6d335c*/
    {
      v16 = (unsigned __int8)v16; /*0x6d3368*/
      LODWORD(v34) = a3; /*0x6d336e*/
      v36 = (void (__cdecl *)(float *, float *))((char *)a3 + 2 * (unsigned __int8)v16); /*0x6d3375*/
      v18 = (float *)((char *)a3 + 2 * v16 + v16); /*0x6d337d*/
      v19 = 4 * (unsigned __int8)v16; /*0x6d337f*/
      v20 = (float *)((char *)a3 + (unsigned __int8)v16); /*0x6d3386*/
      while ( 1 ) /*0x6d338c*/
      {
        v21 = *(float *)LODWORD(v34); /*0x6d338c*/
        if ( v21 >= v14 ) /*0x6d3395*/
        {
          if ( v21 > v13 ) /*0x6d339e*/
            goto LABEL_31; /*0x6d339e*/
          ++*a8; /*0x6d33a4*/
        }
        v22 = *v20; /*0x6d33ab*/
        if ( v22 >= v14 ) /*0x6d33b4*/
        {
          if ( v22 > v13 ) /*0x6d33bd*/
            goto LABEL_31; /*0x6d33bd*/
          ++*a8; /*0x6d33c3*/
        }
        v23 = *(float *)v36; /*0x6d33ce*/
        if ( v23 >= v14 ) /*0x6d33d7*/
        {
          if ( v23 > v13 ) /*0x6d33e0*/
            goto LABEL_31; /*0x6d33e0*/
          ++*a8; /*0x6d33e2*/
        }
        v24 = *v18; /*0x6d33e9*/
        if ( v24 >= v14 ) /*0x6d33f2*/
        {
          if ( v24 > v13 ) /*0x6d33fb*/
          {
LABEL_31:
            v15 = v37; /*0x6d345e*/
            goto LABEL_32; /*0x6d345e*/
          }
          ++*a8; /*0x6d33fd*/
        }
        LODWORD(v34) += v19; /*0x6d3404*/
        v36 = (void (__cdecl *)(float *, float *))((char *)v36 + v19); /*0x6d3408*/
        v17 += 4; /*0x6d340c*/
        v20 = (float *)((char *)v20 + v19); /*0x6d3412*/
        v18 = (float *)((char *)v18 + v19); /*0x6d3414*/
        if ( v17 >= a4 - 3 ) /*0x6d3418*/
        {
          v15 = v37; /*0x6d341e*/
          break; /*0x6d341e*/
        }
      }
    }
    if ( v17 < a4 ) /*0x6d3426*/
    {
      v25 = (float *)((char *)a3 + v17 * (unsigned __int8)v16); /*0x6d3432*/
      do /*0x6d3458*/
      {
        v26 = *v25; /*0x6d3436*/
        if ( v26 >= v14 ) /*0x6d343f*/
        {
          if ( v26 > v13 ) /*0x6d3448*/
            break; /*0x6d3448*/
          ++*a8; /*0x6d344a*/
        }
        ++v17; /*0x6d3451*/
        v25 = (float *)((char *)v25 + (unsigned __int8)v16); /*0x6d3454*/
      }
      while ( v17 < a4 ); /*0x6d3458*/
    }
LABEL_32:
    if ( *a8 ) /*0x6d3466*/
    {
      *a7 = (int *)(*(int (__cdecl **)(_DWORD))(4 * v15 + 0xB3D358))(*a8); /*0x6d3480*/
      v36 = *(void (__cdecl **)(float *, float *))(4 * v15 + 0xB3D530); /*0x6d348e*/
      v37 = 0; /*0x6d3492*/
      *a8 = 0; /*0x6d349a*/
      if ( a4 ) /*0x6d34a0*/
      {
        v27 = a5; /*0x6d34a6*/
        v28 = a3; /*0x6d34af*/
        v34 = a5; /*0x6d34b3*/
        do /*0x6d3509*/
        {
          if ( *v28 >= v27 ) /*0x6d34c0*/
          {
            if ( a6 < (double)*v28 ) /*0x6d34cf*/
              return; /*0x6d34cf*/
            v29 = (float *)((char *)*a7 + v41 * *a8); /*0x6d34da*/
            v36(v29, v28); /*0x6d34de*/
            v27 = v34; /*0x6d34ed*/
            *v29 = *v28 - v34; /*0x6d34ef*/
            ++*a8; /*0x6d34f1*/
          }
          v28 = (float *)((char *)v28 + v41); /*0x6d34ff*/
          ++v37; /*0x6d3505*/
        }
        while ( v37 < a4 ); /*0x6d3509*/
      }
    }
    else
    {
      *a7 = 0; /*0x6d3525*/
    }
  }
}
