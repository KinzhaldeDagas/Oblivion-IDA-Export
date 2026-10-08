void __thiscall TESSpellList_LinkComponent(TESSpellList *this, TESForm *arg0)
{
  TESForm *v2; // edi
  UInt32 *p_spellList; // ebp
  TESForm *v4; // eax
  TESForm *v5; // esi
  UInt32 *v6; // eax
  int *v7; // esi
  const char *v8; // eax
  const char *v9; // eax
  void *v10; // edi
  void *v11; // esi
  TESForm *v12; // esi
  UInt32 *v13; // eax
  int *v14; // edi
  TESSpellList *v15; // [esp-18h] [ebp-34h]
  UInt32 ArgList; // [esp+Ch] [ebp-10h] BYREF
  int *v17; // [esp+10h] [ebp-Ch]
  Data *a2; // [esp+14h] [ebp-8h]
  TESSpellList *v19; // [esp+18h] [ebp-4h]

  v2 = arg0; /*0x46fc16*/
  v19 = this; /*0x46fc1e*/
  v17 = 0; /*0x46fc22*/
  p_spellList = (UInt32 *)&this->spellList; /*0x46fc26*/
  if ( arg0 ) /*0x46fc29*/
    a2 = TESForm_GetOverrideFile(arg0, 0xFFFFFFFF); /*0x46fc34*/
  else
    a2 = 0; /*0x46fc3a*/
  while ( p_spellList ) /*0x46fc40*/
  {
    if ( !*p_spellList ) /*0x46fc50*/
      break; /*0x46fc55*/
    ArgList = *p_spellList; /*0x46fc5b*/
    TESForm_ResolveFormID(&ArgList, a2); /*0x46fc69*/
    v4 = TESForm_LookupByFormID(ArgList); /*0x46fc73*/
    v5 = v4; /*0x46fc78*/
    if ( v4 ) /*0x46fc7f*/
    {
      v10 = OblivionDynamicCast( /*0x46fd74*/
              v4,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &SpellItem `RTTI Type Descriptor',
              0);
      v11 = OblivionDynamicCast( /*0x46fd80*/
              v5,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESLevSpell `RTTI Type Descriptor',
              0);
      if ( v10 ) /*0x46fd82*/
      {
        v15 = v19; /*0x46fd94*/
        *p_spellList = (UInt32)v10; /*0x46fd95*/
        v12 = (TESForm *)OblivionDynamicCast( /*0x46fd9d*/
                           v15,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESSpellList `RTTI Type Descriptor',
                           &TESActorBase `RTTI Type Descriptor',
                           0);
        if ( v12 ) /*0x46fda4*/
        {
          if ( v12 == Actor_GetActorBaseForm((Actor *)reference, 0) ) /*0x46fdb4*/
            PlayerCharacter_SetKnownEffect((int)v10); /*0x46fdbd*/
        }
        v17 = (int *)p_spellList; /*0x46fdc2*/
        p_spellList = (UInt32 *)p_spellList[1]; /*0x46fdc6*/
      }
      else
      {
        v13 = (UInt32 *)p_spellList[1]; /*0x46fdcb*/
        if ( v13 ) /*0x46fdd0*/
        {
          p_spellList[1] = v13[1]; /*0x46fdf2*/
          *p_spellList = *v13; /*0x46fdf8*/
          FormHeapFree((unsigned int)v13); /*0x46fdfb*/
        }
        else
        {
          v14 = v17; /*0x46fdd2*/
          if ( v17 ) /*0x46fdd8*/
          {
            // TODO CHeck, same code in the error path cause infinite lopp, also ArgList should be p_spellList->type
            BSSimpleList_Remove(v17, ArgList); /*0x46fde1*/
            p_spellList = (UInt32 *)v14[1]; /*0x46fde6*/
          }
          else
          {
            *p_spellList = 0; /*0x46fe05*/
          }
        }
        if ( v11 ) /*0x46fe0a*/
          TESSpellList_AddLevSpell((char *)v19, (int)v11); /*0x46fe11*/
      }
      v2 = arg0; /*0x46fe16*/
    }
    else
    {
      v6 = (UInt32 *)p_spellList[1]; /*0x46fc85*/
      if ( v6 ) /*0x46fc8a*/
      {
        p_spellList[1] = v6[1]; /*0x46fcac*/
        *p_spellList = *v6; /*0x46fcb2*/
        FormHeapFree((unsigned int)v6); /*0x46fcb5*/
      }
      else
      {
        v7 = v17; /*0x46fc8c*/
        if ( v17 ) /*0x46fc92*/
        {
          BSSimpleList_Remove(v17, ArgList); /*0x46fc9b*/
          p_spellList = (UInt32 *)v7[1]; /*0x46fca0*/
        }
        else
        {
          *p_spellList = 0; /*0x46fcbf*/
        }
      }
      if ( v2 ) /*0x46fcc4*/
      {
        if ( !unk_B333F4 && (unk_B333F4 = 1, v8 = v2->vtbl->GetEditorName(v2), unk_B333F4 = 0, v8) && strlen(v8) ) /*0x46fceb*/
        {
          v9 = v2->vtbl->GetEditorName(v2); /*0x46fd09*/
          PrintError("Unable to find spell (%08X) for owner object \"%s\".", ArgList, v9); /*0x46fd16*/
        }
        else
        {
          PrintError("Unable to find spell (%08X) for owner object (%08X).", ArgList, v2->member.refID); /*0x46fd31*/
        }
      }
      else
      {
        PrintError("Unable to find spell (%08X) for unknown owner.", ArgList); /*0x46fd48*/
      }
    }
  }
}
