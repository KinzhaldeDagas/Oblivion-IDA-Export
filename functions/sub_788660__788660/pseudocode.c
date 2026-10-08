// Oblivion collision-vector copy-backward primitive: moves 28-byte records from the end toward the front-safe destination and returns destination start.
OB_CollisionObject_010201A0 *__cdecl OB_stVector_CollisionObject_CopyBackwardRange_010201A0(
        const OB_CollisionObject_010201A0 *first,
        const OB_CollisionObject_010201A0 *last,
        OB_CollisionObject_010201A0 *destinationEnd)
{
  OB_CollisionObject_010201A0 *result; // eax
  const OB_CollisionObject_010201A0 *i; // edx

  result = &destinationEnd[-(last - first)]; /*0x788695*/
  for ( i = last; /*0x788699*/
        i != first;
        qmemcpy((char *)i + (char *)destinationEnd - (char *)last, i, sizeof(const OB_CollisionObject_010201A0)) )
  {
    i += 0xFFFFFFFF; /*0x7886a0*/
  }
  return result; /*0x7886b4*/
}
