void __userpurge TESObjectREFR_PreLoadModifiedForm(
        Actor *this@<ecx>,
        int a2@<ebx>,
        char a3@<bpl>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        int a7)
{
  TESObjectCELL *parentCell; // eax
  UInt8 cellProcessLevel; // al
  signed int v10; // eax
  double v11; // st7
  bool v12; // al
  ExtraDataList *p_baseExtraList; // ecx
  UInt32 v14; // eax
  float v15; // eax
  UInt32 v16; // eax
  unsigned __int8 *v17; // eax
  UInt32 v18; // eax
  int type; // ecx
  TESForm::FormFlags flags; // eax

  nullsub_returnvVoid_1arg(a7);
  if ( !this->vtbl->super.super.IsActor((TESObjectREFR *)this) && (a7 & 0x10000) != 0 )
    sub_46AA00(this, 0);
  if ( (SaveLoad_CurrentSavegame->flags & 0x40) != 0 && (a7 & 0x40000000) != 0 )
  {
    if ( (this->members.super.super.super.flags & 0x800) != 0 || (this->members.super.super.super.flags & 0x20) != 0 )
    {
      ((void (__thiscall *)(Actor *, _DWORD))this->vtbl->super.super.Set3D)(this, 0);
    }
    else if ( !this->members.super.super.niNode )
    {
      parentCell = this->members.super.super.parentCell;
      if ( parentCell )
      {
        cellProcessLevel = parentCell->members.cellProcessLevel;
        if ( (cellProcessLevel == 6 || cellProcessLevel == 3) && !sub_4354F0(ModelLoaderPtr, (int)this) )
        {
          v10 = sub_440C80(TES, this->members.super.super.parentCell, 0);
          sub_438060((_DWORD **)ModelLoaderPtr, a3, a4, a5, a6, (TESObjectREFR *)this, v10);
        }
      }
    }
  }
  if ( (a7 & 0x2000000) != 0 && !this->vtbl->super.super.IsActor((TESObjectREFR *)this) )
    sub_4DA4F0(this);
  if ( (a7 & 0x177577E0) != 0 || this->vtbl->super.super.IsActor((TESObjectREFR *)this) )
    sub_425650(&this->members.super.super.baseExtraList, a7, this);
  if ( (a7 & 0x8000000) != 0 )
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) && Actor_IsCreature(this) )
    {
      UnequipWeapon((TESObjectREFR *)this, a2, a7, a4, a5, a6);
      v11 = sub_4DC8F0((TESObjectREFR *)this, a6, a4, a5, a3, 1);
      UnequipLight((TESObjectREFR *)this, a4, a5, v11);
      sub_4DCCF0((TESObjectREFR *)this, a3, a4, a5, v11);
    }
    if ( (SaveLoad_CurrentSavegame->flags & 0x40) != 0 )
      this->vtbl->super.super.Unk_61((TESObjectREFR *)this, 0);
    else
      sub_4DDB00((TESObjectREFR *)this, 0);
  }
  if ( this->vtbl->super.super.GetBaseForm(this) )
  {
    if ( this->vtbl->super.super.GetBaseForm(this)->member.type == kFormType_Door )
    {
      if ( (a7 & 0x40000) != 0 && !LOBYTE(SaveLoad_CurrentSavegame[2].unk000[2]) )
      {
        v12 = sub_41F830(&this->members.super.super.baseExtraList, 8);
        p_baseExtraList = &this->members.super.super.baseExtraList;
        if ( v12 )
          sub_423E50(p_baseExtraList, 8);
        else
          sub_423DF0(p_baseExtraList, 8);
      }
      v14 = SaveLoad_CurrentSavegame->unk030[5];
      if ( v14 == 0x1FFFF000 || v14 == 0x7FFFF000 )
      {
        LOBYTE(v15) = sub_41F830(&this->members.super.super.baseExtraList, 8);
        sub_4DE460(this, v15, 1);
      }
    }
  }
  v16 = SaveLoad_CurrentSavegame->unk030[5];
  if ( (v16 == 0x1FFFF000 || v16 == 0x7FFFF000) && this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0) )
  {
    if ( this->members.super.super.niNode )
    {
      v17 = (unsigned __int8 *)sub_41FFA0(&this->members.super.super.baseExtraList);
      if ( v17 )
        sub_497830(v17, (int)this);
      if ( !this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0) )
        this->vtbl->super.super.GetAnimData((TESObjectREFR *)this);
    }
  }
  v18 = SaveLoad_CurrentSavegame->unk030[5];
  if ( v18 == 0x60000000 || v18 == 0x7FFFF000 )
  {
    if ( this->vtbl->super.super.GetBaseForm(this) )
    {
      type = this->vtbl->super.super.GetBaseForm(this)->member.type;
      if ( type == 0x12 || type == 0xA || type == 0x18 )
      {
        flags = this->members.super.super.super.flags;
        if ( (flags & 0x800) != 0 || (flags & 0x20) != 0 || type == 0x18 && (flags & 0x2000) != 0 )
          sub_4D9310((char *)this, 0);
      }
    }
  }
}
