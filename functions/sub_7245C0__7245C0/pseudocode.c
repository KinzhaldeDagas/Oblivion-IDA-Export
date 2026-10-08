NiNode *__thiscall sub_7245C0(UInt32 *this, _DWORD **cloningProcess)
{
  NiNode *v3; // eax
  NiNode *v4; // esi

  v3 = (NiNode *)FormHeapAlloc(0xFCu); /*0x7245ea*/
  v4 = 0; /*0x7245f6*/
  if ( v3 ) /*0x7245fe*/
    v4 = sub_723F70(v3); /*0x724607*/
  OB_NiNode_CopyMembersForClone(this, v4, cloningProcess); /*0x724619*/
  LOWORD(v4[1].vtbl) = *((_WORD *)this + 0x6E); /*0x724625*/
  v4[1].members.super.super.super.m_uiRefCount = *(this + 0x38); /*0x724632*/
  return v4; /*0x72463a*/
}
