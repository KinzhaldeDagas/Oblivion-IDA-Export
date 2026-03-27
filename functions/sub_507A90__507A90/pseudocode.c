char sub_507A90()
{
  TESWeather *firstWeather; // esi
  Data *OverrideFile; // eax
  Data *v2; // edi

  firstWeather = Sky_CreateOrGetGlobalObject()->firstWeather;
  OverrideFile = TESForm_GetOverrideFile((TESForm *)firstWeather, 0xFFFFFFFF);
  if ( OverrideFile )
  {
    v2 = sub_4520F0(OverrideFile);
    TESFile_OpenBSFileWrapper__(v2, 0, 0);
    TESFile::FindForm(v2, (TESForm *)firstWeather);
    (*(void (__thiscall **)(TESWeather *))(*(_DWORD *)firstWeather + 0x18))(firstWeather);
    (*(void (__thiscall **)(TESWeather *, Data *))(*(_DWORD *)firstWeather + 0x1C))(firstWeather, v2);
  }
  return 1;
}
