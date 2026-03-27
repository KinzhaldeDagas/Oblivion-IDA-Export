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

  v2 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v3 = *(this + 0x11);
  v4 = *(_DWORD **)(v2 + 0x19C);
  v5 = v4[8];
  v6 = v5 + 0x10 * (v3 + 1);
  v48 = v3;
  v47 = v2;
  if ( v6 > v4[0xB] )
  {
    v44 = (*(int (__thiscall **)(_DWORD *, int))(*v4 + 0xC))(v4, 0x10 * (v3 + 1));
  }
  else
  {
    v4[8] = v6;
    v44 = v5;
  }
  v7 = *(_DWORD **)(v2 + 0x19C);
  v8 = v7[8];
  v9 = (4 * v3 + 0x10) & 0xFFFFFFF0;
  if ( v8 + v9 > v7[0xB] )
    v8 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v7 + 0xC))(v7, (4 * v3 + 0x10) & 0xFFFFFFF0);
  else
    v7[8] = v8 + v9;
  v10 = *(_DWORD **)(v2 + 0x19C);
  v11 = v8;
  v12 = v10[8];
  v43 = v11;
  if ( v12 + v9 > v10[0xB] )
    v12 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v10 + 0xC))(v10, (4 * v3 + 0x10) & 0xFFFFFFF0);
  else
    v10[8] = v12 + v9;
  v13 = v12;
  v14 = 0;
  v45 = v13;
  if ( *(this + 0x11) > 0 )
  {
    v15 = 0;
    do
    {
      v16 = (_DWORD *)(v15 + *(this + 0x10));
      v17 = (_DWORD *)(v15 + v44);
      *v17 = *v16;
      v17[1] = v16[1];
      v17[2] = v16[2];
      v11 = v43;
      v17[3] = v16[3];
      *(_WORD *)(v43 + 4 * v14) = *(_WORD *)(*(this + 0x13) + 4 * *(unsigned __int16 *)(v15 + *(this + 0x10) + 8));
      *(_WORD *)(v43 + 4 * v14 + 2) = v14;
      ++v14;
      v15 += 0x10;
    }
    while ( v14 < *(this + 0x11) );
    v3 = v48;
  }
  LOBYTE(v48) = 0;
  if ( v3 - 1 > 1 )
    sub_8E1200(v11 + 4, 0, v3 - 2, v48);
  v18 = 0;
  if ( *(this + 0x11) > 0 )
  {
    v19 = 0;
    v20 = (unsigned __int16 *)(v11 + 2);
    do
    {
      *(_DWORD *)(v13 + 4 * *v20) = v18;
      v21 = (_DWORD *)(v44 + 0x10 * *v20);
      v22 = (_DWORD *)(v19 + *(this + 0x10));
      *v22 = *v21;
      v22[1] = v21[1];
      v22[2] = v21[2];
      v22[3] = v21[3];
      ++v18;
      v20 += 2;
      v19 += 0x10;
      v13 = v45;
    }
    while ( v18 < *(this + 0x11) );
    v11 = v43;
  }
  v23 = 1;
  if ( *(this + 0x11) > 1 )
  {
    v24 = 0x10;
    do
    {
      v25 = *(int **)(v24 + *(this + 0x10) + 0xC);
      if ( ((unsigned __int8)v25 & 1) != 0 )
        *(_WORD *)(((unsigned int)v25 & 0xFFFFFFFE) + *(this + 0x1E)) = v23;
      else
        *v25 = v23;
      ++v23;
      v24 += 0x10;
    }
    while ( v23 < *(this + 0x11) );
  }
  v26 = 0;
  for ( i = 0; i < *(this + 0x1C); ++i )
  {
    v27 = *(this + 0x1E);
    v28 = *(_DWORD *)(v27 + v26 + 8);
    v29 = v26 + v27;
    v30 = v28 - 1;
    if ( v30 >= 0 )
    {
      do
      {
        v31 = *(_DWORD *)(v29 + 4);
        v32 = *(_WORD *)(v13 + 4 * *(unsigned __int16 *)(v31 + 2 * v30));
        v33 = (_WORD *)(v31 + 2 * v30--);
        *v33 = v32;
      }
      while ( v30 >= 0 );
      v11 = v43;
    }
    v26 += 0x10;
  }
  v34 = this + 0x14;
  v35 = 3;
  do
  {
    v36 = 0;
    if ( *v34 > 0 )
    {
      v37 = (_WORD *)(v34[0xFFFFFFFF] + 2);
      do
      {
        *v37 = *(_WORD *)(v13 + 4 * (unsigned __int16)*v37);
        ++v36;
        v37 += 2;
      }
      while ( v36 < *v34 );
    }
    v34 += 3;
    --v35;
  }
  while ( v35 );
  v38 = *(_DWORD **)(v47 + 0x19C);
  v39 = v13 == v38[0xA];
  v38[8] = v13;
  if ( v39 )
    (*(void (__thiscall **)(_DWORD *, int))(*v38 + 0x10))(v38, v13);
  v40 = *(_DWORD **)(v47 + 0x19C);
  v39 = v11 == v40[0xA];
  v40[8] = v11;
  if ( v39 )
    (*(void (__thiscall **)(_DWORD *, int))(*v40 + 0x10))(v40, v11);
  v41 = *(_DWORD **)(v47 + 0x19C);
  result = v44;
  v39 = v44 == v41[0xA];
  v41[8] = v44;
  if ( v39 )
    return (*(int (__thiscall **)(_DWORD *, int))(*v41 + 0x10))(v41, v44);
  return result;
}
