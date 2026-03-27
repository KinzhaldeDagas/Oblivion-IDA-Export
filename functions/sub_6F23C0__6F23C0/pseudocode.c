_DWORD *__userpurge sub_6F23C0@<eax>(_DWORD *this@<ecx>, int a2@<ebp>, int a3)
{
  int v3; // eax
  unsigned int v5; // esi
  _DWORD *v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // ebp
  char *v9; // ecx
  bool v10; // zf
  int v11; // esi
  const void *v12; // eax
  char *v13; // esi
  rsize_t v15; // [esp-4h] [ebp-10h]
  int v16; // [esp+4h] [ebp-8h]

  v3 = *(_DWORD *)(a3 + 4);
  if ( v3 )
    v5 = (*(_DWORD *)(a3 + 8) - v3) >> 2;
  else
    v5 = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( v5 )
  {
    if ( v5 > 0x3FFFFFFF )
      sub_6F1780((int)this, SHIDWORD(v15), v16);
    v6 = sub_78FB60((char *)v5);
    *(this + 1) = v6;
    *(this + 2) = v6;
    *(this + 3) = &v6[v5];
    v7 = *(_DWORD *)(a3 + 8);
    if ( *(_DWORD *)(a3 + 4) > v7 )
      _invalid_parameter_noinfo();
    LODWORD(v15) = a2;
    v8 = *(_DWORD *)(a3 + 4);
    if ( v8 > *(_DWORD *)(a3 + 8) )
      _invalid_parameter_noinfo();
    v9 = (char *)*(this + 1);
    v11 = (int)(v7 - v8) >> 2;
    v10 = v11 == 0;
    v12 = (const void *)(4 * v11);
    v13 = &v9[4 * v11];
    if ( !v10 )
      memmove_s(v9, __PAIR64__(v8, (unsigned int)v12), v12, v15);
    *(this + 2) = v13;
  }
  return this;
}
