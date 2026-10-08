// 2026-05-18 73000 consumer decode: initializes bhkTransformShape cinfo used for single sphere/box placement. Layout observed by 0x8A2160: +0x04 child hk shape pointer, +0x10 4x4 transform. Stock sets identity rotation and translation zero before 0x565510 writes translation at +0x40..+0x4C.
float *__thiscall OB_bhkTransformShapeCinfo_InitIdentity_010201A0(float *this)
{
  *this = 0.0; /*0x564b74*/
  *(this + 4) = 0.0; /*0x564b7a*/
  *(this + 5) = 0.0; /*0x564b7d*/
  *(this + 6) = 0.0; /*0x564b80*/
  *(this + 7) = 0.0; /*0x564b83*/
  *(this + 8) = 0.0; /*0x564b86*/
  *(this + 9) = 0.0; /*0x564b89*/
  *(this + 0xA) = 0.0; /*0x564b8c*/
  *(this + 0xB) = 0.0; /*0x564b8f*/
  *(this + 0xC) = 0.0; /*0x564b92*/
  *(this + 0xD) = 0.0; /*0x564b95*/
  *(this + 0xE) = 0.0; /*0x564b98*/
  *(this + 0xF) = 0.0; /*0x564b9b*/
  *(this + 0x10) = 0.0; /*0x564b9e*/
  *(this + 0x11) = 0.0; /*0x564ba1*/
  *(this + 0x12) = 0.0; /*0x564ba4*/
  *(this + 0x13) = 0.0; /*0x564ba7*/
  *(this + 1) = 0.0; /*0x564baa*/
  *(this + 5) = 0.0; /*0x564bb1*/
  *(this + 6) = 0.0; /*0x564bb4*/
  *(this + 7) = 0.0; /*0x564bb7*/
  *(this + 8) = 0.0; /*0x564bba*/
  *(this + 9) = 0.0; /*0x564bbd*/
  *(this + 0xA) = 0.0; /*0x564bc0*/
  *(this + 0xB) = 0.0; /*0x564bc3*/
  *(this + 0xC) = 0.0; /*0x564bc6*/
  *(this + 0xD) = 0.0; /*0x564bc9*/
  *(this + 0xE) = 0.0; /*0x564bcc*/
  *(this + 0xF) = 0.0; /*0x564bcf*/
  *(this + 4) = 1.0; /*0x564bd4*/
  *(this + 9) = 1.0; /*0x564bd7*/
  *(this + 0xE) = 1.0; /*0x564bda*/
  *(this + 0x10) = 0.0; /*0x564bdd*/
  *(this + 0x11) = 0.0; /*0x564be0*/
  *(this + 0x12) = 0.0; /*0x564be3*/
  *(this + 0x13) = 0.0; /*0x564be6*/
  return this; /*0x564be9*/
}
