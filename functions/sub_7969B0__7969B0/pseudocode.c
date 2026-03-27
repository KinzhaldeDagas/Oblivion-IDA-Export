void __thiscall sub_7969B0(unsigned int *this)
{
  unsigned int v1; // edi
  int v2; // ebp
  unsigned int v4; // ecx
  unsigned int i; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edi
  int v12; // ecx
  int v13; // edi
  int v14; // ecx
  int v15; // edi
  int v16; // ecx
  int v17; // edi
  int v18; // edx
  int v19; // ecx
  int v20; // edi
  char *v21; // ebx
  int v22; // edi
  char *v23; // ebp
  int v24; // eax
  unsigned int v25; // edi
  unsigned int v26; // ebx
  int v27; // ebp
  unsigned int *v28; // ebx
  unsigned int v29; // eax
  unsigned int *v30; // ebp
  unsigned int *v31; // edi
  rsize_t v32; // [esp-Ch] [ebp-28h]
  rsize_t v33; // [esp+0h] [ebp-1Ch]
  unsigned int v34; // [esp+10h] [ebp-Ch]
  int v35; // [esp+14h] [ebp-8h]
  char *v36; // [esp+18h] [ebp-4h]
  unsigned int v37; // [esp+18h] [ebp-4h]
  unsigned int j; // [esp+18h] [ebp-4h]

  v1 = 0;
  v2 = 0;
  v34 = 0;
  v35 = 0;
  while ( 1 )
  {
    v4 = *(this + 0x13);
    if ( !v4 || v1 >= (int)(*(this + 0x14) - v4) >> 4 )
      break;
    for ( i = 0; ; ++i )
    {
      v6 = *(this + 0x13);
      if ( !v6 || v1 >= (int)(*(this + 0x14) - v6) >> 4 )
        _invalid_parameter_noinfo();
      v7 = *(this + 0x13);
      v8 = *(_DWORD *)(v7 + v2 + 4);
      v9 = v2 + v7;
      if ( !v8 || i >= (*(_DWORD *)(v9 + 8) - v8) >> 2 )
        break;
      v10 = *(this + 0x13);
      if ( !v10 || v1 >= (int)(*(this + 0x14) - v10) >> 4 )
        _invalid_parameter_noinfo();
      v11 = *(this + 0x13);
      v12 = *(_DWORD *)(v11 + v2 + 4);
      v13 = v2 + v11;
      if ( !v12 || i >= (*(_DWORD *)(v13 + 8) - v12) >> 2 )
        _invalid_parameter_noinfo();
      FormHeapFree(*(_DWORD *)(*(_DWORD *)(v13 + 4) + 4 * i));
      v14 = *(this + 0x13);
      if ( !v14 || v34 >= (int)(*(this + 0x14) - v14) >> 4 )
        _invalid_parameter_noinfo();
      v15 = *(this + 0x13);
      v16 = *(_DWORD *)(v15 + v2 + 4);
      v17 = v2 + v15;
      if ( !v16 || i >= (*(_DWORD *)(v17 + 8) - v16) >> 2 )
        _invalid_parameter_noinfo();
      v18 = *(_DWORD *)(v17 + 4);
      v1 = v34;
      *(_DWORD *)(v18 + 4 * i) = 0;
    }
    v19 = *(this + 0x13);
    if ( !v19 || v1 >= (int)(*(this + 0x14) - v19) >> 4 )
      _invalid_parameter_noinfo();
    v20 = *(this + 0x13);
    v21 = *(char **)(v20 + v2 + 8);
    v22 = v2 + v20;
    if ( *(_DWORD *)(v22 + 4) > (unsigned int)v21 )
      _invalid_parameter_noinfo();
    v23 = *(char **)(v22 + 4);
    if ( (unsigned int)v23 > *(_DWORD *)(v22 + 8) )
      _invalid_parameter_noinfo();
    if ( v23 != v21 )
    {
      v24 = (*(_DWORD *)(v22 + 8) - (int)v21) >> 2;
      v36 = &v23[4 * v24];
      if ( v24 > 0 )
      {
        HIDWORD(v32) = v21;
        LODWORD(v32) = 4 * v24;
        memmove_s(v23, v32, (const void *)(4 * v24), v33);
      }
      *(_DWORD *)(v22 + 8) = v36;
    }
    ++v34;
    v35 += 0x10;
    v2 = v35;
    v1 = v34;
  }
  v25 = *(this + 0x14);
  if ( v4 > v25 )
    _invalid_parameter_noinfo();
  v26 = *(this + 0x13);
  v37 = v26;
  if ( v26 > *(this + 0x14) )
    _invalid_parameter_noinfo();
  if ( v26 != v25 )
  {
    v27 = *(this + 0x14);
    v28 = (unsigned int *)(v26 + 0x10 * ((int)(v27 - v25) >> 4));
    if ( v25 != v27 )
    {
      v29 = v37 - v25;
      for ( j = v37 - v25; ; v29 = j )
      {
        sub_79B2F0((_DWORD *)(v29 + v25), v25);
        v25 += 0x10;
        if ( v25 == v27 )
          break;
      }
    }
    v30 = (unsigned int *)*(this + 0x14);
    if ( v28 != v30 )
    {
      v31 = v28 + 1;
      do
      {
        if ( *v31 )
          FormHeapFree(*v31);
        *v31 = 0;
        v31[1] = 0;
        v31[2] = 0;
        v31 += 4;
      }
      while ( v31 + 0xFFFFFFFF != v30 );
    }
    *(this + 0x14) = (unsigned int)v28;
  }
}
