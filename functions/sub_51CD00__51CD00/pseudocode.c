// Verified: component flag predicate tests bit 0x20000. Candidate: GetNoLeftArm, suggested by Fallout symbol 0x8240A840 and same bit; consumer-level Oblivion behavior not verified in this pass, so semantic name intentionally unchanged.
bool __thiscall sub_51CD00(_DWORD *this)
{
  return (*(this + 1) & 0x20000) != 0; /*0x51cd08*/
}
