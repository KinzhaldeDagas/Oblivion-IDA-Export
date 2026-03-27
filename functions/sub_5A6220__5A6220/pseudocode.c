void __thiscall sub_5A6220(_DWORD *this, int a2)
{
  LowProcess *process; // ecx
  EntryData *v4; // eax
  char *v5; // eax
  float v6; // [esp+4h] [ebp-10h]
  signed int v7; // [esp+18h] [ebp+4h]

  if ( *(this + 0xE) )
  {
    if ( a2
      && TESDataHandler_g_PlayerRef
      && (process = TESDataHandler_g_PlayerRef->super.super.super.process) != 0
      && (v4 = process->GetEquippedWeaponData(process, 1)) != 0 )
    {
      v7 = sub_485C00(v4);
      v6 = (float)v7;
      Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFAE, v6);
      v5 = (char *)sub_48F6A0(v7);
      Tile_SetString((_DWORD *)*(this + 0xE), (_DWORD *)0xFAF, v5);
    }
    else
    {
      Tile_SetFloat((Tile *)*(this + 0xE), (_DWORD *)0xFAE, 0.0);
    }
  }
}
