bool __thiscall Archive_RetainsFilenameOffsetTable(_DWORD *this)
{
  if ( iRetainFilenameOffsetTable_Archive == 1 ) /*0x42bd58*/
    return (*(this + 0x58) & 0x20) != 0; /*0x42bd63*/
  else
    return iRetainFilenameOffsetTable_Archive != 0; /*0x42bd68*/
}
