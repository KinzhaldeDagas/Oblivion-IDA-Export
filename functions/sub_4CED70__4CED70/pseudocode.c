void __thiscall sub_4CED70(TESObjectCELL *this)
{
  ObjectListEntry *p_objectList; // edi
  ObjectListEntry *v3; // eax
  TESObjectREFR *refr; // esi
  bool v5; // bl
  ObjectListEntry *v6; // eax
  ObjectListEntry *next; // eax

  sub_496EA0((char *)&unk_B35C80, this); /*0x4ced7a*/
  p_objectList = &this->members.objectList; /*0x4ced7f*/
  v3 = &this->members.objectList; /*0x4ced82*/
  if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4ced86*/
  {
    while ( 1 ) /*0x4ced90*/
    {
      if ( !v3->next && !v3->refr ) /*0x4ced99*/
        goto LABEL_25; /*0x4ced99*/
      refr = v3->refr; /*0x4ced9f*/
      if ( (PlayerCharacter *)v3->refr != reference ) /*0x4ceda7*/
        break; /*0x4ceda7*/
      next = this->members.objectList.next; /*0x4cee38*/
      if ( next ) /*0x4cee3d*/
      {
        this->members.objectList.next = next->next; /*0x4cee42*/
        p_objectList->refr = next->refr; /*0x4cee48*/
        FormHeapFree((unsigned int)next); /*0x4cee4a*/
      }
      else
      {
        p_objectList->refr = 0; /*0x4cee54*/
      }
      ((void (__thiscall *)(TESObjectREFR *, _DWORD))refr->vtbl->ChangeCell)(refr, 0); /*0x4cee66*/
LABEL_24:
      v3 = &this->members.objectList; /*0x4cee68*/
    }
    v5 = 0; /*0x4cedad*/
    if ( (this->members.super.flags & 0x400) != 0 ) /*0x4cedb6*/
    {
      if ( g_TESDataHandler ) /*0x4cedb8*/
        v5 = g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] == 0; /*0x4cedc9*/
    }
    if ( !TESObjectREFR_IsPersistent(refr) || (this->members.flags0 & 1) != 0 || v5 ) /*0x4cedde*/
    {
      ((void (__thiscall *)(TESObjectREFR *, _DWORD))refr->vtbl->ChangeCell)(refr, 0); /*0x4cee07*/
    }
    else
    {
      if ( (this->members.super.flags & 0x400) == 0 ) /*0x4cede7*/
      {
        ((void (__thiscall *)(TESObjectREFR *, _DWORD))refr->vtbl->ChangeCell)(refr, 0); /*0x4cedf9*/
        goto LABEL_17; /*0x4cedf9*/
      }
      if ( !refr ) /*0x4cedeb*/
        goto LABEL_17; /*0x4cedeb*/
    }
    refr->vtbl->super.Destroy((TESForm *)refr, 1); /*0x4cee12*/
LABEL_17:
    v6 = this->members.objectList.next; /*0x4cee14*/
    if ( v6 ) /*0x4cee19*/
    {
      this->members.objectList.next = v6->next; /*0x4cee1e*/
      p_objectList->refr = v6->refr; /*0x4cee24*/
      FormHeapFree((unsigned int)v6); /*0x4cee26*/
    }
    else
    {
      p_objectList->refr = 0; /*0x4cee30*/
    }
    goto LABEL_24; /*0x4cee2e*/
  }
LABEL_25:
  sub_496F50(&unk_B35C80, this); /*0x4cee74*/
}
