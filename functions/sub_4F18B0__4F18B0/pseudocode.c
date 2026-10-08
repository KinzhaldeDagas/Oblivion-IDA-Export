char __thiscall sub_4F18B0(_DWORD *this, int a2, int a3, Data **a4, UInt32 *a5)
{
  TESForm *v5; // edi
  TESForm::ModReferenceList *p_modlist; // eax
  char *v7; // ebp
  Data *OverrideFile; // eax
  Data *ThreadSafeFile; // esi

  do /*0x4f18cf*/
  {
    *a4 = 0; /*0x4f18ba*/
    v5 = (TESForm *)this; /*0x4f18c0*/
    *a5 = 0; /*0x4f18c2*/
    this = (_DWORD *)*(this + 0x1F); /*0x4f18c8*/
  }
  while ( this ); /*0x4f18cf*/
  p_modlist = &v5->member.modlist; /*0x4f18d5*/
  if ( v5 == (TESForm *)0xFFFFFFF0 ) /*0x4f18da*/
    return 0; /*0x4f1980*/
  do /*0x4f18ed*/
  {
    if ( p_modlist->data ) /*0x4f18e0*/
      this = (_DWORD *)((char *)this + 1); /*0x4f18e5*/
    p_modlist = p_modlist->next; /*0x4f18e8*/
  }
  while ( p_modlist ); /*0x4f18ed*/
  if ( !this ) /*0x4f18f1*/
    return 0; /*0x4f1979*/
  v7 = (char *)this + 0xFFFFFFFF; /*0x4f18f8*/
  if ( (int)((int)this + 0xFFFFFFFF) < 0 ) /*0x4f18fd*/
    return 0; /*0x4f1972*/
  while ( 1 ) /*0x4f1907*/
  {
    OverrideFile = TESForm_GetOverrideFile(v5, (int)v7); /*0x4f1907*/
    ThreadSafeFile = TESFile_GetThreadSafeFile(OverrideFile); /*0x4f1913*/
    if ( ThreadSafeFile ) /*0x4f1917*/
    {
      if ( TESWorldSpace::FindCellInFile((TESWorldSpace *)v5, ThreadSafeFile, a2, a3) && sub_4D1990(ThreadSafeFile) ) /*0x4f192c*/
        break; /*0x4f192c*/
    }
    if ( (int)--v7 < 0 ) /*0x4f193b*/
      return 0; /*0x4f1943*/
  }
  *a4 = ThreadSafeFile; /*0x4f194e*/
  *a5 = ThreadSafeFile->currentRecordOffset; /*0x4f1959*/
  return 1; /*0x4f193f*/
}
