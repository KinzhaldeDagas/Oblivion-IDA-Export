void __cdecl sub_92EF10(float *a1, float *a2, _DWORD *a3, _DWORD *a4, const void **a5)
{
  _DWORD *v5; // edx
  _DWORD *v6; // ebx
  int v7; // ecx
  _WORD *v9; // ebp
  int v10; // eax
  double v11; // st7
  _WORD *v12; // ebx
  int v13; // ecx
  _WORD **v14; // eax
  int v15; // eax
  int v16; // eax
  double v17; // st7
  _WORD *v18; // ebx
  int v19; // ecx
  _WORD **v20; // eax
  int v21; // ecx
  double v22; // st7
  int v23; // ecx
  double v24; // st7
  int v25; // ecx
  float v26; // [esp+10h] [ebp-1Ch]
  int v27; // [esp+14h] [ebp-18h]
  _WORD *v28; // [esp+24h] [ebp-8h]
  _WORD *v29; // [esp+24h] [ebp-8h]
  float v30; // [esp+28h] [ebp-4h]
  float v31; // [esp+28h] [ebp-4h]
  _WORD *v32; // [esp+34h] [ebp+8h]
  int v33; // [esp+34h] [ebp+8h]
  _WORD *v34; // [esp+38h] [ebp+Ch]

  v5 = a4;
  v6 = a3;
  v7 = a3[1];
  if ( v7 )
  {
    if ( a4[1] )
    {
      if ( *(float *)(*a3 + 4) >= (double)*(float *)(*a4 + 4) )
        v26 = *(float *)(*a4 + 4);
      else
        v26 = *(float *)(*a3 + 4);
    }
    else
    {
      v26 = *(float *)(*a3 + 4);
    }
  }
  else
  {
    v26 = *(float *)(*a4 + 4);
  }
  v9 = *((_WORD **)a2 + 1);
  v10 = 0;
  v32 = v9;
  v27 = 0;
  if ( v7 > 0 )
  {
    while ( 1 )
    {
      v11 = *(float *)(*v6 + 8 * v10 + 4) - v26;
      if ( v11 > *a1 )
        break;
      v12 = *(_WORD **)(*v6 + 8 * v10);
      v30 = v11 + a2[4];
      v13 = 0;
      v28 = (_WORD *)**(unsigned __int16 **)a2;
      if ( (int)a5[1] <= 0 )
      {
LABEL_19:
        if ( a5[1] == (const void *)((unsigned int)a5[2] & 0x3FFFFFFF) )
          sub_8A6EE0(a5, 0x14);
        v15 = (int)*a5 + 0x14 * (_DWORD)a5[1];
        *(_DWORD *)v15 = v12;
        *(_DWORD *)(v15 + 4) = v9;
        *(_DWORD *)(v15 + 8) = a2;
        *(_DWORD *)(v15 + 0xC) = v28;
        *(float *)(v15 + 0x10) = v30;
        a5[1] = (char *)a5[1] + 1;
      }
      else
      {
        v14 = (_WORD **)*a5;
        while ( 1 )
        {
          if ( **v14 == *v12 )
          {
            v9 = v32;
            if ( *v14[1] == *v32 && v14[3] == v28 )
              break;
          }
          ++v13;
          v14 += 5;
          if ( v13 >= (int)a5[1] )
          {
            v9 = v32;
            goto LABEL_19;
          }
        }
        v22 = *((float *)*a5 + 5 * v13 + 4);
        v23 = (int)*a5 + 0x14 * v13;
        if ( v22 < v30 )
        {
          *(_DWORD *)v23 = v12;
          *(_DWORD *)(v23 + 4) = v32;
          *(_DWORD *)(v23 + 8) = a2;
          *(_DWORD *)(v23 + 0xC) = v28;
          *(float *)(v23 + 0x10) = v30;
        }
      }
      v6 = a3;
      v10 = ++v27;
      if ( v27 >= a3[1] )
      {
        v5 = a4;
        break;
      }
      v5 = a4;
    }
  }
  v34 = *(_WORD **)a2;
  v16 = 0;
  v33 = 0;
  if ( (int)v5[1] > 0 )
  {
    do
    {
      v17 = *(float *)(*v5 + 8 * v16 + 4) - v26;
      if ( v17 > *a1 )
        break;
      v18 = *(_WORD **)(*v5 + 8 * v16);
      v31 = v17 + a2[4];
      v29 = (_WORD *)**((unsigned __int16 **)a2 + 1);
      v19 = 0;
      if ( (int)a5[1] <= 0 )
      {
LABEL_32:
        if ( a5[1] == (const void *)((unsigned int)a5[2] & 0x3FFFFFFF) )
          sub_8A6EE0(a5, 0x14);
        v21 = (int)*a5 + 0x14 * (_DWORD)a5[1];
        *(_DWORD *)v21 = v34;
        *(_DWORD *)(v21 + 4) = v18;
        *(_DWORD *)(v21 + 8) = a2;
        *(_DWORD *)(v21 + 0xC) = v29;
        *(float *)(v21 + 0x10) = v31;
        a5[1] = (char *)a5[1] + 1;
      }
      else
      {
        v20 = (_WORD **)*a5;
        while ( **v20 != *v34 || *v20[1] != *v18 || v20[3] != v29 )
        {
          ++v19;
          v20 += 5;
          if ( v19 >= (int)a5[1] )
            goto LABEL_32;
        }
        v24 = *((float *)*a5 + 5 * v19 + 4);
        v25 = (int)*a5 + 0x14 * v19;
        if ( v24 < v31 )
        {
          *(_DWORD *)v25 = v34;
          *(_DWORD *)(v25 + 4) = v18;
          *(_DWORD *)(v25 + 8) = a2;
          *(_DWORD *)(v25 + 0xC) = v29;
          *(float *)(v25 + 0x10) = v31;
        }
      }
      v5 = a4;
      v16 = ++v33;
    }
    while ( v33 < a4[1] );
  }
}
