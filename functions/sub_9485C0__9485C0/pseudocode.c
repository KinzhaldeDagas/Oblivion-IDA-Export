BOOL __thiscall sub_9485C0(void **this, _DWORD *a2, __int128 *a3, char a4, char a5)
{
  _DWORD *v6; // edi
  char v7; // al
  _DWORD **v8; // ecx

  if ( *(this + 1) )
  {
    v6 = a2;
    v7 = sub_948550(a2);
    sub_918440(*(this + 1), v7 + 0x29);
    sub_9181B0((_DWORD **)*(this + 1), 1);
    sub_948580(this + 0xFFFFFFFE, v6);
    sub_948810(*(this + 1), a3);
    sub_918460(*(this + 1), a4, 0);
    sub_918440(*(this + 1), a5);
  }
  v8 = (_DWORD **)*(this + 1);
  return !v8 || !*(_BYTE *)sub_918060(v8, (int)&a2);
}
