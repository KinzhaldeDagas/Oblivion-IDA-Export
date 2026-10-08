bhkWorldSubUnk *__thiscall bhkWorldSubUnk::InitAndCreateThreads(
        bhkWorldSubUnk *this,
        UInt16 *a2,
        signed int havokThreadNum)
{
  bhkWorldSubUnk::Init(this); /*0x8bafd3*/
  if ( a2[2] ) /*0x8bafdc*/
    ++a2[3]; /*0x8bafe3*/
  CreateHavokThreads(this, a2, havokThreadNum); /*0x8bafef*/
  return this; /*0x8baff6*/
}
