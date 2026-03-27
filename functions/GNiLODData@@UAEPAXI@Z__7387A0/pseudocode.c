NiLODData *__thiscall NiLODData::`scalar deleting destructor'(NiLODData *this, char a2)
{
  *(_DWORD *)this = &NiLODData::`vftable';
  NiRefObject_destr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
