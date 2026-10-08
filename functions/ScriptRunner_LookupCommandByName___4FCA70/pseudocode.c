char __cdecl ScriptRunner_LookupCommandByName_(char *Str2)
{
  int v1; // ebx
  const char **v2; // esi
  int v3; // ebx
  const char **p_shortName; // esi
  int v5; // ebx
  const char **p_numBuckets; // esi

  v1 = 0; /*0x4fca77*/
  v2 = (const char **)&off_B0A2CC; /*0x4fca79*/
  do /*0x4fcab5*/
  {
    if ( !CRT_StricmpLocaleDispatch(v2[0xFFFFFFFF], Str2) || !CRT_StricmpLocaleDispatch(*v2, Str2) ) /*0x4fca99*/
    {
      Str2[0x204] = 0x58; /*0x4fcb2e*/
      *((_DWORD *)Str2 + 0x82) = *(_DWORD *)(0x28 * v1 + 0xB0A2D0); /*0x4fcb3c*/
      return 1; /*0x4fcb47*/
    }
    v2 += 0xA; /*0x4fcaa9*/
    ++v1; /*0x4fcaac*/
  }
  while ( (int)v2 < (int)byte_B0A54C ); /*0x4fcab5*/
  v3 = 0; /*0x4fcab7*/
  p_shortName = &Script_CommandList[0].shortName; /*0x4fcab9*/
  do /*0x4fcaed*/
  {
    if ( !CRT_StricmpLocaleDispatch(Str2, p_shortName[0xFFFFFFFF]) || !CRT_StricmpLocaleDispatch(Str2, *p_shortName) ) /*0x4fcad5*/
    {
      Str2[0x204] = 0x58; /*0x4fcb4b*/
      *((_DWORD *)Str2 + 0x82) = *(_DWORD *)(0x28 * v3 + 0xB0C8C8); /*0x4fcb59*/
      return 1; /*0x4fcb64*/
    }
    p_shortName += 0xA; /*0x4fcae1*/
    ++v3; /*0x4fcae4*/
  }
  while ( (int)p_shortName < (int)&unk_B1026C ); /*0x4fcaed*/
  v5 = 0; /*0x4fcaef*/
  p_numBuckets = (const char **)&Script_ConsoleCommandList[0].super.numBuckets; /*0x4fcaf1*/
  while ( CRT_StricmpLocaleDispatch(Str2, p_numBuckets[0xFFFFFFFF]) && CRT_StricmpLocaleDispatch(Str2, *p_numBuckets) ) /*0x4fcb15*/
  {
    p_numBuckets += 0xA; /*0x4fcb17*/
    ++v5; /*0x4fcb1a*/
    if ( (int)p_numBuckets >= (int)&off_B0C89C ) /*0x4fcb23*/
      return 0; /*0x4fcb2a*/
  }
  Str2[0x204] = 0x58; /*0x4fcb68*/
  *((_DWORD *)Str2 + 0x82) = *(_DWORD *)(0x28 * v5 + 0xB0B428); /*0x4fcb76*/
  return 1; /*0x4fcb25*/
}
