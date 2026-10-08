// Verified NiPickRecord initialization for the 0x44-byte record: retains the picked object at +0, clears/releases the secondary reference at +4, and zeros tail fields +0x34..+0x40. It does not initialize the intersection point, distance, or +0x28 normal fields; pick paths populate those selectively, so bounds-only records may leave the normal unavailable.
NiPickRecord_Oblivion_044Verified *__thiscall NiPickRecord_Initialize(
        NiPickRecord_Oblivion_044Verified *this,
        NiRefObject *pickedObject)
{
  NiRefObject *pickedObject_000; // edi
  NiRefObject *secondaryObject_004; // edi

  this->pickedObject_000 = 0; /*0x95a2da*/
  this->secondaryObject_004 = 0; /*0x95a2e0*/
  *(float *)this->unknown_034_043 = 0.0; /*0x95a2e7*/
  *(float *)&this->unknown_034_043[4] = 0.0; /*0x95a2ea*/
  *(float *)&this->unknown_034_043[8] = 0.0; /*0x95a2ee*/
  *(float *)&this->unknown_034_043[0xC] = 0.0; /*0x95a2f1*/
  pickedObject_000 = this->pickedObject_000; /*0x95a2f4*/
  if ( this->pickedObject_000 != pickedObject ) /*0x95a2f8*/
  {
    if ( pickedObject_000 ) /*0x95a2fc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&pickedObject_000->members) ) /*0x95a302*/
        (*(void (__thiscall **)(NiRefObject *, int))pickedObject_000->vtbl)(pickedObject_000, 1); /*0x95a318*/
    }
    this->pickedObject_000 = pickedObject; /*0x95a31c*/
    if ( pickedObject ) /*0x95a31e*/
      InterlockedIncrement((volatile LONG *)&pickedObject->members); /*0x95a324*/
  }
  secondaryObject_004 = this->secondaryObject_004; /*0x95a32a*/
  if ( secondaryObject_004 ) /*0x95a32f*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&secondaryObject_004->members) ) /*0x95a335*/
      (*(void (__thiscall **)(NiRefObject *, int))secondaryObject_004->vtbl)(secondaryObject_004, 1); /*0x95a34b*/
    this->secondaryObject_004 = 0; /*0x95a34d*/
  }
  return this; /*0x95a354*/
}
