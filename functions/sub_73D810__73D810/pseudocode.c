NiNode *sub_73D810()
{
  NiNode *v0; // eax
  NiNode *v1; // esi

  v0 = (NiNode *)FormHeapAlloc(0xE0u); /*0x73d837*/
  v1 = v0; /*0x73d83c*/
  if ( !v0 ) /*0x73d84f*/
    return 0; /*0x73d87d*/
  NiNode::NiNode(v0, 0); /*0x73d855*/
  v1->vtbl = (NiNodeVtbl *)&NiSortAdjustNode::`vftable'; /*0x73d85a*/
  v1[1].vtbl = 0; /*0x73d860*/
  return v1; /*0x73d86c*/
}
