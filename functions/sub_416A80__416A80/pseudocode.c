int sub_416A80()
{
  int v0; // ebx
  int v1; // ebx
  int v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  int v5; // edi
  unsigned int v6; // eax
  UInt32 *v7; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  int v11; // [esp-Ch] [ebp-14h]
  int v12; // [esp-8h] [ebp-10h]
  const char *v13; // [esp-4h] [ebp-Ch]

  v0 = 0;
  if ( sub_45A170() )
    v0 = 6;
  v1 = v0 + 4;
  v2 = 0;
  if ( dword_B3350C )
  {
    while ( !*(_DWORD *)(dword_B33510 + 4 * v2) )
    {
      if ( ++v2 >= (unsigned int)dword_B3350C )
        goto LABEL_6;
    }
    v3 = *(_DWORD **)(dword_B33510 + 4 * v2);
  }
  else
  {
LABEL_6:
    v3 = 0;
  }
  while ( v3 )
  {
    v4 = (_DWORD *)*v3;
    v5 = v3[2];
    if ( !*v3 )
    {
      v6 = (*(int (__thiscall **)(int *, _DWORD))(EffectSettingCollection + 4))(&EffectSettingCollection, v3[1]) + 1;
      if ( v6 >= dword_B3350C )
      {
LABEL_14:
        v3 = 0;
        goto LABEL_15;
      }
      while ( 1 )
      {
        v4 = *(_DWORD **)(dword_B33510 + 4 * v6);
        if ( v4 )
          break;
        if ( ++v6 >= dword_B3350C )
          goto LABEL_14;
      }
    }
    v3 = v4;
LABEL_15:
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 0x58) & 0x200000) != 0 )
        v1 += 4;
    }
  }
  if ( Global_DebugSaveBuffer )
  {
    v7 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v7 )
    {
      v8 = TESForm_LookupByFormID(*v7);
      v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v8->vtbl->GetEditorName)(
                           v8,
                           *(UInt32 *)((char *)v7 + 5),
                           0x6D,
                           "..\\TES Shared\\Magic\\EffectSettingCollection.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v1,
        *v7,
        v9,
        v11,
        v12,
        v13);
      return v1;
    }
    sub_40FEC0(
      "GetSaveSize(): %-5i ending at line %i in file %s",
      v1,
      0x6D,
      "..\\TES Shared\\Magic\\EffectSettingCollection.cpp");
  }
  return v1;
}
