bhkRefObject *__thiscall sub_533290(bhkRefObject *this, int a2)
{
  int v3; // edx
  int v5[6]; // [esp-4h] [ebp-24h] BYREF
  int v6; // [esp+1Ch] [ebp-4h]

  v5[4] = (int)this; /*0x5332b7*/
  bhkRefObject::bhkRefObject(this); /*0x5332bb*/
  this->__vftable = (NiObjectVtbl *)&bhkWorldObject::`vftable'; /*0x5332c0*/
  *((_DWORD *)this + 3) = 0; /*0x5332cb*/
  ++unk_BA7D34; /*0x5332d2*/
  this->__vftable = (NiObjectVtbl *)&bhkEntity::`vftable'; /*0x5332d8*/
  ++unk_BA7F8C; /*0x5332de*/
  this->__vftable = (NiObjectVtbl *)&bhkRigidBody::`vftable'; /*0x5332e7*/
  v6 = 0; /*0x5332f0*/
  v5[5] = (int)v5; /*0x5332f8*/
  sub_532DF0((_DWORD *)this + 4, 0); /*0x533302*/
  v5[0] = a2; /*0x53330b*/
  LOBYTE(v6) = 1; /*0x53330e*/
  *((_DWORD *)this + 6) = 0; /*0x533312*/
  sub_8A4260((int *)this, v3, v5[0]); /*0x533319*/
  ++unk_BA7D80; /*0x53331e*/
  return this; /*0x533326*/
}
