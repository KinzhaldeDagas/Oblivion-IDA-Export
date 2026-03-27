BOOL __thiscall sub_42BD70(_DWORD *this)
{
  int v2; // eax
  bool v3; // al
  BOOL result; // eax

  result = 1;
  if ( !bInvalidateOlderFiles_Archive && !bCheckRuntimeCollisions_Archive )
  {
    v2 = *(this + 0x58);
    if ( (v2 & 0x80) == 0 )
    {
      v3 = iRetainDirectoryStringTable_Archive == 1 ? (v2 & 8) != 0 : iRetainDirectoryStringTable_Archive != 0;
      if ( !v3 && !Archive_RetainsFilenameStringTable(this) && !Archive_RetainsFilenameOffsetTable(this) )
        return 0;
    }
  }
  return result;
}
