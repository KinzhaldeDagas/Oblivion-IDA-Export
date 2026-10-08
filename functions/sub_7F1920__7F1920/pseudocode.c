// STLSPData scalar dtor. Frees the leaf constant table at +0x08, tears down NiRefObject, and optionally frees this.
//
// [2026-10-02 Fallout comparative pass]
// Verified scalar deleting destructor, STLSPData vtable slot 0 (0xA929C0); releases table+8, decrements NiRefObject object count, optionally frees this when flags bit 0 is set. Fallout uses separate destructor 0x828CDC08 and deleting wrapper 0x828CDCF8; do not equate Oblivion combined body with only its plain destructor.
OB_STLSPData_010201A0 *__thiscall OB_STLSPData_dtor_010201A0(OB_STLSPData_010201A0 *this, char freeMemory)
{
  float *leafConstantTable; // eax

  leafConstantTable = this->leafConstantTable; /*0x7f1923*/
  this->vtbl = (int)&STLSPData::`vftable'; /*0x7f1928*/
  if ( leafConstantTable ) /*0x7f192e*/
    FormHeapFree((unsigned int)leafConstantTable); /*0x7f1931*/
  this->vtbl = (int)&NiRefObject::`vftable'; /*0x7f193e*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x7f1944*/
  if ( (freeMemory & 1) != 0 ) /*0x7f194f*/
    FormHeapFree((unsigned int)this); /*0x7f1952*/
  return this; /*0x7f195c*/
}
