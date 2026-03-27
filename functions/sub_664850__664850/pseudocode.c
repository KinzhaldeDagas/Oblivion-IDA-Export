void __thiscall sub_664850(_DWORD *this, int a2)
{
  int v7; // eax
  int v8; // esi

  if ( a2 && !*(_DWORD *)(a2 + 0x64) )
  {
    this[0x18A] = 0;
    return;
  }
  v7 = this[0x18A];
  if ( v7 )
  {
    if ( v7 == a2 )
      return;
    if ( !a2 )
      PlayerCharacter_SetCurrentMagicItem(this, 0);
  }
  this[0x18A] = a2;
  if ( a2 && (v8 = *(_DWORD *)(a2 + 0x64)) != 0 )
    PlayerCharacter_SetCurrentMagicItem(this, (char *)(v8 + 0x18));
  else
    PlayerCharacter_SetCurrentMagicItem(this, 0);
}
