NiBSplineBasisData *__thiscall NiBSplineBasisData::`scalar deleting destructor'(NiBSplineBasisData *this, char a2)
{
  *(_DWORD *)this = &NiBSplineBasisData::`vftable';
  NiRefObject_destr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
