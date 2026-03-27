void __cdecl sub_6D3210(int a1, int a2, float *a3, unsigned int a4, float a5, float a6, int **a7, _DWORD *a8)
{
  int i; // ebx
  _DWORD *v9; // eax
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
  int v31; // [esp-8h] [ebp-64h]
  int v32; // [esp-4h] [ebp-60h]
  int v33; // [esp+Ch] [ebp-50h]
  double v34; // [esp+24h] [ebp-38h]
  int v35; // [esp+2Ch] [ebp-30h]
  float *v36; // [esp+30h] [ebp-2Ch]
  unsigned int v37; // [esp+34h] [ebp-28h]
  int v38[3]; // [esp+38h] [ebp-24h] BYREF
  int v39[3]; // [esp+44h] [ebp-18h] BYREF
  unsigned int v40; // [esp+58h] [ebp-4h]
  unsigned __int8 v41; // [esp+64h] [ebp+8h]

  if ( a2 == 4 )
  {
    for ( i = 0; i < 3; ++i )
    {
      v32 = LODWORD(a3[(unsigned __int8)i + 5]);
      v31 = LODWORD(a3[(unsigned __int8)i + 0xC]);
      v30 = LODWORD(a3[(unsigned __int8)i + 8]);
      *((_DWORD *)&v34 + i) = v30;
      sub_6D3210(0, v30, v31, v32, a5, a6, (int)&v39[i], (int)&v38[i]);
    }
    v9 = (_DWORD *)FormHeapAlloc(0x4Cu);
    v40 = 0;
    if ( v9 )
    {
      v10 = v9 + 1;
      *v9 = 1;
      ArrayConstructor(v9 + 1, 0x48u, 1, (int)sub_6BE430, TESTexture::ClearComponentReferences);
    }
    else
    {
      v10 = 0;
    }
    v33 = v35;
    v11 = v39[2];
    *a7 = v10;
    *a8 = 1;
    v12 = *a7;
    v40 = 0xFFFFFFFF;
    sub_6D3100(v12, v39[0], v38[0], SLODWORD(v34), v39[1], v38[1], SHIDWORD(v34), v11, v38[2], v33);
  }
  else
  {
    v13 = a6;
    v14 = a5;
    v15 = a2 + 6 * a1;
    *a8 = 0;
    LOBYTE(v16) = byte_B3D3E8[v15];
    v17 = 0;
    v37 = v15;
    v41 = v16;
    if ( (int)a4 >= 4 )
    {
      v16 = (unsigned __int8)v16;
      LODWORD(v34) = a3;
      v36 = (float *)((char *)a3 + 2 * (unsigned __int8)v16);
      v18 = (float *)((char *)a3 + 2 * v16 + v16);
      v19 = 4 * (unsigned __int8)v16;
      v20 = (float *)((char *)a3 + (unsigned __int8)v16);
      while ( 1 )
      {
        v21 = *(float *)LODWORD(v34);
        if ( v21 >= v14 )
        {
          if ( v21 > v13 )
            goto LABEL_31;
          ++*a8;
        }
        v22 = *v20;
        if ( v22 >= v14 )
        {
          if ( v22 > v13 )
            goto LABEL_31;
          ++*a8;
        }
        v23 = *v36;
        if ( v23 >= v14 )
        {
          if ( v23 > v13 )
            goto LABEL_31;
          ++*a8;
        }
        v24 = *v18;
        if ( v24 >= v14 )
        {
          if ( v24 > v13 )
          {
LABEL_31:
            v15 = v37;
            goto LABEL_32;
          }
          ++*a8;
        }
        LODWORD(v34) += v19;
        v36 = (float *)((char *)v36 + v19);
        v17 += 4;
        v20 = (float *)((char *)v20 + v19);
        v18 = (float *)((char *)v18 + v19);
        if ( v17 >= a4 - 3 )
        {
          v15 = v37;
          break;
        }
      }
    }
    if ( v17 < a4 )
    {
      v25 = (float *)((char *)a3 + v17 * (unsigned __int8)v16);
      do
      {
        v26 = *v25;
        if ( v26 >= v14 )
        {
          if ( v26 > v13 )
            break;
          ++*a8;
        }
        ++v17;
        v25 = (float *)((char *)v25 + (unsigned __int8)v16);
      }
      while ( v17 < a4 );
    }
LABEL_32:
    if ( *a8 )
    {
      *a7 = (int *)(*(int (__cdecl **)(_DWORD))(4 * v15 + 0xB3D358))(*a8);
      v36 = *(float **)(4 * v15 + 0xB3D530);
      v37 = 0;
      *a8 = 0;
      if ( a4 )
      {
        v27 = a5;
        v28 = a3;
        v34 = a5;
        do
        {
          if ( *v28 >= v27 )
          {
            if ( a6 < (double)*v28 )
              return;
            v29 = (float *)((char *)*a7 + v41 * *a8);
            ((void (__cdecl *)(float *, float *))v36)(v29, v28);
            v27 = v34;
            *v29 = *v28 - v34;
            ++*a8;
          }
          v28 = (float *)((char *)v28 + v41);
          ++v37;
        }
        while ( v37 < a4 );
      }
    }
    else
    {
      *a7 = 0;
    }
  }
}
