NiColorExtraData *__thiscall NiColorExtraData::`scalar deleting destructor'(NiColorExtraData *this, char a2)
{
  *(_DWORD *)this = &NiColorExtraData::`vftable';
  NiExtraData_dtor((unsigned int *)this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
