double __userpurge sub_6C6B30@<st0>(float *this@<ecx>, int a2@<edi>, int a3, float a4)
{
  float *v5; // ebx
  float *v6; // esi
  int v7; // eax
  double v8; // st7
  int v9; // ecx
  int v10; // eax
  float *v11; // edx
  float *v12; // ebp
  int v13; // esi
  const char *v14; // eax
  double v15; // st6
  double v16; // st6
  double v17; // st7
  double v18; // st6
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  float *v22; // edx
  float *v23; // ecx
  unsigned int v24; // ebp
  int v25; // esi
  double result; // st7
  double v27; // st6
  bool v28; // c0
  bool v29; // c3
  double v30; // st6
  size_t v31; // [esp+4h] [ebp-2Ch]
  char v32; // [esp+1Bh] [ebp-15h]
  float *v33; // [esp+1Ch] [ebp-14h]
  float *v35; // [esp+24h] [ebp-Ch]
  float *v36; // [esp+28h] [ebp-8h]
  float *v37; // [esp+2Ch] [ebp-4h]
  float v38; // [esp+2Ch] [ebp-4h]
  int v39; // [esp+34h] [ebp+4h]
  bool v40; // [esp+34h] [ebp+4h]
  int v41; // [esp+34h] [ebp+4h]
  float v42; // [esp+38h] [ebp+8h]
  float v43; // [esp+38h] [ebp+8h]
  float v44; // [esp+38h] [ebp+8h]
  bool v45; // [esp+38h] [ebp+8h]
  float v46; // [esp+38h] [ebp+8h]
  float v47; // [esp+38h] [ebp+8h]

  HIDWORD(v31) = a2;
  v5 = 0;
  v6 = this;
  v42 = sub_6C5FC0(a3, a4, 0);
  v7 = *(_DWORD *)(a3 + 0x20);
  v8 = v42;
  v9 = *(_DWORD *)(v7 + 0xC);
  v10 = *(_DWORD *)(v7 + 0x10);
  v11 = 0;
  v12 = 0;
  v33 = 0;
  v37 = 0;
  if ( v9 )
  {
    v13 = v10;
    v39 = v9;
    do
    {
      v14 = *(const char **)(v13 + 4);
      if ( v14 )
      {
        LODWORD(v31) = MaxCount;
        if ( !_strnicmp(v14, off_B241C4, v31) )
        {
          v37 = (float *)v13;
          if ( !v12 )
            v12 = (float *)v13;
          if ( v42 <= (double)*(float *)v13 )
          {
            if ( !v5 )
              v5 = (float *)v13;
          }
          else
          {
            v33 = (float *)v13;
          }
        }
      }
      v13 += 8;
      --v39;
    }
    while ( v39 );
    v8 = v42;
    v6 = this;
    v11 = v37;
  }
  v32 = 0;
  if ( v5 )
  {
    if ( v33 )
    {
      v15 = *v33;
    }
    else
    {
      v33 = v11;
      v15 = *(float *)(a3 + 0x2C) - *(float *)(a3 + 0x30) + *v11;
    }
    v44 = v15;
    v17 = v8 - v44;
    v18 = *v5 - v44;
  }
  else
  {
    v5 = v12;
    v32 = 1;
    v16 = *v33;
    v17 = v8 - v16;
    v43 = *(float *)(a3 + 0x30) - *(float *)(a3 + 0x2C) + *v12;
    v18 = v43 - v16;
  }
  v19 = *((_DWORD *)v6 + 8);
  v20 = *(_DWORD *)(v19 + 0xC);
  v21 = *(_DWORD *)(v19 + 0x10);
  v40 = v33 == 0;
  v45 = v5 == 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v35 = 0;
  v36 = 0;
  if ( v20 )
  {
    v25 = v21;
    while ( 1 )
    {
      if ( v40 )
      {
        if ( v45 )
          goto LABEL_30;
      }
      else
      {
        if ( !_strcmp(*(char **)(v25 + 4), *((char **)v33 + 1)) )
        {
          v35 = (float *)v25;
          v40 = 1;
        }
        if ( v45 )
          goto LABEL_29;
      }
      if ( !_strcmp(*(char **)(v25 + 4), *((char **)v5 + 1)) )
      {
        v36 = (float *)v25;
        v45 = 1;
      }
LABEL_29:
      v22 = v35;
      v23 = v36;
      ++v24;
      v25 += 8;
      if ( v24 >= v20 )
      {
LABEL_30:
        v6 = this;
        break;
      }
    }
  }
  v46 = 0.0;
  *(float *)&v41 = 0.0;
  if ( v22 == v23 )
  {
    v41 = *(int *)v22;
    v46 = *v23;
    if ( v32 )
      v46 = v6[0xC] - v6[0xB] + v46;
    else
      *(float *)&v41 = *(float *)&v41 - (v6[0xC] - v6[0xB]);
  }
  else
  {
    if ( v23 )
      v46 = *v23;
    if ( v22 )
      v41 = *(int *)v22;
    if ( v46 < (double)*(float *)&v41 )
      v46 = v46 + v6[0xC] - v6[0xB];
  }
  v38 = v17 / v18;
  v47 = (v46 - *(float *)&v41) * v38 + *(float *)&v41;
  result = v47;
  v27 = v6[0xB];
  v28 = v27 < v47;
  v29 = v27 == v47;
  v30 = v6[0xC];
  if ( v28 || v29 )
  {
    if ( v30 < result )
      return (float)(result - (v6[0xC] - v6[0xB]));
  }
  else
  {
    return (float)(result + v30 - v6[0xB]);
  }
  return result;
}
