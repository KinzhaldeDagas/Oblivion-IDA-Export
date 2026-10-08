// STLSPData ctor. Allocates and zeroes the 0x300-byte leaf constant table at +0x08 and clears initial leaf globals.
//
// [2026-10-02 Fallout comparative pass]
// Verified: NiRefObject-derived 0x20-byte owner (allocated by 0x5622B0); vtable 0xA929C0. Allocates/zeros 0x300 bytes at +8; zeros only +0x0C,+0x10,+0x14. +0x18/+0x1C are NOT initialized here. Fallout STLSPData ctor 0x828CDB60 matches this limited initialization.
OB_STLSPData_010201A0 *__thiscall OB_STLSPData_ctor_010201A0(OB_STLSPData_010201A0 *this)
{
  float *v2; // eax

  this->vtbl = (int)&NiRefObject::`vftable'; /*0x7f183d*/
  this->refCount = 0; /*0x7f1843*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x7f184a*/
  this->vtbl = (int)&STLSPData::`vftable'; /*0x7f185d*/
  v2 = (float *)FormHeapAlloc(0x300u); /*0x7f1863*/
  this->leafConstantTable = v2; /*0x7f1870*/
  _memset((int)v2, 0, 0x300u); /*0x7f1873*/
  this->curveScalar = 0.0; /*0x7f187a*/
  this->rockScalar = 0.0; /*0x7f1880*/
  this->rustleScalar = 0.0; /*0x7f1885*/
  return this; /*0x7f1888*/
}
