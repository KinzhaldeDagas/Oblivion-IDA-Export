// 2026-05-18 73000 consumer decode: copies a full 4x4 transform matrix from cinfo into the Havok construction object; rows 0..2 via 0x8A1FB0 and row 3 here. 0x565510 stock callers leave rotation identity and write translation only.
float *__thiscall sub_8A2050(float *this, float *a2)
{
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]
  float v7; // [esp+14h] [ebp+4h]

  sub_8A1FB0(this, a2); /*0x8a205c*/
  v7 = *(this + 0xD); /*0x8a2064*/
  v5 = *(this + 0xE); /*0x8a206d*/
  v6 = *(this + 0xF); /*0x8a2074*/
  a2[0xC] = *(this + 0xC); /*0x8a207b*/
  a2[0xD] = v7; /*0x8a2082*/
  a2[0xE] = v5; /*0x8a2089*/
  a2[0xF] = v6; /*0x8a2090*/
  return a2; /*0x8a2093*/
}
