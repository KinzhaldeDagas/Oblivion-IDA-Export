int __thiscall EffectSetting_LinkForm(TESForm *this, TESForm a2)
{
  int v2; // eax

  if ( (this->member.flags & 8) != 0 )
    return EffectSetting_LinkForm_::Done();
  v2 = *((_DWORD *)this + 0x16);
  if ( (v2 & 0x70000) == 0 || (v2 & 0x180000) != 0 )
    return EffectSetting_LinkForm_::ResolveLight((int)this, a2);
  else
    return EffectSetting_LinkForm_::ResolveParam(this, this, a2);
}
