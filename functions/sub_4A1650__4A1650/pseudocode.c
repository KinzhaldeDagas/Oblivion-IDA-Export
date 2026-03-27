NiNode *__thiscall sub_4A1650(char **this, _DWORD **a2)
{
  NiNode *v3; // eax
  NiNode *v4; // esi

  v3 = (NiNode *)FormHeapAlloc(0xECu);
  v4 = v3;
  if ( v3 )
  {
    NiNode::NiNode(v3, 0);
    v4->vtbl = (NiNodeVtbl *)&BSScissorNode::`vftable';
  }
  else
  {
    v4 = 0;
  }
  v4[1].vtbl = (NiNodeVtbl *)*(this + 0x37);
  v4[1].members.super.super.super.m_uiRefCount = (UInt32)*(this + 0x38);
  v4[1].members.super.super.m_pcName = *(this + 0x39);
  v4[1].members.super.super.m_controller = (NiInterpController *)*(this + 0x3A);
  sub_70AC60(this, (int)v4, a2);
  return v4;
}
