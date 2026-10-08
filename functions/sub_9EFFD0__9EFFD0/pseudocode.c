// Registers Oblivion string setting sTopicAddedText with default value 'New topic'; PlayerCharacter::AddKnownTopic prefixes notification text with this setting.
int InitSetting::sTopicAddedText()
{
  GameSetting_ConstrAndReg((int *)MEMORY[0xB382E0], (int)"sTopicAddedText", (int)"New topic"); /*0x9effdf*/
  return atexit(sub_A20CE0); /*0x9effef*/
}
