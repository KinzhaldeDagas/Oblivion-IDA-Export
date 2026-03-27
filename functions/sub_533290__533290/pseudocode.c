bhkRefObject *__thiscall sub_533290(bhkRefObject *this, int a2)
{
  int v3; // edx
  int v5[6]; // [esp-4h] [ebp-24h] BYREF
  int v6; // [esp+1Ch] [ebp-4h]

  v5[4] = (int)this;
  bhkRefObject::bhkRefObject(this);
  this->__vftable = (NiObjectVtbl *)&bhkWorldObject::`vftable';
  *((_DWORD *)this + 3) = 0;
  ++dword_BA7D34;
  this->__vftable = (NiObjectVtbl *)&bhkEntity::`vftable';
  ++dword_BA7F8C;
  this->__vftable = (NiObjectVtbl *)&bhkRigidBody::`vftable';
  v6 = 0;
  v5[5] = (int)v5;
  sub_532DF0((_DWORD *)this + 4, 0);
  v5[0] = a2;
  LOBYTE(v6) = 1;
  *((_DWORD *)this + 6) = 0;
  sub_8A4260((int)this, v3, v5[0]);
  ++dword_BA7D80;
  return this;
}
