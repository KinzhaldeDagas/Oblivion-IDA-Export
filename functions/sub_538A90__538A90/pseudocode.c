int __thiscall sub_538A90(_DWORD *this, int a2)
{
  _DWORD *v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // eax

  v3 = (_DWORD *)*this; /*0x538a93*/
  if ( v3 && (v4 = v3[2]) != 0 && (v5 = v4 + 0x14) != 0 ) /*0x538aa3*/
    v6 = *(_DWORD *)(v5 + 0x1C); /*0x538aa5*/
  else
    LOWORD(v6) = 0; /*0x538aaa*/
  *(this + 2) = a2; /*0x538ab0*/
  v7 = (a2 << 0x10) | (unsigned __int16)v6; /*0x538ab9*/
  if ( v3 ) /*0x538abe*/
  {
    v8 = v3[2]; /*0x538ac0*/
    if ( v8 ) /*0x538ac5*/
    {
      v9 = v8 + 0x14; /*0x538ac7*/
      if ( v9 ) /*0x538aca*/
        *(_DWORD *)(v9 + 0x1C) = v7; /*0x538acc*/
    }
  }
  return (*(int (__thiscall **)(_DWORD *))(*v3 + 0x80))(v3); /*0x538ad9*/
}
