OB_stString28_010201A0 *__thiscall sub_414750(OB_stString28_010201A0 *this, char *Src)
{
  this->capacity = 0xF; /*0x41475a*/
  this->size = 0; /*0x414761*/
  this->storage.inlineData[0] = 0; /*0x414768*/
  OB_stString28_AssignBytes_010201A0(this, Src, strlen(Src)); /*0x41477f*/
  return this; /*0x414784*/
}
