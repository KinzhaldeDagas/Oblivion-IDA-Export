// Verified: component flag predicate tests bit 0x80000. Candidate: GetNoShadow from Fallout 0x8240A870, but no Oblivion rendering consumer verification yet.
bool __thiscall sub_51CD30(_DWORD *this)
{
  return (*(this + 1) & 0x80000) != 0; /*0x51cd38*/
}
