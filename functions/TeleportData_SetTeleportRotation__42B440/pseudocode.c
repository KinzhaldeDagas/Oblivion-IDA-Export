int __thiscall TeleportData::SetTeleportRotation(TeleportData *this, NiPoint3 *a2)
{
  int result; // eax

  this->xRot = a2->x; /*0x42b446*/
  this->yRot = a2->y; /*0x42b44c*/
  result = LODWORD(a2->z); /*0x42b44f*/
  LODWORD(this->zRot) = result; /*0x42b452*/
  return result; /*0x42b455*/
}
