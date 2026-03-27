bhkRefObject *__thiscall sub_8AF020(bhkRefObject *this)
{
  bhkRefObject::bhkRefObject(this);
  this->__vftable = (NiObjectVtbl *)&bhkWorldObject::`vftable';
  *((_DWORD *)this + 3) = 0;
  ++dword_BA7D34;
  this->__vftable = (NiObjectVtbl *)&bhkPhantom::`vftable';
  ++dword_BA7F5C;
  *((_BYTE *)this + 0x10) = 0;
  this->__vftable = (NiObjectVtbl *)&bhkShapePhantom::`vftable';
  ++dword_BA7F68;
  *((_BYTE *)this + 0x10) = 0;
  this->__vftable = (NiObjectVtbl *)&bhkSimpleShapePhantom::`vftable';
  ++dword_BA7F74;
  *((_BYTE *)this + 0x10) = 0;
  return this;
}
