int __thiscall sub_5E6830(Actor *this)
{
  LowProcess *process; // ecx
  int result; // eax
  TESObjectREFR *v4; // eax

  if ( !sub_45A500(SaveLoad_CurrentSavegame) )
  {
    process = this->members.super.process;
    if ( process )
    {
      result = ((int (__thiscall *)(LowProcess *))process->GetActionTarget)(process);
      if ( result )
        return result;
      if ( this->members.super.process )
      {
        if ( this->members.super.process->GetCurrentPackage(this->members.super.process) )
        {
          if ( this != (Actor *)TESDataHandler_g_PlayerRef )
          {
            sub_5E2E00(this);
            if ( v4 )
            {
              TesObjectREF_GetDistance(v4, (TESObjectREFR *)this, 0);
              GameSetting_GetSafeFloatPointer((int *)&unk_B36AC0);
            }
          }
        }
      }
    }
  }
  return 0;
}
