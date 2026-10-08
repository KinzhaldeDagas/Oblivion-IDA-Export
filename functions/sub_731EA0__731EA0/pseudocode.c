NiObject *__thiscall sub_731EA0(NiObject *this)
{
  NiObject_constr(this); /*0x731ea3*/
  *((_DWORD *)this + 2) = 0; /*0x731eaa*/
  *((_DWORD *)this + 3) = 0; /*0x731ead*/
  this->__vftable = (NiObjectVtbl *)&Ni2DBuffer::`vftable'; /*0x731eb0*/
  *((_DWORD *)this + 4) = 0; /*0x731eb6*/
  return this; /*0x731ebb*/
}
