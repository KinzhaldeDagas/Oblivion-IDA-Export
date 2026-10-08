NiNode *__thiscall sub_741B00(char **this, _DWORD **cloningProcess)
{
  NiNode *v3; // eax
  NiNode *v4; // esi

  v3 = (NiNode *)FormHeapAlloc(0xFCu); /*0x741b2a*/
  v4 = 0; /*0x741b36*/
  if ( v3 ) /*0x741b3e*/
    v4 = sub_741A50(v3); /*0x741b47*/
  OB_NiNode_CopyMembersForClone(this, v4, cloningProcess); /*0x741b59*/
  v4[1].vtbl = (NiNodeVtbl *)*(this + 0x37); /*0x741b6a*/
  v4[1].members.super.super.super.m_uiRefCount = (UInt32)*(this + 0x38); /*0x741b73*/
  v4[1].members.super.super.m_pcName = *(this + 0x39); /*0x741b7c*/
  v4[1].members.super.super.m_controller = (NiInterpController *)*(this + 0x3A); /*0x741b85*/
  return v4; /*0x741b8d*/
}
