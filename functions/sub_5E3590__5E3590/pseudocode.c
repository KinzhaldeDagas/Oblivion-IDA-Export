double __thiscall sub_5E3590(Actor *this)
{
  TESPackage *v3; // eax
  LowProcess *process; // eax
  TESPackage *editorPackage; // eax
  TargetData *target; // ecx
  ObjectType v7; // eax
  Actor *objectCode; // edi
  float v9; // [esp+4h] [ebp-28h]
  float v10; // [esp+Ch] [ebp-20h]
  float v11; // [esp+1Ch] [ebp-10h]
  float v12; // [esp+20h] [ebp-Ch]
  char v13; // [esp+24h] [ebp-8h]
  float v14; // [esp+28h] [ebp-4h]
  float retaddr; // [esp+2Ch] [ebp+0h]

  if ( ((unsigned __int8 (__thiscall *)(Actor *))this->vtbl->Unk_97)(this) )
    return 0.0;
  if ( this->members.super.process )
  {
    if ( (this->members.super.process->GetMovementFlags(this->members.super.process) & 0x400) != 0 )
      this->members.super.process->GetMovementFlags(this->members.super.process);
  }
  LOBYTE(v14) = this->members.super.process->GetWeaponOut(this->members.super.process) == 0;
  retaddr = Actor_CalcCurrentEncumberance_((TESObjectREFR *)this);
  this->vtbl->super.super.GetBaseForm(this);
  v10 = retaddr;
  v9 = (float)((int (__thiscall *)(Actor *))this->vtbl->GetActorValue)(this);
  v12 = Calc_WalkSpeed(v9, COERCE_FLOAT(4), SLOBYTE(v10), v13, v14);
  if ( !this->members.super.process )
    return v12;
  v3 = this->members.super.process->GetCurrentPackage(this->members.super.process);
  if ( !v3 )
    return v12;
  if ( v3->members.type != 1 )
    return v12;
  process = this->members.super.process;
  if ( !process )
    return v12;
  editorPackage = process->editorPackage;
  if ( !editorPackage )
    return v12;
  target = editorPackage->members.target;
  if ( !target )
    return v12;
  v7.form = sub_569E60(target).form;
  objectCode = (Actor *)v7.objectCode;
  if ( !v7.objectCode )
    return v12;
  if ( (PlayerCharacter *)v7.form == TESDataHandler_g_PlayerRef )
    return v12;
  if ( !v7.form->vtbl->IsActor((TESObjectREFR *)v7.objectCode) )
    return v12;
  if ( !objectCode->members.super.process )
    return v12;
  v11 = sub_5E3590(objectCode);
  if ( v11 <= 0.0 )
    return v12;
  if ( TesObjectREF_GetDistance((TESObjectREFR *)this, (TESObjectREFR *)objectCode, 0) < flt_A44BA4 )
    v11 = v11 - dbl_A3F3D0;
  if ( v11 > 0.0 && v12 >= (double)v11 )
    return v11;
  else
    return v12;
}
