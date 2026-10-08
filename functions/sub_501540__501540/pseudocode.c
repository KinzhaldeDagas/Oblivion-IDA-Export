char sub_501540()
{
  unsigned int i; // esi
  const char *v1; // edx
  unsigned int j; // esi
  const char *shortName; // edx

  Interface_ConsolePrint("----CONSOLE COMMANDS--------------------"); /*0x501549*/
  for ( i = 0; i < 0x1478; i += 0x28 ) /*0x501551*/
  {
    if ( *(UInt32 *)((char *)&Script_ConsoleCommandList[0].super.unk10 + i) ) /*0x501553*/
    {
      if ( strlen(*(const char **)((char *)&Script_ConsoleCommandList[0].super.unk10 + i)) ) /*0x501569*/
      {
        v1 = *(const char **)((char *)&Script_ConsoleCommandList[0].super.numBuckets + i); /*0x50156f*/
        if ( v1 && strlen(*(const char **)((char *)&Script_ConsoleCommandList[0].super.numBuckets + i)) ) /*0x501587*/
          Interface_ConsolePrint( /*0x50159b*/
            "%s (%s) -> %s",
            *(const char **)((char *)&Script_ConsoleCommandList[0].super.unk04 + i),
            v1,
            *(const char **)((char *)&Script_ConsoleCommandList[0].super.unk10 + i));
        else
          Interface_ConsolePrint( /*0x5015b2*/
            "%s -> %s",
            *(const char **)((char *)&Script_ConsoleCommandList[0].super.unk04 + i),
            *(const char **)((char *)&Script_ConsoleCommandList[0].super.unk10 + i));
      }
    }
  }
  Interface_ConsolePrint("----SCRIPT FUNCTIONS--------------------"); /*0x5015ca*/
  for ( j = 0; j < 0x171; ++j ) /*0x5015d2*/
  {
    if ( Script_CommandList[j].helpText ) /*0x5015d4*/
    {
      if ( strlen(Script_CommandList[j].helpText) ) /*0x5015ea*/
      {
        shortName = Script_CommandList[j].shortName; /*0x5015f0*/
        if ( shortName && strlen(Script_CommandList[j].shortName) ) /*0x501607*/
          Interface_ConsolePrint( /*0x50161b*/
            "%s (%s) -> %s",
            Script_CommandList[j].longName,
            shortName,
            Script_CommandList[j].helpText);
        else
          Interface_ConsolePrint("%s -> %s", Script_CommandList[j].longName, Script_CommandList[j].helpText); /*0x501632*/
      }
    }
  }
  return 1; /*0x501645*/
}
