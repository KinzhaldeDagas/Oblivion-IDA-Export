// Oblivion compiler adapter for the 28-byte collision copy-backward primitive; preserves the same first/last/destinationEnd semantics.
OB_CollisionObject_010201A0 *__cdecl OB_stVector_CollisionObject_CopyBackwardRange_Thunk_010201A0(
        const OB_CollisionObject_010201A0 *first,
        const OB_CollisionObject_010201A0 *last,
        OB_CollisionObject_010201A0 *destinationEnd)
{
  return OB_stVector_CollisionObject_CopyBackwardRange_010201A0(first, last, destinationEnd); /*0x788b8a*/
}
