void __thiscall IngredAlch_Link(TESForm *this)
{
  if ( (this->member.flags & 8) == 0 )
    TESScriptableForm_Link((int)this + 0x64, this);
}
