// Verified 2026-10-04 crime-record family: manager6770F0 allocates30 bytes, calls605E50 then606520; manager677010 calls6061F0;677240 calls6071A0. Embedded witness list at1C, not AlarmPackage crimes pointer at3C. Probable Fallout Crime family; Oblivion allocation, field reads/writes, calls and RTTI fixups establish local identity.
// Verified: counts nonnull witness nodes, not unknown00. Probable Fallout GetRefCount8274AC88 counterpart; descriptive name avoids conflating list count with scalar field0.
unsigned int __thiscall Crime_GetWitnessCount(Crime *self)
{
  CrimeWitnessNode *p_witnesses; // ecx
  unsigned int result; // eax

  p_witnesses = &self->witnesses; /*0x605f30*/
  if ( !p_witnesses->next && !p_witnesses->actor ) /*0x605f39*/
    return 0; /*0x605f3e*/
  for ( result = 0; p_witnesses; p_witnesses = p_witnesses->next ) /*0x605f45*/
  {
    if ( p_witnesses->actor ) /*0x605f47*/
      ++result; /*0x605f4c*/
  }
  return result; /*0x605f40*/
}
