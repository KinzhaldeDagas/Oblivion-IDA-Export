bhkWorldSubUnk *__thiscall bhkWorldSubUnk::InitAndCreateThreads(
        bhkWorldSubUnk *this,
        UInt16 *a2,
        signed int havokThreadNum)
{
  bhkWorldSubUnk::Init(this);
  if ( a2[2] )
    ++a2[3];
  CreateHavokThreads(this, a2, havokThreadNum);
  return this;
}
