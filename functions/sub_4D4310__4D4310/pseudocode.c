char __thiscall sub_4D4310(TESObjectCELL *this)
{
  TESForm::ModReferenceList *p_modlist; // eax
  unsigned int v7; // ebx
  unsigned int i; // ebp
  Data *OverrideFile; // eax
  Data *ThreadSafeFile; // eax
  Data *v11; // edi
  char *v12; // eax
  char Form; // al
  char v14; // [esp+7h] [ebp-5h]
  char v15; // [esp+8h] [ebp-4h]

  if ( (this->members.flags0 & kFlags0_Unk4) != 0 ) /*0x4d431a*/
    return 1; /*0x4d431c*/
  p_modlist = &this->members.super.modlist; /*0x4d4324*/
  v7 = 0; /*0x4d4327*/
  v14 = 1; /*0x4d432c*/
  if ( this != (TESObjectCELL *)0xFFFFFFF0 ) /*0x4d4331*/
  {
    do /*0x4d4340*/
    {
      if ( p_modlist->data ) /*0x4d4333*/
        ++v7; /*0x4d4338*/
      p_modlist = p_modlist->next; /*0x4d433b*/
    }
    while ( p_modlist ); /*0x4d4340*/
  }
  for ( i = 0; i < v7; ++i ) /*0x4d4346*/
  {
    OverrideFile = TESForm_GetOverrideFile((TESForm *)this, i); /*0x4d4353*/
    ThreadSafeFile = TESFile_GetThreadSafeFile(OverrideFile); /*0x4d435a*/
    v11 = ThreadSafeFile; /*0x4d435f*/
    if ( ThreadSafeFile ) /*0x4d4363*/
    {
      if ( TESFile_GetIsMaster(ThreadSafeFile) ) /*0x4d4367*/
      {
        v12 = (char *)sub_4C9D10(this); /*0x4d4372*/
        if ( v12 ) /*0x4d437b*/
          Form = TESFIle_JumpToRecord(v11, v12); /*0x4d437e*/
        else
          Form = TESFile::FindForm(v11, (TESForm *)this); /*0x4d4386*/
        if ( !Form || !sub_4D1340((TESForm *)this, v11) ) /*0x4d4392*/
          v14 = 0; /*0x4d439b*/
      }
    }
  }
  this->members.flags0 |= kFlags0_Unk4; /*0x4d43a8*/
  v15 = sub_45A500(g_TESSaveLoadGame); /*0x4d43bf*/
  sub_45A530(g_TESSaveLoadGame, v15 == 0); /*0x4d43c7*/
  this->vtbl->DoPostFixup((TESForm *)this); /*0x4d43d3*/
  sub_45A530(g_TESSaveLoadGame, v15); /*0x4d43e0*/
  return v14; /*0x4d431e*/
}
