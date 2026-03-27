char __cdecl ScriptRunner_LookupCommandByName_(char *Str2)
{
  int v1; // ebx
  char **v2; // esi
  int v3; // ebx
  char **p_shortName; // esi
  int v5; // ebx
  char **p_numBuckets; // esi

  v1 = 0;
  v2 = (char **)&off_B0A2CC;
  do
  {
    if ( !_strcmp(v2[0xFFFFFFFF], Str2) || !_strcmp(*v2, Str2) )
    {
      Str2[0x204] = 0x58;
      *((_DWORD *)Str2 + 0x82) = *(_DWORD *)(0x28 * v1 + 0xB0A2D0);
      return 1;
    }
    v2 += 0xA;
    ++v1;
  }
  while ( (int)v2 < (int)byte_B0A54C );
  v3 = 0;
  p_shortName = (char **)&Script_CommandList_[0].shortName;
  do
  {
    if ( !_strcmp(Str2, p_shortName[0xFFFFFFFF]) || !_strcmp(Str2, *p_shortName) )
    {
      Str2[0x204] = 0x58;
      *((_DWORD *)Str2 + 0x82) = *(_DWORD *)(0x28 * v3 + 0xB0C8C8);
      return 1;
    }
    p_shortName += 0xA;
    ++v3;
  }
  while ( (int)p_shortName < (int)&Script_CommandList_[0x171].shortName );
  v5 = 0;
  p_numBuckets = (char **)&Script_ConsoleCommandList[0].super.numBuckets;
  while ( _strcmp(Str2, p_numBuckets[0xFFFFFFFF]) && _strcmp(Str2, *p_numBuckets) )
  {
    p_numBuckets += 0xA;
    ++v5;
    if ( (int)p_numBuckets >= (int)&off_B0C89C )
      return 0;
  }
  Str2[0x204] = 0x58;
  *((_DWORD *)Str2 + 0x82) = *(_DWORD *)(0x28 * v5 + 0xB0B428);
  return 1;
}
