BOOL __thiscall sub_9481E0(_DWORD *this, char *a2, char *a3, char *a4, char a5, char a6, char a7, const char *a8)
{
  char v9; // di
  _DWORD **v10; // ecx

  if ( *(this + 1) )
  {
    v9 = sub_8B1860(a8);
    sub_918440((void *)*(this + 1), v9 + 0x33);
    sub_9181B0((_DWORD **)*(this + 1), 0xD);
    sub_948800((void *)*(this + 1), a2);
    sub_948800((void *)*(this + 1), a3);
    sub_948800((void *)*(this + 1), a4);
    sub_918440((void *)*(this + 1), a5);
    sub_918440((void *)*(this + 1), a6);
    sub_918440((void *)*(this + 1), a7);
    sub_918420((void *)*(this + 1), v9);
    sub_918390((_DWORD **)*(this + 1));
  }
  v10 = (_DWORD **)*(this + 1);
  return !v10 || !*(_BYTE *)sub_918060(v10, (int)&a8);
}
