// Verified reallocation helper: grows the table to the requested capacity, allocates and zeroes capacity*0x10 bytes, copies old entries, frees the old allocation, and records the new capacity.
void __cdecl TravelPath_ResizeSearchStateTable(unsigned __int16 newCapacity)
{
  TravelPathSearchState *states; // ebp
  unsigned __int16 stateCapacity; // bx
  TravelPathSearchState *v3; // eax

  if ( newCapacity > MEMORY[0xB3BE00].stateCapacity )
  {
    states = MEMORY[0xB3BE00].states; /*0x680634*/
    stateCapacity = MEMORY[0xB3BE00].stateCapacity; /*0x68063d*/
    v3 = (TravelPathSearchState *)FormHeapAlloc((unsigned __int64)newCapacity >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * newCapacity);
    MEMORY[0xB3BE00].states = v3; /*0x68065d*/
    MEMORY[0xB3BE00].stateCapacity = newCapacity; /*0x680662*/
    if ( v3 ) /*0x680669*/
    {
      if ( newCapacity ) /*0x68066e*/
      {
        _memset((int)v3, 0, 0x10 * newCapacity); /*0x680677*/
        v3 = MEMORY[0xB3BE00].states; /*0x68067c*/
      }
    }
    if ( states ) /*0x680686*/
    {
      if ( stateCapacity ) /*0x68068b*/
        memcpy(v3, states, 0x10 * stateCapacity); /*0x680696*/
      FormHeapFree((unsigned int)states); /*0x68069f*/
    }
  }
}
