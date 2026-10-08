char sub_507A90()
{
  TESWeather *firstWeather; // esi
  Data *OverrideFile; // eax
  Data *ThreadSafeFile; // edi

  firstWeather = Sky_CreateOrGetGlobalObject()->firstWeather; /*0x507a96*/
  OverrideFile = TESForm_GetOverrideFile((TESForm *)firstWeather, 0xFFFFFFFF); /*0x507a9d*/
  if ( OverrideFile ) /*0x507aa4*/
  {
    ThreadSafeFile = TESFile_GetThreadSafeFile(OverrideFile); /*0x507aae*/
    TESFile_OpenBSFileWrapper__(ThreadSafeFile, 0, 0); /*0x507ab6*/
    TESFile::FindForm(ThreadSafeFile, (TESForm *)firstWeather); /*0x507abe*/
    (*(void (__thiscall **)(TESWeather *))(*(_DWORD *)firstWeather + 0x18))(firstWeather); /*0x507aca*/
    (*(void (__thiscall **)(TESWeather *, Data *))(*(_DWORD *)firstWeather + 0x1C))(firstWeather, ThreadSafeFile); /*0x507ad4*/
  }
  return 1; /*0x507ad9*/
}
