void __thiscall TESObjectARMO_LinkForm(TESForm *this)
{
  const char *v2; // eax

  if ( (this->member.flags & 8) == 0 ) /*0x4b4c2b*/
  {
    if ( !*((_WORD *)this + 0x34) ) /*0x4b4c2d*/
    {
      v2 = this->vtbl->GetEditorName(this); /*0x4b4c3c*/
      PrintError("Armor '%s' needs to have biped slots selected in the editor.", v2); /*0x4b4c44*/
    }
    TESScriptableForm_Link((int)(this + 2), this); /*0x4b4c50*/
    TESEnchantableForm_LinkComponent((_DWORD *)this + 0xF, this); /*0x4b4c59*/
    TESForm_SetIsLinked(this, 1); /*0x4b4c62*/
  }
}
