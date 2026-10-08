// Verified: component vslot +0x38 returns NULL when GetNoBloodDecal is true. Otherwise returns nonempty bloodDecal.path (complete creature +0x138, component +0x114), falling back to sBloodTextureDefault. Constructor 0x51EB80 places TESTexture at +0x134.
const char *__thiscall TESCreature_GetBloodTexturePath(TESActorBaseData *__shifted(TESCreature,0x24) self)
{
  const char *result; // eax

  if ( ADJ(self)->super.actorBaseData.vtbl->GetNoBloodDecal(self) ) /*0x51e1eb*/
    return 0; /*0x51e212*/
  result = ADJ(self)->bloodDecal.path.m_data; /*0x51e1f1*/
  if ( !result ) /*0x51e1f9*/
  {
    result = EmptyString; /*0x51e1fb*/
    if ( !EmptyString ) /*0x51e202*/
      return TESActorBaseData_GetBloodTexturePath(self); /*0x51e202*/
  }
  if ( !*result ) /*0x51e204*/
    return TESActorBaseData_GetBloodTexturePath(self); /*0x51e20d*/
  return result; /*0x51e209*/
}
