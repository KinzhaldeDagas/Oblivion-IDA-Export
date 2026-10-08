void __userpurge ActiveEffect_Base_ProcessEffect_::TestTerminate(_BYTE *a1@<esi>, int a2)
{
  if ( a1[0x10] && a1[0x11] && !a1[0x12] ) /*0x68e9b6*/
    ActiveEffect_Base_ProcessEffect_::UpdateHUDActiveEffectList___((int)a1, a2); /*0x68e9bb*/
  else
    ActiveEffect_Base_ProcessEffect_::Done(a2); /*0x68e9ae*/
}
