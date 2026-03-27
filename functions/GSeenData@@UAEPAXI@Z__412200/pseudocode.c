SeenData *__thiscall SeenData::`scalar deleting destructor'(SeenData *this, char a2)
{
  *(_DWORD *)this = &SeenData::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
