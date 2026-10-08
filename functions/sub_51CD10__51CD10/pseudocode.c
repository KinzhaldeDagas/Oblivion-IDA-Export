// Verified: component flag predicate tests bit 0x10000 (byte +6 bit0). Candidate: GetNoRightArm from Fallout 0x8240A850 and bit position; Oblivion consumer chain remains unverified.
char __thiscall sub_51CD10(_BYTE *this)
{
  return *(this + 6) & 1; /*0x51cd15*/
}
