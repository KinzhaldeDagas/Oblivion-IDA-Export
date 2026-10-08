char __thiscall sub_6675B0(int *this, int a2)
{
  char v3; // bl
  int v4; // esi
  int v5; // eax
  int DefaultPlayerSpell; // eax

  v3 = Actor_RemoveMagicItemForm(this, a2); /*0x6675bf*/
  if ( v3 ) /*0x6675c3*/
  {
    if ( a2 ) /*0x6675c7*/
      v4 = a2 + 0x18; /*0x6675c9*/
    else
      v4 = 0; /*0x6675ce*/
    v5 = *(this + 0x189); /*0x6675d0*/
    if ( !v5 ) /*0x6675d8*/
    {
      DefaultPlayerSpell = Magic_GetDefaultPlayerSpell(); /*0x6675da*/
      if ( DefaultPlayerSpell ) /*0x6675e1*/
        v5 = DefaultPlayerSpell + 0x18; /*0x6675e3*/
      else
        v5 = 0; /*0x6675e8*/
    }
    if ( v4 == v5 ) /*0x6675ec*/
      PlayerCharacter_SetCurrentMagicItem(this, 0); /*0x6675f2*/
  }
  return v3; /*0x6675f7*/
}
