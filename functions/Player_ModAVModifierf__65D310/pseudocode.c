int __stdcall Player_ModAVModifierf(int a1, int a2, int a3, int a4)
{
  if ( !a1 )
    return Player_ModAVModifierf_::ModMaxAV(0, a2, a3, a4);
  if ( a1 == 1 )
    return Player_ModAVModifierf_::ModForcedCurAV(1, a2, a3, a4);
  if ( a1 != 2 )
    JUMPOUT(0x65D470);
  return Player_ModAVModifierf_::ModCurAV(2, a2, a3, a4);
}
