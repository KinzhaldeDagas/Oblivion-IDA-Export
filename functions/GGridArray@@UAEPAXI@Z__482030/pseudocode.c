GridArray *__thiscall GridArray::`scalar deleting destructor'(GridArray *this, char a2)
{
  this->__vftable = (GridArray_vtbl *)&GridArray::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
