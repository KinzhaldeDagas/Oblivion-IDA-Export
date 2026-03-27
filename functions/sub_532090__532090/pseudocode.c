bhkRefObject *__thiscall sub_532090(bhkRefObject *this, float a2, float a3)
{
  double v4; // st7
  void (__thiscall *FindNodes)(NiObject *, NiStream *); // edx
  _DWORD v7[5]; // [esp+Ch] [ebp-14h] BYREF
  float v8; // [esp+28h] [ebp+8h]

  bhkRefObject::bhkRefObject(this);
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  ++dword_BA7D70;
  this->__vftable = (NiObjectVtbl *)&bhkSphereRepShape::`vftable';
  ++dword_BA7F44;
  this->__vftable = (NiObjectVtbl *)&bhkConvexShape::`vftable';
  ++dword_BA7F50;
  this->__vftable = (NiObjectVtbl *)&bhkSphereShape::`vftable';
  ++dword_BA7F80;
  v7[4] = 0;
  if ( LOBYTE(a3) )
    v4 = a2 * hkFactor;
  else
    v4 = a2;
  v8 = v4;
  v7[0] = 0;
  FindNodes = this->__vftable[1].FindNodes;
  *(float *)&v7[1] = v8;
  FindNodes(this, (NiStream *)v7);
  return this;
}
