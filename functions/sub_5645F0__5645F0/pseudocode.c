//
// [2026-10-06 directional billboard] Verified: returns child array element 2 if end>2; constructor 0x5640E0 creates NiBillboardNode there with initial -pi/2 X rotation.
NiBillboardNode *__thiscall BSTreeNode_GetBillboardParentNode(BSTreeNode_OblivionLayout_0F0 *this)
{
  if ( this->base.members.children.end > 2u ) /*0x5645f8*/
    return *((NiBillboardNode **)this->base.members.children.data + 2); /*0x564603*/
  else
    return 0; /*0x5645fa*/
}
