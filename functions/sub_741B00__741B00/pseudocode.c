NiNode *__thiscall sub_741B00(char **this, _DWORD **a2)
{
  NiNode *v3; // eax
  NiNode *v4; // esi

  v3 = (NiNode *)FormHeapAlloc(0xFCu);
  v4 = 0;
  if ( v3 )
    v4 = sub_741A50(v3);
  sub_70AC60(this, (NiGeometry *)v4, a2);
  v4[1].vtbl = (NiNodeVtbl *)*(this + 0x37);
  v4[1].members.super.super.super.m_uiRefCount = (UInt32)*(this + 0x38);
  v4[1].members.super.super.m_pcName = *(this + 0x39);
  v4[1].members.super.super.m_controller = (NiInterpController *)*(this + 0x3A);
  return v4;
}
