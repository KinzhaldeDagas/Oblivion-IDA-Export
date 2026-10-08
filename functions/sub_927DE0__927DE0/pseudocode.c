_BYTE *__thiscall sub_927DE0(_DWORD *this, _BYTE *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax

  v7 = *(this + 3); /*0x927de0*/
  if ( !v7 /*0x927e0c*/
    || *(_BYTE *)(**(int (__thiscall ***)(int, int *, int, int, int, int, int))(v7 + 0xC))(
                   v7 + 0xC,
                   &a7,
                   a3,
                   a4,
                   a5,
                   a6,
                   a7) )
  {
    *a2 = 1; /*0x927e22*/
    return a2; /*0x927e1c*/
  }
  else
  {
    *a2 = 0; /*0x927e17*/
    return a2; /*0x927e11*/
  }
}
