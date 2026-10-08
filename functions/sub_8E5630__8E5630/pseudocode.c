int __thiscall sub_8E5630(_DWORD *this, _DWORD *a2, const void **a3)
{
  _DWORD *v3; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  _DWORD *v7; // ecx
  int v8; // esi
  unsigned int v9; // eax
  int v10; // edi
  bool v11; // cc
  int v12; // edi
  _OWORD *v13; // eax
  int v14; // edx
  _OWORD *v15; // ecx
  int i; // edx
  int v17; // eax
  _DWORD *v18; // ecx
  bool v19; // zf
  int v20; // eax
  _DWORD *v21; // edx
  _DWORD *v22; // ecx
  int v23; // esi
  int v24; // edi
  unsigned int v25; // eax
  int v26; // edx
  int v27; // ecx
  int v28; // esi
  _DWORD *v29; // eax
  _DWORD *v30; // esi
  unsigned int v31; // eax
  int *v32; // esi
  int v33; // edx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  __int16 v37; // dx
  unsigned __int16 *v38; // ecx
  int v39; // eax
  int v40; // eax
  int result; // eax
  _DWORD *v42; // ecx
  int v43; // [esp+Ch] [ebp-24h]
  int v44; // [esp+10h] [ebp-20h]
  __int16 v45; // [esp+10h] [ebp-20h]
  int j; // [esp+14h] [ebp-1Ch] BYREF
  int v47; // [esp+18h] [ebp-18h]
  int v48; // [esp+1Ch] [ebp-14h]
  _DWORD *v49; // [esp+20h] [ebp-10h]
  int v50; // [esp+24h] [ebp-Ch]
  _DWORD v51[2]; // [esp+28h] [ebp-8h] BYREF

  v3 = this; /*0x8e5643*/
  v4 = *(this + 0x11); /*0x8e5648*/
  v44 = a2[1]; /*0x8e564b*/
  v5 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e5656*/
  v6 = v4; /*0x8e565b*/
  v48 = v4; /*0x8e565d*/
  v50 = v5; /*0x8e5664*/
  v7 = *(_DWORD **)(v5 + 0x19C); /*0x8e5668*/
  v8 = v7[8]; /*0x8e566e*/
  v9 = (4 * (v4 >> 5) + 0x30) & 0xFFFFFFF0; /*0x8e5678*/
  v10 = v6 >> 3; /*0x8e567e*/
  v11 = v8 + v9 <= v7[0xB]; /*0x8e5681*/
  v49 = v3; /*0x8e5684*/
  if ( v11 ) /*0x8e5688*/
    v7[8] = v8 + v9; /*0x8e568a*/
  else
    v8 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v7 + 0xC))(v7, v9); /*0x8e5695*/
  v12 = v10 >> 4; /*0x8e5697*/
  v13 = (_OWORD *)v8; /*0x8e569f*/
  if ( v12 >= 0 ) /*0x8e56a1*/
  {
    v14 = v12 + 1; /*0x8e56a3*/
    do /*0x8e56af*/
    {
      v15 = v13++; /*0x8e56a6*/
      --v14; /*0x8e56ab*/
      *v15 = 0; /*0x8e56ac*/
    }
    while ( v14 ); /*0x8e56af*/
  }
  for ( i = 0; i < v44; ++i ) /*0x8e56b9*/
  {
    v17 = **(_DWORD **)(*a2 + 4 * i); /*0x8e56ca*/
    *(_DWORD *)(v8 + 4 * (v17 >> 5)) ^= 1 << (v17 & 0x1F); /*0x8e56d9*/
  }
  sub_8E4BC0(v3, v8, a3, 0); /*0x8e56f2*/
  v18 = *(_DWORD **)(v50 + 0x19C); /*0x8e56fb*/
  v19 = v8 == v18[0xA]; /*0x8e5701*/
  v18[8] = v8; /*0x8e5704*/
  if ( v19 ) /*0x8e5707*/
    (*(void (__thiscall **)(_DWORD *, int))(*v18 + 0x10))(v18, v8); /*0x8e570c*/
  v20 = 0; /*0x8e5713*/
  for ( j = 0; v20 < v44; *v21 = 0 ) /*0x8e571b*/
  {
    *(_DWORD *)(0x10 * **(_DWORD **)(*a2 + 4 * v20) + v3[0x10] + 0xC) = &j; /*0x8e5734*/
    v21 = *(_DWORD **)(*a2 + 4 * v20++); /*0x8e573a*/
  }
  v22 = *(_DWORD **)(v50 + 0x19C); /*0x8e5750*/
  v23 = v48; /*0x8e5756*/
  v24 = v22[8]; /*0x8e575a*/
  v25 = (4 * v48 + 0x10) & 0xFFFFFFF0; /*0x8e5764*/
  if ( v24 + v25 > v22[0xB] ) /*0x8e576d*/
    v24 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v22 + 0xC))(v22, (4 * v48 + 0x10) & 0xFFFFFFF0); /*0x8e577a*/
  else
    v22[8] = v24 + v25; /*0x8e576f*/
  v26 = v23 - 1; /*0x8e577c*/
  v27 = 0; /*0x8e577f*/
  v47 = v24; /*0x8e5783*/
  v51[0] = v24; /*0x8e5787*/
  if ( v23 - 1 >= 0 ) /*0x8e578b*/
  {
    v28 = 0x10 * v26; /*0x8e5793*/
    v43 = 0x10 * v26; /*0x8e5796*/
    v48 = 0; /*0x8e579a*/
    while ( 1 ) /*0x8e57a7*/
    {
      v29 = (_DWORD *)(v28 + v3[0x10]); /*0x8e57a7*/
      if ( (int *)v29[3] == &j ) /*0x8e57b0*/
      {
        *(_DWORD *)(v24 + 4 * v26--) = 0xFFFFFFFF; /*0x8e57b6*/
        v43 -= 0x10; /*0x8e57c1*/
      }
      else
      {
        v30 = (_DWORD *)(v48 + v3[0x10]); /*0x8e57ce*/
        if ( (int *)v30[3] == &j ) /*0x8e57d7*/
        {
          *v30 = *v29; /*0x8e57dd*/
          v30[1] = v29[1]; /*0x8e57e2*/
          v30[2] = v29[2]; /*0x8e57e8*/
          v3 = v49; /*0x8e57ee*/
          v30[3] = v29[3]; /*0x8e57f2*/
          v24 = v47; /*0x8e57f5*/
          *(_DWORD *)(v47 + 4 * v26) = v27; /*0x8e57f9*/
          *(_DWORD *)(v24 + 4 * v27) = 0xFFFFFFFF; /*0x8e57fc*/
          v31 = v30[3]; /*0x8e5803*/
          if ( (v31 & 1) != 0 ) /*0x8e5808*/
            *(_WORD *)((v31 & 0xFFFFFFFE) + v3[0x1E]) = v27; /*0x8e5820*/
          else
            *(_DWORD *)v31 = v27; /*0x8e580a*/
          --v26; /*0x8e5810*/
          v43 -= 0x10; /*0x8e5814*/
        }
        else
        {
          v24 = v47; /*0x8e5832*/
          *(_DWORD *)(v47 + 4 * v27) = v27; /*0x8e5836*/
        }
        ++v27; /*0x8e583d*/
        v48 += 0x10; /*0x8e5841*/
      }
      if ( v27 > v26 ) /*0x8e5847*/
        break; /*0x8e5847*/
      v28 = v43; /*0x8e57a0*/
    }
  }
  v32 = v3 + 0x10; /*0x8e5850*/
  v33 = v26 + 1; /*0x8e5853*/
  v34 = v3[0x12] & 0x3FFFFFFF; /*0x8e5854*/
  v48 = v33; /*0x8e585b*/
  if ( v34 < v33 ) /*0x8e585f*/
  {
    v35 = 2 * v34; /*0x8e5861*/
    if ( v33 >= v35 ) /*0x8e5865*/
      v35 = v33; /*0x8e5867*/
    sub_8A6E40((const void **)v3 + 0x10, v35, 0x10); /*0x8e586d*/
    v33 = v48; /*0x8e5872*/
  }
  v3[0x11] = v33; /*0x8e587e*/
  sub_8E13A0((char **)v3 + 0x13, *v32, 0, v51); /*0x8e5889*/
  sub_8E13A0((char **)v3 + 0x16, *v32, 1, v51); /*0x8e589b*/
  sub_8E13A0((char **)v3 + 0x19, *v32, 2, v51); /*0x8e58ad*/
  v36 = v3[0x1C]; /*0x8e58b2*/
  if ( v36 ) /*0x8e58b9*/
  {
    v37 = 2 * v44; /*0x8e58bf*/
    v45 = 2 * v44; /*0x8e58c3*/
    v47 = 0; /*0x8e58c7*/
    if ( v36 > 0 ) /*0x8e58cb*/
    {
      v48 = 0; /*0x8e58cd*/
      do /*0x8e5928*/
      {
        v38 = (unsigned __int16 *)(v48 + v3[0x1E]); /*0x8e58d4*/
        v39 = *v32 + 0x10 * *v38; /*0x8e58de*/
        *(_WORD *)(v39 + 4) -= v37; /*0x8e58e0*/
        *(_WORD *)(v39 + 6) -= v37; /*0x8e58e4*/
        v40 = 0; /*0x8e58e8*/
        if ( *((int *)v38 + 2) > 0 ) /*0x8e58ed*/
        {
          do /*0x8e5907*/
          {
            *(_WORD *)(*((_DWORD *)v38 + 1) + 2 * v40) = *(_WORD *)(v24 /*0x8e58fe*/
                                                                  + 4
                                                                  * *(unsigned __int16 *)(*((_DWORD *)v38 + 1) + 2 * v40));
            ++v40; /*0x8e5904*/
          }
          while ( v40 < *((_DWORD *)v38 + 2) ); /*0x8e5907*/
          v3 = v49; /*0x8e5909*/
          v37 = v45; /*0x8e590d*/
        }
        v48 += 0x10; /*0x8e591d*/
        v11 = ++v47 < v3[0x1C]; /*0x8e5921*/
      }
      while ( v11 ); /*0x8e5928*/
    }
  }
  result = v50; /*0x8e592a*/
  v42 = *(_DWORD **)(v50 + 0x19C); /*0x8e592e*/
  v19 = v24 == v42[0xA]; /*0x8e5934*/
  v42[8] = v24; /*0x8e5937*/
  if ( v19 ) /*0x8e593a*/
    return (*(int (__thiscall **)(_DWORD *, int))(*v42 + 0x10))(v42, v24); /*0x8e593f*/
  return result; /*0x8e5942*/
}
