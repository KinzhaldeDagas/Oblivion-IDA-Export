void __thiscall sub_7488B0(_DWORD *this)
{
  bool v2; // zf

  v2 = *(this + 6) == 0; /*0x7488b3*/
  *this = &NiMemStream::`vftable'; /*0x7488b7*/
  if ( !v2 && !*((_BYTE *)this + 0x1D) ) /*0x7488bf*/
    FormHeapFree(*(this + 3)); /*0x7488c9*/
  NiBinaryStream_destr(this); /*0x7488d4*/
}
