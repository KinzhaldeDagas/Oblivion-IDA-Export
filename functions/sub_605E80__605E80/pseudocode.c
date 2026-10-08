// Verified 2026-10-04 crime-record family: manager6770F0 allocates30 bytes, calls605E50 then606520; manager677010 calls6061F0;677240 calls6071A0. Embedded witness list at1C, not AlarmPackage crimes pointer at3C. Probable Fallout Crime family; Oblivion allocation, field reads/writes, calls and RTTI fixups establish local identity.
// Verified destructor: conditionally detaches crime from active AlarmPackages through675740, then frees witness-list nodes, not Actor payloads. Does not free Crime storage; manager removal callers separately FormHeapFree(self).
void __thiscall Crime_Destructor(Crime *self)
{
  CrimeWitnessNode *next; // edi

  if ( g_TESDataHandler ) /*0x605e80*/
  {
    if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x605e8c*/
      sub_675740((ActorProcessManager *)&qword_B3BB2C[0x75], (int)self, 1); /*0x605e9d*/
  }
  if ( self->witnesses.next ) /*0x605ea2*/
  {
    do /*0x605ec4*/
    {
      next = self->witnesses.next->next; /*0x605eb3*/
      FormHeapFree((unsigned int)self->witnesses.next); /*0x605eb7*/
      self->witnesses.next = next; /*0x605ec1*/
    }
    while ( next ); /*0x605ec4*/
  }
  self->witnesses.actor = 0; /*0x605ec7*/
}
