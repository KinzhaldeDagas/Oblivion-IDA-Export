char __thiscall sub_708C30(_DWORD *this, _DWORD *a2)
{
  int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  int v7; // edx
  int *v8; // esi
  int v9; // esi
  int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // ecx
  int v13; // edx
  int *v14; // esi
  int v15; // esi

  if ( !sub_707B50(this, (int)a2) ) /*0x708c39*/
    return 0; /*0x708c39*/
  v4 = *(this + 0x32); /*0x708c49*/
  if ( v4 != a2[0x32] ) /*0x708c55*/
    return 0; /*0x708c43*/
  if ( v4 ) /*0x708c5a*/
  {
    v5 = (_DWORD *)*(this + 0x30); /*0x708c5c*/
    v6 = (_DWORD *)a2[0x30]; /*0x708c64*/
    while ( v5 ) /*0x708c6a*/
    {
      v7 = v5[2]; /*0x708c73*/
      v5 = (_DWORD *)*v5; /*0x708c77*/
      v8 = v6 + 2; /*0x708c79*/
      v6 = (_DWORD *)*v6; /*0x708c7c*/
      v9 = *v8; /*0x708c7e*/
      if ( v7 ) /*0x708c80*/
      {
        if ( !v9 ) /*0x708c84*/
          return 0; /*0x708c84*/
      }
      else if ( v9 ) /*0x708c90*/
      {
        return 0; /*0x708c90*/
      }
    }
  }
  v10 = *(this + 0x36); /*0x708c96*/
  if ( v10 != a2[0x36] ) /*0x708ca2*/
    return 0; /*0x708c86*/
  if ( v10 ) /*0x708ca6*/
  {
    v11 = (_DWORD *)*(this + 0x34); /*0x708ca8*/
    v12 = (_DWORD *)a2[0x34]; /*0x708cb0*/
    while ( v11 ) /*0x708cb6*/
    {
      v13 = v11[2]; /*0x708cbb*/
      v11 = (_DWORD *)*v11; /*0x708cbf*/
      v14 = v12 + 2; /*0x708cc1*/
      v12 = (_DWORD *)*v12; /*0x708cc4*/
      v15 = *v14; /*0x708cc6*/
      if ( v13 ) /*0x708cc8*/
      {
        if ( !v15 ) /*0x708ccc*/
          return 0; /*0x708ccc*/
      }
      else if ( v15 ) /*0x708cd2*/
      {
        return 0; /*0x708cd2*/
      }
    }
  }
  return 1; /*0x708c42*/
}
