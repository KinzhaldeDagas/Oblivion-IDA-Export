NiNode *__thiscall sub_73D920(NiNodeVtbl **this, _DWORD **cloningProcess)
{
  NiNode *v3; // eax
  NiNode *v4; // esi

  v3 = (NiNode *)FormHeapAlloc(0xE0u); /*0x73d94a*/
  v4 = v3; /*0x73d94f*/
  if ( v3 ) /*0x73d962*/
  {
    NiNode::NiNode(v3, 0); /*0x73d968*/
    v4->vtbl = (NiNodeVtbl *)&NiSortAdjustNode::`vftable'; /*0x73d96d*/
    v4[1].vtbl = 0; /*0x73d973*/
  }
  else
  {
    v4 = 0; /*0x73d97f*/
  }
  OB_NiNode_CopyMembersForClone(this, v4, cloningProcess); /*0x73d991*/
  v4[1].vtbl = *(this + 0x37); /*0x73d99c*/
  return v4; /*0x73d9a4*/
}
