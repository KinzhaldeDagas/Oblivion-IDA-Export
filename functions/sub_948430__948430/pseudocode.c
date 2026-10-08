BOOL __thiscall sub_948430(_DWORD *this, int a2, char a3)
{
  void *v4; // ecx
  char v5; // di
  _DWORD **v6; // ecx

  v4 = (void *)*(this + 1); /*0x948433*/
  if ( v4 ) /*0x948438*/
  {
    v5 = a3; /*0x94843b*/
    sub_918440(v4, a3 + 5); /*0x948443*/
    sub_9181B0((_DWORD **)*(this + 1), 0xF); /*0x94844d*/
    sub_918440((void *)*(this + 1), v5); /*0x948456*/
    sub_918390((_DWORD **)*(this + 1)); /*0x948464*/
  }
  v6 = (_DWORD **)*(this + 1); /*0x94846a*/
  return !v6 || !*(_BYTE *)sub_918060(v6, (int)&a3); /*0x94846f*/
}
