GridArray *__thiscall GridArray::`scalar deleting destructor'(GridArray *this, char a2)
{
  this->__vftable = (GridArray_vtbl *)&GridArray::`vftable'; /*0x482038*/
  if ( (a2 & 1) != 0 ) /*0x48203e*/
    FormHeapFree((unsigned int)this); /*0x482041*/
  return this; /*0x48204b*/
}
