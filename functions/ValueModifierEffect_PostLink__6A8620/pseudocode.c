void __thiscall ValueModifierEffect_PostLink(
        volatile LONG ***this,
        TESObjectREFR *linkContext,
        int a3,
        float a4,
        int a5,
        float a6)
{
  unsigned __int8 currentVersion; // al
  MagicTarget *v8; // ecx
  TESObjectREFR *ParentActor; // eax

  ActiveEffect_Base_PostLink((ActiveEffect *)this, linkContext); /*0x6a8628*/
  currentVersion = g_TESSaveLoadGame->currentVersion; /*0x6a8633*/
  if ( currentVersion >= 0x5Fu && currentVersion < 0x62u && (v8 = (MagicTarget *)*(this + 8)) != 0 ) /*0x6a864b*/
  {
    ParentActor = (TESObjectREFR *)MagicTarget_GetParentActor(v8); /*0x6a8652*/
    if ( ParentActor /*0x6a8685*/
      && Actor_IsPlayer(ParentActor)
      && (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable(this)
      && ((*(this + 3))[7][0x16] & 2) != 0 )
    {
      ValueModifierEffect_PostLink_::GetCasterActor((int)this, (int)linkContext, a3, a4, a5, a6); /*0x6a8686*/
    }
    else
    {
      ValueModifierEffect_PostLink_::Done_((int)linkContext); /*0x6a865b*/
    }
  }
  else
  {
    ValueModifierEffect_PostLink_::Done((int)linkContext); /*0x6a8638*/
  }
}
