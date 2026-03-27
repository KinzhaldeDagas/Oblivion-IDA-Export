NiBooleanExtraData *__thiscall NiBooleanExtraData::`scalar deleting destructor'(NiBooleanExtraData *this, char a2)
{
  *(_DWORD *)this = &NiBooleanExtraData::`vftable';
  NiExtraData_dtor((unsigned int *)this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
