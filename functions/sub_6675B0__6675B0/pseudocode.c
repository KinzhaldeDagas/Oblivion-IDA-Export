char __thiscall sub_6675B0(_DWORD *this, int a2)
{
  char v7; // bl
  int v8; // esi
  int v9; // eax
  int DefaultPlayerSpell; // eax

  v7 = Actor_RemoveMagicItemForm(this, a2);
  if ( v7 )
  {
    if ( a2 )
      v8 = a2 + 0x18;
    else
      v8 = 0;
    v9 = this[0x189];
    if ( !v9 )
    {
      DefaultPlayerSpell = Magic_GetDefaultPlayerSpell();
      if ( DefaultPlayerSpell )
        v9 = DefaultPlayerSpell + 0x18;
      else
        v9 = 0;
    }
    if ( v8 == v9 )
      PlayerCharacter_SetCurrentMagicItem(this, 0);
  }
  return v7;
}
