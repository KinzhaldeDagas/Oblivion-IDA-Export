BOOL __thiscall sub_9482A0(_DWORD *this, char *a2, char a3, char a4)
{
  void *v5; // ecx
  _DWORD **v6; // ecx

  v5 = (void *)*(this + 1); /*0x9482a3*/
  if ( v5 ) /*0x9482a8*/
  {
    sub_918440(v5, 0x15); /*0x9482ac*/
    sub_9181B0((_DWORD **)*(this + 1), 7); /*0x9482b6*/
    sub_948800((void *)*(this + 1), a2); /*0x9482c3*/
    sub_918440((void *)*(this + 1), a3); /*0x9482d0*/
    sub_918440((void *)*(this + 1), a4); /*0x9482dd*/
  }
  v6 = (_DWORD **)*(this + 1); /*0x9482e2*/
  return !v6 || !*(_BYTE *)sub_918060(v6, (int)&a2); /*0x9482e7*/
}
