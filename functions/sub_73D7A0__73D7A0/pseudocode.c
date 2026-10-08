void __thiscall sub_73D7A0(NiNode *this, NiCullingProcess *a2)
{
  unsigned int size; // edi
  bool v3; // bl
  CullingVisibleGeometryArray *VisibleGeo; // esi
  unsigned int v5; // ebp
  unsigned int i; // ecx
  NiGeometry *v7; // eax

  size = a2->VisibleGeo->size; /*0x73d7b2*/
  v3 = *((_DWORD *)this + 0x37) != 1; /*0x73d7b6*/
  NiNode::OnVisible(this, a2); /*0x73d7b9*/
  VisibleGeo = a2->VisibleGeo; /*0x73d7be*/
  v5 = VisibleGeo->size; /*0x73d7c1*/
  for ( i = size; i < v5; ++i ) /*0x73d7c8*/
  {
    v7 = VisibleGeo->data[i]; /*0x73d7d8*/
    if ( v3 ) /*0x73d7db*/
      v7->member.super.m_flags &= ~0x40u; /*0x73d7e3*/
    else
      v7->member.super.m_flags |= 0x40u; /*0x73d7dd*/
  }
}
