int **__cdecl sub_7905D0(int **a1, int *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  int *v4; // edi
  int *i; // esi
  double v6; // st7
  double v7; // st6
  double v8; // st7
  double v9; // st6
  double v10; // st6
  double v11; // st6
  double v12; // st6
  double v13; // st7
  double v14; // st6
  int *v15; // ebp
  int *v16; // ecx
  double v17; // st7
  double v18; // st6
  int v19; // edx
  double v20; // st7
  int v21; // ebx
  double v22; // st6
  int v23; // edx
  double v24; // st7
  int v25; // ebx
  double v26; // st6
  int v27; // edx
  double v28; // st7
  int v29; // ebx
  double v30; // st6
  int v31; // edx
  double v32; // st7
  double v33; // st6
  int v34; // edx
  int *v35; // edx
  bool v36; // zf
  double v37; // st7
  double v38; // st6
  int v39; // eax
  int v40; // eax
  int v41; // ebx
  int v42; // eax
  int v43; // edx
  int v44; // eax
  int v45; // eax
  int *v47; // [esp+10h] [ebp-4h]

  v3 = a3;
  v4 = &a2[((int)(a3 - (_DWORD)a2) >> 2) / 2];
  sub_7904B0(a2, v4, (int *)(a3 - 4));
  for ( i = v4 + 1; a2 < v4; v4 += 0xFFFFFFFF )
  {
    v6 = *(float *)(v4[0xFFFFFFFF] + 0x2C);
    v7 = *(float *)(*v4 + 0x2C);
    if ( v7 < v6 )
      break;
    if ( v7 > v6 )
      break;
  }
  if ( (int)(a3 - (_DWORD)i + 3) / 4 < 4 )
  {
LABEL_16:
    if ( (unsigned int)i < a3 )
    {
      v13 = *(float *)(*v4 + 0x2C);
      do
      {
        v14 = *(float *)(*i + 0x2C);
        if ( v14 > v13 )
          break;
        if ( v14 < v13 )
          break;
        ++i;
      }
      while ( (unsigned int)i < a3 );
    }
  }
  else
  {
    v8 = *(float *)(*v4 + 0x2C);
    while ( 1 )
    {
      v9 = *(float *)(*i + 0x2C);
      if ( v9 > v8 || v9 < v8 )
        break;
      v10 = *(float *)(i[1] + 0x2C);
      if ( v10 > v8 || v10 < v8 )
      {
        ++i;
        break;
      }
      v11 = *(float *)(i[2] + 0x2C);
      if ( v11 > v8 || v11 < v8 )
      {
        i += 2;
        break;
      }
      v12 = *(float *)(i[3] + 0x2C);
      if ( v12 > v8 || v12 < v8 )
      {
        i += 3;
        break;
      }
      i += 4;
      if ( (int)i >= (int)(a3 - 0xC) )
        goto LABEL_16;
    }
  }
  v15 = v4;
  v16 = i;
  v47 = v4;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (int)(v3 - (_DWORD)v16 + 3) / 4 >= 4 )
      {
        while ( 1 )
        {
          v17 = *(float *)(*v4 + 0x2C);
          v18 = *(float *)(*v16 + 0x2C);
          if ( v18 >= v17 )
          {
            if ( v18 > v17 )
              goto LABEL_50;
            v19 = *i;
            *i++ = *v16;
            *v16 = v19;
          }
          v20 = *(float *)(*v4 + 0x2C);
          v21 = v16[1];
          v22 = *(float *)(v21 + 0x2C);
          if ( v22 >= v20 )
          {
            if ( v22 > v20 )
            {
              ++v16;
              goto LABEL_50;
            }
            v23 = *i;
            *i++ = v21;
            v16[1] = v23;
          }
          v24 = *(float *)(*v4 + 0x2C);
          v25 = v16[2];
          v26 = *(float *)(v25 + 0x2C);
          if ( v26 >= v24 )
          {
            if ( v26 > v24 )
            {
              v16 += 2;
              goto LABEL_50;
            }
            v27 = *i;
            *i++ = v25;
            v16[2] = v27;
          }
          v28 = *(float *)(*v4 + 0x2C);
          v29 = v16[3];
          v30 = *(float *)(v29 + 0x2C);
          if ( v30 >= v28 )
          {
            if ( v30 > v28 )
            {
              v16 += 3;
              goto LABEL_50;
            }
            v31 = *i;
            *i++ = v29;
            v16[3] = v31;
          }
          v16 += 4;
          if ( (int)v16 >= (int)(a3 - 0xC) )
          {
            v3 = a3;
            break;
          }
        }
      }
      if ( (unsigned int)v16 < v3 )
      {
        do
        {
          v32 = *(float *)(*v4 + 0x2C);
          v33 = *(float *)(*v16 + 0x2C);
          if ( v33 >= v32 )
          {
            if ( v33 > v32 )
              break;
            v34 = *i;
            *i++ = *v16;
            *v16 = v34;
          }
          ++v16;
        }
        while ( (unsigned int)v16 < a3 );
LABEL_50:
        v3 = a3;
      }
      v35 = a2;
      v36 = v15 == a2;
      if ( v15 > a2 )
      {
        do
        {
          v37 = *(float *)(v15[0xFFFFFFFF] + 0x2C);
          v38 = *(float *)(*v4 + 0x2C);
          if ( v38 >= v37 )
          {
            if ( v38 > v37 )
              break;
            v39 = v4[0xFFFFFFFF];
            v4 += 0xFFFFFFFF;
            *v4 = v15[0xFFFFFFFF];
            v35 = a2;
            v15[0xFFFFFFFF] = v39;
          }
          v15 += 0xFFFFFFFF;
        }
        while ( v35 < v15 );
        v47 = v15;
        v36 = v15 == v35;
      }
      if ( v36 )
        break;
      v15 += 0xFFFFFFFF;
      v47 = v15;
      if ( v16 == (int *)v3 )
      {
        v4 += 0xFFFFFFFF;
        if ( v15 != v4 )
        {
          v42 = *v15;
          *v15 = *v4;
          *v4 = v42;
        }
        v43 = i[0xFFFFFFFF];
        v44 = *v4;
        i += 0xFFFFFFFF;
        *v4 = v43;
        *i = v44;
      }
      else
      {
        v45 = *v16;
        *v16 = *v15;
        *v15 = v45;
        ++v16;
      }
    }
    if ( v16 == (int *)v3 )
      break;
    if ( i != v16 )
    {
      v40 = *v4;
      *v4 = *i;
      *i = v40;
    }
    v41 = *v4;
    *v4 = *v16;
    v15 = v47;
    ++i;
    ++v4;
    *v16 = v41;
    v3 = a3;
    ++v16;
  }
  *a1 = v4;
  a1[1] = i;
  return a1;
}
