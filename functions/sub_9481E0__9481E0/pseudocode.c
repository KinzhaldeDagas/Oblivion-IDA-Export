BOOL __thiscall sub_9481E0(_DWORD *this, char *a2, char *a3, char *a4, char a5, char a6, char a7, const char *a8)
{
  char v9; // di
  _DWORD **v10; // ecx

  if ( *(this + 1) ) /*0x9481e3*/
  {
    v9 = sub_8B1860(a8); /*0x9481fd*/
    sub_918440((void *)*(this + 1), v9 + 0x33); /*0x948206*/
    sub_9181B0((_DWORD **)*(this + 1), 0xD); /*0x948210*/
    sub_948800((void *)*(this + 1), a2); /*0x94821d*/
    sub_948800((void *)*(this + 1), a3); /*0x94822a*/
    sub_948800((void *)*(this + 1), a4); /*0x948237*/
    sub_918440((void *)*(this + 1), a5); /*0x948244*/
    sub_918440((void *)*(this + 1), a6); /*0x948251*/
    sub_918440((void *)*(this + 1), a7); /*0x94825e*/
    sub_918420((void *)*(this + 1), v9); /*0x948267*/
    sub_918390((_DWORD **)*(this + 1)); /*0x948271*/
  }
  v10 = (_DWORD **)*(this + 1); /*0x948278*/
  return !v10 || !*(_BYTE *)sub_918060(v10, (int)&a8); /*0x94827d*/
}
