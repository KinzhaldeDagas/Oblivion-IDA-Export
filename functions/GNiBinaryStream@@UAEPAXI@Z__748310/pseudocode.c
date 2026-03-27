NiBinaryStream *__thiscall NiBinaryStream::`scalar deleting destructor'(NiBinaryStream *this, char a2)
{
  *(_DWORD *)this = &NiBinaryStream::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
