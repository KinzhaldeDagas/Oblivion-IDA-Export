int *__thiscall sub_8C68D0(_DWORD *this, unsigned int a2, int *a3)
{
  bool v5; // al
  bool v6; // zf
  _DWORD *v7; // eax

  if ( a2 < *(this + 3) ) /*0x8c68dc*/
  {
    v5 = !*a3 && !a3[1]; /*0x8c6927*/
    v6 = v5; /*0x8c692e*/
    v7 = (_DWORD *)(*(this + 1) + 8 * a2); /*0x8c6933*/
    if ( v6 ) /*0x8c6936*/
    {
      if ( *v7 || v7[1] ) /*0x8c695c*/
        --*(this + 4); /*0x8c6974*/
    }
    else if ( !*v7 && !v7[1] ) /*0x8c693d*/
    {
      goto LABEL_7; /*0x8c6941*/
    }
  }
  else
  {
    *(this + 3) = a2 + 1; /*0x8c68e1*/
    if ( *a3 || a3[1] ) /*0x8c68e9*/
    {
LABEL_7:
      ++*(this + 4); /*0x8c6901*/
      return sub_8C6880((int *)(*(this + 1) + 8 * a2), a3); /*0x8c6912*/
    }
  }
  return sub_8C6880((int *)(*(this + 1) + 8 * a2), a3); /*0x8c6911*/
}
