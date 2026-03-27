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

  v8 = a4;
  v10 = a3;
  *a6 = a3 - 1;
  result = (a3 + a4) / 2;
  v34 = this;
  *a7 = a4 + 1;
  v32 = result;
  v35 = 0;
  v15 = this + 6;
  do
  {
    if ( *a6 >= v10 && *a7 <= v8 )
      break;
    *a6 = v10 - 1;
    *a7 = v8 + 1;
    v56 = v10;
    if ( v8 - v10 + 1 >= 4 )
    {
      v33 = v10 + 2;
      v57 = (int *)(a5 + 4 * (v10 + 2));
      do
      {
        v16 = v57[0xFFFFFFFE];
        v17 = (float *)(a2 + 0xC * v16);
        v36 = *v17 - v34[1];
        v41 = v17[1] - v34[2];
        v46 = v17[2] - v34[3];
        v51 = v15[0xFFFFFFFF] * v41 + v15[0xFFFFFFFE] * v36 + v46 * *v15;
        if ( v51 <= 0.0 )
        {
          if ( v51 < 0.0 || v56 > v32 )
            v18 = --*a7;
          else
            v18 = ++*a6;
        }
        else
        {
          v18 = ++*a6;
        }
        *(_DWORD *)(a8 + 4 * v18) = v16;
        v19 = v57[0xFFFFFFFF];
        v20 = (float *)(a2 + 0xC * v19);
        v37 = *v20 - v34[1];
        v42 = v20[1] - v34[2];
        v47 = v20[2] - v34[3];
        v52 = v15[0xFFFFFFFF] * v42 + v15[0xFFFFFFFE] * v37 + v47 * *v15;
        if ( v52 <= 0.0 )
        {
          if ( v52 < 0.0 || v33 - 1 > v32 )
            v21 = --*a7;
          else
            v21 = ++*a6;
        }
        else
        {
          v21 = ++*a6;
        }
        *(_DWORD *)(a8 + 4 * v21) = v19;
        v22 = *v57;
        v23 = (float *)(a2 + 0xC * *v57);
        v38 = *v23 - v34[1];
        v43 = v23[1] - v34[2];
        v48 = v23[2] - v34[3];
        v53 = v15[0xFFFFFFFF] * v43 + v15[0xFFFFFFFE] * v38 + v48 * *v15;
        if ( v53 <= 0.0 )
        {
          if ( v53 < 0.0 || v33 > v32 )
            v24 = --*a7;
          else
            v24 = ++*a6;
        }
        else
        {
          v24 = ++*a6;
        }
        *(_DWORD *)(a8 + 4 * v24) = v22;
        v25 = v57[1];
        v26 = (float *)(a2 + 0xC * v25);
        v39 = *v26 - v34[1];
        v44 = v26[1] - v34[2];
        v49 = v26[2] - v34[3];
        v54 = v15[0xFFFFFFFF] * v44 + v15[0xFFFFFFFE] * v39 + v49 * *v15;
        if ( v54 <= 0.0 )
        {
          if ( v54 < 0.0 || v33 + 1 > v32 )
            v27 = --*a7;
          else
            v27 = ++*a6;
        }
        else
        {
          v27 = ++*a6;
        }
        v57 += 4;
        v33 += 4;
        *(_DWORD *)(a8 + 4 * v27) = v25;
        v8 = a4;
        v56 += 4;
      }
      while ( v56 <= a4 - 3 );
      v10 = a3;
    }
    if ( v56 <= v8 )
    {
      do
      {
        v28 = *(_DWORD *)(a5 + 4 * v56);
        v29 = (float *)(a2 + 0xC * v28);
        v40 = *v29 - v34[1];
        v45 = v29[1] - v34[2];
        v50 = v29[2] - v34[3];
        v55 = v15[0xFFFFFFFF] * v45 + v15[0xFFFFFFFE] * v40 + v50 * *v15;
        if ( v55 <= 0.0 )
        {
          if ( v55 < 0.0 || v56 > v32 )
            v30 = --*a7;
          else
            v30 = ++*a6;
        }
        else
        {
          v30 = ++*a6;
        }
        *(_DWORD *)(a8 + 4 * v30) = v28;
        v8 = a4;
        ++v56;
      }
      while ( v56 <= a4 );
      v10 = a3;
    }
    v15 += 3;
    ++v35;
    result = (a3 + a4) / 2;
  }
  while ( v35 < 3 );
  if ( v35 == 3 && (*a6 < v10 || *a7 > v8) )
  {
    *a6 = result++;
    *a7 = result;
    if ( v10 <= v8 )
    {
      result = a8 + 4 * v10;
      v31 = v8 - v10 + 1;
      do
      {
        *(_DWORD *)result = *(_DWORD *)(a5 - a8 + result);
        result += 4;
        --v31;
      }
      while ( v31 );
    }
  }
  return result;
}
