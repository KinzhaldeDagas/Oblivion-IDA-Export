bool __thiscall RegSettingCollection_CloseFile(HKEY *this)
{
  HKEY v2; // ecx
  bool result; // al

  v2 = *(this + 0x42); /*0x4a8cf3*/
  result = 1; /*0x4a8cfb*/
  if ( v2 ) /*0x4a8cfd*/
  {
    result = RegCloseKey(v2) == 0; /*0x4a8d08*/
    *(this + 0x42) = 0; /*0x4a8d0b*/
  }
  return result; /*0x4a8d15*/
}
