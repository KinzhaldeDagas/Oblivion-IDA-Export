void __thiscall NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short>::NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short>(
        NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short> *this)
{
  int v2; // eax
  unsigned int v3; // esi
  int v4; // ecx
  int v5; // ebx
  unsigned int v6; // ebx
  int v7; // eax
  int *v8; // eax
  int v9; // ebx
  unsigned __int16 v10; // bp
  unsigned int v11; // eax
  unsigned int v12; // edx
  void (__cdecl *v13)(int, int *, int, int *, int); // eax
  unsigned int i; // esi
  unsigned int j; // ebp
  int v16; // ecx
  _DWORD *v17; // eax
  int v18; // ebx
  int v19; // eax
  int **v20; // esi
  void (__cdecl *v21)(int, int *, int, int *, int); // eax
  unsigned int k; // edi
  _DWORD *v23; // esi
  unsigned int v24; // eax
  int v25; // [esp-14h] [ebp-54h]
  int v26; // [esp-14h] [ebp-54h]
  int v27; // [esp+14h] [ebp-2Ch] BYREF
  int v28; // [esp+18h] [ebp-28h] BYREF
  int v29; // [esp+1Ch] [ebp-24h] BYREF
  void **v30; // [esp+20h] [ebp-20h] BYREF
  unsigned int v31; // [esp+24h] [ebp-1Ch]
  unsigned int v32; // [esp+28h] [ebp-18h]
  int v33; // [esp+2Ch] [ebp-14h]
  char v34; // [esp+30h] [ebp-10h]
  int v35; // [esp+3Ch] [ebp-4h]

  v31 = 0x25;
  v33 = 0;
  v32 = FormHeapAlloc(0x94u);
  _memset(v32, 0, 0x94);
  v34 = 0;
  v30 = &NiTStringPointerMap<unsigned short>::`vftable';
  v2 = *((_DWORD *)this + 0x7E);
  v3 = 0;
  v35 = 0;
  if ( v2 )
  {
    do
    {
      v4 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * v3);
      v5 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
      if ( !sub_7123C0(&v30, v5, &v27) )
        sub_712330(&v30, v5, v33);
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 0x7E) );
  }
  v28 = (unsigned __int16)v33;
  v6 = FormHeapAlloc((unsigned __int64)(unsigned __int16)v33 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)v33);
  v7 = 0;
  v27 = v6;
  if ( v31 )
  {
    while ( !*(_DWORD *)(v32 + 4 * v7) )
    {
      if ( ++v7 >= v31 )
        goto LABEL_8;
    }
    v8 = *(int **)(v32 + 4 * v7);
  }
  else
  {
LABEL_8:
    v8 = 0;
  }
  if ( v8 )
  {
    do
    {
      v9 = v8[1];
      v10 = *((_WORD *)v8 + 4);
      v8 = (int *)*v8;
      if ( !v8 )
      {
        v11 = ((int (__thiscall *)(void ***, int))v30[1])(&v30, v9) + 1;
        if ( v11 >= v31 )
        {
LABEL_14:
          v8 = 0;
        }
        else
        {
          while ( !*(_DWORD *)(v32 + 4 * v11) )
          {
            if ( ++v11 >= v31 )
              goto LABEL_14;
          }
          v8 = *(int **)(v32 + 4 * v11);
        }
      }
      v12 = v27;
      *(_DWORD *)(v27 + 4 * v10) = v9;
    }
    while ( v8 );
    v6 = v12;
  }
  v25 = *((_DWORD *)this + 0x88);
  v13 = *(void (__cdecl **)(int, int *, int, int *, int))(v25 + 8);
  v27 = 2;
  v13(v25, &v28, 2, &v27, 1);
  for ( i = 0; i < (unsigned __int16)v28; sub_713720(this, *(const char **)(v6 + 4 * i++)) )
    ;
  FormHeapFree(v6);
  for ( j = 0; j < *((_DWORD *)this + 0x7E); ++j )
  {
    v16 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * j);
    v17 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 4))(v16);
    v18 = *v17;
    v19 = ((int (__thiscall *)(void ***, _DWORD))v30[1])(&v30, *v17);
    v20 = *(int ***)(v32 + 4 * v19);
    if ( v20 )
    {
      while ( !((unsigned __int8 (__thiscall *)(void ***, int, int *))v30[2])(&v30, v18, v20[1]) )
      {
        v20 = (int **)*v20;
        if ( !v20 )
          goto LABEL_27;
      }
      v29 = *((unsigned __int16 *)v20 + 4);
    }
LABEL_27:
    v26 = *((_DWORD *)this + 0x88);
    v21 = *(void (__cdecl **)(int, int *, int, int *, int))(v26 + 8);
    v27 = 2;
    v21(v26, &v29, 2, &v27, 1);
  }
  v30 = &NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short>::`vftable';
  if ( v34 )
  {
    for ( k = 0; k < v31; ++k )
    {
      v23 = *(_DWORD **)(v32 + 4 * k);
      while ( v23 )
      {
        v24 = v23[1];
        v23 = (_DWORD *)*v23;
        FormHeapFree(v24);
      }
    }
  }
  v30 = &NiTPointerMap<char const *,unsigned short>::`vftable';
  v35 = 1;
  NiTMap_Clear(&v30);
  v35 = 0xFFFFFFFF;
  v30 = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,unsigned short>::`vftable';
  NiTMap_Clear(&v30);
  FormHeapFree(v32);
}
