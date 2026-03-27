void __thiscall sub_4D38F0(TESObjectCELL *this, TESObjectREFR *a2)
{
  TESObjectCELL *ParentCell; // eax

  if ( a2 )
  {
    if ( a2->vtbl->GetBaseForm(a2) )
    {
      if ( (this->members.super.flags & 0x400) != 0 )
      {
        sub_496EA0((char *)&stru_B35C80, this);
        BSSimpleList_PushFront(&this->members.objectList.refr, (int)a2);
        sub_496F50(&stru_B35C80, this);
        sub_4247B0(&a2->member.baseExtraList, (BSExtraDataVtbl *)this);
        if ( !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x184) )
          this->vtbl->SetFromActiveFile((TESForm *)this, 1);
      }
      else
      {
        ParentCell = TESObjectREFR_GetParentCell(a2);
        if ( ParentCell )
          sub_4CECD0(ParentCell, a2);
        sub_496EA0((char *)&stru_B35C80, this);
        BSSimpleList_PushFront(&this->members.objectList.refr, (int)a2);
        ((void (__thiscall *)(TESObjectREFR *, TESObjectCELL *))a2->vtbl->ChangeCell)(a2, this);
        sub_496F50(&stru_B35C80, this);
        if ( (a2->member.super.flags & 0x4000) == 0
          && !TESObjectREFR_IsPersistent_(a2)
          && !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x184) )
        {
          this->vtbl->SetFromActiveFile((TESForm *)this, 1);
        }
        sub_4D80C0(a2, 0);
      }
    }
  }
}
