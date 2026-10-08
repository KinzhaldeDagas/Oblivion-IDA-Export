BOOL __thiscall sub_948110(_DWORD *this, __int128 *a2, char a3, char a4)
{
  void *v5; // ecx
  _DWORD **v6; // ecx

  v5 = (void *)*(this + 1); /*0x948113*/
  if ( v5 ) /*0x948118*/
  {
    sub_918440(v5, 0x29); /*0x94811c*/
    sub_9181B0((_DWORD **)*(this + 1), 2); /*0x948126*/
    sub_948810((void *)*(this + 1), a2); /*0x948133*/
    sub_918460((void *)*(this + 1), a3, 0); /*0x948142*/
    sub_918440((void *)*(this + 1), a4); /*0x94814f*/
  }
  v6 = (_DWORD **)*(this + 1); /*0x948154*/
  return !v6 || !*(_BYTE *)sub_918060(v6, (int)&a2); /*0x948159*/
}
