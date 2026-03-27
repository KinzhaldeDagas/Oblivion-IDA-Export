int __thiscall TeleportData::SetTeleportPosition(TeleportData *this, NiPoint3 *a2)
{
  int result; // eax

  this->x = a2->x;
  this->y = a2->y;
  result = LODWORD(a2->z);
  LODWORD(this->z) = result;
  return result;
}
