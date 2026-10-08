bhkRefObject *__thiscall sub_8AF2C0(bhkRefObject *this)
{
  bhkRefObject::bhkRefObject(this); /*0x8af2c3*/
  *((_DWORD *)this + 3) = 0; /*0x8af2ca*/
  *((_DWORD *)this + 4) = 0; /*0x8af2cd*/
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8af2d0*/
  ++unk_BA7D70; /*0x8af2db*/
  this->__vftable = (NiObjectVtbl *)&bhkSphereRepShape::`vftable'; /*0x8af2e1*/
  ++unk_BA7F44; /*0x8af2e7*/
  this->__vftable = (NiObjectVtbl *)&bhkConvexShape::`vftable'; /*0x8af2ed*/
  ++unk_BA7F50; /*0x8af2f3*/
  this->__vftable = (NiObjectVtbl *)&bhkSphereShape::`vftable'; /*0x8af2f9*/
  ++unk_BA7F80; /*0x8af2ff*/
  return this; /*0x8af307*/
}
