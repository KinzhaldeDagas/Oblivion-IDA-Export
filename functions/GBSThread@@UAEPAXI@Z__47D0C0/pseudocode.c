BSThread *__thiscall BSThread::`scalar deleting destructor'(BSThread *this, char a2)
{
  this->vtbl = &BSThread::`vftable';
  sub_47D060(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
