int __thiscall sub_9185F0(void **this, const char *a2, char a3)
{
  signed int v4; // esi

  v4 = sub_8B1860(a2);
  if ( v4 > 0xFFFF )
    LOBYTE(v4) = 0xFF;
  sub_918440(*(this + 4), v4 + 7);
  sub_9181B0((_DWORD **)*(this + 4), 0xC0);
  sub_918440(*(this + 4), a3);
  sub_918420(*(this + 4), v4);
  sub_918390((_DWORD **)*(this + 4));
  return 0;
}
