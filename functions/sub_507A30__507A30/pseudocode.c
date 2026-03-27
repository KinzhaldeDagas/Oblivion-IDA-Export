char sub_507A30()
{
  TESClimate *firstClimate; // esi
  Data *OverrideFile; // eax
  Data *v2; // edi
  Sky *GlobalObject; // eax

  firstClimate = Sky_CreateOrGetGlobalObject()->firstClimate;
  OverrideFile = TESForm_GetOverrideFile((TESForm *)firstClimate, 0xFFFFFFFF);
  if ( OverrideFile )
  {
    v2 = sub_4520F0(OverrideFile);
    TESFile_OpenBSFileWrapper__(v2, 0, 0);
    TESFile::FindForm(v2, (TESForm *)firstClimate);
    (*(void (__thiscall **)(TESClimate *))(*(_DWORD *)firstClimate + 0x18))(firstClimate);
    (*(void (__thiscall **)(TESClimate *, Data *))(*(_DWORD *)firstClimate + 0x1C))(firstClimate, v2);
    GlobalObject = Sky_CreateOrGetGlobalObject();
    Sky_CreateChildGlobalObjects(GlobalObject, firstClimate, 1);
  }
  return 1;
}
