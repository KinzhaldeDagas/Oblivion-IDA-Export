void __thiscall sub_7488B0(_DWORD *this)
{
  bool v2; // zf

  v2 = *(this + 6) == 0;
  *this = &NiMemStream::`vftable';
  if ( !v2 && !*((_BYTE *)this + 0x1D) )
    FormHeapFree(*(this + 3));
  NiBinaryStream_destr(this);
}
