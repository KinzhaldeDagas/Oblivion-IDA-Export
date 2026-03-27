NiNode *sub_73D810()
{
  NiNode *v0; // eax
  NiNode *v1; // esi

  v0 = (NiNode *)FormHeapAlloc(0xE0u);
  v1 = v0;
  if ( !v0 )
    return 0;
  NiNode::NiNode(v0, 0);
  v1->vtbl = (NiNodeVtbl *)&NiSortAdjustNode::`vftable';
  v1[1].vtbl = 0;
  return v1;
}
