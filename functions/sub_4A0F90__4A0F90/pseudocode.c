NiNode *__thiscall sub_4A0F90(char **this, _DWORD **cloningProcess)
{
  NiNode *v3; // eax
  NiNode *v4; // esi
  NiNodeVtbl *vtbl; // eax

  v3 = (NiNode *)FormHeapAlloc(0xF0u); /*0x4a0fba*/
  v4 = 0; /*0x4a0fc6*/
  if ( v3 ) /*0x4a0fce*/
    v4 = sub_4A0F30(v3); /*0x4a0fd7*/
  OB_NiNode_CopyMembersForClone(this, v4, cloningProcess); /*0x4a0fe9*/
  vtbl = v4->vtbl; /*0x4a0ff4*/
  v4[1].members.super.super.super.m_uiRefCount = *((UInt32 *)this + 0x38); /*0x4a0ff6*/
  v4[1].members.super.super.m_pcName = *((const char **)this + 0x39); /*0x4a1002*/
  LOBYTE(v4[1].members.super.super.m_extraDataList) = *((_BYTE *)this + 0xEC); /*0x4a100e*/
  LOBYTE(v4[1].vtbl) = *((_BYTE *)this + 0xDC); /*0x4a101a*/
  vtbl->super.UpdateWorldBound((NiAVObject *)v4); /*0x4a1025*/
  v4->vtbl->super.Unk_14((NiAVObject *)v4); /*0x4a102e*/
  return v4; /*0x4a1032*/
}
