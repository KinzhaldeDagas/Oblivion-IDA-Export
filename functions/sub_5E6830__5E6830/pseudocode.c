int __thiscall sub_5E6830(Actor *this)
{
  LowProcess *process; // ecx
  int result; // eax
  TESObjectREFR *v4; // eax

  if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x5e6839*/
  {
    process = this->members.super.process; /*0x5e6842*/
    if ( process ) /*0x5e6847*/
    {
      result = ((int (__thiscall *)(LowProcess *))process->GetActionTarget)(process); /*0x5e6851*/
      if ( result ) /*0x5e6855*/
        return result; /*0x5e6855*/
      if ( this->members.super.process ) /*0x5e6857*/
      {
        if ( this->members.super.process->GetCurrentPackage(this->members.super.process) ) /*0x5e6867*/
        {
          if ( this != (Actor *)reference ) /*0x5e6873*/
          {
            sub_5E2E00(this); /*0x5e6877*/
            if ( v4 ) /*0x5e687e*/
            {
              TesObjectREF_GetDistance(v4, (TESObjectREFR *)this, 0); /*0x5e6885*/
              GameSetting_GetSafeFloatPointer(unk_B36AC0); /*0x5e6891*/
            }
          }
        }
      }
    }
  }
  return 0; /*0x5e6898*/
}
