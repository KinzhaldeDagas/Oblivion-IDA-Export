UInt32 __usercall TESQuest::SaveForm@<eax>(int this@<ecx>, char a2@<bpl>)
{
  int v3; // esi
  int v4; // esi
  size_t v6; // [esp-4h] [ebp-Ch]

  TESForm_InitializeFormRecord((TESForm *)this, a2); /*0x529924*/
  TESScriptableForm_Save((_DWORD *)(this + 0x18)); /*0x52992c*/
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x30)); /*0x529934*/
  TESTexture_Save(this + 0x24, 0x4E4F4349); /*0x529941*/
  LODWORD(v6) = 2; /*0x529946*/
  TESForm_SaveGenericComponents((TESForm *)this, this, (void *)(this + 0x3C), v6); /*0x52994e*/
  if ( this != 0xFFFFFFB0 ) /*0x529958*/
    sub_56A450((int **)(this + 0x50)); /*0x52995a*/
  v3 = this + 0x40; /*0x52995f*/
  if ( this != 0xFFFFFFC0 ) /*0x529964*/
  {
    do /*0x52997d*/
    {
      if ( !*(_DWORD *)(v3 + 4) && !*(_DWORD *)v3 ) /*0x52996c*/
        break; /*0x52996f*/
      Shared_NoOpVirtual_60D0A0(*(void **)v3); /*0x529973*/
      v3 = *(_DWORD *)(v3 + 4); /*0x529978*/
    }
    while ( v3 ); /*0x52997d*/
  }
  v4 = this + 0x48; /*0x52997f*/
  if ( this != 0xFFFFFFB8 ) /*0x529984*/
  {
    do /*0x52999d*/
    {
      if ( !*(_DWORD *)(v4 + 4) && !*(_DWORD *)v4 ) /*0x52998c*/
        break; /*0x52998f*/
      Shared_NoOpVirtual_60D0A0(*(void **)v4); /*0x529993*/
      v4 = *(_DWORD *)(v4 + 4); /*0x529998*/
    }
    while ( v4 ); /*0x52999d*/
  }
  return TESForm_FinalizeFormRecord((TESForm *)this); /*0x5299a1*/
}
