Uniform *__thiscall Uniform::`scalar deleting destructor'(Uniform *this, char a2)
{
  *(_DWORD *)this = &Random::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
