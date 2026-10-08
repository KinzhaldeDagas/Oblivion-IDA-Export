bool __thiscall Archive_RetainsFilenameStringTable(_DWORD *this)
{
  if ( iRetainFilenameStringTable_Archive == 1 ) /*0x42bd38*/
    return (*(this + 0x58) & 0x10) != 0; /*0x42bd43*/
  else
    return iRetainFilenameStringTable_Archive != 0; /*0x42bd48*/
}
