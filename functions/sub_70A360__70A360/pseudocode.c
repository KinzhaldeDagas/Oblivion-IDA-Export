unsigned int __thiscall sub_70A360(NiNode *this)
{
  double v1; // st7
  unsigned int v3; // edi
  NiBound *v4; // ecx
  unsigned int result; // eax

  v1 = 0.0; /*0x70a360*/
  v3 = 0; /*0x70a366*/
  this->members.super.m_kWorldBound.Radius = 0.0; /*0x70a368*/
  if ( this->members.children.end ) /*0x70a36b*/
  {
    do /*0x70a3cd*/
    {
      v4 = *((NiBound **)&this->members.children.data->vtbl + v3); /*0x70a37a*/
      if ( v4 ) /*0x70a37f*/
      {
        if ( v1 != v4[2].Radius ) /*0x70a389*/
        {
          if ( v1 == this->members.super.m_kWorldBound.Radius ) /*0x70a393*/
          {
            this->members.super.m_kWorldBound = v4[2]; /*0x70a39a*/
          }
          else
          {
            NiSphere_Merge(&this->members.super.m_kWorldBound.Center.x, &v4[2].Center.x); /*0x70a3ba*/
            v1 = 0.0; /*0x70a3bf*/
          }
        }
      }
      result = this->members.children.end; /*0x70a3c1*/
      ++v3; /*0x70a3c8*/
    }
    while ( v3 < result ); /*0x70a3cd*/
  }
  return result; /*0x70a3d2*/
}
