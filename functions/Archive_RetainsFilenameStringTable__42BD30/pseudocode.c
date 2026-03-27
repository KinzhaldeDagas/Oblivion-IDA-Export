bool __thiscall Archive_RetainsFilenameStringTable(_DWORD *this)
{
  if ( iRetainFilenameStringTable_Archive == 1 )
    return (*(this + 0x58) & 0x10) != 0;
  else
    return iRetainFilenameStringTable_Archive != 0;
}
