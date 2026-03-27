void __thiscall sub_4CED70(TESObjectCELL *this)
{
  ObjectListEntry *p_objectList; // edi
  ObjectListEntry *v3; // eax
  TESObjectREFR *refr; // esi
  bool v5; // bl
  ObjectListEntry *v6; // eax
  ObjectListEntry *next; // eax

  sub_496EA0((char *)&stru_B35C80, this);
  p_objectList = &this->members.objectList;
  v3 = &this->members.objectList;
  if ( this != (TESObjectCELL *)0xFFFFFFB8 )
  {
    while ( 1 )
    {
      if ( !v3->next && !v3->refr )
        goto LABEL_25;
      refr = v3->refr;
      if ( (PlayerCharacter *)v3->refr != TESDataHandler_g_PlayerRef )
        break;
      next = this->members.objectList.next;
      if ( next )
      {
        this->members.objectList.next = next->next;
        p_objectList->refr = next->refr;
        FormHeapFree((unsigned int)next);
      }
      else
      {
        p_objectList->refr = 0;
      }
      ((void (__thiscall *)(TESObjectREFR *, _DWORD))refr->vtbl->ChangeCell)(refr, 0);
LABEL_24:
      v3 = &this->members.objectList;
    }
    v5 = 0;
    if ( (this->members.super.flags & 0x400) != 0 )
    {
      if ( TESDataHandler )
        v5 = *(_BYTE *)(TESDataHandler + 0xCD4) == 0;
    }
    if ( !TESObjectREFR_IsPersistent_(refr) || (this->members.flags0 & 1) != 0 || v5 )
    {
      ((void (__thiscall *)(TESObjectREFR *, _DWORD))refr->vtbl->ChangeCell)(refr, 0);
    }
    else
    {
      if ( (this->members.super.flags & 0x400) == 0 )
      {
        ((void (__thiscall *)(TESObjectREFR *, _DWORD))refr->vtbl->ChangeCell)(refr, 0);
        goto LABEL_17;
      }
      if ( !refr )
        goto LABEL_17;
    }
    refr->vtbl->super.Destroy((TESForm *)refr, 1);
LABEL_17:
    v6 = this->members.objectList.next;
    if ( v6 )
    {
      this->members.objectList.next = v6->next;
      p_objectList->refr = v6->refr;
      FormHeapFree((unsigned int)v6);
    }
    else
    {
      p_objectList->refr = 0;
    }
    goto LABEL_24;
  }
LABEL_25:
  sub_496F50(&stru_B35C80, this);
}
