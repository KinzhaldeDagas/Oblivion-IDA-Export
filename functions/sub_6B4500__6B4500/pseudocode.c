char __thiscall sub_6B4500(_DWORD *this, int a2)
{
  _BYTE *v3; // eax
  _BYTE *v4; // esi
  void (__thiscall **v5)(_BYTE *, int); // edx
  _BYTE *v6; // ecx
  unsigned int v7; // eax
  int v9; // eax
  void (__cdecl *v10)(_BYTE *, int, int, int *, int); // eax
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // [esp-14h] [ebp-1Ch]
  int v15; // [esp-10h] [ebp-18h]

  v3 = sub_431130((const char *)a2, 0, 0x2800, 0x10); /*0x6b4512*/
  v4 = v3; /*0x6b4517*/
  if ( !v3 ) /*0x6b451e*/
    return 0; /*0x6b451e*/
  v5 = *(void (__thiscall ***)(_BYTE *, int))v3; /*0x6b4524*/
  v6 = v3; /*0x6b4526*/
  if ( !v3[0x24] ) /*0x6b4528*/
  {
LABEL_5:
    (*v5)(v6, 1); /*0x6b453a*/
    return 0; /*0x6b4544*/
  }
  v7 = ((int (__thiscall *)(_BYTE *))v5[7])(v3); /*0x6b452d*/
  *(this + 3) = v7; /*0x6b4531*/
  if ( !v7 ) /*0x6b4534*/
  {
    v5 = *(void (__thiscall ***)(_BYTE *, int))v4; /*0x6b4536*/
    v6 = v4; /*0x6b4538*/
    goto LABEL_5; /*0x6b4538*/
  }
  v9 = FormHeapAlloc(v7); /*0x6b4548*/
  v15 = *(this + 3); /*0x6b4557*/
  v14 = v9; /*0x6b4558*/
  *(this + 2) = v9; /*0x6b4559*/
  v10 = *((void (__cdecl **)(_BYTE *, int, int, int *, int))v4 + 1); /*0x6b455c*/
  a2 = 1; /*0x6b4560*/
  v10(v4, v14, v15, &a2, 1); /*0x6b4568*/
  (**(void (__thiscall ***)(_BYTE *, int))v4)(v4, 1); /*0x6b4575*/
  v11 = 0; /*0x6b457a*/
  v12 = *(this + 3) - 1; /*0x6b457c*/
  *this = 0; /*0x6b457f*/
  if ( v12 ) /*0x6b4585*/
  {
    v13 = *(this + 2); /*0x6b4587*/
    do /*0x6b45aa*/
    {
      if ( *(_BYTE *)(v13 + v11) == 0xFF && *(_BYTE *)(v13 + v11 + 1) == 0xFB ) /*0x6b459a*/
        ++*this; /*0x6b459c*/
      ++v11; /*0x6b45a2*/
    }
    while ( v11 < *(this + 3) - 1 ); /*0x6b45aa*/
  }
  *(this + 4) = 0; /*0x6b45ac*/
  return 1; /*0x6b4540*/
}
