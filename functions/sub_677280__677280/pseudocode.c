// Verified: six-list owning clear; calls Crime destructor then FormHeapFree for every record, frees list nodes while retaining allocated sentinel heads. Distinct from AlarmPackage borrowed Crime references.
void __thiscall ActorProcessManager_ClearCrimes(ActorProcessManager *self)
{
  CrimeListNode **crimeLists; // ebx
  int v2; // ebp
  CrimeListNode *v3; // esi
  Crime *crime; // edi
  CrimeListNode *next; // eax

  crimeLists = self->crimeLists; /*0x677284*/
  v2 = 6; /*0x677287*/
  do /*0x6772d6*/
  {
    v3 = *crimeLists; /*0x677290*/
    if ( *crimeLists ) /*0x677290*/
    {
      while ( 1 ) /*0x677296*/
      {
        crime = v3->crime; /*0x677296*/
        if ( !v3->crime ) /*0x677296*/
          break; /*0x677296*/
        Crime_Destructor(v3->crime); /*0x67729e*/
        FormHeapFree((unsigned int)crime); /*0x6772a4*/
        next = v3->next; /*0x6772a9*/
        if ( next ) /*0x6772b1*/
        {
          v3->next = next->next; /*0x6772b6*/
          v3->crime = next->crime; /*0x6772bc*/
          FormHeapFree((unsigned int)next); /*0x6772be*/
        }
        else
        {
          v3->crime = 0; /*0x6772c8*/
        }
      }
    }
    ++crimeLists; /*0x6772d0*/
    --v2; /*0x6772d3*/
  }
  while ( v2 ); /*0x6772d6*/
}
