int __thiscall sub_5F23E0(Actor *this)
{
  int result; // eax
  char v2; // bp
  double v3; // st5
  double v4; // st6
  double v5; // st7
  UInt32 v7; // edi
  int v8; // ebx
  bool v9; // zf
  ActorVtbl *vtbl; // eax
  Actor *v11; // ecx

  if ( !this->members.super.process )
  {
    LOBYTE(result) = 0;
    return result;
  }
  v7 = this->members.super.process->GetProcessLevel(this->members.super.process);
  result = MobileObject_GetProcessLevel((MobileObject *)this);
  v8 = result;
  if ( v7 == result )
  {
LABEL_11:
    LOBYTE(result) = 1;
    return result;
  }
  if ( !v7 )
  {
    result = ((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_11E)(this->members.super.process);
    if ( result )
    {
      if ( ((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_11E)(this->members.super.process) == 6 )
      {
LABEL_22:
        result = ((int (__thiscall *)(Actor *, int))this->vtbl->super.super.super.Destroy)(this, 1);
        LOBYTE(result) = 0;
        return result;
      }
      result = ((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_11E)(this->members.super.process);
      if ( result == 5 )
      {
        sub_4E4690((int)this, v8, v2, (int)this, v3, v4, v5);
        LOBYTE(result) = 0;
        return result;
      }
    }
  }
  switch ( v8 )
  {
    case 0:
      result = ((int (__thiscall *)(Actor *))this->vtbl->super.super.IsParalyzed)(this);
      goto LABEL_11;
    case 1:
      result = ((int (__thiscall *)(Actor *))this->vtbl->super.Unk_6C)(this);
      LOBYTE(result) = 1;
      return result;
    case 2:
      v9 = sub_5F0750(this, v3) == 0;
      vtbl = this->vtbl;
      v11 = this;
      if ( !v9 )
        goto LABEL_17;
      result = ((int (__thiscall *)(Actor *))vtbl->super.Unk_6B)(this);
      LOBYTE(result) = 1;
      return result;
    case 3:
      if ( !TESObjectREFR_IsPersistent_((TESObjectREFR *)this) )
      {
        if ( !sub_5F0750(this, v3) )
        {
          if ( TESObjectREFR_GetParentCell((TESObjectREFR *)this) )
          {
            sub_5E4B00(this);
            MagicTarget_RemoveAllEffects(&this->members.magicTarget);
            sub_5EDA20((TESObjectREFR *)this, 0);
            sub_463A90(SaveLoad_CurrentSavegame, (TESForm *)this);
          }
        }
        goto LABEL_22;
      }
      v9 = sub_5F0750(this, v3) == 0;
      vtbl = this->vtbl;
      v11 = this;
      if ( v9 )
      {
        result = ((int (__thiscall *)(Actor *))vtbl->super.Unk_6A)(this);
        LOBYTE(result) = 1;
      }
      else
      {
LABEL_17:
        result = ((int (__thiscall *)(Actor *, int))vtbl->super.super.super.Destroy)(v11, 1);
        LOBYTE(result) = 0;
      }
      break;
    default:
      goto LABEL_11;
  }
  return result;
}
