// Verified: scans six lists; if08 or0C matches actor, unlinks/destroys/frees record; otherwise removes actor from witness list via607110. Loop resets index to0 before its increment; behavior preserved, not silently fixed.
void __thiscall ActorProcessManager_RemoveActorFromCrimes(ActorProcessManager *self, Actor *actor)
{
  int i; // ebx
  int *v3; // ebp
  int *v4; // edi
  unsigned int v5; // esi

  for ( i = 0; i < 6; ++i ) /*0x676f99*/
  {
    v3 = (int *)self->crimeLists[i]; /*0x676fa4*/
    v4 = v3; /*0x676fa8*/
    if ( v3 ) /*0x676fac*/
    {
      while ( v4[1] || *v4 ) /*0x676fb9*/
      {
        v5 = *v4; /*0x676fbb*/
        if ( *v4 ) /*0x676fbb*/
        {
          if ( *(Actor **)(v5 + 0xC) == actor || *(Actor **)(v5 + 8) == actor ) /*0x676fcd*/
          {
            BSSimpleList_Remove(v3, *v4); /*0x676fe3*/
            Crime_Destructor((Crime *)v5); /*0x676fea*/
            FormHeapFree(v5); /*0x676ff0*/
            i = 0; /*0x676ff8*/
            break; /*0x676ff8*/
          }
          Crime_RemoveWitness((Crime *)v5, actor); /*0x676fd2*/
        }
        v4 = (int *)v4[1]; /*0x676fd7*/
        if ( !v4 ) /*0x676fdc*/
          break; /*0x676fdc*/
      }
    }
  }
}
