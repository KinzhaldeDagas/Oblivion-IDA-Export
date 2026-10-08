OB_stString28_010201A0 *__thiscall sub_414680(OB_stString28_010201A0 *this, OB_stString28_010201A0 *source)
{
  this->size = 0; /*0x414687*/
  this->capacity = 0xF; /*0x41468a*/
  this->storage.inlineData[0] = 0; /*0x414692*/
  OB_stString28_AssignSubstring_010201A0(this, source, 0, 0xFFFFFFFF); /*0x41469a*/
  return this; /*0x4146a1*/
}
