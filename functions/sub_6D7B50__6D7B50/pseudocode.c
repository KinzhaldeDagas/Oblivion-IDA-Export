char __thiscall sub_6D7B50(NiTriBasedGeomData *this, _DWORD *a2)
{
  float x; // eax
  _DWORD *v4; // ecx
  _DWORD *v5; // edx
  int v6; // esi
  int v7; // eax
  unsigned __int8 *v8; // ecx
  unsigned __int8 *v9; // edx
  int v10; // eax
  unsigned __int8 *v11; // ecx
  unsigned __int8 *v12; // edx
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // edx
  int v15; // eax

  if ( !sub_700670(this, (int)a2) ) /*0x6d7b59*/
    return 0; /*0x6d7b59*/
  x = this->members.super.m_kBound.Center.x; /*0x6d7b66*/
  if ( a2[3] != LODWORD(x) || a2[4] != LODWORD(this->members.super.m_kBound.Center.y) ) /*0x6d7b78*/
    return 0; /*0x6d7b78*/
  if ( x == 0.0 ) /*0x6d7b80*/
    return 1; /*0x6d7c10*/
  v4 = *(_DWORD **)&this->members.super.m_usVertices; /*0x6d7b89*/
  v5 = (_DWORD *)a2[2]; /*0x6d7b8c*/
  if ( LODWORD(x) < 4 ) /*0x6d7b8f*/
  {
LABEL_8:
    if ( x == 0.0 ) /*0x6d7ba7*/
    {
LABEL_18:
      v15 = 0; /*0x6d7c06*/
      return !v15; /*0x6d7c06*/
    }
  }
  else
  {
    while ( *v5 == *v4 ) /*0x6d7b95*/
    {
      LODWORD(x) -= 4; /*0x6d7b97*/
      ++v4; /*0x6d7b9a*/
      ++v5; /*0x6d7b9d*/
      if ( LODWORD(x) < 4 ) /*0x6d7ba3*/
        goto LABEL_8; /*0x6d7ba3*/
    }
  }
  v6 = *(unsigned __int8 *)v5 - *(unsigned __int8 *)v4; /*0x6d7baf*/
  if ( !v6 ) /*0x6d7bb1*/
  {
    v7 = LODWORD(x) - 1; /*0x6d7bb3*/
    v8 = (unsigned __int8 *)v4 + 1; /*0x6d7bb6*/
    v9 = (unsigned __int8 *)v5 + 1; /*0x6d7bb9*/
    if ( !v7 ) /*0x6d7bbe*/
      goto LABEL_18; /*0x6d7bbe*/
    v6 = *v9 - *v8; /*0x6d7bc6*/
    if ( !v6 ) /*0x6d7bc8*/
    {
      v10 = v7 - 1; /*0x6d7bca*/
      v11 = v8 + 1; /*0x6d7bcd*/
      v12 = v9 + 1; /*0x6d7bd0*/
      if ( !v10 ) /*0x6d7bd5*/
        goto LABEL_18; /*0x6d7bd5*/
      v6 = *v12 - *v11; /*0x6d7bdd*/
      if ( !v6 ) /*0x6d7bdf*/
      {
        v13 = v11 + 1; /*0x6d7be4*/
        v14 = v12 + 1; /*0x6d7be7*/
        if ( v10 == 1 ) /*0x6d7bec*/
          goto LABEL_18; /*0x6d7bec*/
        v6 = *v14 - *v13; /*0x6d7bf4*/
        if ( !v6 ) /*0x6d7bf6*/
          goto LABEL_18; /*0x6d7bf6*/
      }
    }
  }
  v15 = 1; /*0x6d7bfa*/
  if ( v6 <= 0 ) /*0x6d7bff*/
    v15 = 0xFFFFFFFF; /*0x6d7c01*/
  return !v15; /*0x6d7c0c*/
}
