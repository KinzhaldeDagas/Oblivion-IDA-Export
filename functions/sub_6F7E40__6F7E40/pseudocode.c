unsigned int __thiscall sub_6F7E40(_DWORD **this, unsigned int a2)
{
  unsigned int v4; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _BYTE *v7; // ecx
  void **v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edx
  void **v11; // ebp
  void **v12; // ecx
  void **v13; // ecx
  void **v14; // ecx
  unsigned int v15; // edi
  void **v16; // esi
  void **v17; // ecx
  void **v18; // ecx
  _DWORD **v19; // ebx
  int v20; // eax
  void **v21; // esi
  void **v22; // ecx
  void **v23; // ecx
  void **v24; // ecx
  int v25; // edi
  void **v26; // esi
  void **v27; // ecx
  void **v28; // ecx
  size_t v29; // [esp-4h] [ebp-5Ch]
  size_t v30; // [esp+4h] [ebp-54h] BYREF
  FILE *v31; // [esp+Ch] [ebp-4Ch]
  char v32; // [esp+1Ch] [ebp-3Ch] BYREF
  char v33[3]; // [esp+1Dh] [ebp-3Bh] BYREF
  _DWORD **v34; // [esp+20h] [ebp-38h]
  void **v35; // [esp+24h] [ebp-34h] BYREF
  char *v36; // [esp+28h] [ebp-30h] BYREF
  unsigned int v37; // [esp+2Ch] [ebp-2Ch] BYREF
  void *Str[2]; // [esp+30h] [ebp-28h] BYREF
  char v39; // [esp+38h] [ebp-20h]
  int v40; // [esp+40h] [ebp-18h]
  unsigned int v41; // [esp+44h] [ebp-14h]
  int v42; // [esp+54h] [ebp-4h]

  v34 = this;
  if ( a2 == 0xFFFFFFFF )
    return 0;
  v4 = **(this + 9);
  if ( v4 )
  {
    v5 = *(this + 0xD);
    if ( v4 < v4 + *v5 )
    {
      --*v5;
      v6 = *(this + 9);
      v7 = (_BYTE *)(*v6)++;
      *v7 = a2;
      return a2;
    }
  }
  if ( !*(this + 0x13) )
    return 0xFFFFFFFF;
  if ( !*(this + 0xF) )
  {
    if ( putc((char)a2, (FILE *)*(this + 0x13)) != 0xFFFFFFFF )
      return a2;
    return 0xFFFFFFFF;
  }
  v32 = a2;
  v41 = 0xF;
  Str[0] = 0;
  Str[1] = 0;
  v40 = 8;
  v39 = 0;
  v42 = 0;
LABEL_11:
  v8 = (void **)Str[0];
  v9 = v40;
  v10 = v41;
  while ( 1 )
  {
    if ( v10 < 0x10 )
    {
      v11 = Str;
    }
    else
    {
      v11 = v8;
      if ( !v8 )
        goto LABEL_20;
    }
    v12 = v8;
    if ( v10 < 0x10 )
      v12 = Str;
    if ( v12 > v11 )
      goto LABEL_20;
    v13 = v8;
    if ( v10 < 0x10 )
      v13 = Str;
    if ( v11 > (void **)((char *)v13 + v9) )
    {
LABEL_20:
      _invalid_parameter_noinfo();
      v10 = v41;
      v9 = v40;
      v8 = (void **)Str[0];
    }
    if ( (size_t *)((char *)&v30 + 4) != (size_t *)0xFFFFFFDA )
    {
      v14 = v8;
      if ( v10 < 0x10 )
        v14 = Str;
      if ( v11 >= (void **)((char *)v14 + v9) )
      {
        _invalid_parameter_noinfo();
        v10 = v41;
        v9 = v40;
        v8 = (void **)Str[0];
      }
    }
    v15 = v9;
    if ( v10 < 0x10 )
    {
      v16 = Str;
    }
    else
    {
      v16 = v8;
      if ( !v8 )
        goto LABEL_34;
    }
    v17 = v8;
    if ( v10 < 0x10 )
      v17 = Str;
    if ( v17 > v16 )
      goto LABEL_34;
    v18 = v8;
    if ( v10 < 0x10 )
      v18 = Str;
    if ( v16 > (void **)((char *)v18 + v9) )
    {
LABEL_34:
      _invalid_parameter_noinfo();
      v10 = v41;
      v9 = v40;
      v8 = (void **)Str[0];
    }
    if ( (size_t *)((char *)&v30 + 4) != (size_t *)0xFFFFFFDA )
    {
      if ( v10 < 0x10 )
        v8 = Str;
      if ( v16 >= (void **)((char *)v8 + v9) )
        _invalid_parameter_noinfo();
    }
    v19 = v34;
    v20 = (*(int (__thiscall **)(_DWORD *, _DWORD **, char *, char *, char **, void **, unsigned int, void ***))(*v34[0xF] + 0x14))(
            v34[0xF],
            v34 + 0x11,
            &v32,
            v33,
            &v36,
            v16,
            (unsigned int)v11 + v15,
            &v35);
    if ( v20 < 0 )
      goto LABEL_86;
    if ( v20 > 1 )
      break;
    v10 = v41;
    v8 = (void **)Str[0];
    if ( v41 < 0x10 )
    {
      v21 = Str;
    }
    else
    {
      v21 = (void **)Str[0];
      if ( !Str[0] )
        goto LABEL_50;
    }
    v22 = (void **)Str[0];
    if ( v41 < 0x10 )
      v22 = Str;
    if ( v22 > v21 )
      goto LABEL_50;
    v23 = (void **)Str[0];
    if ( v41 < 0x10 )
      v23 = Str;
    v9 = v40;
    if ( v21 > &v23[v40 / 4u] )
    {
LABEL_50:
      _invalid_parameter_noinfo();
      v10 = v41;
      v9 = v40;
      v8 = (void **)Str[0];
    }
    if ( (size_t *)((char *)&v30 + 4) != (size_t *)0xFFFFFFDA )
    {
      v24 = v8;
      if ( v10 < 0x10 )
        v24 = Str;
      if ( v21 >= (void **)((char *)v24 + v9) )
      {
        _invalid_parameter_noinfo();
        v10 = v41;
        v9 = v40;
        v8 = (void **)Str[0];
      }
    }
    v25 = (char *)v35 - (char *)v21;
    if ( v35 != v21 )
    {
      if ( v10 < 0x10 )
      {
        v26 = Str;
      }
      else
      {
        v26 = v8;
        if ( !v8 )
        {
LABEL_65:
          _invalid_parameter_noinfo();
          v10 = v41;
          v9 = v40;
          v8 = (void **)Str[0];
LABEL_66:
          if ( (size_t *)((char *)&v30 + 4) != (size_t *)0xFFFFFFDA )
          {
            if ( v10 < 0x10 )
              v8 = Str;
            if ( v26 >= (void **)((char *)v8 + v9) )
              _invalid_parameter_noinfo();
          }
          LODWORD(v30) = v34[0x13];
          HIDWORD(v29) = v25;
          LODWORD(v29) = 1;
          if ( v25 != (unsigned int)fwrite(v26, v29, v30, v31) )
            goto LABEL_86;
          v10 = v41;
          v9 = v40;
          v8 = (void **)Str[0];
          goto LABEL_73;
        }
      }
      v27 = v8;
      if ( v10 < 0x10 )
        v27 = Str;
      if ( v27 <= v26 )
      {
        v28 = v8;
        if ( v10 < 0x10 )
          v28 = Str;
        if ( v26 <= (void **)((char *)v28 + v9) )
          goto LABEL_66;
      }
      goto LABEL_65;
    }
LABEL_73:
    *((_BYTE *)v34 + 0x41) = 1;
    if ( v36 != &v32 )
      goto LABEL_83;
    if ( !v25 )
    {
      if ( v9 < 0x20 )
      {
        sub_6EDAA0(&v37, 0, 8u, 0);
        goto LABEL_11;
      }
      goto LABEL_86;
    }
  }
  if ( v20 != 3 )
  {
LABEL_86:
    sub_79AB00(&v37);
    return 0xFFFFFFFF;
  }
  if ( sub_6F7440(v32, (FILE *)v19[0x13]) )
  {
LABEL_83:
    sub_79AB00(&v37);
    return a2;
  }
  sub_79AB00(&v37);
  return 0xFFFFFFFF;
}
