bool __thiscall Archive_RetainsFilenameOffsetTable(_DWORD *this)
{
  if ( iRetainFilenameOffsetTable_Archive == 1 )
    return (*(this + 0x58) & 0x20) != 0;
  else
    return iRetainFilenameOffsetTable_Archive != 0;
}
