void __thiscall TESObjectCLOT_LinkForm(TESForm *this)
{
  const char *v2; // eax

  if ( (this->member.flags & 8) == 0 ) /*0x4b5c6b*/
  {
    if ( !*((_WORD *)this + 0x30) ) /*0x4b5c6d*/
    {
      v2 = this->vtbl->GetEditorName(this); /*0x4b5c7c*/
      PrintError("Clothing '%s' needs to have biped slots selected in the editor.", v2); /*0x4b5c84*/
    }
    TESScriptableForm_Link((int)(this + 2), this); /*0x4b5c90*/
    TESEnchantableForm_LinkComponent((_DWORD *)this + 0xF, this); /*0x4b5c99*/
    TESForm_SetIsLinked(this, 1); /*0x4b5ca2*/
  }
}
