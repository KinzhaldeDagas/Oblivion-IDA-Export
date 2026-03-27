bool __thiscall RegSettingCollection_CloseFile(HKEY *this)
{
  HKEY v2; // ecx
  bool result; // al

  v2 = *(this + 0x42);
  result = 1;
  if ( v2 )
  {
    result = RegCloseKey(v2) == 0;
    *(this + 0x42) = 0;
  }
  return result;
}
