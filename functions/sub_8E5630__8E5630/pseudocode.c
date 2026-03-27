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

  v3 = this;
  v4 = *(this + 0x11);
  v44 = a2[1];
  v5 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v6 = v4;
  v48 = v4;
  v50 = v5;
  v7 = *(_DWORD **)(v5 + 0x19C);
  v8 = v7[8];
  v9 = (4 * (v4 >> 5) + 0x30) & 0xFFFFFFF0;
  v10 = v6 >> 3;
  v11 = v8 + v9 <= v7[0xB];
  v49 = v3;
  if ( v11 )
    v7[8] = v8 + v9;
  else
    v8 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v7 + 0xC))(v7, v9);
  v12 = v10 >> 4;
  v13 = (_OWORD *)v8;
  if ( v12 >= 0 )
  {
    v14 = v12 + 1;
    do
    {
      v15 = v13++;
      --v14;
      *v15 = 0;
    }
    while ( v14 );
  }
  for ( i = 0; i < v44; ++i )
  {
    v17 = **(_DWORD **)(*a2 + 4 * i);
    *(_DWORD *)(v8 + 4 * (v17 >> 5)) ^= 1 << (v17 & 0x1F);
  }
  sub_8E4BC0(v3, v8, a3, 0);
  v18 = *(_DWORD **)(v50 + 0x19C);
  v19 = v8 == v18[0xA];
  v18[8] = v8;
  if ( v19 )
    (*(void (__thiscall **)(_DWORD *, int))(*v18 + 0x10))(v18, v8);
  v20 = 0;
  for ( j = 0; v20 < v44; *v21 = 0 )
  {
    *(_DWORD *)(0x10 * **(_DWORD **)(*a2 + 4 * v20) + v3[0x10] + 0xC) = &j;
    v21 = *(_DWORD **)(*a2 + 4 * v20++);
  }
  v22 = *(_DWORD **)(v50 + 0x19C);
  v23 = v48;
  v24 = v22[8];
  v25 = (4 * v48 + 0x10) & 0xFFFFFFF0;
  if ( v24 + v25 > v22[0xB] )
    v24 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v22 + 0xC))(v22, (4 * v48 + 0x10) & 0xFFFFFFF0);
  else
    v22[8] = v24 + v25;
  v26 = v23 - 1;
  v27 = 0;
  v47 = v24;
  v51[0] = v24;
  if ( v23 - 1 >= 0 )
  {
    v28 = 0x10 * v26;
    v43 = 0x10 * v26;
    v48 = 0;
    while ( 1 )
    {
      v29 = (_DWORD *)(v28 + v3[0x10]);
      if ( (int *)v29[3] == &j )
      {
        *(_DWORD *)(v24 + 4 * v26--) = 0xFFFFFFFF;
        v43 -= 0x10;
      }
      else
      {
        v30 = (_DWORD *)(v48 + v3[0x10]);
        if ( (int *)v30[3] == &j )
        {
          *v30 = *v29;
          v30[1] = v29[1];
          v30[2] = v29[2];
          v3 = v49;
          v30[3] = v29[3];
          v24 = v47;
          *(_DWORD *)(v47 + 4 * v26) = v27;
          *(_DWORD *)(v24 + 4 * v27) = 0xFFFFFFFF;
          v31 = v30[3];
          if ( (v31 & 1) != 0 )
            *(_WORD *)((v31 & 0xFFFFFFFE) + v3[0x1E]) = v27;
          else
            *(_DWORD *)v31 = v27;
          --v26;
          v43 -= 0x10;
        }
        else
        {
          v24 = v47;
          *(_DWORD *)(v47 + 4 * v27) = v27;
        }
        ++v27;
        v48 += 0x10;
      }
      if ( v27 > v26 )
        break;
      v28 = v43;
    }
  }
  v32 = v3 + 0x10;
  v33 = v26 + 1;
  v34 = v3[0x12] & 0x3FFFFFFF;
  v48 = v33;
  if ( v34 < v33 )
  {
    v35 = 2 * v34;
    if ( v33 >= v35 )
      v35 = v33;
    sub_8A6E40((const void **)v3 + 0x10, v35, 0x10);
    v33 = v48;
  }
  v3[0x11] = v33;
  sub_8E13A0((char **)v3 + 0x13, *v32, 0, v51);
  sub_8E13A0((char **)v3 + 0x16, *v32, 1, v51);
  sub_8E13A0((char **)v3 + 0x19, *v32, 2, v51);
  v36 = v3[0x1C];
  if ( v36 )
  {
    v37 = 2 * v44;
    v45 = 2 * v44;
    v47 = 0;
    if ( v36 > 0 )
    {
      v48 = 0;
      do
      {
        v38 = (unsigned __int16 *)(v48 + v3[0x1E]);
        v39 = *v32 + 0x10 * *v38;
        *(_WORD *)(v39 + 4) -= v37;
        *(_WORD *)(v39 + 6) -= v37;
        v40 = 0;
        if ( *((int *)v38 + 2) > 0 )
        {
          do
          {
            *(_WORD *)(*((_DWORD *)v38 + 1) + 2 * v40) = *(_WORD *)(v24
                                                                  + 4
                                                                  * *(unsigned __int16 *)(*((_DWORD *)v38 + 1) + 2 * v40));
            ++v40;
          }
          while ( v40 < *((_DWORD *)v38 + 2) );
          v3 = v49;
          v37 = v45;
        }
        v48 += 0x10;
        v11 = ++v47 < v3[0x1C];
      }
      while ( v11 );
    }
  }
  result = v50;
  v42 = *(_DWORD **)(v50 + 0x19C);
  v19 = v24 == v42[0xA];
  v42[8] = v24;
  if ( v19 )
    return (*(int (__thiscall **)(_DWORD *, int))(*v42 + 0x10))(v42, v24);
  return result;
}
