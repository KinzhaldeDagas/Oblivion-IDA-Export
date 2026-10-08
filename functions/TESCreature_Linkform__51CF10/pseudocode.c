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

  if ( (this->member.flags & 8) == 0 ) /*0x51cf1c*/
  {
    TESScriptableForm_Link((int)this + 0xC4, this); /*0x51cf29*/
    TESContainer_LinkComponent((_BYTE *)this + 0x44, this); /*0x51cf32*/
    TESSpellList_LinkComponent((TESSpellList *)((char *)this + 0x54), this); /*0x51cf3b*/
    TESAIForm_LinkComponent((int *)this + 0x1A, this); /*0x51cf44*/
    TESActorBaseData_LinkComponent((char *)this + 0x24, this); /*0x51cf4d*/
    v2 = *((_DWORD *)this + 0xA); /*0x51cf52*/
    if ( (v2 & 1) != 0 ) /*0x51cf57*/
      *((_DWORD *)this + 0xA) = v2 & 0xFFFBFF8F; /*0x51cf5e*/
    if ( (*((_DWORD *)this + 0xA) & 0x100) == 0 ) /*0x51cf6b*/
    {
      *(_DWORD *)ArgList = *((_DWORD *)this + 0x40); /*0x51cf75*/
      if ( *(_DWORD *)ArgList ) /*0x51cf79*/
      {
        OverrideFile = TESForm_GetOverrideFile(this, 0xFFFFFFFF); /*0x51cf7f*/
        TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile); /*0x51cf8a*/
        v4 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x51cfa5*/
        v5 = OblivionDynamicCast( /*0x51cfae*/
               v4,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESCreature `RTTI Type Descriptor',
               0);
        *((_DWORD *)this + 0x40) = v5; /*0x51cfb8*/
        if ( !v5 ) /*0x51cfbe*/
        {
          refID = this->member.refID; /*0x51cfc8*/
          v7 = this->vtbl->GetEditorName(this); /*0x51cfcd*/
          PrintError( /*0x51cfdb*/
            "Sound Creature (%08X) not found in InitItem for Creature (%08X) '%s'.",
            *(_DWORD *)ArgList,
            refID,
            v7);
        }
      }
    }
    if ( ((int (__thiscall *)(TESForm *))this->vtbl[1].ClearModified)(this) ) /*0x51cfed*/
    {
      *(_DWORD *)ArgList = ((int (__thiscall *)(TESForm *))this->vtbl[1].ClearModified)(this); /*0x51d005*/
      if ( *(_DWORD *)ArgList ) /*0x51d009*/
      {
        v8 = TESForm_GetOverrideFile(this, 0xFFFFFFFF); /*0x51d00f*/
        TESForm_ResolveFormID((UInt32 *)ArgList, v8); /*0x51d01a*/
        v9 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x51d035*/
        v10 = OblivionDynamicCast( /*0x51d03e*/
                v9,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESCombatStyle `RTTI Type Descriptor',
                0);
        vtbl = this->vtbl; /*0x51d043*/
        if ( v10 ) /*0x51d04c*/
        {
          ((void (__thiscall *)(TESForm *, void *))vtbl[1].Unk_12)(this, v10); /*0x51d055*/
        }
        else
        {
          v12 = this->member.refID; /*0x51d05f*/
          v13 = vtbl->GetEditorName(this); /*0x51d062*/
          PrintError( /*0x51d070*/
            "Combat Style (%08X) not found in InitItem for Creature (%08X) '%s'.",
            *(_DWORD *)ArgList,
            v12,
            v13);
        }
      }
    }
    if ( *((_WORD *)this + 0x84) > 6u ) /*0x51d081*/
      *((_WORD *)this + 0x84) = 3; /*0x51d083*/
    if ( (*(int (__thiscall **)(char *))(*((_DWORD *)this + 0x20) + 0x10))((char *)this + 0x80) ) /*0x51d09b*/
      sub_46AB40(this, 0); /*0x51d0b8*/
    else
      sub_46AB40(this, 1); /*0x51d0a5*/
    TESForm_SetIsLinked(this, 1); /*0x51d0ae*/
  }
}
