TESSaveLoadGame_SerializationView *__usercall sub_6632A0@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  TESSaveLoadGame_SerializationView *result; // eax
  int v4; // eax
  TESFormVtbl *vtbl; // edx
  unsigned __int16 v6; // ax
  UInt32 source; // [esp+4h] [ebp-4h] BYREF

  if ( *((_DWORD *)this + 0x1C3) )
    return (TESSaveLoadGame_SerializationView *)PrintError(
                                                  " PlayerCharacter::SaveInitialState(): Attempting to save player's init"
                                                  "ial state when the initial state buffer already exists.");
  v4 = sub_4533F0(g_TESSaveLoadGame, (int)this, 0); /*0x6632c6*/
  vtbl = this->vtbl; /*0x6632cb*/
  source = v4; /*0x6632cd*/
  v6 = vtbl->GetSaveSize(this, v4); /*0x6632d7*/
  *((_DWORD *)this + 0x1C3) = sub_453500(g_TESSaveLoadGame, a2, v6 + 4); /*0x6632f7*/
  TESForm_SaveDataToCurrentSaveGame(this, &source, 4u); /*0x6632fd*/
  g_TESSaveLoadGame->useIrefEncoding = 0; /*0x663307*/
  this->vtbl->SaveGame(this, source); /*0x663317*/
  result = g_TESSaveLoadGame; /*0x663319*/
  g_TESSaveLoadGame->useIrefEncoding = 1; /*0x66331e*/
  g_TESSaveLoadGame->bufferCursor = 0; /*0x663328*/
  return result; /*0x6632ba*/
}
