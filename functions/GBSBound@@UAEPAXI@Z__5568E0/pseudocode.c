BSBound *__thiscall BSBound::`scalar deleting destructor'(BSBound *this, char a2)
{
  NiExtraData_dtor((unsigned int *)this); /*0x5568e3*/
  if ( (a2 & 1) != 0 ) /*0x5568ed*/
    FormHeapFree((unsigned int)this); /*0x5568f0*/
  return this; /*0x5568fa*/
}
