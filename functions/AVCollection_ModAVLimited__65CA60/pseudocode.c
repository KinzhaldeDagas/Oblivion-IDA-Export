// Verified 2026-10-04: reunited falsely separated internal blocks with original function. All entry xrefs to merged blocks are same-body branches/fallthroughs, with shared saved registers/stack and RET cleanup. Existing labels/comments preserved; analysis-only change. Prior fragmentation warning superseded for this body.
// Verified: formerly AVCollection_ModAVLimited. Existing node gets value+delta; if allowPositive==0 and result>0, clamps to zero. Zero result invokes Remove. Missing node with nonzero delta is allocated/inserted WITHOUT this clamp. RET12 proves three stack args, not the prior fabricated extra parameters. Probable homolog Fallout AdjustModifier 0x826B7298, but Fallout enum includes an additional clamp direction and zero-retention option absent here.
void __thiscall AVCollection_AdjustValue(AVCollection *self, int actorValue, float delta, unsigned int allowPositive)
{
  AVCollectionEntry *Node; // eax
  AVCollectionEntry *v6; // eax
  float deltaa; // [esp+10h] [ebp+8h]

  Node = AVCollection_GetNode(self, actorValue); /*0x65ca69*/
  if ( Node ) /*0x65ca72*/
  {
    deltaa = Node->value + delta; /*0x65cac0*/
    if ( !allowPositive && deltaa > 0.0 ) /*0x65cad1*/
      deltaa = 0.0; /*0x65cad3*/
    Node->value = deltaa; /*0x65cadb*/
    if ( deltaa == 0.0 ) /*0x65cae5*/
      AVCollection_Remove(self, Node); /*0x65caea*/
  }
  else if ( 0.0 != delta ) /*0x65ca7f*/
  {
    v6 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65ca83*/
    if ( v6 ) /*0x65ca8d*/
    {
      v6->value = delta; /*0x65ca96*/
      v6->actorValue = actorValue; /*0x65ca99*/
      AVCollection_Add(self, v6); /*0x65ca9b*/
    }
    else
    {
      AVCollection_Add(self, 0); /*0x65caaa*/
    }
  }
}
