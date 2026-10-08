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
  int v32; // [esp+28h] [ebp-18h]
  int v33; // [esp+2Ch] [ebp-14h]
  char v34; // [esp+30h] [ebp-10h]
  int v35; // [esp+3Ch] [ebp-4h]

  v31 = 0x25; /*0x714850*/
  v33 = 0; /*0x714868*/
  v32 = FormHeapAlloc(0x94u); /*0x714884*/
  _memset(v32, 0, 0x94u); /*0x714888*/
  v34 = 0; /*0x714890*/
  v30 = &NiTStringPointerMap<unsigned short>::`vftable'; /*0x714895*/
  v2 = *((_DWORD *)this + 0x7E); /*0x71489d*/
  v3 = 0; /*0x7148a3*/
  v35 = 0; /*0x7148a7*/
  if ( v2 ) /*0x7148ab*/
  {
    do /*0x7148ed*/
    {
      v4 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * v3); /*0x7148b6*/
      v5 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4); /*0x7148c0*/
      if ( !sub_7123C0(&v30, v5, &v27) ) /*0x7148cc*/
        sub_712330(&v30, v5, v33); /*0x7148df*/
      ++v3; /*0x7148e4*/
    }
    while ( v3 < *((_DWORD *)this + 0x7E) ); /*0x7148ed*/
  }
  v28 = (unsigned __int16)v33; /*0x7148f7*/
  v6 = FormHeapAlloc((unsigned __int64)(unsigned __int16)v33 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)v33);
  v7 = 0; /*0x71491d*/
  v27 = v6; /*0x714921*/
  if ( v31 ) /*0x714925*/
  {
    while ( !*(_DWORD *)(v32 + 4 * v7) ) /*0x714933*/
    {
      if ( ++v7 >= v31 ) /*0x71493e*/
        goto LABEL_8; /*0x71493e*/
    }
    v8 = *(int **)(v32 + 4 * v7); /*0x714a3e*/
  }
  else
  {
LABEL_8:
    v8 = 0; /*0x714940*/
  }
  if ( v8 ) /*0x714944*/
  {
    do /*0x714990*/
    {
      v9 = v8[1]; /*0x714946*/
      v10 = *((_WORD *)v8 + 4); /*0x714949*/
      v8 = (int *)*v8; /*0x71494d*/
      if ( !v8 ) /*0x714951*/
      {
        v11 = ((int (__thiscall *)(void ***, int))v30[1])(&v30, v9) + 1; /*0x714965*/
        if ( v11 >= v31 ) /*0x71496a*/
        {
LABEL_14:
          v8 = 0; /*0x714982*/
        }
        else
        {
          while ( !*(_DWORD *)(v32 + 4 * v11) ) /*0x714975*/
          {
            if ( ++v11 >= v31 ) /*0x714980*/
              goto LABEL_14; /*0x714980*/
          }
          v8 = *(int **)(v32 + 4 * v11); /*0x714a46*/
        }
      }
      v12 = v27; /*0x714986*/
      *(_DWORD *)(v27 + 4 * v10) = v9; /*0x71498d*/
    }
    while ( v8 ); /*0x714990*/
    v6 = v12; /*0x714992*/
  }
  v25 = *((_DWORD *)this + 0x88); /*0x7149a8*/
  v13 = *(void (__cdecl **)(int, int *, int, int *, int))(v25 + 8); /*0x7149a9*/
  v27 = 2; /*0x7149ac*/
  v13(v25, &v28, 2, &v27, 1); /*0x7149b4*/
  for ( i = 0; i < (unsigned __int16)v28; sub_713720(this, *(const char **)(v6 + 4 * i++)) ) /*0x7149b6*/
    ; /*0x7149c8*/
  FormHeapFree(v6); /*0x7149da*/
  for ( j = 0; j < *((_DWORD *)this + 0x7E); ++j ) /*0x7149e4*/
  {
    v16 = *(_DWORD *)(*((_DWORD *)this + 0x7C) + 4 * j); /*0x7149f6*/
    v17 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 4))(v16); /*0x7149fe*/
    v18 = *v17; /*0x714a00*/
    v19 = ((int (__thiscall *)(void ***, _DWORD))v30[1])(&v30, *v17); /*0x714a0e*/
    v20 = *(int ***)(v32 + 4 * v19); /*0x714a14*/
    if ( v20 ) /*0x714a19*/
    {
      while ( !((unsigned __int8 (__thiscall *)(void ***, int, int *))v30[2])(&v30, v18, v20[1]) ) /*0x714a34*/
      {
        v20 = (int **)*v20; /*0x714a36*/
        if ( !v20 ) /*0x714a3a*/
          goto LABEL_27; /*0x714a3a*/
      }
      v29 = *((unsigned __int16 *)v20 + 4); /*0x714a51*/
    }
LABEL_27:
    v26 = *((_DWORD *)this + 0x88); /*0x714a55*/
    v21 = *(void (__cdecl **)(int, int *, int, int *, int))(v26 + 8); /*0x714a6a*/
    v27 = 2; /*0x714a6d*/
    v21(v26, &v29, 2, &v27, 1); /*0x714a75*/
  }
  v30 = &NiTStringTemplateMap<NiTPointerMap<char const *,unsigned short>,unsigned short>::`vftable'; /*0x714a8e*/
  if ( v34 ) /*0x714a96*/
  {
    for ( k = 0; k < v31; ++k ) /*0x714a9e*/
    {
      v23 = *(_DWORD **)(v32 + 4 * k); /*0x714aa4*/
      while ( v23 ) /*0x714aa9*/
      {
        v24 = v23[1]; /*0x714ab2*/
        v23 = (_DWORD *)*v23; /*0x714ab5*/
        FormHeapFree(v24); /*0x714ab8*/
      }
    }
  }
  v30 = &NiTPointerMap<char const *,unsigned short>::`vftable'; /*0x714acd*/
  v35 = 1; /*0x714ad9*/
  NiTMap_Clear(&v30); /*0x714ae1*/
  v35 = 0xFFFFFFFF; /*0x714aea*/
  v30 = &NiTMapBase<NiTPointerAllocator<unsigned int>,char const *,unsigned short>::`vftable'; /*0x714af2*/
  NiTMap_Clear(&v30); /*0x714afa*/
  FormHeapFree(v32); /*0x714b04*/
}
