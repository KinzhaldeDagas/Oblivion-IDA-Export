NiLODNode *__thiscall NiLODNode::NiLODNode(NiLODNode *this, _DWORD **a2)
{
  NiNode *v3; // eax
  NiNode *v4; // esi

  v3 = (NiNode *)FormHeapAlloc(0x104u); /*0x723b7a*/
  v4 = v3; /*0x723b7f*/
  if ( v3 ) /*0x723b92*/
  {
    sub_723F70(v3); /*0x723b96*/
    v4->vtbl = (NiNodeVtbl *)&NiLODNode::`vftable'; /*0x723b9b*/
    v4[1].members.super.m_kWorldBound.Center.x = 0.0; /*0x723ba1*/
    v4[1].members.super.super.super.m_uiRefCount = 0; /*0x723bab*/
    LOBYTE(v4[1].members.super.m_kWorldBound.Center.y) = 1; /*0x723bb5*/
  }
  else
  {
    v4 = 0; /*0x723bbe*/
  }
  sub_7239B0((char **)this, v4, a2); /*0x723bd0*/
  return (NiLODNode *)v4; /*0x723bd7*/
}
