void __thiscall sub_664850(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // esi

  if ( a2 && !*(_DWORD *)(a2 + 0x64) ) /*0x66485c*/
  {
    *(this + 0x18A) = 0; /*0x664862*/
    return; /*0x66486e*/
  }
  v3 = *(this + 0x18A); /*0x664871*/
  if ( v3 ) /*0x664879*/
  {
    if ( v3 == a2 ) /*0x66487d*/
      return; /*0x66487d*/
    if ( !a2 ) /*0x664885*/
      PlayerCharacter_SetCurrentMagicItem(this, 0); /*0x664888*/
  }
  *(this + 0x18A) = a2; /*0x66488f*/
  if ( a2 && (v4 = *(_DWORD *)(a2 + 0x64)) != 0 ) /*0x66489c*/
    PlayerCharacter_SetCurrentMagicItem(this, (char *)(v4 + 0x18)); /*0x6648a4*/
  else
    PlayerCharacter_SetCurrentMagicItem(this, 0); /*0x6648c1*/
}
