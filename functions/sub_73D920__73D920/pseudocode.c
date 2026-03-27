NiGeometry *__thiscall sub_73D920(char **this, _DWORD **a2)
{
  NiNode *v3; // eax
  NiGeometry *v4; // esi

  v3 = (NiNode *)FormHeapAlloc(0xE0u);
  v4 = (NiGeometry *)v3;
  if ( v3 )
  {
    NiNode::NiNode(v3, 0);
    v4->__vftable = (NiGeometryVtbl *)&NiSortAdjustNode::`vftable';
    v4[1].member.super.m_parent = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_70AC60(this, v4, a2);
  v4[1].member.super.m_parent = (NiNode *)*(this + 0x37);
  return v4;
}
