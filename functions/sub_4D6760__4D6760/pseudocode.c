// Verified generic NiTMap lookup helper: hashes the UInt32 key through the map vtable, walks the bucket chain using the map's key comparator, returns false when absent, and on a match writes the low byte of the entry data field to valueOut and returns true. Callers use it for byte/boolean-valued maps, including PlayerCharacter_GetLastSpaceForDoor and cell/worldspace visited or filter maps; this helper does not establish the full map value width.
bool __thiscall NiTMap_TryGetAtByteValue(void *this, UInt32 key, UInt8 *valueOut)
{
  int *v4; // edi

  v4 = *(int **)(*((_DWORD *)this + 2) + 4 * (*(int (__thiscall **)(void *, UInt32))(*(_DWORD *)this + 4))(this, key)); /*0x4d6774*/
  if ( !v4 ) /*0x4d6779*/
    return 0; /*0x4d6798*/
  while ( !(*(unsigned __int8 (__thiscall **)(void *, UInt32, int))(*(_DWORD *)this + 8))(this, key, v4[1]) ) /*0x4d6790*/
  {
    v4 = (int *)*v4; /*0x4d6792*/
    if ( !v4 ) /*0x4d6796*/
      return 0; /*0x4d6796*/
  }
  *valueOut = *((_BYTE *)v4 + 8); /*0x4d67a9*/
  return 1; /*0x4d6798*/
}
