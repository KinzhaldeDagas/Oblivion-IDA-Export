// Walk-speed branch used by sub_5E65B0 when run/swim/fly flags are absent. Calls Calc_WalkSpeed, then may clamp to package target actor's walk speed minus close-distance margin.
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

  if ( ((unsigned __int8 (__thiscall *)(Actor *))this->vtbl->Unk_97)(this) ) /*0x5e359e*/
    return 0.0; /*0x5e35a4*/
  if ( this->members.super.process ) /*0x5e35ab*/
  {
    if ( (this->members.super.process->GetMovementFlags(this->members.super.process) & 0x400) != 0 ) /*0x5e35c2*/
      this->members.super.process->GetMovementFlags(this->members.super.process); /*0x5e35cf*/
  }
  LOBYTE(v14) = this->members.super.process->GetWeaponOut(this->members.super.process) == 0;// MEF v30 verified ActorWithoutProcessCTD site: Actor +0x58 immediate vtable dereference. Null supplies AL=0 to vanilla test/setz at 0x005E35EE; non-null resumes 0x005E35E6. /*0x5e35f5*/
  retaddr = Actor_CalcCurrentEncumberance_((TESObjectREFR *)this); /*0x5e35fe*/
  this->vtbl->super.super.GetBaseForm(this); /*0x5e360c*/
  v10 = retaddr; /*0x5e3635*/
  v9 = (float)((int (__thiscall *)(Actor *))this->vtbl->GetActorValue)(this); /*0x5e3647*/
  v12 = Calc_WalkSpeed(v9, COERCE_FLOAT(4), SLOBYTE(v10), v13, v14); /*0x5e3652*/
  if ( !this->members.super.process ) /*0x5e3656*/
    return v12; /*0x5e3656*/
  v3 = this->members.super.process->GetCurrentPackage(this->members.super.process); /*0x5e366b*/
  if ( !v3 ) /*0x5e366f*/
    return v12; /*0x5e366f*/
  if ( v3->members.type != 1 ) /*0x5e3679*/
    return v12; /*0x5e3679*/
  process = this->members.super.process; /*0x5e367f*/
  if ( !process ) /*0x5e3684*/
    return v12; /*0x5e3684*/
  editorPackage = process->editorPackage; /*0x5e368a*/
  if ( !editorPackage ) /*0x5e368f*/
    return v12; /*0x5e368f*/
  target = editorPackage->members.target; /*0x5e3695*/
  if ( !target ) /*0x5e369a*/
    return v12; /*0x5e369a*/
  v7.form = sub_569E60(target).form; /*0x5e36a1*/
  objectCode = (Actor *)v7.objectCode; /*0x5e36a6*/
  if ( !v7.objectCode ) /*0x5e36aa*/
    return v12; /*0x5e36aa*/
  if ( (PlayerCharacter *)v7.form == reference ) /*0x5e36b6*/
    return v12; /*0x5e36b6*/
  if ( !v7.form->vtbl->IsActor((TESObjectREFR *)v7.objectCode) ) /*0x5e36c2*/
    return v12; /*0x5e36c2*/
  if ( !objectCode->members.super.process ) /*0x5e36c8*/
    return v12; /*0x5e36c8*/
  v11 = sub_5E3590(objectCode); /*0x5e36d5*/
  if ( v11 <= 0.0 ) /*0x5e36e4*/
    return v12; /*0x5e36e4*/
  if ( TesObjectREF_GetDistance((TESObjectREFR *)this, (TESObjectREFR *)objectCode, 0) < flt_A44BA4 ) /*0x5e36fb*/
    v11 = v11 - dbl_A3F3D0; /*0x5e3707*/
  if ( v11 > 0.0 && v12 >= (double)v11 ) /*0x5e3725*/
    return v11; /*0x5e372c*/
  else
    return v12; /*0x5e3738*/
}
