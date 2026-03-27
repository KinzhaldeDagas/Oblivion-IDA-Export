char __thiscall sub_4F18B0(_DWORD *this, int a2, int a3, Data **a4, UInt32 *a5)
{
  TESForm *v5; // edi
  TESForm::ModReferenceList *p_modlist; // eax
  char *v7; // ebp
  Data *OverrideFile; // eax
  Data *v9; // esi

  do
  {
    *a4 = 0;
    v5 = (TESForm *)this;
    *a5 = 0;
    this = (_DWORD *)*(this + 0x1F);
  }
  while ( this );
  p_modlist = &v5->member.modlist;
  if ( v5 == (TESForm *)0xFFFFFFF0 )
    return 0;
  do
  {
    if ( p_modlist->data )
      this = (_DWORD *)((char *)this + 1);
    p_modlist = p_modlist->next;
  }
  while ( p_modlist );
  if ( !this )
    return 0;
  v7 = (char *)this + 0xFFFFFFFF;
  if ( (int)((int)this + 0xFFFFFFFF) < 0 )
    return 0;
  while ( 1 )
  {
    OverrideFile = TESForm_GetOverrideFile(v5, (int)v7);
    v9 = sub_4520F0(OverrideFile);
    if ( v9 )
    {
      if ( TESWorldSpace::FindCellInFile((TESWorldSpace *)v5, v9, a2, a3) && sub_4D1990(v9) )
        break;
    }
    if ( (int)--v7 < 0 )
      return 0;
  }
  *a4 = v9;
  *a5 = v9->currentRecordOffset;
  return 1;
}
