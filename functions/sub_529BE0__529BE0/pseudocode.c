unsigned __int16 __thiscall TESQuest::GetSaveSize(char *this, int a2)
{
  unsigned __int16 v4; // ax
  int v5; // esi
  unsigned __int16 v6; // di
  char *v7; // edx
  int v8; // esi
  int v9; // esi
  int v10; // ecx
  _DWORD *v11; // eax
  UInt32 *v12; // esi
  TESForm *v13; // eax
  const char *v14; // eax
  int v16; // [esp-Ch] [ebp-20h]
  int v17; // [esp-8h] [ebp-1Ch]
  const char *v18; // [esp-4h] [ebp-18h]
  unsigned __int16 v19; // [esp+10h] [ebp-4h]
  unsigned __int16 v20; // [esp+18h] [ebp+4h]

  v4 = TESForm_ModifiedFormSize(a2); /*0x529bec*/
  v5 = v4; /*0x529bf7*/
  v6 = v4; /*0x529bfa*/
  v19 = v4; /*0x529c04*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x529c08*/
  {
    v5 += 6; /*0x529c11*/
    v6 = v5; /*0x529c18*/
  }
  if ( (a2 & 4) != 0 ) /*0x529c1e*/
    v6 = ++v5; /*0x529c27*/
  if ( (a2 & 0x10000000) != 0 ) /*0x529c30*/
  {
    v7 = this + 0x40; /*0x529c32*/
    v8 = v5 + 1; /*0x529c35*/
    v20 = v8; /*0x529c3a*/
    if ( this != (char *)0xFFFFFFC0 ) /*0x529c3e*/
    {
      do /*0x529c6b*/
      {
        if ( *(_DWORD *)v7 ) /*0x529c40*/
        {
          v9 = v8 + 2; /*0x529c46*/
          v10 = 0; /*0x529c49*/
          v11 = (_DWORD *)(*(_DWORD *)v7 + 4); /*0x529c4b*/
          if ( *(_DWORD *)v7 != 0xFFFFFFFC ) /*0x529c4e*/
          {
            do /*0x529c5d*/
            {
              if ( *v11 ) /*0x529c50*/
                ++v10; /*0x529c55*/
              v11 = (_DWORD *)v11[1]; /*0x529c58*/
            }
            while ( v11 ); /*0x529c5d*/
          }
          v8 = v10 + v9 + 4 * v10 + 1; /*0x529c62*/
        }
        v7 = *((char **)v7 + 1); /*0x529c66*/
      }
      while ( v7 ); /*0x529c6b*/
      v20 = v8; /*0x529c6d*/
    }
    v6 = v20; /*0x529c71*/
  }
  if ( (a2 & 0x8000000) != 0 ) /*0x529c7c*/
    v6 += ScriptEventList_GetSaveSize_(*((_DWORD **)this + 0x16)); /*0x529c86*/
  if ( Global_DebugSaveBuffer )
  {
    v12 = (UInt32 *)g_TESSaveLoadGame[1].unk030[1]; /*0x529c98*/
    if ( v12 )
    {
      v13 = TESForm_LookupByFormID(*v12); /*0x529ca5*/
      v14 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v13->vtbl->GetEditorName)( /*0x529cc5*/
                            v13,
                            *(UInt32 *)((char *)v12 + 5),
                            0xC07,
                            "..\\TES Shared\\TESQuest.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v6 - v19,
        *v12,
        v14,
        v16,
        v17,
        v18);
      return v6; /*0x529ceb*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v6 - v19, 0xC07, "..\\TES Shared\\TESQuest.cpp");
  }
  return v6; /*0x529ce6*/
}
