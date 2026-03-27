PathLow *__thiscall PathLow::`scalar deleting destructor'(PathLow *this, char a2)
{
  *(_DWORD *)this = &PathLow::`vftable';
  sub_689A00((int *)this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
