void __thiscall TESObjectWEAP_LinkForm(TESForm *this)
{
  if ( (this->member.flags & 8) == 0 ) /*0x4bb12b*/
  {
    TESScriptableForm_Link((int)this + 0x54, this); /*0x4bb131*/
    TESEnchantableForm_LinkComponent((_DWORD *)this + 0x18, this); /*0x4bb13a*/
    TESForm_SetIsLinked(this, 1); /*0x4bb143*/
  }
}
