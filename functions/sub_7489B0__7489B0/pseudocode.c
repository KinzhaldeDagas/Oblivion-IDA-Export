_DWORD *__thiscall sub_7489B0(_DWORD *this, char a2)
{
  bool v3; // zf

  v3 = *(this + 6) == 0; /*0x7489b3*/
  *this = &NiMemStream::`vftable'; /*0x7489b7*/
  if ( !v3 && !*((_BYTE *)this + 0x1D) ) /*0x7489bf*/
    FormHeapFree(*(this + 3)); /*0x7489c9*/
  NiBinaryStream_destr(this); /*0x7489d3*/
  if ( (a2 & 1) != 0 ) /*0x7489dd*/
    FormHeapFree((unsigned int)this); /*0x7489e0*/
  return this; /*0x7489ea*/
}
