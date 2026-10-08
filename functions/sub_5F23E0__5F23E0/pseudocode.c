int __thiscall sub_5F23E0(Actor *this)
{
  int result; // eax
  char v2; // bp
  double v3; // st5
  double v4; // st6
  double v5; // st7
  UInt32 v7; // edi
  int v8; // ebx
  char v9; // al
  bool v10; // zf
  ActorVtbl *vtbl; // eax
  Actor *v12; // ecx
  char v13; // al
  double v14; // st7
  char v15; // al

  if ( !this->members.super.process ) /*0x5f23e3*/
  {
    LOBYTE(result) = 0; /*0x5f23e9*/
    return result; /*0x5f23ec*/
  }
  v7 = this->members.super.process->GetProcessLevel(this->members.super.process); /*0x5f23fb*/
  result = MobileObject_GetProcessLevel((MobileObject *)this); /*0x5f23fd*/
  v8 = result; /*0x5f2402*/
  if ( v7 == result ) /*0x5f2406*/
  {
LABEL_11:
    LOBYTE(result) = 1; /*0x5f246a*/
    return result; /*0x5f246f*/
  }
  if ( !v7 ) /*0x5f240a*/
  {
    result = ((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_11E)(this->members.super.process); /*0x5f2417*/
    if ( result ) /*0x5f241b*/
    {
      if ( ((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_11E)(this->members.super.process) == 6 ) /*0x5f242d*/
      {
LABEL_22:
        result = ((int (__thiscall *)(Actor *, int))this->vtbl->super.super.super.Destroy)(this, 1); /*0x5f250c*/
        LOBYTE(result) = 0; /*0x5f2519*/
        return result; /*0x5f2519*/
      }
      result = ((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_11E)(this->members.super.process); /*0x5f243e*/
      if ( result == 5 ) /*0x5f2443*/
      {
        sub_4E4690((int)this, v8, v2, (int)this, v3, v4); /*0x5f2447*/
        LOBYTE(result) = 0; /*0x5f244e*/
        return result; /*0x5f2451*/
      }
    }
  }
  switch ( v8 ) /*0x5f2457*/
  {
    case 0: /*0x5f2457*/
      result = ((int (__thiscall *)(Actor *))this->vtbl->super.super.MoveToHigh)(this); /*0x5f2468*/
      goto LABEL_11; /*0x5f2468*/
    case 1: /*0x5f2457*/
      result = ((int (__thiscall *)(Actor *))this->vtbl->super.MoveToMiddleHigh)(this); /*0x5f247a*/
      LOBYTE(result) = 1; /*0x5f247e*/
      return result; /*0x5f2481*/
    case 2: /*0x5f2457*/
      sub_5F0750(this, v5); /*0x5f2484*/
      v10 = v9 == 0; /*0x5f2489*/
      vtbl = this->vtbl; /*0x5f248b*/
      v12 = this; /*0x5f248d*/
      if ( !v10 ) /*0x5f248f*/
        goto LABEL_17; /*0x5f248f*/
      result = ((int (__thiscall *)(Actor *))vtbl->super.MoveToMiddleLow)(this); /*0x5f2497*/
      LOBYTE(result) = 1; /*0x5f249b*/
      return result; /*0x5f249e*/
    case 3: /*0x5f2457*/
      if ( !TESObjectREFR_IsPersistent((TESObjectREFR *)this) ) /*0x5f24aa*/
      {
        v14 = sub_5F0750(this, v5); /*0x5f24d4*/
        if ( !v15 ) /*0x5f24db*/
        {
          if ( Shared_GetDwordAtOffset40(this) ) /*0x5f24df*/
          {
            sub_5E4B00(this, v14); /*0x5f24ea*/
            MagicTarget_RemoveAllEffects(&this->members.magicTarget); /*0x5f24f2*/
            sub_5EDA20((TESObjectREFR *)this, 0); /*0x5f24fb*/
            TESSaveLoadGame_UnloadForm(g_TESSaveLoadGame, (TESForm *)this); /*0x5f2507*/
          }
        }
        goto LABEL_22; /*0x5f2507*/
      }
      sub_5F0750(this, v5); /*0x5f24ac*/
      v10 = v13 == 0; /*0x5f24b1*/
      vtbl = this->vtbl; /*0x5f24b3*/
      v12 = this; /*0x5f24b5*/
      if ( v10 ) /*0x5f24b7*/
      {
        result = ((int (__thiscall *)(Actor *))vtbl->super.MoveToLow)(this); /*0x5f24cc*/
        LOBYTE(result) = 1; /*0x5f24d0*/
      }
      else
      {
LABEL_17:
        result = ((int (__thiscall *)(Actor *, int))vtbl->super.super.super.Destroy)(v12, 1); /*0x5f24b9*/
        LOBYTE(result) = 0; /*0x5f24c2*/
      }
      break; /*0x5f24c5*/
    default:
      goto LABEL_11;
  }
  return result; /*0x5f23eb*/
}
