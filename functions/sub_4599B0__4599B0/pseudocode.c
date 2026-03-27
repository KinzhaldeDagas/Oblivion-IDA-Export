void __usercall sub_4599B0(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  _DWORD *sound; // esi
  Actor *Speaker; // eax

  PlayerCharacter_SetCurrentMagicItem((int)TESDataHandler_g_PlayerRef, a1, a2, a3, a4, 0);
  sub_57AFB0(a2, a3);
  sound = OSGlobals->sound;
  if ( sound )
  {
    sub_6AC210((_DWORD *)OSGlobals->sound);
    sub_6AC330(sound, 0xFFFFFFFF);
  }
  if ( InterfaceManager::IsOpenedMenuDialogue() )
  {
    Speaker = (Actor *)Dialogue_GetSpeaker();
    SetDialogueCamera(TESDataHandler_g_PlayerRef, Speaker, 0.0, 1u);
  }
}
