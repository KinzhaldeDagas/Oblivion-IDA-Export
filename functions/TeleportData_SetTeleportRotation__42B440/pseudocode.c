int __thiscall TeleportData::SetTeleportRotation(TeleportData *this, NiPoint3 *a2)
{
  int result; // eax

  this->xRot = a2->x;
  this->yRot = a2->y;
  result = LODWORD(a2->z);
  LODWORD(this->zRot) = result;
  return result;
}
