_DWORD *__userpurge sub_6F23C0@<eax>(_DWORD *this@<ecx>, int a2@<ebp>, int a3)
{
  int v3; // eax
  unsigned int v5; // esi
  unsigned int *_010201A0; // eax
  unsigned int v7; // esi
  unsigned int v8; // ebp
  char *v9; // ecx
  bool v10; // zf
  int v11; // esi
  const void *v12; // eax
  char *v13; // esi
  rsize_t v15; // [esp-4h] [ebp-10h]
  int v16; // [esp+4h] [ebp-8h]

  v3 = *(_DWORD *)(a3 + 4); /*0x6f23c5*/
  if ( v3 ) /*0x6f23d0*/
    v5 = (*(_DWORD *)(a3 + 8) - v3) >> 2; /*0x6f23db*/
  else
    v5 = 0; /*0x6f23d2*/
  *(this + 1) = 0; /*0x6f23e0*/
  *(this + 2) = 0; /*0x6f23e3*/
  *(this + 3) = 0; /*0x6f23e6*/
  if ( v5 ) /*0x6f23e9*/
  {
    if ( v5 > 0x3FFFFFFF ) /*0x6f23f1*/
      sub_6F1780(SHIDWORD(v15), v16); /*0x6f23f3*/
    _010201A0 = OB_stVector4_Allocate_010201A0(v5); /*0x6f23fa*/
    *(this + 1) = _010201A0; /*0x6f23ff*/
    *(this + 2) = _010201A0; /*0x6f2402*/
    *(this + 3) = &_010201A0[v5]; /*0x6f2408*/
    v7 = *(_DWORD *)(a3 + 8); /*0x6f240b*/
    if ( *(_DWORD *)(a3 + 4) > v7 ) /*0x6f2414*/
      _invalid_parameter_noinfo(); /*0x6f2416*/
    LODWORD(v15) = a2; /*0x6f241b*/
    v8 = *(_DWORD *)(a3 + 4); /*0x6f241c*/
    if ( v8 > *(_DWORD *)(a3 + 8) ) /*0x6f2422*/
      _invalid_parameter_noinfo(); /*0x6f2424*/
    v9 = (char *)*(this + 1); /*0x6f2429*/
    v11 = (int)(v7 - v8) >> 2; /*0x6f242e*/
    v10 = v11 == 0; /*0x6f242e*/
    v12 = (const void *)(4 * v11); /*0x6f2431*/
    v13 = &v9[4 * v11]; /*0x6f2438*/
    if ( !v10 ) /*0x6f243b*/
      memmove_s(v9, __PAIR64__(v8, (unsigned int)v12), v12, v15); /*0x6f2441*/
    *(this + 2) = v13; /*0x6f2449*/
  }
  return this; /*0x6f244f*/
}
