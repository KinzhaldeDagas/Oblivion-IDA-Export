NiNode *__thiscall sub_4A1650(char **this, _DWORD **cloningProcess)
{
  NiNode *v3; // eax
  NiNode *v4; // esi

  v3 = (NiNode *)FormHeapAlloc(0xECu); /*0x4a167a*/
  v4 = v3; /*0x4a167f*/
  if ( v3 ) /*0x4a1692*/
  {
    NiNode::NiNode(v3, 0); /*0x4a1698*/
    v4->vtbl = (NiNodeVtbl *)&BSScissorNode::`vftable'; /*0x4a169d*/
  }
  else
  {
    v4 = 0; /*0x4a16a5*/
  }
  v4[1].vtbl = (NiNodeVtbl *)*(this + 0x37); /*0x4a16ad*/
  v4[1].members.super.super.super.m_uiRefCount = (UInt32)*(this + 0x38); /*0x4a16b9*/
  v4[1].members.super.super.m_pcName = *(this + 0x39); /*0x4a16c9*/
  v4[1].members.super.super.m_controller = (NiInterpController *)*(this + 0x3A); /*0x4a16e1*/
  OB_NiNode_CopyMembersForClone(this, v4, cloningProcess); /*0x4a16e7*/
  return v4; /*0x4a16ee*/
}
