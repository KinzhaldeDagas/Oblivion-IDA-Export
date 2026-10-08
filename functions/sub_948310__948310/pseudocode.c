BOOL __thiscall sub_948310(_DWORD *this, char *a2, char *a3, char a4, char a5)
{
  void *v6; // ecx
  _DWORD **v7; // ecx

  v6 = (void *)*(this + 1); /*0x948313*/
  if ( v6 ) /*0x948318*/
  {
    sub_918440(v6, 0x21); /*0x94831c*/
    sub_9181B0((_DWORD **)*(this + 1), 8); /*0x948326*/
    sub_948800((void *)*(this + 1), a2); /*0x948333*/
    sub_948800((void *)*(this + 1), a3); /*0x948340*/
    sub_918440((void *)*(this + 1), a4); /*0x94834d*/
    sub_918440((void *)*(this + 1), a5); /*0x94835a*/
  }
  v7 = (_DWORD **)*(this + 1); /*0x94835f*/
  return !v7 || !*(_BYTE *)sub_918060(v7, (int)&a2); /*0x948364*/
}
