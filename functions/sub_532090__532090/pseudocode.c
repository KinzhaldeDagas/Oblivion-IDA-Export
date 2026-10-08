// TES4 authoritative: constructs a bhkSphereShape; if the third byte arg is true, radius is converted from TES/world units to Havok units with hkFactor.
bhkRefObject *__thiscall bhkSphereShape_CtorRadius(bhkRefObject *this, float a2, float a3)
{
  double v4; // st7
  void (__thiscall *FindNodes)(NiObject *, NiStream *); // edx
  _DWORD v7[5]; // [esp+Ch] [ebp-14h] BYREF
  float v8; // [esp+28h] [ebp+8h]

  bhkRefObject::bhkRefObject(this); /*0x5320ba*/
  this->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x5320bf*/
  *((_DWORD *)this + 3) = 0; /*0x5320cc*/
  *((_DWORD *)this + 4) = 0; /*0x5320cf*/
  ++unk_BA7D70; /*0x5320d2*/
  this->__vftable = (NiObjectVtbl *)&bhkSphereRepShape::`vftable'; /*0x5320d8*/
  ++unk_BA7F44; /*0x5320de*/
  this->__vftable = (NiObjectVtbl *)&bhkConvexShape::`vftable'; /*0x5320e4*/
  ++unk_BA7F50; /*0x5320ea*/
  this->__vftable = (NiObjectVtbl *)&bhkSphereShape::`vftable'; /*0x5320f0*/
  ++unk_BA7F80; /*0x5320f6*/
  v7[4] = 0; /*0x532100*/
  if ( LOBYTE(a3) )                             // TES4 authoritative: bhkSphereShape constructor converts radius from TES/world units to Havok units when byte arg is true. /*0x532104*/
    v4 = a2 * hkFactor; /*0x53210a*/
  else
    v4 = a2; /*0x532112*/
  v8 = v4; /*0x532116*/
  v7[0] = 0; /*0x53211a*/
  FindNodes = this->__vftable[1].FindNodes; /*0x532124*/
  *(float *)&v7[1] = v8; /*0x532127*/
  FindNodes(this, (NiStream *)v7); /*0x532132*/
  return this; /*0x532136*/
}
