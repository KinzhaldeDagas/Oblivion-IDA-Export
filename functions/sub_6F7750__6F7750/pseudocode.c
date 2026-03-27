int __usercall sub_6F7750@<eax>(int this@<ecx>, int a2@<edi>)
{
  int v2; // eax
  _DWORD *v3; // eax
  unsigned __int8 *v4; // ecx
  int result; // eax
  FILE *v6; // eax
  int v7; // eax
  unsigned int v8; // edi
  _DWORD *v9; // eax
  _DWORD *v10; // ebx
  _DWORD *v11; // ecx
  _DWORD *v12; // ecx
  int v13; // edx
  _DWORD *v14; // ecx
  int v15; // ebp
  _DWORD *v16; // esi
  _DWORD *v17; // ecx
  _DWORD *v18; // ecx
  int v19; // eax
  _DWORD *v20; // eax
  int v21; // esi
  unsigned int v22; // edx
  _DWORD *v23; // eax
  _DWORD *v24; // esi
  _DWORD *v25; // ecx
  _DWORD *v26; // ecx
  int v27; // edi
  _DWORD *v28; // eax
  int v29; // eax
  int i; // esi
  int v31; // edx
  int v32; // esi
  rsize_t v33; // [esp-6h] [ebp-6Ch]
  rsize_t v34[2]; // [esp+6h] [ebp-60h] BYREF
  unsigned __int8 Dst; // [esp+1Dh] [ebp-49h] BYREF
  int v36; // [esp+1Eh] [ebp-48h] BYREF
  int v37; // [esp+22h] [ebp-44h]
  unsigned __int8 *v38; // [esp+26h] [ebp-40h] BYREF
  int v39; // [esp+2Ah] [ebp-3Ch] BYREF
  int v40; // [esp+32h] [ebp-34h] BYREF
  unsigned int v41; // [esp+3Ah] [ebp-2Ch] BYREF
  _DWORD v42[4]; // [esp+3Eh] [ebp-28h] BYREF
  int v43; // [esp+4Eh] [ebp-18h]
  unsigned int v44; // [esp+52h] [ebp-14h]
  int v45; // [esp+62h] [ebp-4h]

  v2 = **(_DWORD **)(this + 0x20);
  v37 = this;
  if ( v2 && **(_DWORD **)(this + 0x20) < (unsigned int)(**(_DWORD **)(this + 0x20) + **(_DWORD **)(this + 0x30)) )
  {
    --**(_DWORD **)(this + 0x30);
    v3 = *(_DWORD **)(this + 0x20);
    v4 = (unsigned __int8 *)(*v3)++;
    return *v4;
  }
  v6 = *(FILE **)(this + 0x4C);
  if ( !v6 )
    return 0xFFFFFFFF;
  if ( !*(_DWORD *)(this + 0x3C) )
  {
    result = fgetc(*(FILE **)(this + 0x4C));
    if ( result != 0xFFFFFFFF )
      return (unsigned __int8)result;
    return 0xFFFFFFFF;
  }
  v44 = 0xF;
  v43 = 0;
  LOBYTE(v42[0]) = 0;
  v45 = 0;
  v7 = fgetc(v6);
  if ( v7 == 0xFFFFFFFF )
  {
LABEL_61:
    sub_79AB00(&v41);
    return 0xFFFFFFFF;
  }
  while ( 1 )
  {
    sub_6EDAA0(&v41, a2, 1u, v7);
    v8 = v44;
    v9 = (_DWORD *)v42[0];
    if ( v44 < 0x10 )
    {
      v10 = v42;
    }
    else
    {
      v10 = (_DWORD *)v42[0];
      if ( !v42[0] )
        goto LABEL_17;
    }
    v11 = (_DWORD *)v42[0];
    if ( v44 < 0x10 )
      v11 = v42;
    if ( v11 > v10 )
      goto LABEL_17;
    v12 = (_DWORD *)v42[0];
    if ( v44 < 0x10 )
      v12 = v42;
    v13 = v43;
    if ( v10 > (_DWORD *)((char *)v12 + v43) )
    {
LABEL_17:
      _invalid_parameter_noinfo();
      v8 = v44;
      v13 = v43;
      v9 = (_DWORD *)v42[0];
    }
    if ( v34 != (rsize_t *)0xFFFFFFCA )
    {
      v14 = v9;
      if ( v8 < 0x10 )
        v14 = v42;
      if ( v10 >= (_DWORD *)((char *)v14 + v13) )
      {
        _invalid_parameter_noinfo();
        v8 = v44;
        v13 = v43;
        v9 = (_DWORD *)v42[0];
      }
    }
    v15 = v13;
    if ( v8 < 0x10 )
    {
      v16 = v42;
    }
    else
    {
      v16 = v9;
      if ( !v9 )
        goto LABEL_31;
    }
    v17 = v9;
    if ( v8 < 0x10 )
      v17 = v42;
    if ( v17 > v16 )
      goto LABEL_31;
    v18 = v9;
    if ( v8 < 0x10 )
      v18 = v42;
    if ( v16 > (_DWORD *)((char *)v18 + v13) )
    {
LABEL_31:
      _invalid_parameter_noinfo();
      v8 = v44;
      v13 = v43;
      v9 = (_DWORD *)v42[0];
    }
    if ( v34 != (rsize_t *)0xFFFFFFCA )
    {
      if ( v8 < 0x10 )
        v9 = v42;
      if ( v16 >= (_DWORD *)((char *)v9 + v13) )
        _invalid_parameter_noinfo();
    }
    a2 = v37;
    v19 = (*(int (__thiscall **)(_DWORD, int, _DWORD *, int, int *, unsigned __int8 *, int *, unsigned __int8 **))(**(_DWORD **)(v37 + 0x3C) + 0x10))(
            *(_DWORD *)(v37 + 0x3C),
            v37 + 0x44,
            v16,
            (int)v10 + v15,
            &v36,
            &Dst,
            &v36,
            &v38);
    if ( v19 < 0 )
      goto LABEL_61;
    if ( v19 <= 1 )
      break;
    if ( v19 != 3 )
      goto LABEL_61;
    if ( v43 )
    {
      v20 = sub_6F75E0(&v41, &v40);
      HIDWORD(v33) = std::_String_const_iterator<char,std::char_traits<char>,std::allocator<char>>::operator*(v20);
      LODWORD(v33) = 1;
      memcpy_s(&Dst, v33, (const void *)1, v34[0]);
      v21 = Dst;
      sub_79AB00(&v41);
      return v21;
    }
LABEL_60:
    v7 = fgetc(*(FILE **)(a2 + 0x4C));
    if ( v7 == 0xFFFFFFFF )
      goto LABEL_61;
  }
  if ( v38 == &Dst )
  {
    v22 = v44;
    v23 = (_DWORD *)v42[0];
    if ( v44 >= 0x10 )
    {
      v24 = (_DWORD *)v42[0];
      if ( v42[0] )
        goto LABEL_47;
      goto LABEL_53;
    }
    v24 = v42;
LABEL_47:
    v25 = (_DWORD *)v42[0];
    if ( v44 < 0x10 )
      v25 = v42;
    if ( v25 > v24 )
      goto LABEL_53;
    v26 = (_DWORD *)v42[0];
    if ( v44 < 0x10 )
      v26 = v42;
    if ( v24 > (_DWORD *)((char *)v26 + v43) )
    {
LABEL_53:
      _invalid_parameter_noinfo();
      v22 = v44;
      v23 = (_DWORD *)v42[0];
    }
    if ( v34 != (rsize_t *)0xFFFFFFCA )
    {
      if ( v22 < 0x10 )
        v23 = v42;
      if ( v24 >= (_DWORD *)((char *)v23 + v43) )
        _invalid_parameter_noinfo();
    }
    sub_4134E0(&v41, v15, 0, v36 - (_DWORD)v24);
    goto LABEL_60;
  }
  v27 = v43;
  v28 = sub_6F75E0(&v41, &v39);
  v29 = std::_String_const_iterator<char,std::char_traits<char>,std::allocator<char>>::operator*(v28);
  for ( i = v27 - v36 + v29; i > 0; --i )
  {
    v31 = *(char *)(i + v36 - 1);
    ungetc(v31, *(FILE **)(v37 + 0x4C));
  }
  v32 = Dst;
  sub_79AB00(&v41);
  return v32;
}
