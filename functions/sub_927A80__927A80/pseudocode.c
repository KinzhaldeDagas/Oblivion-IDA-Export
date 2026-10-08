_BYTE *__thiscall sub_927A80(int *this, _BYTE *a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edx
  _DWORD *v6; // ecx
  int v7; // eax

  v4 = *(this + 6); /*0x927a82*/
  v5 = 0; /*0x927a85*/
  if ( v4 <= 0 ) /*0x927a8a*/
  {
LABEL_6:
    *a2 = 1; /*0x927aac*/
    return a2; /*0x927aac*/
  }
  else
  {
    v6 = (_DWORD *)*(this + 5); /*0x927a8c*/
    while ( 1 ) /*0x927a99*/
    {
      v7 = *v6 + 0x14; /*0x927a99*/
      if ( v7 == a3 || v7 == a4 ) /*0x927aa2*/
        break; /*0x927aa2*/
      ++v5; /*0x927aa4*/
      ++v6; /*0x927aa5*/
      if ( v5 >= v4 ) /*0x927aaa*/
        goto LABEL_6; /*0x927aaa*/
    }
    *a2 = 0; /*0x927abf*/
    return a2; /*0x927ab9*/
  }
}
