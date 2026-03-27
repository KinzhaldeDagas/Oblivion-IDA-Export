void __usercall sub_7A2620(int this@<ecx>, unsigned int a2@<ebp>, unsigned int a3@<esi>)
{
  unsigned int v4; // esi
  int v5; // ebx
  bool v6; // cc
  unsigned int i; // ebp
  int v8; // eax
  int v9; // ecx
  int v10; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // esi
  int v13; // ecx
  int v14; // esi
  int v15; // esi
  char *v16; // ebp
  int v17; // esi
  char *v18; // ebx
  int v19; // eax
  int *v20; // eax
  unsigned int v21; // esi
  unsigned int j; // esi
  unsigned int v23; // ecx
  int v24; // edx
  unsigned int v25; // ebx
  int v26; // ecx
  char *v27; // ebx
  char *v28; // esi
  int v29; // eax
  char *v30; // ebp
  rsize_t v31; // [esp-18h] [ebp-28h]
  rsize_t v32; // [esp-18h] [ebp-28h]
  rsize_t v33; // [esp-Ch] [ebp-1Ch]
  int v34; // [esp+4h] [ebp-Ch]
  int v35; // [esp+8h] [ebp-8h]
  char *v36; // [esp+Ch] [ebp-4h]

  if ( *(_BYTE *)(this + 0x21) )
  {
    v33 = __PAIR64__(a2, a3);
    v4 = *(_DWORD *)(this + 0x58);
    v5 = 0;
    if ( v4 )
    {
      sub_790D00(*(unsigned int **)(this + 0x58));
      FormHeapFree(v4);
    }
    v6 = *(_DWORD *)(this + 0xC0) <= 0;
    *(_DWORD *)(this + 0x58) = 0;
    v35 = 0;
    if ( !v6 )
    {
      v34 = 0;
      do
      {
        if ( *(_DWORD *)(this + 0xD4) )
        {
          for ( i = 0; ; ++i )
          {
            v8 = *(_DWORD *)(this + 0xD4);
            v9 = *(_DWORD *)(v5 + v8 + 4);
            v10 = v5 + v8;
            if ( !v9 || i >= (*(_DWORD *)(v10 + 8) - v9) >> 2 )
              break;
            v11 = *(void (__thiscall ****)(_DWORD, int))(*(_DWORD *)(v10 + 4) + 4 * i);
            if ( v11 )
              (**v11)(v11, 1);
            v12 = *(_DWORD *)(this + 0xD4);
            v13 = *(_DWORD *)(v12 + v5 + 4);
            v14 = v5 + v12;
            if ( !v13 || i >= (*(_DWORD *)(v14 + 8) - v13) >> 2 )
              _invalid_parameter_noinfo();
            *(_DWORD *)(*(_DWORD *)(v14 + 4) + 4 * i) = 0;
          }
          v15 = *(_DWORD *)(this + 0xD4);
          v16 = *(char **)(v15 + v5 + 8);
          v17 = v5 + v15;
          if ( *(_DWORD *)(v17 + 4) > (unsigned int)v16 )
            _invalid_parameter_noinfo();
          v18 = *(char **)(v17 + 4);
          if ( (unsigned int)v18 > *(_DWORD *)(v17 + 8) )
            _invalid_parameter_noinfo();
          if ( v18 != v16 )
          {
            v19 = (*(_DWORD *)(v17 + 8) - (int)v16) >> 2;
            v36 = &v18[4 * v19];
            if ( v19 > 0 )
            {
              HIDWORD(v31) = v16;
              LODWORD(v31) = 4 * v19;
              memmove_s(v18, v31, (const void *)(4 * v19), v33);
            }
            *(_DWORD *)(v17 + 8) = v36;
          }
          v5 = v34;
        }
        v5 += 0x10;
        v6 = ++v35 < *(_DWORD *)(this + 0xC0);
        v34 = v5;
      }
      while ( v6 );
    }
    v20 = *(int **)(this + 0xD4);
    if ( v20 )
    {
      v21 = (unsigned int)(v20 + 0xFFFFFFFF);
      _LN21(v20, 0x10u, v20[0xFFFFFFFF], (void (__thiscall *)(void *))sub_794EB0);
      FormHeapFree(v21);
    }
    *(_DWORD *)(this + 0xD4) = 0;
    for ( j = 0; ; ++j )
    {
      v23 = *(_DWORD *)(this + 0x64);
      if ( !v23 || j >= (int)(*(_DWORD *)(this + 0x68) - v23) >> 2 )
        break;
      v24 = *(_DWORD *)(this + 0x64);
      v25 = *(_DWORD *)(v24 + 4 * j);
      if ( v25 )
      {
        sub_7A7800(*(_DWORD **)(v24 + 4 * j));
        FormHeapFree(v25);
      }
      v26 = *(_DWORD *)(this + 0x64);
      if ( !v26 || j >= (*(_DWORD *)(this + 0x68) - v26) >> 2 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(*(_DWORD *)(this + 0x64) + 4 * j) = 0;
    }
    v27 = *(char **)(this + 0x68);
    if ( v23 > (unsigned int)v27 )
      _invalid_parameter_noinfo();
    v28 = *(char **)(this + 0x64);
    if ( (unsigned int)v28 > *(_DWORD *)(this + 0x68) )
      _invalid_parameter_noinfo();
    if ( v28 != v27 )
    {
      v29 = (*(_DWORD *)(this + 0x68) - (int)v27) >> 2;
      v30 = &v28[4 * v29];
      if ( v29 > 0 )
      {
        HIDWORD(v32) = v27;
        LODWORD(v32) = 4 * v29;
        memmove_s(v28, v32, (const void *)(4 * v29), v33);
      }
      *(_DWORD *)(this + 0x68) = v30;
    }
    *(_BYTE *)(this + 0x21) = 0;
  }
}
