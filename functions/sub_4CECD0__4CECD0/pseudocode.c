void __thiscall sub_4CECD0(TESObjectCELL *this, TESObjectREFR *a2)
{
  TESWorldSpace *worldSpace; // ecx

  if ( a2 )
  {
    sub_496EA0((char *)&stru_B35C80, this);
    BSSimpleList_Remove(&this->members.objectList.refr, (int)a2);
    sub_496F50(&stru_B35C80, this);
    if ( (this->members.super.flags & 0x400) != 0 )
    {
      sub_4247B0(&a2->member.baseExtraList, 0);
      if ( (this->members.flags0 & 1) == 0 )
      {
        worldSpace = this->members.worldSpace;
        if ( worldSpace )
          sub_4F01F0(worldSpace, a2);
      }
    }
    else
    {
      ((void (__thiscall *)(TESObjectREFR *, _DWORD))a2->vtbl->ChangeCell)(a2, 0);
      if ( (a2->member.super.flags & 0x4000) == 0
        && !TESObjectREFR_IsPersistent_(a2)
        && !*(_BYTE *)(TESDataHandler + 0xCD4) )
      {
        this->vtbl->SetFromActiveFile((TESForm *)this, 1);
      }
    }
  }
}
