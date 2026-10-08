void __thiscall IngredAlch_Link(TESForm *this)
{
  if ( (this->member.flags & 8) == 0 ) /*0x4129e8*/
    TESScriptableForm_Link((int)this + 0x64, this); /*0x4129ee*/
}
