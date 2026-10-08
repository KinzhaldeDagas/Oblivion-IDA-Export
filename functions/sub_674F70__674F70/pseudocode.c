// Verified: scans six lists, unlinks matching target08 records then calls destructor/free. In-loop traversal/restart behavior preserved, not normalized.
void __thiscall ActorProcessManager_RemoveCrimesForTarget(ActorProcessManager *self, TESObjectREFR *target)
{
  CrimeListNode **crimeLists; // edi
  int v3; // ebx
  int *v4; // ecx
  int *v5; // eax
  Crime *v6; // esi

  crimeLists = self->crimeLists; /*0x674f78*/
  v3 = 6; /*0x674f7b*/
  do /*0x674fc5*/
  {
    v4 = (int *)*crimeLists; /*0x674f80*/
    v5 = (int *)*crimeLists; /*0x674f82*/
    if ( *crimeLists ) /*0x674f82*/
    {
      do /*0x674fbd*/
      {
        if ( !v5[1] && !*v5 ) /*0x674f8e*/
          break; /*0x674f91*/
        v6 = (Crime *)*v5; /*0x674f93*/
        if ( *v5 ) /*0x674f93*/
        {
          if ( v6->target == target ) /*0x674f9c*/
          {
            BSSimpleList_Remove(v4, *v5); /*0x674f9f*/
            Crime_Destructor(v6); /*0x674fa6*/
            FormHeapFree((unsigned int)v6); /*0x674fac*/
            v4 = (int *)*crimeLists; /*0x674fb1*/
            v5 = (int *)*crimeLists; /*0x674fb6*/
          }
        }
        v5 = (int *)v5[1]; /*0x674fb8*/
      }
      while ( v5 ); /*0x674fbd*/
    }
    ++crimeLists; /*0x674fbf*/
    --v3; /*0x674fc2*/
  }
  while ( v3 ); /*0x674fc5*/
}
