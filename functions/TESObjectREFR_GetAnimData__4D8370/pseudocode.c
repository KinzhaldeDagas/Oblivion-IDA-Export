BSExtraDataVtbl *__thiscall TESObjectREFR_GetAnimData(Actor *this)
{
  LowProcess *process; // ecx

  if ( (unsigned int)this->members.super.super.super.type - 0x32 <= 1
    && (process = this->members.super.process) != 0
    && process->GetProcessLevel(process) <= 1 )
  {
    return (BSExtraDataVtbl *)this->members.super.process[2].unk05C;
  }
  else
  {
    return BaseExtraList_GetAnimExtraData_(&this->members.super.super.baseExtraList);
  }
}
