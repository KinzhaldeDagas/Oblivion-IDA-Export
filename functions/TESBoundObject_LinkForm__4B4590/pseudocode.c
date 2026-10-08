void __thiscall TESBoundObject_LinkForm(TESForm *this)
{
  if ( (this->member.flags & 8) == 0 ) /*0x4b459b*/
  {
    TESScriptableForm_Link((int)this + 0x54, this); /*0x4b45a1*/
    TESForm_SetIsLinked(this, 1); /*0x4b45aa*/
  }
}
