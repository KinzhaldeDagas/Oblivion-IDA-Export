// TES4 authoritative: vanilla command lookup. Supports opcode ranges 0x100..0x182 at 0xB0B420 and 0x1000..0x1170 at 0xB0C8C0; each CommandInfo record is 0x28 bytes.
CommandInfo *__cdecl ScriptRunner_LookupCommandInfoByOpcode(int a1)
{
  CommandInfo *result; // eax

  result = 0; /*0x4fca3a*/
  if ( (unsigned int)(a1 - 0x100) <= 0x82 )     // Opcode 0x100..0x182 maps to CommandInfo table 0xB0B420 with stride 0x28. /*0x4fca42*/
    return (CommandInfo *)(8 * (5 * a1 - 0x500) + 0xB0B420); /*0x4fca4b*/
  if ( (unsigned int)(a1 - 0x1000) <= 0x170 )   // Opcode 0x1000..0x1170 maps to CommandInfo table 0xB0C8C0 with stride 0x28. Vanilla lookup rejects other opcodes. /*0x4fca5f*/
    return (CommandInfo *)(8 * (5 * a1 - 0x5000) + 0xB0C8C0); /*0x4fca68*/
  return result; /*0x4fca52*/
}
