void __thiscall sub_699C10(MagicCaster *this, float a2)
{
  NiNode *magicNode; // ecx
  NiNode *v4; // edi

  magicNode = this->magicNode; /*0x699c13*/
  if ( magicNode ) /*0x699c18*/
  {
    MagicCaster_CastingVFX_UpdateTimes_((int)magicNode, a2); /*0x699c22*/
    if ( !this->vtbl->GetActiveMagicItem(this) ) /*0x699c2e*/
    {
      v4 = this->magicNode; /*0x699c37*/
      if ( *(float *)&v4->members.super.super.m_extraDataListLen <= 0.0 ) /*0x699c42*/
      {
        if ( v4 ) /*0x699c46*/
        {
          MagicCaster_CastingVFX_destr(this->magicNode); /*0x699c4a*/
          FormHeapFree((unsigned int)v4); /*0x699c50*/
        }
        this->magicNode = 0; /*0x699c58*/
      }
    }
  }
}
