char __thiscall sub_6F7AB0(_DWORD *this)
{
  _DWORD *v1; // ebx
  bool v2; // zf
  void **v3; // eax
  unsigned int v4; // edx
  void **v5; // ebp
  void **v6; // ecx
  void **v7; // ecx
  void **v8; // ecx
  int v9; // edi
  void **v10; // esi
  void **v11; // ecx
  void **v12; // ecx
  int v13; // eax
  int v14; // eax
  void **v15; // esi
  void **v16; // ecx
  void **v17; // ecx
  void **v18; // ecx
  char *v19; // edi
  void **v20; // esi
  void **v21; // ecx
  void **v22; // ecx
  size_t v24; // [esp-Ch] [ebp-54h]
  size_t v25; // [esp-4h] [ebp-4Ch] BYREF
  FILE *v26; // [esp+4h] [ebp-44h]
  _DWORD *v27; // [esp+14h] [ebp-34h]
  void **v28; // [esp+18h] [ebp-30h] BYREF
  unsigned int v29; // [esp+1Ch] [ebp-2Ch] BYREF
  void *Str[2]; // [esp+20h] [ebp-28h] BYREF
  char v31; // [esp+28h] [ebp-20h]
  int v32; // [esp+30h] [ebp-18h]
  unsigned int v33; // [esp+34h] [ebp-14h]
  int v34; // [esp+44h] [ebp-4h]

  v1 = this;
  v2 = *(this + 0xF) == 0;
  v27 = this;
  if ( v2 || !*((_BYTE *)this + 0x41) )
    return 1;
  if ( (*(int (__thiscall **)(_DWORD *, unsigned int))(*this + 4))(this, 0xFFFFFFFF) == 0xFFFFFFFF )
    return 0;
  v33 = 0xF;
  Str[0] = 0;
  Str[1] = 0;
  v32 = 8;
  v31 = 0;
  v34 = 0;
LABEL_5:
  v3 = (void **)Str[0];
  v4 = v33;
  while ( 1 )
  {
    if ( v4 < 0x10 )
    {
      v5 = Str;
    }
    else
    {
      v5 = v3;
      if ( !v3 )
        goto LABEL_14;
    }
    v6 = v3;
    if ( v4 < 0x10 )
      v6 = Str;
    if ( v6 > v5 )
      goto LABEL_14;
    v7 = v3;
    if ( v4 < 0x10 )
      v7 = Str;
    if ( v5 > &v7[v32 / 4u] )
    {
LABEL_14:
      _invalid_parameter_noinfo();
      v4 = v33;
      v3 = (void **)Str[0];
    }
    if ( (size_t *)((char *)&v25 + 4) != (size_t *)0xFFFFFFE2 )
    {
      v8 = v3;
      if ( v4 < 0x10 )
        v8 = Str;
      if ( v5 >= &v8[v32 / 4u] )
      {
        _invalid_parameter_noinfo();
        v4 = v33;
        v3 = (void **)Str[0];
      }
    }
    v9 = v32;
    if ( v4 < 0x10 )
    {
      v10 = Str;
    }
    else
    {
      v10 = v3;
      if ( !v3 )
        goto LABEL_28;
    }
    v11 = v3;
    if ( v4 < 0x10 )
      v11 = Str;
    if ( v11 > v10 )
      goto LABEL_28;
    v12 = v3;
    if ( v4 < 0x10 )
      v12 = Str;
    v1 = v27;
    if ( v10 > &v12[v32 / 4u] )
    {
LABEL_28:
      _invalid_parameter_noinfo();
      v4 = v33;
      v3 = (void **)Str[0];
    }
    if ( (size_t *)((char *)&v25 + 4) != (size_t *)0xFFFFFFE2 )
    {
      if ( v4 < 0x10 )
        v3 = Str;
      if ( v10 >= &v3[v32 / 4u] )
        _invalid_parameter_noinfo();
    }
    v13 = (*(int (__thiscall **)(_DWORD, _DWORD *, void **, int, void ***))(*(_DWORD *)v1[0xF] + 0x18))(
            v1[0xF],
            v1 + 0x11,
            v10,
            (int)v5 + v9,
            &v28);
    if ( v13 )
      break;
    *((_BYTE *)v1 + 0x41) = 0;
LABEL_41:
    v4 = v33;
    v3 = (void **)Str[0];
    if ( v33 < 0x10 )
    {
      v15 = Str;
    }
    else
    {
      v15 = (void **)Str[0];
      if ( !Str[0] )
        goto LABEL_49;
    }
    v16 = (void **)Str[0];
    if ( v33 < 0x10 )
      v16 = Str;
    if ( v16 > v15 )
      goto LABEL_49;
    v17 = (void **)Str[0];
    if ( v33 < 0x10 )
      v17 = Str;
    if ( v15 > &v17[v32 / 4u] )
    {
LABEL_49:
      _invalid_parameter_noinfo();
      v4 = v33;
      v3 = (void **)Str[0];
    }
    if ( (size_t *)((char *)&v25 + 4) != (size_t *)0xFFFFFFE2 )
    {
      v18 = v3;
      if ( v4 < 0x10 )
        v18 = Str;
      if ( v15 >= &v18[v32 / 4u] )
      {
        _invalid_parameter_noinfo();
        v4 = v33;
        v3 = (void **)Str[0];
      }
    }
    v19 = (char *)((char *)v28 - (char *)v15);
    if ( v28 == v15 )
      goto LABEL_72;
    if ( v4 < 0x10 )
    {
      v20 = Str;
LABEL_58:
      v21 = v3;
      if ( v4 < 0x10 )
        v21 = Str;
      if ( v21 <= v20 )
      {
        v22 = v3;
        if ( v4 < 0x10 )
          v22 = Str;
        if ( v20 <= &v22[v32 / 4u] )
          goto LABEL_65;
      }
      goto LABEL_64;
    }
    v20 = v3;
    if ( v3 )
      goto LABEL_58;
LABEL_64:
    _invalid_parameter_noinfo();
    v4 = v33;
    v3 = (void **)Str[0];
LABEL_65:
    if ( (size_t *)((char *)&v25 + 4) != (size_t *)0xFFFFFFE2 )
    {
      if ( v4 < 0x10 )
        v3 = Str;
      if ( v20 >= &v3[v32 / 4u] )
        _invalid_parameter_noinfo();
    }
    LODWORD(v25) = v1[0x13];
    HIDWORD(v24) = v19;
    LODWORD(v24) = 1;
    if ( v19 != (char *)fwrite(v20, v24, v25, v26) )
      goto LABEL_77;
    v4 = v33;
    v3 = (void **)Str[0];
LABEL_72:
    if ( !*((_BYTE *)v1 + 0x41) )
      goto LABEL_79;
    if ( !v19 )
    {
      sub_6EDAA0(&v29, 0, 8u, 0);
      goto LABEL_5;
    }
  }
  v14 = v13 - 1;
  if ( !v14 )
    goto LABEL_41;
  if ( v14 != 2 )
  {
LABEL_77:
    sub_79AB00(&v29);
    return 0;
  }
LABEL_79:
  sub_79AB00(&v29);
  return 1;
}
