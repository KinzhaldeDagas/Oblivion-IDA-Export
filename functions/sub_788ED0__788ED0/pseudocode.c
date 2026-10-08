// Oblivion stdcall adapter for uninitialized copying of a range of trivial 28-byte collision records.
OB_CollisionObject_010201A0 *__stdcall OB_stVector_CollisionObject_UninitializedCopyRange_Stdcall_010201A0(
        const OB_CollisionObject_010201A0 *first,
        const OB_CollisionObject_010201A0 *last,
        OB_CollisionObject_010201A0 *destination)
{
  return OB_stVector_CollisionObject_UninitializedCopyRange_010201A0(first, last, destination); /*0x788ef6*/
}
