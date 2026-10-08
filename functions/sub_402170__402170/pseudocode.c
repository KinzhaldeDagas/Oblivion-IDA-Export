// Clears the global small-pool registry (0x81 slots) and the high-byte address-to-pool lookup table.
int MemoryPool_ResetRegistry()
{
  memset(MEMORY[0xB33080], 0, 0x204u); /*0x40217d*/
  memset(MEMORY[0xB32C80], 0, sizeof(MEMORY[0xB32C80])); /*0x402189*/
  return 0; /*0x40218b*/
}
