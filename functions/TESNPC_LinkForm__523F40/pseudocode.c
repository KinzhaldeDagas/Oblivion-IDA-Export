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

  if ( (this->member.flags & 8) == 0 ) /*0x523f4c*/
  {
    TESScriptableForm_Link((int)this + 0xC4, this);// 3DTheft decode 2026-05-13: TESNPC::LinkForm links TESScriptableForm at NPC+0xC4 before container/AI/base-data components; plugin filters scripted bases for safer spawned thief templates. /*0x523f5a*/
    TESContainer_LinkComponent((_BYTE *)this + 0x44, this); /*0x523f63*/
    TESAIForm_LinkComponent((int *)this + 0x1A, this); /*0x523f6c*/
    sub_46E4F0((_DWORD *)this + 0x39, this); /*0x523f78*/
    TESActorBaseData_LinkComponent((char *)this + 0x24, this); /*0x523f83*/
    TESSpellList_LinkComponent((TESSpellList *)((char *)this + 0x54), this); /*0x523f8c*/
    if ( *((_DWORD *)this + 0x41) ) /*0x523f91*/
    {
      *(_DWORD *)ArgList = *((_DWORD *)this + 0x41); /*0x523f9f*/
      OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF); /*0x523fa3*/
      TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x523fae*/
      v3 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x523fc9*/
      *((_DWORD *)this + 0x41) = OblivionDynamicCast( /*0x523fda*/
                                   v3,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &TESClass `RTTI Type Descriptor',
                                   0);          // TESNPC link resolves stored class FormID at NPC+0x104 into TESClass* via TESForm_LookupByFormID + dynamic cast. Confirms TESNPC::npcClass offset for plugin class checks.
    }
    if ( ((unsigned __int8 (__thiscall *)(TESForm *))this->vtbl[1].super.CopyFromBase)(this) ) /*0x523fea*/
      TESNPC_RecalculateAutoStats((TESNPC *)this, 0); /*0x523ff4*/
    if ( ((int (__thiscall *)(TESForm *))this->vtbl[1].ClearModified)(this) ) /*0x524003*/
    {
      *(_DWORD *)ArgList = ((int (__thiscall *)(TESForm *))this->vtbl[1].ClearModified)(this); /*0x52401b*/
      if ( *(_DWORD *)ArgList ) /*0x52401f*/
      {
        v4 = TESForm_GetOverrideFile(this, 0xFFFFFFFF); /*0x524025*/
        TESForm_ResolveFormID((UInt32 *)ArgList, v4); /*0x524030*/
        v5 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x52404b*/
        v6 = OblivionDynamicCast( /*0x524054*/
               v5,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESCombatStyle `RTTI Type Descriptor',
               0);
        vtbl = this->vtbl; /*0x524059*/
        if ( v6 ) /*0x524062*/
        {
          ((void (__thiscall *)(TESForm *, void *))vtbl[1].Unk_12)(this, v6); /*0x52406b*/
        }
        else
        {
          refID = this->member.refID; /*0x524076*/
          v9 = vtbl->GetEditorName(this); /*0x524079*/
          PrintError("Combat Style (%08X) not found in InitItem for NPC (%08X) '%s'.", *(_DWORD *)ArgList, refID, v9); /*0x524087*/
        }
      }
    }
    v10 = (*(int (__thiscall **)(char *))(*((_DWORD *)this + 0x20) + 0x10))((char *)this + 0x80); /*0x52409f*/
    sub_46AB40(this, v10 == 0); /*0x5240ad*/
    if ( this->member.refID == 7 ) /*0x5240b6*/
    {
      TESActorBaseData_SetFatigue((_WORD *)this + 0x12, 0); /*0x5240bc*/
      TESActorBase_SetHealth(this, 0); /*0x5240c5*/
      TESActorBaseData_SetMagicka((_WORD *)this + 0x12, 0); /*0x5240ce*/
    }
    else
    {
      TESNPC_RecomputeBaseVampirismFromSpells((int *)this); /*0x5240e2*/
    }
    TESForm_SetIsLinked(this, 1); /*0x5240d7*/
  }
}
