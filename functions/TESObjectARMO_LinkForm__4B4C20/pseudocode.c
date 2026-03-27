void __thiscall TESObjectARMO_LinkForm(TESForm *this)
{
  const char *v2; // eax

  if ( (this->member.flags & 8) == 0 )
  {
    if ( !*((_WORD *)this + 0x34) )
    {
      v2 = this->vtbl->GetEditorName(this);
      PrintError("Armor '%s' needs to have biped slots selected in the editor.", v2);
    }
    TESScriptableForm_Link((int)(this + 2), this);
    TESEnchantableForm_LinkComponent((_DWORD *)this + 0xF, this);
    TESForm_SetIsLinked(this, 1);
  }
}
