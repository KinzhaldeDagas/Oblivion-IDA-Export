bhkRefObject *__thiscall sub_532CD0(bhkRefObject *this, __m128 *a2)
{
  bhkRefObject::bhkRefObject(this); /*0x532cf8*/
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x532cff*/
  *((_DWORD *)this + 3) = 0; /*0x532d05*/
  *((_DWORD *)this + 4) = 0; /*0x532d08*/
  ++unk_BA7D70; /*0x532d0b*/
  this->__vftable = (NiObjectVtbl *)&bhkBvTreeShape::`vftable'; /*0x532d12*/
  ++unk_BA7F98; /*0x532d18*/
  this->__vftable = (NiObjectVtbl *)&bhkTriSampledHeightFieldBvTreeShape::`vftable'; /*0x532d2a*/
  sub_8B0750(this, a2); /*0x532d30*/
  ++unk_BA7FA4; /*0x532d35*/
  return this; /*0x532d3e*/
}
