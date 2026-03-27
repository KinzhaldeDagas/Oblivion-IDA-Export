bhkRefObject *__thiscall sub_532CD0(bhkRefObject *this, __m128 *a2)
{
  bhkRefObject::bhkRefObject(this);
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  ++dword_BA7D70;
  this->__vftable = (NiObjectVtbl *)&bhkBvTreeShape::`vftable';
  ++dword_BA7F98;
  this->__vftable = (NiObjectVtbl *)&bhkTriSampledHeightFieldBvTreeShape::`vftable';
  sub_8B0750(this, a2);
  ++dword_BA7FA4;
  return this;
}
