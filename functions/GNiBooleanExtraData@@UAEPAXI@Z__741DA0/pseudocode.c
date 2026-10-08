NiBooleanExtraData *__thiscall NiBooleanExtraData::`scalar deleting destructor'(NiBooleanExtraData *this, char a2)
{
  *(_DWORD *)this = &NiBooleanExtraData::`vftable'; /*0x741da3*/
  NiExtraData_dtor((unsigned int *)this); /*0x741da9*/
  if ( (a2 & 1) != 0 ) /*0x741db3*/
    FormHeapFree((unsigned int)this); /*0x741db6*/
  return this; /*0x741dc0*/
}
