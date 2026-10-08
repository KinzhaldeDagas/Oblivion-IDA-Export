// Oblivion collision-vector uninitialized fill-N primitive: constructs count trivial 28-byte records by copying the supplied value and returns one-past-last.
OB_CollisionObject_010201A0 *__cdecl OB_stVector_CollisionObject_UninitializedFillN_010201A0(
        OB_CollisionObject_010201A0 *destination,
        unsigned int count,
        const OB_CollisionObject_010201A0 *value)
{
  OB_CollisionObject_010201A0 *result; // eax
  unsigned int v4; // edx

  v4 = count; /*0x788ae0*/
  if ( count ) /*0x788ae6*/
  {
    result = destination; /*0x788ae8*/
    do /*0x788b0a*/
    {
      if ( result ) /*0x788af5*/
        qmemcpy(result, value, sizeof(OB_CollisionObject_010201A0)); /*0x788b00*/
      --v4; /*0x788b02*/
      ++result; /*0x788b05*/
    }
    while ( v4 ); /*0x788b0a*/
  }
  return result; /*0x788b0f*/
}
