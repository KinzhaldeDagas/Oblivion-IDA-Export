// positive sp value has been detected, the output may be wrong!
int __userpurge MagicItem_GetFXEffect_::CheckSCIT_VFX@<eax>(_DWORD *a1@<esi>, int a2)
{
  int SCIT_VFXCode; // eax

  if ( !a1 )
    return MagicItem_GetFXEffect_::Return_0(a2);
  if ( *a1 == 0x46464553 )
  {
    SCIT_VFXCode = EffectItem_GetSCIT_VFXCode(a1);
    if ( SCIT_VFXCode )
      return EffectSettingCollection_LookupByCode(SCIT_VFXCode);
  }
  return MagicItem_GetFXEffect_::Return_StrongestEffect(a2);
}
