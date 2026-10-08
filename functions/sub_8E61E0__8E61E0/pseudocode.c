int __thiscall sub_8E61E0(int *this)
{
  int v2; // ebp
  int v3; // ebx
  _DWORD *v4; // ecx
  int v5; // edx
  unsigned int v6; // edi
  _DWORD *v7; // ecx
  int v8; // eax
  unsigned int v9; // edi
  _DWORD *v10; // ecx
  int v11; // ebp
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  _DWORD *v16; // edx
  _DWORD *v17; // ebx
  int v18; // ecx
  int v19; // edx
  unsigned __int16 *v20; // eax
  _DWORD *v21; // edi
  _DWORD *v22; // ebx
  int v23; // ecx
  int v24; // ebx
  int *v25; // eax
  int v26; // ebx
  int v27; // edx
  int v28; // eax
  int v29; // edx
  int v30; // eax
  int v31; // ecx
  __int16 v32; // bp
  _WORD *v33; // ecx
  int *v34; // edx
  int v35; // esi
  int v36; // ecx
  _WORD *v37; // eax
  _DWORD *v38; // ecx
  bool v39; // zf
  _DWORD *v40; // ecx
  _DWORD *v41; // ecx
  int result; // eax
  int v43; // [esp+10h] [ebp-14h]
  int v44; // [esp+14h] [ebp-10h]
  int v45; // [esp+18h] [ebp-Ch]
  int i; // [esp+18h] [ebp-Ch]
  int v47; // [esp+1Ch] [ebp-8h]
  int v48; // [esp+20h] [ebp-4h]

  v2 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e61f4*/
  v3 = *(this + 0x11); /*0x8e61f7*/
  v4 = *(_DWORD **)(v2 + 0x19C); /*0x8e61fa*/
  v5 = v4[8]; /*0x8e6200*/
  v6 = v5 + 0x10 * (v3 + 1); /*0x8e620d*/
  v48 = v3; /*0x8e6213*/
  v47 = v2; /*0x8e6217*/
  if ( v6 > v4[0xB] ) /*0x8e621b*/
  {
    v44 = (*(int (__thiscall **)(_DWORD *, int))(*v4 + 0xC))(v4, 0x10 * (v3 + 1)); /*0x8e622c*/
  }
  else
  {
    v4[8] = v6; /*0x8e621d*/
    v44 = v5; /*0x8e6220*/
  }
  v7 = *(_DWORD **)(v2 + 0x19C); /*0x8e6230*/
  v8 = v7[8]; /*0x8e6236*/
  v9 = (4 * v3 + 0x10) & 0xFFFFFFF0; /*0x8e6243*/
  if ( v8 + v9 > v7[0xB] ) /*0x8e624b*/
    v8 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v7 + 0xC))(v7, (4 * v3 + 0x10) & 0xFFFFFFF0); /*0x8e6255*/
  else
    v7[8] = v8 + v9; /*0x8e624d*/
  v10 = *(_DWORD **)(v2 + 0x19C); /*0x8e625c*/
  v11 = v8; /*0x8e6262*/
  v12 = v10[8]; /*0x8e6264*/
  v43 = v11; /*0x8e626d*/
  if ( v12 + v9 > v10[0xB] ) /*0x8e6271*/
    v12 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v10 + 0xC))(v10, (4 * v3 + 0x10) & 0xFFFFFFF0); /*0x8e627b*/
  else
    v10[8] = v12 + v9; /*0x8e6273*/
  v13 = v12; /*0x8e6281*/
  v14 = 0; /*0x8e6283*/
  v45 = v13; /*0x8e6287*/
  if ( *(this + 0x11) > 0 ) /*0x8e628b*/
  {
    v15 = 0; /*0x8e628d*/
    do /*0x8e62d7*/
    {
      v16 = (_DWORD *)(v15 + *(this + 0x10)); /*0x8e6297*/
      v17 = (_DWORD *)(v15 + v44); /*0x8e629b*/
      *v17 = *v16; /*0x8e629d*/
      v17[1] = v16[1]; /*0x8e62a2*/
      v17[2] = v16[2]; /*0x8e62a8*/
      v11 = v43; /*0x8e62ae*/
      v17[3] = v16[3]; /*0x8e62b2*/
      *(_WORD *)(v43 + 4 * v14) = *(_WORD *)(*(this + 0x13) + 4 * *(unsigned __int16 *)(v15 + *(this + 0x10) + 8)); /*0x8e62c4*/
      *(_WORD *)(v43 + 4 * v14 + 2) = v14; /*0x8e62c9*/
      ++v14; /*0x8e62d1*/
      v15 += 0x10; /*0x8e62d2*/
    }
    while ( v14 < *(this + 0x11) ); /*0x8e62d7*/
    v3 = v48; /*0x8e62d9*/
  }
  LOBYTE(v48) = 0; /*0x8e62e3*/
  if ( v3 - 1 > 1 ) /*0x8e62e8*/
    sub_8E1200(v11 + 4, 0, v3 - 2, v48); /*0x8e62f7*/
  v18 = 0; /*0x8e6302*/
  if ( *(this + 0x11) > 0 ) /*0x8e6306*/
  {
    v19 = 0; /*0x8e6308*/
    v20 = (unsigned __int16 *)(v11 + 2); /*0x8e630a*/
    do /*0x8e634d*/
    {
      *(_DWORD *)(v13 + 4 * *v20) = v18; /*0x8e6313*/
      v21 = (_DWORD *)(v44 + 0x10 * *v20); /*0x8e6320*/
      v22 = (_DWORD *)(v19 + *(this + 0x10)); /*0x8e6327*/
      *v22 = *v21; /*0x8e6329*/
      v22[1] = v21[1]; /*0x8e632e*/
      v22[2] = v21[2]; /*0x8e6334*/
      v22[3] = v21[3]; /*0x8e633a*/
      ++v18; /*0x8e6340*/
      v20 += 2; /*0x8e6341*/
      v19 += 0x10; /*0x8e6344*/
      v13 = v45; /*0x8e6349*/
    }
    while ( v18 < *(this + 0x11) ); /*0x8e634d*/
    v11 = v43; /*0x8e634f*/
  }
  v23 = 1; /*0x8e6356*/
  if ( *(this + 0x11) > 1 ) /*0x8e635d*/
  {
    v24 = 0x10; /*0x8e635f*/
    do /*0x8e638a*/
    {
      v25 = *(int **)(v24 + *(this + 0x10) + 0xC); /*0x8e636a*/
      if ( ((unsigned __int8)v25 & 1) != 0 ) /*0x8e636f*/
        *(_WORD *)(((unsigned int)v25 & 0xFFFFFFFE) + *(this + 0x1E)) = v23; /*0x8e637d*/
      else
        *v25 = v23; /*0x8e6373*/
      ++v23; /*0x8e6384*/
      v24 += 0x10; /*0x8e6385*/
    }
    while ( v23 < *(this + 0x11) ); /*0x8e638a*/
  }
  v26 = 0; /*0x8e638f*/
  for ( i = 0; i < *(this + 0x1C); ++i ) /*0x8e6397*/
  {
    v27 = *(this + 0x1E); /*0x8e63a0*/
    v28 = *(_DWORD *)(v27 + v26 + 8); /*0x8e63a3*/
    v29 = v26 + v27; /*0x8e63a7*/
    v30 = v28 - 1; /*0x8e63a9*/
    if ( v30 >= 0 ) /*0x8e63aa*/
    {
      do /*0x8e63c2*/
      {
        v31 = *(_DWORD *)(v29 + 4); /*0x8e63b0*/
        v32 = *(_WORD *)(v13 + 4 * *(unsigned __int16 *)(v31 + 2 * v30)); /*0x8e63b7*/
        v33 = (_WORD *)(v31 + 2 * v30--); /*0x8e63bb*/
        *v33 = v32; /*0x8e63bf*/
      }
      while ( v30 >= 0 ); /*0x8e63c2*/
      v11 = v43; /*0x8e63c4*/
    }
    v26 += 0x10; /*0x8e63d0*/
  }
  v34 = this + 0x14; /*0x8e63db*/
  v35 = 3; /*0x8e63de*/
  do /*0x8e6409*/
  {
    v36 = 0; /*0x8e63e8*/
    if ( *v34 > 0 ) /*0x8e63ec*/
    {
      v37 = (_WORD *)(v34[0xFFFFFFFF] + 2); /*0x8e63ee*/
      do /*0x8e6403*/
      {
        *v37 = *(_WORD *)(v13 + 4 * (unsigned __int16)*v37); /*0x8e63f8*/
        ++v36; /*0x8e63fd*/
        v37 += 2; /*0x8e63fe*/
      }
      while ( v36 < *v34 ); /*0x8e6403*/
    }
    v34 += 3; /*0x8e6405*/
    --v35; /*0x8e6408*/
  }
  while ( v35 ); /*0x8e6409*/
  v38 = *(_DWORD **)(v47 + 0x19C); /*0x8e640f*/
  v39 = v13 == v38[0xA]; /*0x8e6415*/
  v38[8] = v13; /*0x8e6418*/
  if ( v39 ) /*0x8e641b*/
    (*(void (__thiscall **)(_DWORD *, int))(*v38 + 0x10))(v38, v13); /*0x8e6420*/
  v40 = *(_DWORD **)(v47 + 0x19C); /*0x8e6423*/
  v39 = v11 == v40[0xA]; /*0x8e6429*/
  v40[8] = v11; /*0x8e642c*/
  if ( v39 ) /*0x8e642f*/
    (*(void (__thiscall **)(_DWORD *, int))(*v40 + 0x10))(v40, v11); /*0x8e6434*/
  v41 = *(_DWORD **)(v47 + 0x19C); /*0x8e6437*/
  result = v44; /*0x8e643d*/
  v39 = v44 == v41[0xA]; /*0x8e6441*/
  v41[8] = v44; /*0x8e6447*/
  if ( v39 ) /*0x8e644b*/
    return (*(int (__thiscall **)(_DWORD *, int))(*v41 + 0x10))(v41, v44); /*0x8e6450*/
  return result; /*0x8e6444*/
}
