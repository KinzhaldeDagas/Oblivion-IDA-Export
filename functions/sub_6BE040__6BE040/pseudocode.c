float *__cdecl sub_6BE040(float *a1, float a2, int a3, int a4, int a5, int *a6, char a7)
{
  double v7; // st7
  int v8; // ebp
  int v9; // edi
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  float *v12; // ebx
  float *v13; // ebp
  int v14; // edx
  double v15; // st6
  float *v16; // edx
  float v17; // ecx
  float v18; // edx
  float v20; // ecx
  float v21; // edx
  int v22; // ecx
  float v23; // [esp+20h] [ebp-20h]
  float *v24; // [esp+24h] [ebp-1Ch]
  float *v25; // [esp+28h] [ebp-18h]
  unsigned int v26; // [esp+2Ch] [ebp-14h]
  float v27; // [esp+30h] [ebp-10h] BYREF
  float v28; // [esp+34h] [ebp-Ch]
  float v29; // [esp+38h] [ebp-8h]
  float v30; // [esp+3Ch] [ebp-4h]
  int v31; // [esp+54h] [ebp+14h]
  int v32; // [esp+54h] [ebp+14h]
  int v33; // [esp+54h] [ebp+14h]
  int v34; // [esp+54h] [ebp+14h]
  int v35; // [esp+54h] [ebp+14h]
  float v36; // [esp+54h] [ebp+14h]

  if ( a5 == 1 || (v7 = a2, -flt_A7DEB4 == a2) ) /*0x6be064*/
  {
    *a1 = *(float *)(a3 + 4); /*0x6be25d*/
    a1[1] = *(float *)(a3 + 8); /*0x6be262*/
    v22 = *(_DWORD *)(a3 + 0x10); /*0x6be268*/
    a1[2] = *(float *)(a3 + 0xC); /*0x6be26b*/
    *((_DWORD *)a1 + 3) = v22; /*0x6be26e*/
    return a1; /*0x6be256*/
  }
  else
  {
    v8 = a3; /*0x6be06f*/
    v9 = *a6; /*0x6be07a*/
    v10 = a5 - 1; /*0x6be081*/
    v26 = a5 - 1; /*0x6be084*/
    v23 = *(float *)(*a6 * (unsigned __int8)a7 + a3); /*0x6be08b*/
    if ( v23 > v7 ) /*0x6be09a*/
    {
      v9 = 0; /*0x6be09f*/
      v23 = *(float *)a3; /*0x6be0a1*/
    }
    v11 = v9 + 1; /*0x6be0a5*/
    if ( (int)(v10 - v9) < 4 ) /*0x6be0b2*/
    {
      v15 = *(float *)&a5; /*0x6be1b8*/
LABEL_13:
      if ( v11 <= v10 ) /*0x6be188*/
      {
        v16 = (float *)(v8 + v11 * (unsigned __int8)a7); /*0x6be18f*/
        do /*0x6be1b4*/
        {
          v35 = *(int *)v16; /*0x6be195*/
          v15 = *(float *)&v35; /*0x6be199*/
          if ( *(float *)&v35 >= v7 ) /*0x6be1a4*/
            break; /*0x6be1a4*/
          ++v11; /*0x6be1a6*/
          v23 = *(float *)&v35; /*0x6be1a9*/
          ++v9; /*0x6be1ad*/
          v16 = (float *)((char *)v16 + (unsigned __int8)a7); /*0x6be1b0*/
        }
        while ( v11 <= v10 ); /*0x6be1b4*/
      }
    }
    else
    {
      v25 = (float *)(a3 + (unsigned __int8)a7 * (v9 + 4)); /*0x6be0c0*/
      v12 = (float *)(a3 + v11 * (unsigned __int8)a7); /*0x6be0d1*/
      v13 = (float *)(a3 + (unsigned __int8)a7 * (v9 + 2)); /*0x6be0d9*/
      v14 = 4 * (unsigned __int8)a7; /*0x6be0dd*/
      v24 = (float *)(a3 + (unsigned __int8)a7 * (v9 + 3)); /*0x6be0e4*/
      while ( 1 ) /*0x6be0ee*/
      {
        v31 = *(int *)v12; /*0x6be0ee*/
        v15 = *(float *)&v31; /*0x6be0f2*/
        if ( *(float *)&v31 >= v7 ) /*0x6be0fd*/
          break; /*0x6be0fd*/
        v23 = *(float *)&v31; /*0x6be103*/
        v32 = *(int *)v13; /*0x6be10a*/
        v15 = *(float *)&v32; /*0x6be10e*/
        if ( *(float *)&v32 >= v7 ) /*0x6be119*/
        {
          ++v11; /*0x6be1be*/
          ++v9; /*0x6be1c1*/
          break; /*0x6be1c4*/
        }
        v23 = *(float *)&v32; /*0x6be123*/
        v33 = *(int *)v24; /*0x6be129*/
        v15 = *(float *)&v33; /*0x6be12d*/
        if ( *(float *)&v33 >= v7 ) /*0x6be138*/
        {
          v11 += 2; /*0x6be1c6*/
          v9 += 2; /*0x6be1c9*/
          break; /*0x6be1cc*/
        }
        v23 = *(float *)&v33; /*0x6be142*/
        v34 = *(int *)v25; /*0x6be148*/
        v15 = *(float *)&v34; /*0x6be14c*/
        if ( *(float *)&v34 >= v7 ) /*0x6be157*/
        {
          v11 += 3; /*0x6be1ce*/
          v9 += 3; /*0x6be1d1*/
          break; /*0x6be1d1*/
        }
        v23 = *(float *)&v34; /*0x6be15d*/
        v24 = (float *)((char *)v24 + v14); /*0x6be161*/
        v25 = (float *)((char *)v25 + v14); /*0x6be165*/
        v11 += 4; /*0x6be169*/
        v9 += 4; /*0x6be16f*/
        v12 = (float *)((char *)v12 + v14); /*0x6be172*/
        v13 = (float *)((char *)v13 + v14); /*0x6be174*/
        if ( v11 > v26 - 3 ) /*0x6be178*/
        {
          v10 = v26; /*0x6be17e*/
          v8 = a3; /*0x6be182*/
          goto LABEL_13; /*0x6be182*/
        }
      }
      v8 = a3; /*0x6be1d4*/
    }
    v27 = 0.0; /*0x6be1df*/
    v28 = 0.0; /*0x6be1e3*/
    v29 = 0.0; /*0x6be1e7*/
    v30 = 0.0; /*0x6be1eb*/
    v36 = (v7 - v23) / (v15 - v23); /*0x6be213*/
    (*(void (__cdecl **)(_DWORD, int, unsigned int, float *))(4 * a4 + 0xB3D040))( /*0x6be21e*/
      LODWORD(v36),
      v8 + v9 * (unsigned __int8)a7,
      v8 + v11 * (unsigned __int8)a7,
      &v27);
    v17 = v27; /*0x6be224*/
    v18 = v28; /*0x6be228*/
    *a6 = v9; /*0x6be22f*/
    *a1 = v17; /*0x6be236*/
    v20 = v29; /*0x6be238*/
    a1[1] = v18; /*0x6be23c*/
    v21 = v30; /*0x6be23f*/
    a1[2] = v20; /*0x6be245*/
    a1[3] = v21; /*0x6be248*/
    return a1; /*0x6be231*/
  }
}
