int __thiscall sub_4DE980(PlayerCharacter *this)
{
  int result; // eax
  PlayerCharacter *v3; // edi
  void **p_vtbl; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax

  if ( (this->super.super.super.super.super.flags & 0x2000) != 0 )
    return 0;
  switch ( this->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)this)->member.type )
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
      return 8;
    case kFormType_Light:
      goto LABEL_36;
    case kFormType_Furniture:
      if ( sub_4AE590((TESFurniture *)this->super.super.super.super.baseForm) )
        return 3;
      else
        return sub_4AE5A0((TESFurniture *)this->super.super.super.super.baseForm) ? 5 : 0;
    case kFormType_NPC:
      v3 = 0;
      if ( this->vtbl->super.super.super.IsActor((TESObjectREFR *)this) )
        v3 = this;
      if ( v3 == TESDataHandler_g_PlayerRef )
        goto LABEL_38;
      if ( this->vtbl->super.super.super.IsDead((TESObjectREFR *)this, 0)
        && Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v3) != (struct Concurrency::details::ScheduleGroupBase *)6 )
      {
        return 2;
      }
      if ( v3 && sub_5E0F30(v3) && sub_5E04C0(TESDataHandler_g_PlayerRef) )
        return 0xB;
      if ( Actor_IsSneaking(TESDataHandler_g_PlayerRef) )
        goto LABEL_37;
      if ( v3 && Actor::IsEssential((Actor *)v3) )
        result = 0xA;
      else
LABEL_33:
        result = 7;
      break;
    case kFormType_Creature:
      if ( this->vtbl->super.super.super.IsDead((TESObjectREFR *)this, 0) )
        return 2;
      if ( !sub_4D74D0(this) )
        goto LABEL_36;
      p_vtbl = 0;
      if ( this->vtbl->super.super.super.IsActor((TESObjectREFR *)this) )
        p_vtbl = (void **)&this->vtbl;
      if ( !(*((int (__thiscall **)(void **))*p_vtbl + 0xE2))(p_vtbl) )
        goto LABEL_35;
      if ( (PlayerCharacter *)(*((int (__thiscall **)(void **))*p_vtbl + 0xE2))(p_vtbl) == TESDataHandler_g_PlayerRef )
        goto LABEL_38;
      v5 = (*((int (__thiscall **)(void **))*p_vtbl + 0xE2))(p_vtbl);
      if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 0x198))(v5, 0)
        || !*(_DWORD *)((*((int (__thiscall **)(void **))*p_vtbl + 0xE2))(p_vtbl) + 0x58) )
      {
        goto LABEL_38;
      }
      v6 = (*((int (__thiscall **)(void **))*p_vtbl + 0xE2))(p_vtbl);
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v6 + 0x58) + 0x36C))(*(_DWORD *)(v6 + 0x58)) == 4 )
        goto LABEL_33;
      v7 = (*((int (__thiscall **)(void **))*p_vtbl + 0xE2))(p_vtbl);
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v7 + 0x58) + 0x36C))(*(_DWORD *)(v7 + 0x58)) )
      {
LABEL_36:
        if ( (*(_DWORD *)&this->super.super.super.super.baseForm[5].member.type & 2) != 0 )
LABEL_37:
          result = 1;
        else
LABEL_38:
          result = 0;
      }
      else
      {
LABEL_35:
        result = 9;
      }
      break;
    default:
      goto LABEL_38;
  }
  return result;
}
