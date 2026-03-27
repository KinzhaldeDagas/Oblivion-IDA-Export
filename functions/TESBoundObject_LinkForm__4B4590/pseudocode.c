void __thiscall TESBoundObject_LinkForm(TESForm *this)
{
  if ( (this->member.flags & 8) == 0 )
  {
    TESScriptableForm_Link((int)this + 0x54, this);
    TESForm_SetIsLinked(this, 1);
  }
}
