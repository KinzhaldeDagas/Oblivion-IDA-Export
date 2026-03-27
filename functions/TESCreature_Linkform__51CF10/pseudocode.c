void __thiscall TESCreature_Linkform(TESForm *this)
{
  int v2; // eax
  Data *OverrideFile; // eax
  TESForm *v4; // eax
  void *v5; // eax
  UInt32 refID; // edi
  const char *v7; // eax
  Data *v8; // eax
  TESForm *v9; // eax
  void *v10; // eax
  TESFormVtbl *vtbl; // edx
  UInt32 v12; // edi
  const char *v13; // eax
  char ArgList[4]; // [esp+8h] [ebp-4h] BYREF

  if ( (this->member.flags & 8) == 0 )
  {
    TESScriptableForm_Link((int)this + 0xC4, this);
    TESContainer_LinkComponent((_BYTE *)this + 0x44, this);
    TESSpellList_LinkComponent((TESSpellList *)((char *)this + 0x54), this);
    TESAIForm_LinkComponent((int *)this + 0x1A, this);
    TESActorBaseData_LinkComponent((char *)this + 0x24, this);
    v2 = *((_DWORD *)this + 0xA);
    if ( (v2 & 1) != 0 )
      *((_DWORD *)this + 0xA) = v2 & 0xFFFBFF8F;
    if ( (*((_DWORD *)this + 0xA) & 0x100) == 0 )
    {
      *(_DWORD *)ArgList = *((_DWORD *)this + 0x40);
      if ( *(_DWORD *)ArgList )
      {
        OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF);
        TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);
        v4 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
        v5 = OblivionDynamicCast(
               v4,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESCreature `RTTI Type Descriptor',
               0);
        *((_DWORD *)this + 0x40) = v5;
        if ( !v5 )
        {
          refID = this->member.refID;
          v7 = this->vtbl->GetEditorName(this);
          PrintError(
            "Sound Creature (%08X) not found in InitItem for Creature (%08X) '%s'.",
            *(_DWORD *)ArgList,
            refID,
            v7);
        }
      }
    }
    if ( ((int (__thiscall *)(TESForm *))this->vtbl[1].ClearModified)(this) )
    {
      *(_DWORD *)ArgList = ((int (__thiscall *)(TESForm *))this->vtbl[1].ClearModified)(this);
      if ( *(_DWORD *)ArgList )
      {
        v8 = TESForm_GetOverrideFile(this, 0xFFFFFFFF);
        TESForm_ResolveFormID((UInt32 *)ArgList, v8);
        v9 = TESForm_LookupByFormID(*(UInt32 *)ArgList);
        v10 = OblivionDynamicCast(
                v9,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESCombatStyle `RTTI Type Descriptor',
                0);
        vtbl = this->vtbl;
        if ( v10 )
        {
          ((void (__thiscall *)(TESForm *, void *))vtbl[1].Unk_12)(this, v10);
        }
        else
        {
          v12 = this->member.refID;
          v13 = vtbl->GetEditorName(this);
          PrintError(
            "Combat Style (%08X) not found in InitItem for Creature (%08X) '%s'.",
            *(_DWORD *)ArgList,
            v12,
            v13);
        }
      }
    }
    if ( *((_WORD *)this + 0x84) > 6u )
      *((_WORD *)this + 0x84) = 3;
    if ( (*(int (__thiscall **)(char *))(*((_DWORD *)this + 0x20) + 0x10))((char *)this + 0x80) )
      sub_46AB40(this, 0);
    else
      sub_46AB40(this, 1);
    TESForm_SetIsLinked(this, 1);
  }
}
