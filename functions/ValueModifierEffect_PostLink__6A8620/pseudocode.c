int __thiscall ValueModifierEffect_PostLink(volatile LONG ***this, int a2)
{
  unsigned __int8 next; // al
  MagicTarget *v4; // ecx
  TESObjectREFR *ParentActor; // eax

  ActiveEffect_Base_PostLink(this, a2);
  next = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  if ( next < 0x5Fu )
    return ValueModifierEffect_PostLink_::Done(a2);
  if ( next >= 0x62u )
    return ValueModifierEffect_PostLink_::Done(a2);
  v4 = (MagicTarget *)*(this + 8);
  if ( !v4 )
    return ValueModifierEffect_PostLink_::Done(a2);
  ParentActor = (TESObjectREFR *)MagicTarget_GetParentActor(v4);
  if ( ParentActor
    && Actor_IsPlayer(ParentActor)
    && (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable(this)
    && ((*(this + 3))[7][0x16] & 2) != 0 )
  {
    return ValueModifierEffect_PostLink_::GetCasterActor();
  }
  else
  {
    return ValueModifierEffect_PostLink_::Done_(a2);
  }
}
