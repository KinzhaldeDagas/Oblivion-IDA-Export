NiBSplineBasisData *__thiscall NiBSplineBasisData::`scalar deleting destructor'(NiBSplineBasisData *this, char a2)
{
  *(_DWORD *)this = &NiBSplineBasisData::`vftable'; /*0x6e7a53*/
  NiRefObject_destr(this); /*0x6e7a59*/
  if ( (a2 & 1) != 0 ) /*0x6e7a63*/
    FormHeapFree((unsigned int)this); /*0x6e7a66*/
  return this; /*0x6e7a70*/
}
