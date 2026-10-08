NiObject *__thiscall NiAccumulator_Constructor(NiObject *this)
{
  NiObject_constr(this); /*0x733813*/
  this->__vftable = (NiObjectVtbl *)&NiAccumulator::`vftable'; /*0x733818*/
  *((_DWORD *)this + 2) = 0; /*0x73381e*/
  return this; /*0x733827*/
}
