unsigned int __thiscall sub_570CA0(const char **this)
{
  int v3; // edi
  unsigned int v4; // edi
  int v5; // esi
  int v6; // eax
  char v7; // al
  int v8; // eax
  UInt32 *v9; // esi
  TESForm *v10; // eax
  const char *v11; // eax
  int v13; // [esp-Ch] [ebp-14h]
  int v14; // [esp-8h] [ebp-10h]
  const char *v15; // [esp-4h] [ebp-Ch]

  v3 = 0;
  if ( sub_45A170() )
    v3 = 6;
  v4 = v3 + sub_73D5D0() + 1 + strlen(*(this + 7)) + 0x22;
  v5 = *((_DWORD *)*(this + 6) + 3);
  if ( v5 )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
    if ( v6 )
    {
      while ( (BSStringT *)v6 != &stru_B3CAC0 )
      {
        v6 = *(_DWORD *)(v6 + 4);
        if ( !v6 )
          goto LABEL_7;
      }
      v7 = 1;
    }
    else
    {
LABEL_7:
      v7 = 0;
    }
    v8 = v7 != 0 ? v5 : 0;
    if ( v8 )
      v4 += (unsigned __int16)sub_4DA760(v8);
  }
  if ( Global_DebugSaveBuffer )
  {
    v9 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v9 )
    {
      v10 = TESForm_LookupByFormID(*v9);
      v11 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v10->vtbl->GetEditorName)(
                            v10,
                            *(UInt32 *)((char *)v9 + 5),
                            0x104,
                            "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v4,
        *v9,
        v11,
        v13,
        v14,
        v15);
      return v4;
    }
    sub_40FEC0(
      "GetSaveSize(): %-5i ending at line %i in file %s",
      v4,
      0x104,
      "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp");
  }
  return v4;
}
