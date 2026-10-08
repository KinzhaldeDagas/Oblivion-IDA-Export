// Oblivion collision-vector uninitialized copy: copies [first,last) as 28-byte records into destination and returns the advanced destination.
OB_CollisionObject_010201A0 *__cdecl OB_stVector_CollisionObject_UninitializedCopyRange_010201A0(
        const OB_CollisionObject_010201A0 *first,
        const OB_CollisionObject_010201A0 *last,
        OB_CollisionObject_010201A0 *destination)
{
  const OB_CollisionObject_010201A0 *v3; // edx
  OB_CollisionObject_010201A0 *result; // eax

  v3 = first; /*0x788630*/
  for ( result = destination; v3 != last; ++result ) /*0x78863f*/
  {
    if ( result ) /*0x788645*/
      qmemcpy(result, v3, sizeof(OB_CollisionObject_010201A0)); /*0x788650*/
    ++v3; /*0x788652*/
  }
  return result; /*0x78865e*/
}
