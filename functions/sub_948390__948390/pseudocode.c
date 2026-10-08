BOOL __thiscall sub_948390(_DWORD *this, const char *a2, char a3, char a4)
{
  signed int v5; // edi
  _DWORD **v6; // ecx

  if ( *(this + 1) ) /*0x948393*/
  {
    v5 = sub_8B1860(a2); /*0x9483a6*/
    if ( v5 > 0xFFFF ) /*0x9483b1*/
      LOBYTE(v5) = 0xFF; /*0x9483b3*/
    sub_918440((void *)*(this + 1), v5 + 0xB); /*0x9483bf*/
    sub_9181B0((_DWORD **)*(this + 1), 9); /*0x9483c9*/
    sub_918420((void *)*(this + 1), v5); /*0x9483d2*/
    sub_918390((_DWORD **)*(this + 1)); /*0x9483dc*/
    sub_918440((void *)*(this + 1), a3); /*0x9483e9*/
    sub_918440((void *)*(this + 1), a4); /*0x9483f6*/
  }
  v6 = (_DWORD **)*(this + 1); /*0x9483fd*/
  return !v6 || !*(_BYTE *)sub_918060(v6, (int)&a2); /*0x948402*/
}
