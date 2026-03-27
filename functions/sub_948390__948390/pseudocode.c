BOOL __thiscall sub_948390(_DWORD *this, const char *a2, char a3, char a4)
{
  signed int v5; // edi
  _DWORD **v6; // ecx

  if ( *(this + 1) )
  {
    v5 = sub_8B1860(a2);
    if ( v5 > 0xFFFF )
      LOBYTE(v5) = 0xFF;
    sub_918440((void *)*(this + 1), v5 + 0xB);
    sub_9181B0((_DWORD **)*(this + 1), 9);
    sub_918420((void *)*(this + 1), v5);
    sub_918390((_DWORD **)*(this + 1));
    sub_918440((void *)*(this + 1), a3);
    sub_918440((void *)*(this + 1), a4);
  }
  v6 = (_DWORD **)*(this + 1);
  return !v6 || !*(_BYTE *)sub_918060(v6, (int)&a2);
}
