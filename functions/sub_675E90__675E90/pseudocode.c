// Verified: scans six lists for criminal0C, performs witness/disposition callback607120, destroys/frees crime, unlinks it and restarts list. Full callback policy Unknown.
void __thiscall ActorProcessManager_RemoveCrimesForCriminal(ActorProcessManager *self, Actor *criminal)
{
  CrimeListNode **crimeLists; // ebx
  int v3; // ebp
  int *v4; // edi
  Crime **v5; // eax
  Crime *v6; // esi

  crimeLists = self->crimeLists; /*0x675e94*/
  v3 = 6; /*0x675e97*/
  do /*0x675ee7*/
  {
    v4 = (int *)*crimeLists; /*0x675ea0*/
    v5 = (Crime **)*crimeLists; /*0x675ea4*/
    if ( *crimeLists ) /*0x675ea0*/
    {
      do /*0x675edf*/
      {
        v6 = *v5; /*0x675ea8*/
        if ( !*v5 ) /*0x675ea8*/
          break; /*0x675eac*/
        if ( v6->criminal == criminal ) /*0x675eb5*/
        {
          sub_607120(*v5); /*0x675eb9*/
          Crime_Destructor(v6); /*0x675ec0*/
          FormHeapFree((unsigned int)v6); /*0x675ec6*/
          BSSimpleList_Remove(v4, (int)v6); /*0x675ed1*/
          v5 = (Crime **)v4; /*0x675ed6*/
        }
        else
        {
          v5 = (Crime **)v5[1]; /*0x675eda*/
        }
      }
      while ( v5 ); /*0x675edf*/
    }
    ++crimeLists; /*0x675ee1*/
    --v3; /*0x675ee4*/
  }
  while ( v3 ); /*0x675ee7*/
}
