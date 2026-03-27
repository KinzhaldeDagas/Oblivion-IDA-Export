BSXFlags *__thiscall BSXFlags::`scalar deleting destructor'(BSXFlags *this, char a2)
{
  *(_DWORD *)this = &NiIntegerExtraData::`vftable';
  NiExtraData_dtor(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
