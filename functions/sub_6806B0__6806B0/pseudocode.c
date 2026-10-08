// Verified state slot 0x04 marks an allocated table slot. The next-free cursor is a 16-bit index; 0xFFFF is reserved as exhausted/unavailable. Capacity starts at 500 and grows by 100, capped at 65535 entries.
unsigned __int16 __cdecl TravelPath_AllocateSearchStateSlot()
{
  unsigned __int16 nextFreeStateIndex; // di
  int stateCapacity; // esi
  int v2; // eax
  unsigned __int8 *p_flags; // ecx
  unsigned __int16 v4; // ax

  nextFreeStateIndex = MEMORY[0xB3BE00].nextFreeStateIndex; /*0x6806b1*/
  if ( MEMORY[0xB3BE00].nextFreeStateIndex == 0xFFFF ) /*0x6806bd*/
    return 0xFFFF; /*0x680755*/
  if ( !MEMORY[0xB3BE00].states ) /*0x6806c3*/
    TravelPath_ResizeSearchStateTable(0x1F4u); /*0x6806d1*/
  MEMORY[0xB3BE00].states[nextFreeStateIndex].flags |= 4u; /*0x6806e7*/
  stateCapacity = MEMORY[0xB3BE00].stateCapacity; /*0x6806f1*/
  v2 = nextFreeStateIndex + 1; /*0x6806f8*/
  if ( v2 < stateCapacity ) /*0x6806fd*/
  {
    p_flags = &MEMORY[0xB3BE00].states[v2].flags; /*0x68070a*/
    while ( (*p_flags & 4) != 0 ) /*0x680713*/
    {
      ++v2; /*0x680715*/
      p_flags += 0x10; /*0x680718*/
      if ( v2 >= stateCapacity ) /*0x68071d*/
        goto LABEL_10; /*0x68071d*/
    }
    MEMORY[0xB3BE00].nextFreeStateIndex = v2; /*0x680721*/
  }
LABEL_10:
  if ( MEMORY[0xB3BE00].nextFreeStateIndex == nextFreeStateIndex ) /*0x68072e*/
  {
    v4 = stateCapacity + 0x64; /*0x680730*/
    if ( stateCapacity + 0x64 > 0xFFFF ) /*0x680738*/
      v4 = 0xFFFF; /*0x68073a*/
    TravelPath_ResizeSearchStateTable(v4); /*0x680740*/
    MEMORY[0xB3BE00].nextFreeStateIndex = stateCapacity; /*0x680748*/
  }
  return nextFreeStateIndex; /*0x680753*/
}
