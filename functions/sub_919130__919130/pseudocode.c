_DWORD *__thiscall sub_919130(_DWORD *this, char a2)
{
  *this = &off_A9D2A0; /*0x919133*/
  *(this + 2) = &off_A9D288; /*0x919139*/
  *(this + 8) = off_A9D280; /*0x919140*/
  sub_918F80((int)this); /*0x919147*/
  sub_949180(this); /*0x91914e*/
  if ( (a2 & 1) != 0 ) /*0x919158*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x91916a*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x91916f*/
}
