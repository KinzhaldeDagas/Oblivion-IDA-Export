// Returns stock collision-object count as vector length divided by compact 0x1C record stride.
unsigned int __thiscall CSpeedTreeRT__GetCollisionObjectCount(const OB_CSpeedTreeRT_010201A0 *this)
{
  OB_CSpeedTreeRT_SCollisionObjects_010201A0 *collisionObjects; // ecx
  unsigned int result; // eax

  collisionObjects = this->collisionObjects; /*0x787d90*/
  result = 0; /*0x787d93*/
  if ( collisionObjects ) /*0x787d97*/
  {
    result = (unsigned int)collisionObjects->objects.begin; /*0x787d99*/
    if ( result ) /*0x787d9e*/
      return (int)((int)collisionObjects->objects.end - result) / 0x1C; /*0x787db7*/
  }
  return result; /*0x787da0*/
}
