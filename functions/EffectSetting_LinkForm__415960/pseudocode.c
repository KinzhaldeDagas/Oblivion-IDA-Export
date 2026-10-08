void __thiscall EffectSetting_LinkForm(TESForm *this, TESForm a2)
{
  int v2; // eax

  if ( (this->member.flags & 8) != 0 ) /*0x41596c*/
  {
    EffectSetting_LinkForm_::Done(); /*0x41596c*/
  }
  else
  {
    v2 = *((_DWORD *)this + 0x16); /*0x415972*/
    if ( (v2 & 0x70000) == 0 || (v2 & 0x180000) != 0 ) /*0x415981*/
      EffectSetting_LinkForm_::ResolveLight((int)this, a2); /*0x41597a*/
    else
      EffectSetting_LinkForm_::ResolveParam(this, this, a2); /*0x415982*/
  }
}
