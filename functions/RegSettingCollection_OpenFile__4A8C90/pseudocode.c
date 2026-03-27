bool __thiscall RegSettingCollection_OpenFile(int this, DWORD dwDisposition)
{
  if ( (_BYTE)dwDisposition )
    return RegCreateKeyExA(
             HKEY_LOCAL_MACHINE,
             (LPCSTR)(this + 4),
             0,
             0,
             0,
             0xF003F,
             0,
             (PHKEY)(this + 0x108),
             &dwDisposition) == 0;
  else
    return RegOpenKeyExA(HKEY_LOCAL_MACHINE, (LPCSTR)(this + 4), 0, 0xF003F, (PHKEY)(this + 0x108)) == 0;
}
