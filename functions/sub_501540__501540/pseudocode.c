char sub_501540()
{
  unsigned int i; // esi
  const char *v5; // edx
  unsigned int j; // esi
  const char *shortName; // edx

  Interface_ConsolePrint("----CONSOLE COMMANDS--------------------");
  for ( i = 0; i < 0x1478; i += 0x28 )
  {
    if ( *(UInt32 *)((char *)&Script_ConsoleCommandList[0].super.unk10 + i) )
    {
      if ( strlen(*(const char **)((char *)&Script_ConsoleCommandList[0].super.unk10 + i)) )
      {
        v5 = *(const char **)((char *)&Script_ConsoleCommandList[0].super.numBuckets + i);
        if ( v5 && strlen(*(const char **)((char *)&Script_ConsoleCommandList[0].super.numBuckets + i)) )
          Interface_ConsolePrint(
            "%s (%s) -> %s",
            *(const char **)((char *)&Script_ConsoleCommandList[0].super.unk04 + i),
            v5,
            *(const char **)((char *)&Script_ConsoleCommandList[0].super.unk10 + i));
        else
          Interface_ConsolePrint(
            "%s -> %s",
            *(const char **)((char *)&Script_ConsoleCommandList[0].super.unk04 + i),
            *(const char **)((char *)&Script_ConsoleCommandList[0].super.unk10 + i));
      }
    }
  }
  Interface_ConsolePrint("----SCRIPT FUNCTIONS--------------------");
  for ( j = 0; j < 0x171; ++j )
  {
    if ( Script_CommandList_[j].helpText )
    {
      if ( strlen(Script_CommandList_[j].helpText) )
      {
        shortName = Script_CommandList_[j].shortName;
        if ( shortName && strlen(Script_CommandList_[j].shortName) )
          Interface_ConsolePrint(
            "%s (%s) -> %s",
            Script_CommandList_[j].longName,
            shortName,
            Script_CommandList_[j].helpText);
        else
          Interface_ConsolePrint("%s -> %s", Script_CommandList_[j].longName, Script_CommandList_[j].helpText);
      }
    }
  }
  return 1;
}
