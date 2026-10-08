int __thiscall sub_9797B0(float *this, int a2, int a3, int a4, int a5, int *a6, int *a7, int a8)
{
  int v8; // ebx
  int v10; // ecx
  int result; // eax
  float *v15; // ebp
  int v16; // ebx
  float *v17; // eax
  int v18; // eax
  int v19; // ebx
  float *v20; // eax
  int v21; // eax
  int v22; // ebx
  float *v23; // eax
  int v24; // eax
  int v25; // ebx
  float *v26; // eax
  int v27; // eax
  int v28; // ebx
  float *v29; // eax
  int v30; // eax
  int v31; // ebx
  int v32; // [esp+10h] [ebp-1Ch]
  int v33; // [esp+14h] [ebp-18h]
  float *v34; // [esp+18h] [ebp-14h]
  int v35; // [esp+1Ch] [ebp-10h]
  float v36; // [esp+20h] [ebp-Ch]
  float v37; // [esp+20h] [ebp-Ch]
  float v38; // [esp+20h] [ebp-Ch]
  float v39; // [esp+20h] [ebp-Ch]
  float v40; // [esp+20h] [ebp-Ch]
  float v41; // [esp+24h] [ebp-8h]
  float v42; // [esp+24h] [ebp-8h]
  float v43; // [esp+24h] [ebp-8h]
  float v44; // [esp+24h] [ebp-8h]
  float v45; // [esp+24h] [ebp-8h]
  float v46; // [esp+28h] [ebp-4h]
  float v47; // [esp+28h] [ebp-4h]
  float v48; // [esp+28h] [ebp-4h]
  float v49; // [esp+28h] [ebp-4h]
  float v50; // [esp+28h] [ebp-4h]
  float v51; // [esp+40h] [ebp+14h]
  float v52; // [esp+40h] [ebp+14h]
  float v53; // [esp+40h] [ebp+14h]
  float v54; // [esp+40h] [ebp+14h]
  float v55; // [esp+40h] [ebp+14h]
  int v56; // [esp+44h] [ebp+18h]
  int *v57; // [esp+48h] [ebp+1Ch]

  v8 = a4; /*0x9797b6*/
  v10 = a3; /*0x9797bd*/
  *a6 = a3 - 1; /*0x9797d0*/
  result = (a3 + a4) / 2; /*0x9797d9*/
  v34 = this; /*0x9797db*/
  *a7 = a4 + 1; /*0x9797df*/
  v32 = result; /*0x9797e5*/
  v35 = 0; /*0x9797e9*/
  v15 = this + 6; /*0x9797f1*/
  do /*0x979b43*/
  {
    if ( *a6 >= v10 && *a7 <= v8 ) /*0x9797fa*/
      break; /*0x9797fa*/
    *a6 = v10 - 1; /*0x979803*/
    *a7 = v8 + 1; /*0x979808*/
    v56 = v10; /*0x979814*/
    if ( v8 - v10 + 1 >= 4 ) /*0x979818*/
    {
      v33 = v10 + 2; /*0x979825*/
      v57 = (int *)(a5 + 4 * (v10 + 2)); /*0x97982c*/
      do /*0x979a73*/
      {
        v16 = v57[0xFFFFFFFE]; /*0x979834*/
        v17 = (float *)(a2 + 0xC * v16); /*0x979841*/
        v36 = *v17 - v34[1]; /*0x97984b*/
        v41 = v17[1] - v34[2]; /*0x979855*/
        v46 = v17[2] - v34[3]; /*0x97985f*/
        v51 = v15[0xFFFFFFFF] * v41 + v15[0xFFFFFFFE] * v36 + v46 * *v15; /*0x97987c*/
        if ( v51 <= 0.0 ) /*0x97988b*/
        {
          if ( v51 < 0.0 || v56 > v32 ) /*0x9798a7*/
            v18 = --*a7; /*0x9798b3*/
          else
            v18 = ++*a6; /*0x9798ac*/
        }
        else
        {
          v18 = ++*a6; /*0x979892*/
        }
        *(_DWORD *)(a8 + 4 * v18) = v16; /*0x9798b9*/
        v19 = v57[0xFFFFFFFF]; /*0x9798bc*/
        v20 = (float *)(a2 + 0xC * v19); /*0x9798c9*/
        v37 = *v20 - v34[1]; /*0x9798d3*/
        v42 = v20[1] - v34[2]; /*0x9798dd*/
        v47 = v20[2] - v34[3]; /*0x9798e7*/
        v52 = v15[0xFFFFFFFF] * v42 + v15[0xFFFFFFFE] * v37 + v47 * *v15; /*0x979904*/
        if ( v52 <= 0.0 ) /*0x979913*/
        {
          if ( v52 < 0.0 || v33 - 1 > v32 ) /*0x979932*/
            v21 = --*a7; /*0x97993e*/
          else
            v21 = ++*a6; /*0x979937*/
        }
        else
        {
          v21 = ++*a6; /*0x97991a*/
        }
        *(_DWORD *)(a8 + 4 * v21) = v19; /*0x979944*/
        v22 = *v57; /*0x979947*/
        v23 = (float *)(a2 + 0xC * *v57); /*0x979953*/
        v38 = *v23 - v34[1]; /*0x97995d*/
        v43 = v23[1] - v34[2]; /*0x979967*/
        v48 = v23[2] - v34[3]; /*0x979971*/
        v53 = v15[0xFFFFFFFF] * v43 + v15[0xFFFFFFFE] * v38 + v48 * *v15; /*0x97998e*/
        if ( v53 <= 0.0 ) /*0x97999d*/
        {
          if ( v53 < 0.0 || v33 > v32 ) /*0x9799b9*/
            v24 = --*a7; /*0x9799c5*/
          else
            v24 = ++*a6; /*0x9799be*/
        }
        else
        {
          v24 = ++*a6; /*0x9799a4*/
        }
        *(_DWORD *)(a8 + 4 * v24) = v22; /*0x9799cb*/
        v25 = v57[1]; /*0x9799ce*/
        v26 = (float *)(a2 + 0xC * v25); /*0x9799db*/
        v39 = *v26 - v34[1]; /*0x9799e5*/
        v44 = v26[1] - v34[2]; /*0x9799ef*/
        v49 = v26[2] - v34[3]; /*0x9799f9*/
        v54 = v15[0xFFFFFFFF] * v44 + v15[0xFFFFFFFE] * v39 + v49 * *v15; /*0x979a16*/
        if ( v54 <= 0.0 ) /*0x979a25*/
        {
          if ( v54 < 0.0 || v33 + 1 > v32 ) /*0x979a44*/
            v27 = --*a7; /*0x979a50*/
          else
            v27 = ++*a6; /*0x979a49*/
        }
        else
        {
          v27 = ++*a6; /*0x979a2c*/
        }
        v57 += 4; /*0x979a56*/
        v33 += 4; /*0x979a5b*/
        *(_DWORD *)(a8 + 4 * v27) = v25; /*0x979a60*/
        v8 = a4; /*0x979a63*/
        v56 += 4; /*0x979a6f*/
      }
      while ( v56 <= a4 - 3 ); /*0x979a73*/
      v10 = a3; /*0x979a79*/
    }
    if ( v56 <= v8 ) /*0x979a81*/
    {
      do /*0x979b24*/
      {
        v28 = *(_DWORD *)(a5 + 4 * v56); /*0x979a8f*/
        v29 = (float *)(a2 + 0xC * v28); /*0x979a9c*/
        v40 = *v29 - v34[1]; /*0x979aa6*/
        v45 = v29[1] - v34[2]; /*0x979ab0*/
        v50 = v29[2] - v34[3]; /*0x979aba*/
        v55 = v15[0xFFFFFFFF] * v45 + v15[0xFFFFFFFE] * v40 + v50 * *v15; /*0x979ad7*/
        if ( v55 <= 0.0 ) /*0x979ae6*/
        {
          if ( v55 < 0.0 || v56 > v32 ) /*0x979b02*/
            v30 = --*a7; /*0x979b0e*/
          else
            v30 = ++*a6; /*0x979b07*/
        }
        else
        {
          v30 = ++*a6; /*0x979aed*/
        }
        *(_DWORD *)(a8 + 4 * v30) = v28; /*0x979b10*/
        v8 = a4; /*0x979b17*/
        ++v56; /*0x979b20*/
      }
      while ( v56 <= a4 ); /*0x979b24*/
      v10 = a3; /*0x979b2a*/
    }
    v15 += 3; /*0x979b35*/
    ++v35; /*0x979b38*/
    result = (a3 + a4) / 2; /*0x979b3f*/
  }
  while ( v35 < 3 ); /*0x979b43*/
  if ( v35 == 3 && (*a6 < v10 || *a7 > v8) ) /*0x979b58*/
  {
    *a6 = result++; /*0x979b5a*/
    *a7 = result; /*0x979b61*/
    if ( v10 <= v8 ) /*0x979b63*/
    {
      result = a8 + 4 * v10; /*0x979b6d*/
      v31 = v8 - v10 + 1; /*0x979b70*/
      do /*0x979b7e*/
      {
        *(_DWORD *)result = *(_DWORD *)(a5 - a8 + result); /*0x979b76*/
        result += 4; /*0x979b78*/
        --v31; /*0x979b7b*/
      }
      while ( v31 ); /*0x979b7e*/
    }
  }
  return result; /*0x979b80*/
}
