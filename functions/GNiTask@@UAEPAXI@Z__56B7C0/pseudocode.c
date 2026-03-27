NiTask *__thiscall NiTask::`scalar deleting destructor'(NiTask *this, char a2)
{
  *(_DWORD *)this = &NiTask::`vftable';
  NiRefObject_destr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
