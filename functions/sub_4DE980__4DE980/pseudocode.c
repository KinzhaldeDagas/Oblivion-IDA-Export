int __thiscall sub_4DE980(PlayerCharacter *this)
{
  int result; // eax
  PlayerCharacter *v3; // edi
  PlayerCharacter *v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax

  if ( (this->super.super.super.super.super.flags & 0x2000) != 0 ) /*0x4de98b*/
    return 0; /*0x4de98d*/
  switch ( this->vtbl->super.super.super.GetBaseForm(this)->member.type )
  {
    case kFormType_Activator:
      return sub_4D9890(this->super.super.super.super.baseForm) != 0 ? 4 : 0;
    case kFormType_Apparatus:
    case kFormType_Armor:
    case kFormType_Clothing:
    case kFormType_Ingredient:
    case kFormType_Misc:
    case kFormType_Flora:
    case kFormType_Weapon:
    case kFormType_Ammo:
    case kFormType_SoulGem:
    case kFormType_Key:
    case kFormType_AlchemyItem:
    case kFormType_LeveledItem:
      goto LABEL_37;
    case kFormType_Book:
      return *(_DWORD *)&this->super.super.super.super.baseForm[4].member.type != 0 ? 1 : 6;
    case kFormType_Container:
      return 2;
    case kFormType_Door:
      return 8; /*0x4de9d4*/
    case kFormType_Light:
      goto LABEL_36;
    case kFormType_Furniture:
      if ( sub_4AE590((TESFurniture *)this->super.super.super.super.baseForm) )
        return 3; /*0x4de9f8*/
      else
        return sub_4AE5A0((TESFurniture *)this->super.super.super.super.baseForm) ? 5 : 0;
    case kFormType_NPC:
      v3 = 0; /*0x4dea1b*/
      if ( this->vtbl->super.super.super.IsActor((TESObjectREFR *)this) ) /*0x4dea1d*/
        v3 = this; /*0x4dea23*/
      if ( v3 == reference ) /*0x4dea2b*/
        goto LABEL_38; /*0x4dea2b*/
      if ( this->vtbl->super.super.super.IsDead((TESObjectREFR *)this, 0) && Actor::GetDeadState((Actor *)v3) != 6 ) /*0x4dea4d*/
        return 2; /*0x4deac0*/
      if ( v3 && Actor::IsSleeping((Actor *)v3) && sub_5E04C0(reference) ) /*0x4dea64*/
        return 0xB; /*0x4dea74*/
      if ( Actor_IsSneaking(reference) ) /*0x4dea7b*/
        goto LABEL_37; /*0x4dea82*/
      if ( v3 && Actor::IsEssential((Actor *)v3) ) /*0x4dea92*/
        result = 0xA; /*0x4deaa0*/
      else
LABEL_33:
        result = 7; /*0x4deb5e*/
      break; /*0x4deaa6*/
    case kFormType_Creature:
      if ( this->vtbl->super.super.super.IsDead((TESObjectREFR *)this, 0) ) /*0x4deab3*/
        return 2; /*0x4deab7*/
      if ( !TESObjectREFR_HasHorseCreatureBase(this) ) /*0x4deaca*/
        goto LABEL_36; /*0x4deaca*/
      v4 = 0; /*0x4deada*/
      if ( this->vtbl->super.super.super.IsActor((TESObjectREFR *)this) ) /*0x4deadc*/
        v4 = this; /*0x4deae2*/
      if ( !((int (__thiscall *)(PlayerCharacter *))v4->vtbl->super.Unk_E2)(v4) ) /*0x4deaf2*/
        goto LABEL_35; /*0x4deaf2*/
      if ( (PlayerCharacter *)((int (__thiscall *)(PlayerCharacter *))v4->vtbl->super.Unk_E2)(v4) == reference ) /*0x4deb0a*/
        goto LABEL_38; /*0x4deb0a*/
      v5 = ((int (__thiscall *)(PlayerCharacter *))v4->vtbl->super.Unk_E2)(v4); /*0x4deb1a*/
      if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 0x198))(v5, 0) /*0x4deb3a*/
        || !*(_DWORD *)(((int (__thiscall *)(PlayerCharacter *))v4->vtbl->super.Unk_E2)(v4) + 0x58) )
      {
        goto LABEL_38; /*0x4deb3e*/
      }
      v6 = ((int (__thiscall *)(PlayerCharacter *))v4->vtbl->super.Unk_E2)(v4); /*0x4deb4a*/
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v6 + 0x58) + 0x36C))(*(_DWORD *)(v6 + 0x58)) == 4 ) /*0x4deb5c*/
        goto LABEL_33; /*0x4deb5c*/
      v7 = ((int (__thiscall *)(PlayerCharacter *))v4->vtbl->super.Unk_E2)(v4); /*0x4deb70*/
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v7 + 0x58) + 0x36C))(*(_DWORD *)(v7 + 0x58)) ) /*0x4deb7d*/
      {
LABEL_36:
        if ( (*(_DWORD *)&this->super.super.super.super.baseForm[5].member.type & 2) != 0 ) /*0x4deb96*/
LABEL_37:
          result = 1; /*0x4deb98*/
        else
LABEL_38:
          result = 0; /*0x4deba0*/
      }
      else
      {
LABEL_35:
        result = 9; /*0x4deb83*/
      }
      break; /*0x4deb8a*/
    default:
      goto LABEL_38;
  }
  return result; /*0x4de98f*/
}
