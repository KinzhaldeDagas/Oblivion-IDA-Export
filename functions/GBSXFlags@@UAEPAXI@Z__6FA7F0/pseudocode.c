BSXFlags *__thiscall BSXFlags::`scalar deleting destructor'(BSXFlags *this, char a2)
{
  *(_DWORD *)this = &NiIntegerExtraData::`vftable'; /*0x6fa7f3*/
  NiExtraData_dtor((unsigned int *)this); /*0x6fa7f9*/
  if ( (a2 & 1) != 0 ) /*0x6fa803*/
    FormHeapFree((unsigned int)this); /*0x6fa806*/
  return this; /*0x6fa810*/
}
