bhkRefObject *__thiscall sub_8B6A40(bhkRefObject *this, float *a2, float *a3, float a4)
{
  double v5; // rt0
  int v7; // [esp+10h] [ebp-48h]
  __int128 v8; // [esp+18h] [ebp-40h] BYREF
  __int128 v9; // [esp+28h] [ebp-30h] BYREF
  int v10; // [esp+54h] [ebp-4h]

  bhkRefObject::bhkRefObject(this);
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable';
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  ++dword_BA7D70;
  this->__vftable = (NiObjectVtbl *)&bhkSphereRepShape::`vftable';
  ++dword_BA7F44;
  this->__vftable = (NiObjectVtbl *)&bhkConvexShape::`vftable';
  ++dword_BA7F50;
  this->__vftable = (NiObjectVtbl *)&bhkCapsuleShape::`vftable';
  v10 = 0;
  v5 = hkFactor;
  *(float *)&v9 = *a2 * v5;
  *((float *)&v9 + 1) = a2[1] * v5;
  *((float *)&v9 + 2) = a2[2] * v5;
  *(float *)&v8 = *a3 * v5;
  *((float *)&v8 + 1) = a3[1] * v5;
  *((float *)&v8 + 2) = a3[2] * v5;
  *(float *)&v7 = v5 * a4;
  sub_8B6980(this, &v9, &v8, v7);
  return this;
}
