// Verified: formerly AVCollection_ModAV; assigns absolute value, DOES NOT add delta. Existing node is removed on zero; missing nonzero value allocates/inserts entry. Probable homolog Fallout SetModifier 0x826B7398; Fallout zero-retention flag differs.
void __thiscall AVCollection_SetValue(AVCollection *self, int actorValue, float value)
{
  AVCollectionEntry *Node; // eax
  AVCollectionEntry *v5; // eax

  Node = AVCollection_GetNode(self, actorValue); /*0x65cb09*/
  if ( Node ) /*0x65cb14*/
  {
    if ( value == 0.0 ) /*0x65cb61*/
      AVCollection_Remove(self, Node); /*0x65cb68*/
    else
      Node->value = value; /*0x65cb72*/
  }
  else if ( 0.0 != value ) /*0x65cb1f*/
  {
    v5 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65cb23*/
    if ( v5 ) /*0x65cb2d*/
    {
      v5->value = value; /*0x65cb36*/
      v5->actorValue = actorValue; /*0x65cb39*/
      AVCollection_Add(self, v5); /*0x65cb3b*/
    }
    else
    {
      AVCollection_Add(self, 0); /*0x65cb4a*/
    }
  }
}
