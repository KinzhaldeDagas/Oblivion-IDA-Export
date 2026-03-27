bhkRefObject *__thiscall sub_890A70(bhkRefObject *this, hkVector4 *a2)
{
  bhkRefObject::bhkRefObject(this);
  this->__vftable = (NiObjectVtbl *)&bhkWorldObject::`vftable';
  *((_DWORD *)this + 3) = 0;
  ++dword_BA7D34;
  this->__vftable = (NiObjectVtbl *)&bhkPhantom::`vftable';
  ++dword_BA7F5C;
  *((_BYTE *)this + 0x10) = 0;
  this->__vftable = (NiObjectVtbl *)&bhkAabbPhantom::`vftable';
  ++dword_BA802C;
  *((_BYTE *)this + 0x10) = 0;
  this->__vftable = (NiObjectVtbl *)&bhkAvoidBox::`vftable';
  sub_88E6F0((hkVector4 *)this, a2);
  return this;
}
