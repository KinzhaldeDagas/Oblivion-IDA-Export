// For each 0x10-byte controlled-block record owned by this sequence, clears the pointer at record +8. Called only by ActorAnimData's manager-wide controlled-block reset pass at 0x4730B0.
unsigned int __thiscall sub_49F520(_DWORD *this)
{
  unsigned int result; // eax
  int v2; // edx

  result = 0; /*0x49f520*/
  if ( *(this + 3) ) /*0x49f522*/
  {
    v2 = 0; /*0x49f527*/
    do /*0x49f544*/
    {
      *(_DWORD *)(*(this + 5) + v2 + 8) = 0; /*0x49f533*/
      ++result; /*0x49f53b*/
      v2 += 0x10; /*0x49f53e*/
    }
    while ( result < *(this + 3) ); /*0x49f544*/
  }
  return result; /*0x49f547*/
}
