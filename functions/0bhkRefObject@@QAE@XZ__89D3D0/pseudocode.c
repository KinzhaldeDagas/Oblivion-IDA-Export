bhkRefObject *__thiscall bhkRefObject::bhkRefObject(bhkRefObject *this)
{
  NiObject_constr(this); /*0x89d3d3*/
  this->__vftable = (NiObjectVtbl *)&bhkRefObject::`vftable'; /*0x89d3d8*/
  this->hkObject = 0; /*0x89d3de*/
  return this; /*0x89d3e7*/
}
