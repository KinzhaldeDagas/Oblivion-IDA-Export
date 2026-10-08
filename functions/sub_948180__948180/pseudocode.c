BOOL __thiscall sub_948180(_DWORD *this, char a2, char a3)
{
  void *v4; // ecx
  _DWORD **v5; // ecx

  v4 = (void *)*(this + 1); /*0x948183*/
  if ( v4 ) /*0x948188*/
  {
    sub_918440(v4, 0xD); /*0x94818c*/
    sub_9181B0((_DWORD **)*(this + 1), 4); /*0x948196*/
    sub_918460((void *)*(this + 1), a2, 0); /*0x9481a5*/
    sub_918440((void *)*(this + 1), a3); /*0x9481b2*/
  }
  v5 = (_DWORD **)*(this + 1); /*0x9481b7*/
  return !v5 || !*(_BYTE *)sub_918060(v5, (int)&a2); /*0x9481bc*/
}
