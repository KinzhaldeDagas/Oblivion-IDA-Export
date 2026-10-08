// 2026-05-18 73000 consumer decode: initializes bhkSimpleShapePhantom cinfo, including identity transform at +0x20 and shape pointer slot at +0x04. Stock 0x565510 installs one shape pointer and attaches the phantom to the target NiAVObject.
_DWORD *__thiscall OB_bhkShapePhantomCinfo_InitIdentity_010201A0(_DWORD *this)
{
  *(this + 5) = 0x80000000; /*0x532254*/
  *(this + 3) = 0; /*0x53225d*/
  *(this + 4) = 0; /*0x532260*/
  *this = 0; /*0x532263*/
  *(this + 1) = 0; /*0x532265*/
  *((_BYTE *)this + 8) = 2; /*0x532268*/
  *((float *)this + 8) = 0.0; /*0x53226c*/
  *((float *)this + 9) = 0.0; /*0x53226f*/
  *((float *)this + 0xA) = 0.0; /*0x532272*/
  *((float *)this + 0xB) = 0.0; /*0x532275*/
  *((float *)this + 0xC) = 0.0; /*0x532278*/
  *((float *)this + 0xD) = 0.0; /*0x53227b*/
  *((float *)this + 0xE) = 0.0; /*0x53227e*/
  *((float *)this + 0xF) = 0.0; /*0x532281*/
  *((float *)this + 0x10) = 0.0; /*0x532284*/
  *((float *)this + 0x11) = 0.0; /*0x532287*/
  *((float *)this + 0x12) = 0.0; /*0x53228a*/
  *((float *)this + 0x13) = 0.0; /*0x53228d*/
  *((float *)this + 0x14) = 0.0; /*0x532290*/
  *((float *)this + 0x15) = 0.0; /*0x532293*/
  *((float *)this + 0x16) = 0.0; /*0x532296*/
  *((float *)this + 0x17) = 0.0; /*0x532299*/
  *((float *)this + 9) = 0.0; /*0x53229c*/
  *((float *)this + 0xA) = 0.0; /*0x53229f*/
  *((float *)this + 0xB) = 0.0; /*0x5322a2*/
  *((float *)this + 0xC) = 0.0; /*0x5322a5*/
  *((float *)this + 0xD) = 0.0; /*0x5322a8*/
  *((float *)this + 0xE) = 0.0; /*0x5322ab*/
  *((float *)this + 0xF) = 0.0; /*0x5322ae*/
  *((float *)this + 0x10) = 0.0; /*0x5322b1*/
  *((float *)this + 0x11) = 0.0; /*0x5322b4*/
  *((float *)this + 0x12) = 0.0; /*0x5322b7*/
  *((float *)this + 0x13) = 0.0; /*0x5322ba*/
  *((float *)this + 8) = 1.0; /*0x5322bf*/
  *((float *)this + 0xD) = 1.0; /*0x5322c2*/
  *((float *)this + 0x12) = 1.0; /*0x5322c5*/
  *((float *)this + 0x14) = 0.0; /*0x5322c8*/
  *((float *)this + 0x15) = 0.0; /*0x5322cb*/
  *((float *)this + 0x16) = 0.0; /*0x5322ce*/
  *((float *)this + 0x17) = 0.0; /*0x5322d1*/
  return this; /*0x5322d4*/
}
