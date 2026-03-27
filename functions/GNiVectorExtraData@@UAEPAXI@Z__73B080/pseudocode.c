NiVectorExtraData *__thiscall NiVectorExtraData::`scalar deleting destructor'(NiVectorExtraData *this, char a2)
{
  *(_DWORD *)this = &NiVectorExtraData::`vftable';
  NiExtraData_dtor((unsigned int *)this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
