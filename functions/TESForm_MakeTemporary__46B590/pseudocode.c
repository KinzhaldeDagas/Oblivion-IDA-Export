char __thiscall TESForm_MakeTemporary(TESForm *this)
{
  char result; // al

  result = TESForm_RemoveFromGlobalLists(this); /*0x46b593*/
  if ( g_TESSaveLoadGame ) /*0x46b598*/
    result = sub_45B780((TESForm *)g_TESSaveLoadGame, (unsigned int)this, 0); /*0x46b5a5*/
  this->member.flags |= 0x4000u; /*0x46b5aa*/
  return result; /*0x46b5b1*/
}
