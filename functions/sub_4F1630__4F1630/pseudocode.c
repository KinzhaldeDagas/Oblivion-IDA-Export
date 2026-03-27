TESForm *__userpurge sub_4F1630@<eax>(
        TESWorldSpace *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int ArgList,
        int a2)
{
  TESForm *CellAtCellCoord; // eax
  TESForm *v9; // esi
  unsigned int v10; // ecx
  TESForm::ModReferenceList *p_modlist; // eax
  Data *OverrideFile; // eax
  Data *v13; // eax
  Data *v14; // ebp
  TESForm *v15; // eax
  int v16; // eax
  const char *v17; // eax
  int v19; // [esp-4h] [ebp-30h]
  char Form; // [esp+17h] [ebp-15h]
  unsigned int v21; // [esp+18h] [ebp-14h]
  unsigned int a2a; // [esp+34h] [ebp+8h]
  char a2b; // [esp+34h] [ebp+8h]

  Form = 1;
  CellAtCellCoord = (TESForm *)TESWorldSpace::GetCellAtCellCoord(this, ArgList, a2);
  v9 = CellAtCellCoord;
  dword_B33AA0 = (int)this;
  if ( !CellAtCellCoord || !sub_4C9F80(CellAtCellCoord) )
  {
    v10 = 0;
    p_modlist = &this->super.modlist;
    v21 = 0;
    if ( this != (TESWorldSpace *)0xFFFFFFF0 )
    {
      do
      {
        if ( p_modlist->data )
          ++v10;
        p_modlist = p_modlist->next;
      }
      while ( p_modlist );
      v21 = v10;
    }
    a2a = 0;
    if ( v10 )
    {
      do
      {
        OverrideFile = TESForm_GetOverrideFile((TESForm *)this, a2a);
        v13 = sub_4520F0(OverrideFile);
        v14 = v13;
        if ( v13 )
        {
          if ( TESFile_GetIsMaster(v13) )
          {
            if ( TESWorldSpace::FindCellInFile(this, v14, ArgList, a2) )
            {
              if ( !v9 )
              {
                v15 = (TESForm *)FormHeapAlloc(0x58u);
                if ( v15 )
                  v9 = TESObjectCELL_constr(v15);
                TESObjectCELL::SetIsInterior((TESObjectCELL *)v9, 0);
                sub_4CA710((TESObjectCELL *)v9);
                sub_4C9AC0((TESObjectCELL *)v9, ArgList, a2);
                sub_4EFEF0(this, (TESObjectCELL *)v9);
                v16 = sub_459790(SaveLoad_CurrentSavegame, (int *)this->super.refID, ArgList, a2);
                if ( v16 )
                  TESForm_SetFormID(v9, v16, 1);
                Form = TESDataHandler_LoadForm(v9, v14);
              }
              if ( !sub_4D1340(v9, st5_0, a3, a4, v14) )
                Form = 0;
            }
          }
        }
        ++a2a;
      }
      while ( a2a < v21 );
    }
    if ( v9 )
    {
      sub_4C9F90(v9, 1);
      a2b = sub_45A500(SaveLoad_CurrentSavegame);
      sub_45A530(SaveLoad_CurrentSavegame, a2b == 0);
      v9->vtbl->DoPostFixup(v9);
      sub_45A530(SaveLoad_CurrentSavegame, a2b);
      sub_4F03F0(this, st5_0, a3, a4, (TESObjectCELL *)v9);
    }
    if ( !Form )
    {
      v17 = (const char *)((int (__thiscall *)(TESWorldSpace *, UInt32))this->vtbl->GetEditorName)(
                            this,
                            this->super.refID);
      PrintError("Failed to load temporary data for cell (%i, %i) in worldspace '%s' (%08X).", ArgList, a2, v17, v19);
    }
  }
  return v9;
}
