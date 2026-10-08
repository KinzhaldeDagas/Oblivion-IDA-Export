NiNode *sub_723BF0()
{
  NiNode *v0; // eax
  NiNode *v1; // esi

  v0 = (NiNode *)FormHeapAlloc(0x104u); /*0x723c17*/
  v1 = v0; /*0x723c1c*/
  if ( !v0 ) /*0x723c2f*/
    return 0; /*0x723c6c*/
  sub_723F70(v0); /*0x723c33*/
  v1->vtbl = (NiNodeVtbl *)&NiLODNode::`vftable'; /*0x723c38*/
  v1[1].members.super.m_kWorldBound.Center.x = 0.0; /*0x723c3e*/
  v1[1].members.super.super.super.m_uiRefCount = 0; /*0x723c48*/
  LOBYTE(v1[1].members.super.m_kWorldBound.Center.y) = 1; /*0x723c52*/
  return v1; /*0x723c5b*/
}
