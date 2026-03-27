CommandInfo *__cdecl ScriptRunner_LookupCommandByOpcode(int a1)
{
  CommandInfo *result; // eax

  result = 0;
  if ( (unsigned int)(a1 - 0x100) <= 0x82 )
    return (CommandInfo *)(8 * (5 * a1 - 0x500) + 0xB0B420);
  if ( (unsigned int)(a1 - 0x1000) <= 0x170 )
    return (CommandInfo *)(8 * (5 * a1 - 0x5000) + 0xB0C8C0);
  return result;
}
