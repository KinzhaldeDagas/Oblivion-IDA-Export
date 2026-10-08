NiUnionBV *__thiscall NiUnionBV::`scalar deleting destructor'(NiUnionBV *this, char a2)
{
  NiUnionBV::~NiUnionBV(this); /*0x95ffd3*/
  if ( (a2 & 1) != 0 ) /*0x95ffdd*/
    FormHeapFree((unsigned int)this); /*0x95ffe0*/
  return this; /*0x95ffea*/
}
