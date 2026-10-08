_BYTE *__thiscall sub_927E70(_DWORD *this, _BYTE *a2, int a3, int a4)
{
  int v4; // eax

  v4 = *(this + 1); /*0x927e70*/
  if ( !v4 || *(_BYTE *)(**(int (__thiscall ***)(int, int *, int, int))(v4 + 0x14))(v4 + 0x14, &a4, a3, a4) ) /*0x927e8d*/
  {
    *a2 = 1; /*0x927ea3*/
    return a2; /*0x927e9d*/
  }
  else
  {
    *a2 = 0; /*0x927e98*/
    return a2; /*0x927e92*/
  }
}
