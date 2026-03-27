bhkRefObject *__thiscall sub_699CE0(bhkRefObject *this, int a2)
{
  bhkRefObject::bhkRefObject(this);
  this->__vftable = (NiObjectVtbl *)&bhkWorldObject::`vftable';
  *((_DWORD *)this + 3) = 0;
  ++dword_BA7D34;
  this->__vftable = (NiObjectVtbl *)&bhkPhantom::`vftable';
  ++dword_BA7F5C;
  *((_BYTE *)this + 0x10) = 0;
  this->__vftable = (NiObjectVtbl *)&bhkAabbPhantom::`vftable';
  sub_8BA650(this, a2);
  ++dword_BA802C;
  *((_BYTE *)this + 0x10) = 0;
  return this;
}
