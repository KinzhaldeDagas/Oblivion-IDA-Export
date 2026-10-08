// Verified 2026-10-04 crime-record family: manager6770F0 allocates30 bytes, calls605E50 then606520; manager677010 calls6061F0;677240 calls6071A0. Embedded witness list at1C, not AlarmPackage crimes pointer at3C. Probable Fallout Crime family; Oblivion allocation, field reads/writes, calls and RTTI fixups establish local identity.
// Verified: scans embedded witness list by Actor pointer identity.
bool __thiscall Crime_DoesActorKnow(Crime *self, Actor *actor)
{
  CrimeWitnessNode *p_witnesses; // eax

  p_witnesses = &self->witnesses; /*0x605ed0*/
  if ( self != (Crime *)0xFFFFFFE4 ) /*0x605ed5*/
  {
    do /*0x605ee9*/
    {
      if ( p_witnesses->actor == actor ) /*0x605ee2*/
        break; /*0x605ee2*/
      p_witnesses = p_witnesses->next; /*0x605ee4*/
    }
    while ( p_witnesses ); /*0x605ee9*/
  }
  return p_witnesses != 0; /*0x605ef4*/
}
