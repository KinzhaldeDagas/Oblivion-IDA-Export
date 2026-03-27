unsigned int __thiscall sub_70A280(NiNode *this, NiProperty *a2)
{
  unsigned int result; // eax
  unsigned int v4; // edi
  _BYTE *v5; // ecx

  result = (unsigned int)sub_47C930(this, *(float *)&a2, (this->members.super.m_flags & 8) != 0);
  if ( (this->members.super.m_flags & 4) != 0 )
  {
    this->vtbl->super.UpdateWorldData((NiAVObject *)this);
    result = sub_72A820(
               &this->members.super.m_kWorldBound.Center.x,
               &this->members.m_combinedBounds.Center.x,
               (float *)&this->members.super.m_worldTransform);
  }
  v4 = 0;
  if ( this->members.children.end )
  {
    do
    {
      v5 = *((_BYTE **)&this->members.children.data->vtbl + v4);
      if ( v5 )
      {
        if ( (v5[0x18] & 2) != 0 )
          (*(void (__stdcall **)(NiProperty *))(*(_DWORD *)v5 + 0x68))(a2);
      }
      result = this->members.children.end;
      ++v4;
    }
    while ( v4 < result );
  }
  return result;
}
