BOOL __thiscall sub_948430(_DWORD *this, int a2, char a3)
{
  void *v4; // ecx
  char v5; // di
  _DWORD **v6; // ecx

  v4 = (void *)*(this + 1);
  if ( v4 )
  {
    v5 = a3;
    sub_918440(v4, a3 + 5);
    sub_9181B0((_DWORD **)*(this + 1), 0xF);
    sub_918440((void *)*(this + 1), v5);
    sub_918390((_DWORD **)*(this + 1));
  }
  v6 = (_DWORD **)*(this + 1);
  return !v6 || !*(_BYTE *)sub_918060(v6, (int)&a3);
}
