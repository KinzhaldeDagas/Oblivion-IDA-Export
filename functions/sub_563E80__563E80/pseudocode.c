void __thiscall sub_563E80(NiNode *this, NiCullingProcess *a2)
{
  if ( byte_B125E8 )
  {
    if ( *(_BYTE *)(sub_55F7E0(1) + 0x20) )
      NiNode::OnVisible(this, a2);
  }
}
