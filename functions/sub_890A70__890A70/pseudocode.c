bhkRefObject *__thiscall sub_890A70(bhkRefObject *this, hkVector4 *a2)
{
  bhkRefObject::bhkRefObject(this); /*0x890a98*/
  this->__vftable = (NiObjectVtbl *)&bhkWorldObject::`vftable'; /*0x890a9f*/
  *((_DWORD *)this + 3) = 0; /*0x890aaa*/
  ++unk_BA7D34; /*0x890aad*/
  this->__vftable = (NiObjectVtbl *)&bhkPhantom::`vftable'; /*0x890ab3*/
  ++unk_BA7F5C; /*0x890ab9*/
  *((_BYTE *)this + 0x10) = 0; /*0x890abf*/
  this->__vftable = (NiObjectVtbl *)&bhkAabbPhantom::`vftable'; /*0x890ac2*/
  ++unk_BA802C; /*0x890ac8*/
  *((_BYTE *)this + 0x10) = 0; /*0x890ace*/
  this->__vftable = (NiObjectVtbl *)&bhkAvoidBox::`vftable'; /*0x890adc*/
  sub_88E6F0((hkVector4 *)this, a2); /*0x890ae2*/
  return this; /*0x890ae9*/
}
