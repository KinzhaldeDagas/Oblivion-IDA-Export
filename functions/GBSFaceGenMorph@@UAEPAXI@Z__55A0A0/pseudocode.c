BSFaceGenMorph *__thiscall BSFaceGenMorph::`scalar deleting destructor'(BSFaceGenMorph *this, char a2)
{
  *(_DWORD *)this = &BSFaceGenMorph::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
