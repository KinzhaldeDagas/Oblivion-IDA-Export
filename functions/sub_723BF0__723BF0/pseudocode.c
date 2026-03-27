NiNode *sub_723BF0()
{
  NiNode *v0; // eax
  NiNode *v1; // esi

  v0 = (NiNode *)FormHeapAlloc(0x104u);
  v1 = v0;
  if ( !v0 )
    return 0;
  sub_723F70(v0);
  v1->vtbl = (NiNodeVtbl *)&NiLODNode::`vftable';
  v1[1].members.super.m_kWorldBound.Center.x = 0.0;
  v1[1].members.super.super.super.m_uiRefCount = 0;
  LOBYTE(v1[1].members.super.m_kWorldBound.Center.y) = 1;
  return v1;
}
