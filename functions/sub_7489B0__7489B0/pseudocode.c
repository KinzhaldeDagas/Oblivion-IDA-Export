_DWORD *__thiscall sub_7489B0(_DWORD *this, char a2)
{
  bool v3; // zf

  v3 = *(this + 6) == 0;
  *this = &NiMemStream::`vftable';
  if ( !v3 && !*((_BYTE *)this + 0x1D) )
    FormHeapFree(*(this + 3));
  NiBinaryStream_destr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
