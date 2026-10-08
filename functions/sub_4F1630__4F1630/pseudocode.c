// Verified: exterior-cell loader checks cellMap first, searches master files using cellOffsetsArray fast path or GRUP/CELL fallback, creates a missing TESObjectCELL, post-fixes it, then attaches worldspace-indexed references.
TESForm *__userpurge TESWorldSpace_LoadExteriorCellAtCoord@<eax>(
        TESWorldSpace *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int ArgList,
        int a2)
{
  TESObjectCELL *CellAtCellCoord; // eax
  TESForm *v9; // esi
  unsigned int v10; // ecx
  TESForm::ModReferenceList *p_modlist; // eax
  Data *OverrideFile; // eax
  Data *ThreadSafeFile; // eax
  Data *v14; // ebp
  TESForm *v15; // eax
  int v16; // eax
  const char *v17; // eax
  int v19; // [esp-4h] [ebp-30h]
  char Form; // [esp+17h] [ebp-15h]
  unsigned int v21; // [esp+18h] [ebp-14h]
  unsigned int a2a; // [esp+34h] [ebp+8h]
  char a2b; // [esp+34h] [ebp+8h]

  Form = 1; /*0x4f1663*/
  CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(this, ArgList, a2); /*0x4f1668*/
  v9 = (TESForm *)CellAtCellCoord; /*0x4f166d*/
  unk_B33AA0 = (int)this; /*0x4f1671*/
  if ( !CellAtCellCoord || !sub_4C9F80(CellAtCellCoord) ) /*0x4f167b*/
  {
    v10 = 0; /*0x4f1688*/
    p_modlist = &this->super.modlist; /*0x4f168a*/
    v21 = 0; /*0x4f168f*/
    if ( this != (TESWorldSpace *)0xFFFFFFF0 ) /*0x4f1693*/
    {
      do /*0x4f16a2*/
      {
        if ( p_modlist->data ) /*0x4f1695*/
          ++v10; /*0x4f169a*/
        p_modlist = p_modlist->next; /*0x4f169d*/
      }
      while ( p_modlist ); /*0x4f16a2*/
      v21 = v10; /*0x4f16a4*/
    }
    a2a = 0; /*0x4f16aa*/
    if ( v10 ) /*0x4f16b2*/
    {
      do /*0x4f179a*/
      {
        OverrideFile = TESForm_GetOverrideFile((TESForm *)this, a2a); /*0x4f16bf*/
        ThreadSafeFile = TESFile_GetThreadSafeFile(OverrideFile); /*0x4f16c6*/
        v14 = ThreadSafeFile; /*0x4f16cb*/
        if ( ThreadSafeFile ) /*0x4f16cf*/
        {
          if ( TESFile_GetIsMaster(ThreadSafeFile) ) /*0x4f16d7*/
          {
            if ( TESWorldSpace::FindCellInFile(this, v14, ArgList, a2) ) /*0x4f16ed*/
            {
              if ( !v9 ) /*0x4f16fc*/
              {
                v15 = (TESForm *)FormHeapAlloc(0x58u); /*0x4f1700*/
                if ( v15 ) /*0x4f1712*/
                  v9 = TESObjectCELL_constr(v15); /*0x4f171b*/
                TESObjectCELL::SetIsInterior((TESObjectCELL *)v9, 0); /*0x4f1729*/
                sub_4CA710((TESObjectCELL *)v9); /*0x4f1730*/
                sub_4C9AC0((TESObjectCELL *)v9, ArgList, a2); /*0x4f173d*/
                TESWorldSpace_RegisterExteriorCell(this, (TESObjectCELL *)v9); /*0x4f1745*/
                v16 = sub_459790(g_TESSaveLoadGame, (int *)this->super.refID, ArgList, a2); /*0x4f175a*/
                if ( v16 ) /*0x4f1761*/
                  TESForm_SetFormID(v9, v16, 1); /*0x4f1768*/
                Form = TESDataHandler_LoadForm(v9, v14); /*0x4f1777*/
              }
              if ( !sub_4D1340(v9, st5_0, a3, a4, v14) ) /*0x4f177e*/
                Form = 0; /*0x4f1787*/
            }
          }
        }
        ++a2a; /*0x4f1796*/
      }
      while ( a2a < v21 ); /*0x4f179a*/
    }
    if ( v9 ) /*0x4f17a2*/
    {
      sub_4C9F90(v9, 1); /*0x4f17a8*/
      a2b = sub_45A500(g_TESSaveLoadGame); /*0x4f17c3*/
      sub_45A530(g_TESSaveLoadGame, a2b == 0); /*0x4f17c8*/
      v9->vtbl->DoPostFixup(v9); /*0x4f17d4*/
      sub_45A530(g_TESSaveLoadGame, a2b); /*0x4f17e1*/
      TESWorldSpace_AttachIndexedReferencesToCell(this, (TESObjectCELL *)v9); /*0x4f17e9*/
    }
    if ( !Form ) /*0x4f17f3*/
    {
      v17 = (const char *)((int (__thiscall *)(TESWorldSpace *, UInt32))this->vtbl->GetEditorName)( /*0x4f1803*/
                            this,
                            this->super.refID);
      PrintError("Failed to load temporary data for cell (%i, %i) in worldspace '%s' (%08X).", ArgList, a2, v17, v19); /*0x4f1811*/
    }
  }
  return v9; /*0x4f181b*/
}
