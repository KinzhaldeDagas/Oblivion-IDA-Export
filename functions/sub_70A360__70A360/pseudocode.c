unsigned int __thiscall sub_70A360(NiNode *this)
{
  double v1; // st7
  unsigned int v3; // edi
  NiBound *v4; // ecx
  unsigned int result; // eax

  v1 = 0.0;
  v3 = 0;
  this->members.super.m_kWorldBound.Radius = 0.0;
  if ( this->members.children.end )
  {
    do
    {
      v4 = *((NiBound **)&this->members.children.data->vtbl + v3);
      if ( v4 )
      {
        if ( v1 != v4[2].Radius )
        {
          if ( v1 == this->members.super.m_kWorldBound.Radius )
          {
            this->members.super.m_kWorldBound = v4[2];
          }
          else
          {
            sub_72A6B0(&this->members.super.m_kWorldBound.Center.x, &v4[2].Center.x);
            v1 = 0.0;
          }
        }
      }
      result = this->members.children.end;
      ++v3;
    }
    while ( v3 < result );
  }
  return result;
}
