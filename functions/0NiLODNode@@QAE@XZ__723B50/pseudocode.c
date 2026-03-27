NiLODNode *__thiscall NiLODNode::NiLODNode(NiLODNode *this, _DWORD **a2)
{
  NiNode *v3; // eax
  NiNode *v4; // esi

  v3 = (NiNode *)FormHeapAlloc(0x104u);
  v4 = v3;
  if ( v3 )
  {
    sub_723F70(v3);
    v4->vtbl = (NiNodeVtbl *)&NiLODNode::`vftable';
    v4[1].members.super.m_kWorldBound.Center.x = 0.0;
    v4[1].members.super.super.super.m_uiRefCount = 0;
    LOBYTE(v4[1].members.super.m_kWorldBound.Center.y) = 1;
  }
  else
  {
    v4 = 0;
  }
  sub_7239B0((char **)this, v4, a2);
  return (NiLODNode *)v4;
}
