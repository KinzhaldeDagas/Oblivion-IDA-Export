void __thiscall TESNPC_LinkForm(TESForm *this)
{
  Data *OverrideFile; // eax
  TESForm *v3; // eax
  Data *v4; // eax
  TESForm *v5; // eax
  void *v6; // eax
  TESFormVtbl *vtbl; // edx
  UInt32 refID; // edi
  const char *v9; // eax
  int v10; // eax
  char ArgList[4]; // [esp+8h] [ebp-4h] BYREF

  if ( (this->member.flags & 8) == 0 )
  {
    TESScriptableForm_Link((int)this + 0xC4, this);
    TESContainer_LinkComponent((_BYTE *)this + 0x44, this);
    TESAIForm_LinkComponent((int *)this + 0x1A, this);
    sub_46E4F0((_DWORD *)this + 0x39, this);
    TESActorBaseData_LinkComponent((char *)this + 0x24, this);
    TESSpellList_LinkComponent((TESSpellList *)((char *)this + 0x54), this);
    if ( *((_DWORD *)this + 0x41) )
    {
      *(_DWORD *)ArgList = *((_DWORD *)this + 0x41);
      OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF);
      TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
      v3 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
      *((_DWORD *)this + 0x41) = OblivionDynamicCast(
                                   v3,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &TESClass `RTTI Type Descriptor',
                                   0);
    }
    if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].super.CopyFromBase)(this) )
      sub_5222D0(this, 0);
    if ( ((int (__thiscall *)(TESForm *))this->vtbl[1].ClearModified)(this) )
    {
      *(_DWORD *)ArgList = ((int (__thiscall *)(TESForm *))this->vtbl[1].ClearModified)(this);
      if ( *(_DWORD *)ArgList )
      {
        v4 = TESForm_GetOverrideFile(this, 0xFFFFFFFF);
        TESForm_ResolveFormID((UInt32 *)ArgList, v4);
        v5 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
        v6 = OblivionDynamicCast(
               v5,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESCombatStyle `RTTI Type Descriptor',
               0);
        vtbl = this->vtbl;
        if ( v6 )
        {
          ((void (__thiscall *)(TESForm *, void *))vtbl[1].Unk_12)(this, v6);
        }
        else
        {
          refID = this->member.refID;
          v9 = vtbl->GetEditorName(this);
          PrintError("Combat Style (%08X) not found in InitItem for NPC (%08X) '%s'.", *(_DWORD *)ArgList, refID, v9);
        }
      }
    }
    v10 = (*(int (__thiscall **)(char *))(*((_DWORD *)this + 0x20) + 0x10))((char *)this + 0x80);
    sub_46AB40(this, v10 == 0);
    if ( this->member.refID == 7 )
    {
      TESActorBaseData_SetFatigue((_WORD *)this + 0x12, 0);
      TESActorBase_SetHealth(this, 0);
      TESActorBaseData_SetMagicka((_WORD *)this + 0x12, 0);
    }
    else
    {
      sub_5239C0((int *)this);
    }
    TESForm_SetIsLinked(this, 1);
  }
}
