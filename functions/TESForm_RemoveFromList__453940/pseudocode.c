// Verified: removes matching form pointer from manager+30 queue if present. Called by TESForm destructor46C2D6 with singleton as ECX. Previous TESForm_RemoveFromList name incorrectly identified the receiver. Probable Fallout826021F0 counterpart.
void __thiscall TESSaveLoadGame_RemoveDeferredDeletion(TESSaveLoadGame_SerializationView *self, TESForm *form)
{
  bool v2; // zf
  int *p_deferredDeleteList; // ecx
  int *v4; // eax

  v2 = &self->deferredDeleteList == 0; /*0x453940*/
  p_deferredDeleteList = (int *)&self->deferredDeleteList; /*0x453940*/
  v4 = p_deferredDeleteList; /*0x453943*/
  if ( !v2 ) /*0x453945*/
  {
    while ( (TESForm *)*v4 != form ) /*0x453952*/
    {
      v4 = (int *)v4[1]; /*0x453954*/
      if ( !v4 ) /*0x453959*/
        return; /*0x453959*/
    }
    BSSimpleList_Remove(p_deferredDeleteList, (int)form); /*0x453962*/
  }
}
