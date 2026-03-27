void __thiscall TESSpellList_LinkComponent(TESSpellList *this, TESForm *arg0)
{
  TESForm *v2; // edi
  UInt32 *p_spellList; // ebp
  TESForm *v4; // eax
  TESForm *v5; // esi
  UInt32 *v6; // eax
  UInt32 *v7; // esi
  const char *v8; // eax
  const char *v9; // eax
  void *v10; // edi
  void *v11; // esi
  TESForm *v12; // esi
  UInt32 *v13; // eax
  UInt32 *v14; // edi
  TESSpellList *v15; // [esp-18h] [ebp-34h]
  UInt32 ArgList; // [esp+Ch] [ebp-10h] BYREF
  UInt32 *v17; // [esp+10h] [ebp-Ch]
  Data *a2; // [esp+14h] [ebp-8h]
  TESSpellList *v19; // [esp+18h] [ebp-4h]

  v2 = arg0;
  v19 = this;
  v17 = 0;
  p_spellList = (UInt32 *)&this->spellList;
  if ( arg0 )
    a2 = TESForm_GetOverrideFile(arg0, 0xFFFFFFFF);
  else
    a2 = 0;
  while ( p_spellList )
  {
    if ( !*p_spellList )
      break;
    ArgList = *p_spellList;
    TESForm_ResolveFormID(&ArgList, a2);
    v4 = TESForm_LookupByFormID(ArgList);
    v5 = v4;
    if ( v4 )
    {
      v10 = OblivionDynamicCast(
              v4,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &SpellItem `RTTI Type Descriptor',
              0);
      v11 = OblivionDynamicCast(
              v5,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESLevSpell `RTTI Type Descriptor',
              0);
      if ( v10 )
      {
        v15 = v19;
        *p_spellList = (UInt32)v10;
        v12 = (TESForm *)OblivionDynamicCast(
                           v15,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESSpellList `RTTI Type Descriptor',
                           &TESActorBase `RTTI Type Descriptor',
                           0);
        if ( v12 )
        {
          if ( v12 == Actor_GetActorBaseForm((Actor *)TESDataHandler_g_PlayerRef, 0) )
            PlayerCharacter_SetKnownEffect((int)v10);
        }
        v17 = p_spellList;
        p_spellList = (UInt32 *)p_spellList[1];
      }
      else
      {
        v13 = (UInt32 *)p_spellList[1];
        if ( v13 )
        {
          p_spellList[1] = v13[1];
          *p_spellList = *v13;
          FormHeapFree((unsigned int)v13);
        }
        else
        {
          v14 = v17;
          if ( v17 )
          {
            // TODO CHeck, same code in the error path cause infinite lopp, also ArgList should be p_spellList->type
            BSSimpleList_Remove(v17, ArgList);
            p_spellList = (UInt32 *)v14[1];
          }
          else
          {
            *p_spellList = 0;
          }
        }
        if ( v11 )
          TESSpellList_AddLevSpell((char *)v19, (int)v11);
      }
      v2 = arg0;
    }
    else
    {
      v6 = (UInt32 *)p_spellList[1];
      if ( v6 )
      {
        p_spellList[1] = v6[1];
        *p_spellList = *v6;
        FormHeapFree((unsigned int)v6);
      }
      else
      {
        v7 = v17;
        if ( v17 )
        {
          BSSimpleList_Remove(v17, ArgList);
          p_spellList = (UInt32 *)v7[1];
        }
        else
        {
          *p_spellList = 0;
        }
      }
      if ( v2 )
      {
        if ( !byte_B333F4 && (byte_B333F4 = 1, v8 = v2->vtbl->GetEditorName(v2), byte_B333F4 = 0, v8) && strlen(v8) )
        {
          v9 = v2->vtbl->GetEditorName(v2);
          PrintError("Unable to find spell (%08X) for owner object \"%s\".", ArgList, v9);
        }
        else
        {
          PrintError("Unable to find spell (%08X) for owner object (%08X).", ArgList, v2->member.refID);
        }
      }
      else
      {
        PrintError("Unable to find spell (%08X) for unknown owner.", ArgList);
      }
    }
  }
}
