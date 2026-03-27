BSBound *__thiscall BSBound::`scalar deleting destructor'(BSBound *this, char a2)
{
  NiExtraData_dtor(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
