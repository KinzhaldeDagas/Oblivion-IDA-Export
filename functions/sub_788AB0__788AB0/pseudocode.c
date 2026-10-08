// Oblivion collision-vector fill-copy primitive: assigns one 28-byte collision record to every initialized element in [first,last).
OB_CollisionObject_010201A0 *__cdecl OB_stVector_CollisionObject_CopyFillRange_010201A0(
        OB_CollisionObject_010201A0 *first,
        OB_CollisionObject_010201A0 *last,
        const OB_CollisionObject_010201A0 *value)
{
  OB_CollisionObject_010201A0 *result; // eax
  OB_CollisionObject_010201A0 *v4; // edi

  for ( result = first; result != last; ++result ) /*0x788ab0*/
  {
    v4 = result; /*0x788ac3*/
    qmemcpy(v4, value, sizeof(OB_CollisionObject_010201A0)); /*0x788ad1*/
  }
  return result; /*0x788ad8*/
}
