int __thiscall TeleportData::SetTeleportPosition(TeleportData *this, NiPoint3 *a2)
{
  int result; // eax

  this->x = a2->x; /*0x68ca06*/
  this->y = a2->y; /*0x68ca0c*/
  result = LODWORD(a2->z); /*0x68ca0f*/
  LODWORD(this->z) = result; /*0x68ca12*/
  return result; /*0x68ca15*/
}
