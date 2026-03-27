#239 *__thiscall BaseProcess::`scalar deleting destructor'(#239 *this, char a2)
{
  *(_DWORD *)this = &BaseProcess::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
