bhkRefObject *__thiscall sub_8B6A40(bhkRefObject *this, float *a2, float *a3, float a4)
{
  double v5; // rt0
  int v7; // [esp+10h] [ebp-48h]
  __int128 v8; // [esp+18h] [ebp-40h] BYREF
  __int128 v9; // [esp+28h] [ebp-30h] BYREF
  int v10; // [esp+54h] [ebp-4h]

  bhkRefObject::bhkRefObject(this); /*0x8b6a7b*/
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x8b6a80*/
  *((_DWORD *)this + 3) = 0; /*0x8b6a8d*/
  *((_DWORD *)this + 4) = 0; /*0x8b6a90*/
  ++unk_BA7D70; /*0x8b6a93*/
  this->__vftable = (NiObjectVtbl *)&bhkSphereRepShape::`vftable'; /*0x8b6a99*/
  ++unk_BA7F44; /*0x8b6a9f*/
  this->__vftable = (NiObjectVtbl *)&bhkConvexShape::`vftable'; /*0x8b6aa5*/
  ++unk_BA7F50; /*0x8b6aab*/
  this->__vftable = (NiObjectVtbl *)&bhkCapsuleShape::`vftable'; /*0x8b6ab1*/
  v10 = 0; /*0x8b6ab7*/
  v5 = hkFactor; /*0x8b6acd*/
  *(float *)&v9 = *a2 * v5; /*0x8b6acf*/
  *((float *)&v9 + 1) = a2[1] * v5; /*0x8b6ad8*/
  *((float *)&v9 + 2) = a2[2] * v5; /*0x8b6ae4*/
  *(float *)&v8 = *a3 * v5; /*0x8b6aec*/
  *((float *)&v8 + 1) = a3[1] * v5; /*0x8b6af5*/
  *((float *)&v8 + 2) = a3[2] * v5; /*0x8b6b02*/
  *(float *)&v7 = v5 * a4; /*0x8b6b09*/
  sub_8B6980(this, &v9, &v8, v7); /*0x8b6b18*/
  return this; /*0x8b6b1f*/
}
