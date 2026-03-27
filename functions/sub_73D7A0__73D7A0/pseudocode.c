void __thiscall sub_73D7A0(NiNode *this, NiCullingProcess *a2)
{
  unsigned int v2; // edi
  bool v3; // bl
  _DWORD *VisibleGeo; // esi
  unsigned int v5; // ebp
  unsigned int i; // ecx
  int v7; // eax

  v2 = *((_DWORD *)a2->VisibleGeo + 1);
  v3 = *((_DWORD *)this + 0x37) != 1;
  NiNode::OnVisible(this, a2);
  VisibleGeo = a2->VisibleGeo;
  v5 = VisibleGeo[1];
  for ( i = v2; i < v5; ++i )
  {
    v7 = *(_DWORD *)(*VisibleGeo + 4 * i);
    if ( v3 )
      *(_WORD *)(v7 + 0x18) &= ~0x40u;
    else
      *(_WORD *)(v7 + 0x18) |= 0x40u;
  }
}
