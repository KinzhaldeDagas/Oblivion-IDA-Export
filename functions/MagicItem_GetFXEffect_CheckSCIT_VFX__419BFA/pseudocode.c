// positive sp value has been detected, the output may be wrong!
int __userpurge MagicItem_GetFXEffect_::CheckSCIT_VFX@<eax>(_DWORD *a1@<esi>, int a2)
{
  int SCIT_VFXCode; // eax

  if ( !a1 ) /*0x419bfc*/
    return MagicItem_GetFXEffect_::Return_0(a2); /*0x419bfc*/
  if ( *a1 == 0x46464553 ) /*0x419c04*/
  {
    SCIT_VFXCode = EffectItem_GetSCIT_VFXCode(a1); /*0x419c08*/
    if ( SCIT_VFXCode ) /*0x419c0f*/
      return EffectSettingCollection_LookupByCode(SCIT_VFXCode); /*0x419c12*/
  }
  return MagicItem_GetFXEffect_::Return_StrongestEffect((int)a1, a2); /*0x419c1f*/
}
