int __usercall ActiveEffect_Base_ProcessEffect_::TestUpdate@<eax>(int _ESI@<esi>, double a3@<st2>, int a6)
{
  if ( *(_BYTE *)(_ESI + 0x11) || *(_BYTE *)(_ESI + 0x12) ) /*0x68e826*/
    JUMPOUT(0x68E9A8); /*0x68e9a8*/
  return ActiveEffect_Base_ProcessEffect_::UpdateTimeElapsed(_ESI, a3, a6);
}
