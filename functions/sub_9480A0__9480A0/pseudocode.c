BOOL __thiscall sub_9480A0(_DWORD *this, char a2, char a3, char a4)
{
  void *v5; // ecx
  _DWORD **v6; // ecx

  v5 = (void *)*(this + 1); /*0x9480a3*/
  if ( v5 ) /*0x9480a8*/
  {
    sub_918440(v5, 0x11); /*0x9480ac*/
    sub_9181B0((_DWORD **)*(this + 1), 3); /*0x9480b6*/
    sub_918440((void *)*(this + 1), a2); /*0x9480c3*/
    sub_918460((void *)*(this + 1), a3, 0); /*0x9480d2*/
    sub_918440((void *)*(this + 1), a4); /*0x9480df*/
  }
  v6 = (_DWORD **)*(this + 1); /*0x9480e4*/
  return !v6 || !*(_BYTE *)sub_918060(v6, (int)&a2); /*0x9480e9*/
}
