unsigned __int16 __thiscall sub_529BE0(char *this, int a2)
{
  unsigned __int16 v5; // ax
  int v6; // esi
  unsigned __int16 v7; // di
  char *v8; // edx
  int v9; // esi
  int v10; // esi
  int v11; // ecx
  _DWORD *v12; // eax
  UInt32 *v13; // esi
  TESForm *v14; // eax
  const char *v15; // eax
  int v17; // [esp-Ch] [ebp-20h]
  int v18; // [esp-8h] [ebp-1Ch]
  const char *v19; // [esp-4h] [ebp-18h]
  unsigned __int16 v20; // [esp+10h] [ebp-4h]
  unsigned __int16 v21; // [esp+18h] [ebp+4h]

  v5 = TESForm_ModifiedFormSize(a2);
  v6 = v5;
  v7 = v5;
  v20 = v5;
  if ( sub_45A170() )
  {
    v6 += 6;
    v7 = v6;
  }
  if ( (a2 & 4) != 0 )
    v7 = ++v6;
  if ( (a2 & 0x10000000) != 0 )
  {
    v8 = this + 0x40;
    v9 = v6 + 1;
    v21 = v9;
    if ( this != (char *)0xFFFFFFC0 )
    {
      do
      {
        if ( *(_DWORD *)v8 )
        {
          v10 = v9 + 2;
          v11 = 0;
          v12 = (_DWORD *)(*(_DWORD *)v8 + 4);
          if ( *(_DWORD *)v8 != 0xFFFFFFFC )
          {
            do
            {
              if ( *v12 )
                ++v11;
              v12 = (_DWORD *)v12[1];
            }
            while ( v12 );
          }
          v9 = v11 + v10 + 4 * v11 + 1;
        }
        v8 = *((char **)v8 + 1);
      }
      while ( v8 );
      v21 = v9;
    }
    v7 = v21;
  }
  if ( (a2 & 0x8000000) != 0 )
    v7 += ScriptEventList_GetSaveSize_(*((_DWORD **)this + 0x16));
  if ( Global_DebugSaveBuffer )
  {
    v13 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v13 )
    {
      v14 = TESForm_LookupByFormID(*v13);
      v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v14->vtbl->GetEditorName)(
                            v14,
                            *(UInt32 *)((char *)v13 + 5),
                            0xC07,
                            "..\\TES Shared\\TESQuest.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v7 - v20,
        *v13,
        v15,
        v17,
        v18,
        v19);
      return v7;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v7 - v20, 0xC07, "..\\TES Shared\\TESQuest.cpp");
  }
  return v7;
}
