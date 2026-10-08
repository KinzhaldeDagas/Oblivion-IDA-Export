// Verified: Clears the transient TravelPath A* search-node table as 0x10 bytes per configured node. The other per-record fields and exact table capacity semantics remain Unknown.
void __cdecl TravelPath_ResetSearchNodeTable()
{
  if ( MEMORY[0xB3BE00].states ) /*0x6805c0*/
  {
    if ( MEMORY[0xB3BE00].stateCapacity ) /*0x6805ca*/
      _memset((int)MEMORY[0xB3BE00].states, 0, 0x10 * MEMORY[0xB3BE00].stateCapacity); /*0x6805df*/
  }
}
