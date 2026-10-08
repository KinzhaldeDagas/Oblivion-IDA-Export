void __thiscall sub_5A6220(_DWORD *this, int a2)
{
  LowProcess *process; // ecx
  EntryData *v4; // eax
  char *v5; // eax
  float v6; // [esp+4h] [ebp-10h]
  signed int v7; // [esp+18h] [ebp+4h]

  if ( *(this + 0xE) ) /*0x5a6223*/
  {
    if ( a2 /*0x5a6251*/
      && reference
      && (process = reference->super.super.super.process) != 0
      && (v4 = process->GetEquippedWeaponData(process, 1)) != 0 )
    {
      v7 = sub_485C00(v4); /*0x5a625d*/
      v6 = (float)v7; /*0x5a6269*/
      Tile_SetFloat((Tile *)*(this + 0xE), 0xFAEu, v6); /*0x5a6271*/
      v5 = (char *)sub_48F6A0(v7); /*0x5a6279*/
      Tile_SetString((_DWORD *)*(this + 0xE), (_DWORD *)0xFAF, v5); /*0x5a6287*/
    }
    else
    {
      Tile_SetFloat((Tile *)*(this + 0xE), 0xFAEu, 0.0); /*0x5a62a0*/
    }
  }
}
