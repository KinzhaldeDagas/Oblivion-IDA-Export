int __thiscall sub_9185F0(void **this, const char *a2, char a3)
{
  signed int v4; // esi

  v4 = sub_8B1860(a2); /*0x9185ff*/
  if ( v4 > 0xFFFF ) /*0x91860a*/
    LOBYTE(v4) = 0xFF; /*0x91860c*/
  sub_918440(*(this + 4), v4 + 7); /*0x918618*/
  sub_9181B0((_DWORD **)*(this + 4), 0xC0); /*0x918625*/
  sub_918440(*(this + 4), a3); /*0x918632*/
  sub_918420(*(this + 4), v4); /*0x91863b*/
  sub_918390((_DWORD **)*(this + 4)); /*0x918645*/
  return 0; /*0x91864a*/
}
