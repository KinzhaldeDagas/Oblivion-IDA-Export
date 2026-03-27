BOOL __thiscall sub_9486D0(void **this, _DWORD *a2, char a3, char a4)
{
  _DWORD *v5; // edi
  char v6; // al
  _DWORD **v7; // ecx

  if ( *(this + 1) )
  {
    v5 = a2;
    v6 = sub_948550(a2);
    sub_918440(*(this + 1), v6 + 9);
    sub_9181B0((_DWORD **)*(this + 1), 6);
    sub_948580(this + 0xFFFFFFFE, v5);
    sub_918440(*(this + 1), a3);
    sub_918440(*(this + 1), a4);
  }
  v7 = (_DWORD **)*(this + 1);
  return !v7 || !*(_BYTE *)sub_918060(v7, (int)&a2);
}
