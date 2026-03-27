void __userpurge sub_5E45F0(
        PlayerCharacter *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        void *a5,
        char a6)
{
  TESForm *v7; // ebp
  TESForm *v8; // eax
  double v9; // st7

  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)a5 + 0x18))(a5) == 7
    || (*(int (__thiscall **)(void *))(*(_DWORD *)a5 + 0x18))(a5) == 8 )
  {
    v7 = (TESForm *)OblivionDynamicCast(
                      a5,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
                      (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                      0);
    if ( a6 )
    {
      if ( (*(int (__thiscall **)(void *))(*(_DWORD *)a5 + 0x18))(a5) == 7 )
      {
        v8 = (TESForm *)OblivionDynamicCast(
                          a5,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
                          &AlchemyItem `RTTI Type Descriptor',
                          0);
        Actor_ConsumePotion_(this, (char)v7, st5_0, st6_0, a4, v8, 0, 1);
      }
      else
      {
        Actor_EquipIngredient_(this, st5_0, st6_0, a4, v7, 0, 1);
      }
    }
    else
    {
      v9 = ((double (__thiscall *)(MagicCaster *, void *))this->super.super.magicCaster.vtbl->SetActiveMagicItem)(
             &this->super.super.magicCaster,
             a5);
      MagicCaster_UseActiveMagicItem(&this->super.super.magicCaster.vtbl, st5_0, v9, st6_0, 0);
      this->vtbl->super.super.super.RemoveItem((TESObjectREFR *)this, v7, 0, 1, 0, 0, 0, 0, 0, 1, 0);
    }
  }
}
