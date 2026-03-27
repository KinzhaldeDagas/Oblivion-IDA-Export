void __thiscall sub_699C10(MagicCaster *this, float a2)
{
  NiNode *magicNode; // ecx
  NiNode *v4; // edi

  magicNode = this->magicNode;
  if ( magicNode )
  {
    MagicCaster_CastingVFX_UpdateTimes_((int)magicNode, a2);
    if ( !this->vtbl->GetActiveMagicItem(this) )
    {
      v4 = this->magicNode;
      if ( *(float *)&v4->members.super.super.m_extraDataListLen <= 0.0 )
      {
        if ( v4 )
        {
          MagicCaster_CastingVFX_destr(this->magicNode);
          FormHeapFree((unsigned int)v4);
        }
        this->magicNode = 0;
      }
    }
  }
}
