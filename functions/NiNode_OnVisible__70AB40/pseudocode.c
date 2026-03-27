void __thiscall NiNode::OnVisible(NiNode *this, NiCullingProcess *a2)
{
  unsigned int i; // esi
  NiAVObject *v4; // ecx

  if ( 0.0 != this->members.super.m_kWorldBound.Radius )
  {
    for ( i = 0; i < this->members.children.end; ++i )
    {
      v4 = *((NiAVObject **)&this->members.children.data->vtbl + i);
      if ( v4 )
        NiAVObject_Render(v4, a2);
    }
  }
}
