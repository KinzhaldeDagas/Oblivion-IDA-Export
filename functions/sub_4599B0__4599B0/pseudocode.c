void sub_4599B0()
{
  _DWORD *sound; // esi
  Actor *Speaker; // eax

  PlayerCharacter_SetCurrentMagicItem(reference, 0); /*0x4599b9*/
  sub_57AFB0(); /*0x4599be*/
  sound = MEMORY[0xB33398]->sound; /*0x4599c8*/
  if ( sound ) /*0x4599cd*/
  {
    sub_6AC210((_DWORD *)MEMORY[0xB33398]->sound); /*0x4599d1*/
    sub_6AC330(sound, 0xFFFFFFFF); /*0x4599da*/
  }
  if ( InterfaceManager::IsOpenedMenuDialogue() ) /*0x4599df*/
  {
    Speaker = (Actor *)Dialogue_GetSpeaker(); /*0x4599f1*/
    SetDialogueCamera(reference, Speaker, 0.0, 1u); /*0x4599fd*/
  }
}
