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
  char *v15; // eax
  int v16; // eax
  double v17; // st7
  _WORD *v18; // ebx
  int v19; // ecx
  _WORD **v20; // eax
  char *v21; // ecx
  double v22; // st7
  char *v23; // ecx
  double v24; // st7
  char *v25; // ecx
  float v26; // [esp+10h] [ebp-1Ch]
  int v27; // [esp+14h] [ebp-18h]
  _WORD *v28; // [esp+24h] [ebp-8h]
  _WORD *v29; // [esp+24h] [ebp-8h]
  float v30; // [esp+28h] [ebp-4h]
  float v31; // [esp+28h] [ebp-4h]
  _WORD *v32; // [esp+34h] [ebp+8h]
  int v33; // [esp+34h] [ebp+8h]
  _WORD *v34; // [esp+38h] [ebp+Ch]

  v5 = a4; /*0x92ef10*/
  v6 = a3; /*0x92ef18*/
  v7 = a3[1]; /*0x92ef1c*/
  if ( v7 ) /*0x92ef24*/
  {
    if ( a4[1] ) /*0x92ef31*/
    {
      if ( *(float *)(*a3 + 4) >= (double)*(float *)(*a4 + 4) ) /*0x92ef58*/
        v26 = *(float *)(*a4 + 4); /*0x92ef66*/
      else
        v26 = *(float *)(*a3 + 4); /*0x92ef60*/
    }
    else
    {
      v26 = *(float *)(*a3 + 4); /*0x92ef3d*/
    }
  }
  else
  {
    v26 = *(float *)(*a4 + 4); /*0x92ef2b*/
  }
  v9 = *((_WORD **)a2 + 1); /*0x92ef6e*/
  v10 = 0; /*0x92ef75*/
  v32 = v9; /*0x92ef79*/
  v27 = 0; /*0x92ef7d*/
  if ( v7 > 0 ) /*0x92ef81*/
  {
    while ( 1 ) /*0x92ef99*/
    {
      v11 = *(float *)(*v6 + 8 * v10 + 4) - v26; /*0x92ef99*/
      if ( v11 > *a1 ) /*0x92efaa*/
        break; /*0x92efaa*/
      v12 = *(_WORD **)(*v6 + 8 * v10); /*0x92efb0*/
      v30 = v11 + a2[4]; /*0x92efbd*/
      v13 = 0; /*0x92efc1*/
      v28 = (_WORD *)**(unsigned __int16 **)a2; /*0x92efc5*/
      if ( (int)a5[1] <= 0 ) /*0x92efc9*/
      {
LABEL_19:
        if ( a5[1] == (const void *)((unsigned int)a5[2] & 0x3FFFFFFF) ) /*0x92f014*/
          sub_8A6EE0(a5, 0x14); /*0x92f019*/
        v15 = (char *)*a5 + 0x14 * (_DWORD)a5[1]; /*0x92f029*/
        *(_DWORD *)v15 = v12; /*0x92f034*/
        *((_DWORD *)v15 + 1) = v9; /*0x92f036*/
        *((_DWORD *)v15 + 2) = a2; /*0x92f039*/
        *((_DWORD *)v15 + 3) = v28; /*0x92f03c*/
        *((float *)v15 + 4) = v30; /*0x92f03f*/
        a5[1] = (char *)a5[1] + 1; /*0x92f042*/
      }
      else
      {
        v14 = (_WORD **)*a5; /*0x92efcb*/
        while ( 1 ) /*0x92efd0*/
        {
          if ( **v14 == *v12 ) /*0x92efd9*/
          {
            v9 = v32; /*0x92efe1*/
            if ( *v14[1] == *v32 && v14[3] == v28 ) /*0x92eff2*/
              break; /*0x92eff2*/
          }
          ++v13; /*0x92effb*/
          v14 += 5; /*0x92effc*/
          if ( v13 >= (int)a5[1] ) /*0x92f001*/
          {
            v9 = v32; /*0x92f003*/
            goto LABEL_19; /*0x92f003*/
          }
        }
        v22 = *((float *)*a5 + 5 * v13 + 4); /*0x92f159*/
        v23 = (char *)*a5 + 0x14 * v13; /*0x92f15d*/
        if ( v22 < v30 ) /*0x92f169*/
        {
          *(_DWORD *)v23 = v12; /*0x92f16f*/
          *((_DWORD *)v23 + 1) = v32; /*0x92f171*/
          *((_DWORD *)v23 + 2) = a2; /*0x92f174*/
          *((_DWORD *)v23 + 3) = v28; /*0x92f177*/
          *((float *)v23 + 4) = v30; /*0x92f17e*/
        }
      }
      v6 = a3; /*0x92f049*/
      v10 = ++v27; /*0x92f050*/
      if ( v27 >= a3[1] ) /*0x92f057*/
      {
        v5 = a4; /*0x92f05d*/
        break; /*0x92f05d*/
      }
      v5 = a4; /*0x92ef89*/
    }
  }
  v34 = *(_WORD **)a2; /*0x92f061*/
  v16 = 0; /*0x92f06a*/
  v33 = 0; /*0x92f06e*/
  if ( (int)v5[1] > 0 ) /*0x92f072*/
  {
    do /*0x92f146*/
    {
      v17 = *(float *)(*v5 + 8 * v16 + 4) - v26; /*0x92f08a*/
      if ( v17 > *a1 ) /*0x92f09a*/
        break; /*0x92f09a*/
      v18 = *(_WORD **)(*v5 + 8 * v16); /*0x92f0a6*/
      v31 = v17 + a2[4]; /*0x92f0ae*/
      v29 = (_WORD *)**((unsigned __int16 **)a2 + 1); /*0x92f0b2*/
      v19 = 0; /*0x92f0b6*/
      if ( (int)a5[1] <= 0 ) /*0x92f0ba*/
      {
LABEL_32:
        if ( a5[1] == (const void *)((unsigned int)a5[2] & 0x3FFFFFFF) ) /*0x92f0ff*/
          sub_8A6EE0(a5, 0x14); /*0x92f104*/
        v21 = (char *)*a5 + 0x14 * (_DWORD)a5[1]; /*0x92f114*/
        *(_DWORD *)v21 = v34; /*0x92f11f*/
        *((_DWORD *)v21 + 1) = v18; /*0x92f125*/
        *((_DWORD *)v21 + 2) = a2; /*0x92f128*/
        *((_DWORD *)v21 + 3) = v29; /*0x92f12b*/
        *((float *)v21 + 4) = v31; /*0x92f12e*/
        a5[1] = (char *)a5[1] + 1; /*0x92f131*/
      }
      else
      {
        v20 = (_WORD **)*a5; /*0x92f0c0*/
        while ( **v20 != *v34 || *v20[1] != *v18 || v20[3] != v29 ) /*0x92f0e0*/
        {
          ++v19; /*0x92f0e9*/
          v20 += 5; /*0x92f0ea*/
          if ( v19 >= (int)a5[1] ) /*0x92f0ef*/
            goto LABEL_32; /*0x92f0ef*/
        }
        v24 = *((float *)*a5 + 5 * v19 + 4); /*0x92f192*/
        v25 = (char *)*a5 + 0x14 * v19; /*0x92f196*/
        if ( v24 < v31 ) /*0x92f1a2*/
        {
          *(_DWORD *)v25 = v34; /*0x92f1ac*/
          *((_DWORD *)v25 + 1) = v18; /*0x92f1ae*/
          *((_DWORD *)v25 + 2) = a2; /*0x92f1b1*/
          *((_DWORD *)v25 + 3) = v29; /*0x92f1b4*/
          *((float *)v25 + 4) = v31; /*0x92f1b7*/
        }
      }
      v5 = a4; /*0x92f138*/
      v16 = ++v33; /*0x92f13f*/
    }
    while ( v33 < a4[1] ); /*0x92f146*/
  }
}
