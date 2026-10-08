// Verified: returns found entry float or 0.0 if absent; read path calls GetNode and does not allocate.
float __thiscall AVCollection_GetAV(AVCollection *self, int actorValue)
{
  AVCollectionEntry *Node; // eax

  Node = AVCollection_GetNode(self, actorValue); /*0x65cb85*/
  if ( Node ) /*0x65cb8c*/
    return Node->value; /*0x65cb95*/
  else
    return 0.0; /*0x65cba2*/
}
