BOOL __thiscall sub_948180(_DWORD *this, char a2, char a3)
{
  void *v4; // ecx
  _DWORD **v5; // ecx

  v4 = (void *)*(this + 1);
  if ( v4 )
  {
    sub_918440(v4, 0xD);
    sub_9181B0((_DWORD **)*(this + 1), 4);
    sub_918460((void *)*(this + 1), a2, 0);
    sub_918440((void *)*(this + 1), a3);
  }
  v5 = (_DWORD **)*(this + 1);
  return !v5 || !*(_BYTE *)sub_918060(v5, (int)&a2);
}
