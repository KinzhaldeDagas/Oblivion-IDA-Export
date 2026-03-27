void __thiscall TESObjectWEAP_LinkForm(TESForm *this)
{
  if ( (this->member.flags & 8) == 0 )
  {
    TESScriptableForm_Link((int)this + 0x54, this);
    TESEnchantableForm_LinkComponent((_DWORD *)this + 0x18, this);
    TESForm_SetIsLinked(this, 1);
  }
}
