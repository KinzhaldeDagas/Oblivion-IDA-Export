// Verified 2026-10-04 crime-record family: manager6770F0 allocates30 bytes, calls605E50 then606520; manager677010 calls6061F0;677240 calls6071A0. Embedded witness list at1C, not AlarmPackage crimes pointer at3C. Probable Fallout Crime family; Oblivion allocation, field reads/writes, calls and RTTI fixups establish local identity.
// Verified: traverses six manager category lists and invokes Crime_InitLoadGame on every record. Closes deferred pointer-resolution phase; AlarmPackage stores separate ordinal references to these lists.
void __thiscall ActorProcessManager_InitLoadedCrimes(ActorProcessManager *self)
{
  CrimeListNode **crimeLists; // edi
  int v2; // ebx
  CrimeListNode *i; // esi

  crimeLists = self->crimeLists; /*0x677243*/
  v2 = 6; /*0x677246*/
  do /*0x677275*/
  {
    for ( i = *crimeLists; i; i = i->next ) /*0x677250*/
    {
      if ( !i->next && !i->crime ) /*0x67725c*/
        break; /*0x67725f*/
      Crime_InitLoadGame(i->crime); /*0x677263*/
    }
    ++crimeLists; /*0x67726f*/
    --v2; /*0x677272*/
  }
  while ( v2 ); /*0x677275*/
}
