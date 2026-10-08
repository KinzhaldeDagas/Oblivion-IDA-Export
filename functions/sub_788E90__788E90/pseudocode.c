// Oblivion stdcall adapter for uninitialized fill-N of trivial 28-byte collision records; returns destination + count.
OB_CollisionObject_010201A0 *__stdcall OB_stVector_CollisionObject_UninitializedFillN_Stdcall_010201A0(
        OB_CollisionObject_010201A0 *destination,
        unsigned int count,
        const OB_CollisionObject_010201A0 *value)
{
  OB_stVector_CollisionObject_UninitializedFillN_010201A0(destination, count, value); /*0x788eb2*/
  return &destination[count]; /*0x788ec6*/
}
