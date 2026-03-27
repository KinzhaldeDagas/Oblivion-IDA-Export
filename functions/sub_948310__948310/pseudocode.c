BOOL __thiscall sub_948310(_DWORD *this, char *a2, char *a3, char a4, char a5)
{
  void *v6; // ecx
  _DWORD **v7; // ecx

  v6 = (void *)*(this + 1);
  if ( v6 )
  {
    sub_918440(v6, 0x21);
    sub_9181B0((_DWORD **)*(this + 1), 8);
    sub_948800((void *)*(this + 1), a2);
    sub_948800((void *)*(this + 1), a3);
    sub_918440((void *)*(this + 1), a4);
    sub_918440((void *)*(this + 1), a5);
  }
  v7 = (_DWORD **)*(this + 1);
  return !v7 || !*(_BYTE *)sub_918060(v7, (int)&a2);
}
