char __usercall sub_4D4310@<al>(TESObjectCELL *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  TESForm::ModReferenceList *p_modlist; // eax
  unsigned int v7; // ebx
  unsigned int i; // ebp
  Data *OverrideFile; // eax
  Data *v10; // eax
  Data *v11; // edi
  char *v12; // eax
  char Form; // al
  char v14; // [esp+7h] [ebp-5h]
  char v15; // [esp+8h] [ebp-4h]

  if ( (this->members.flags0 & kFlags0_Unk4) != 0 )
    return 1;
  p_modlist = &this->members.super.modlist;
  v7 = 0;
  v14 = 1;
  if ( this != (TESObjectCELL *)0xFFFFFFF0 )
  {
    do
    {
      if ( p_modlist->data )
        ++v7;
      p_modlist = p_modlist->next;
    }
    while ( p_modlist );
  }
  for ( i = 0; i < v7; ++i )
  {
    OverrideFile = TESForm_GetOverrideFile((TESForm *)this, i);
    v10 = sub_4520F0(OverrideFile);
    v11 = v10;
    if ( v10 )
    {
      if ( TESFile_GetIsMaster(v10) )
      {
        v12 = (char *)sub_4C9D10(this);
        if ( v12 )
          Form = TESFIle_JumpToRecord(v11, v12);
        else
          Form = TESFile::FindForm(v11, (TESForm *)this);
        if ( !Form || !sub_4D1340((TESForm *)this, a2, a3, a4, v11) )
          v14 = 0;
      }
    }
  }
  this->members.flags0 |= kFlags0_Unk4;
  v15 = sub_45A500(SaveLoad_CurrentSavegame);
  sub_45A530(SaveLoad_CurrentSavegame, v15 == 0);
  this->vtbl->DoPostFixup((TESForm *)this);
  sub_45A530(SaveLoad_CurrentSavegame, v15);
  return v14;
}
