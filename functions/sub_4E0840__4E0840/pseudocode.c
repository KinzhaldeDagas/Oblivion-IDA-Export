__int16 __thiscall sub_4E0840(_BYTE *this)
{
  NiNode *v3; // esi
  NiObject *v4; // eax
  NiAVObjectVtbl *vtbl; // ecx
  NiAVObject *ChildAtIndex; // eax
  signed __int16 v7; // di
  NiObject *m_controller; // esi
  NiObject *v9; // eax

  if ( ExtraDataList_GetSavedAttachedAnimation((ExtraDataList *)(this + 0x44)) ) /*0x4e0846*/
    return 0; /*0x4e084f*/
  v3 = *((NiNode **)this + 0xF); /*0x4e0854*/
  v4 = 0; /*0x4e0857*/
  if ( v3 ) /*0x4e085b*/
  {
    if ( v3->members.children.end ) /*0x4e085d*/
    {
      vtbl = v3->members.children.data->vtbl; /*0x4e086c*/
      if ( vtbl ) /*0x4e0870*/
      {
        if ( vtbl->super.Unk_03 ) /*0x4e0872*/
        {
          ChildAtIndex = NiNode_GetChildAtIndex(v3, 0); /*0x4e087a*/
          v4 = NiRTTI_Cast(&stru_B3CAC0, (NiObject *)ChildAtIndex->members.super.m_controller); /*0x4e0888*/
        }
      }
    }
  }
  v7 = sub_4DA760((int)v4); /*0x4e089c*/
  if ( v3 ) /*0x4e089f*/
    m_controller = (NiObject *)v3->members.super.super.m_controller; /*0x4e08a1*/
  else
    m_controller = 0; /*0x4e08a6*/
  v9 = NiRTTI_Cast(&stru_B3CAC0, m_controller); /*0x4e08ae*/
  return v7 + sub_4DA760((int)v9); /*0x4e0852*/
}
