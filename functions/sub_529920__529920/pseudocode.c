UInt32 __usercall sub_529920@<eax>(int this@<ecx>, char a2@<bpl>)
{
  int v3; // esi
  int v4; // esi
  size_t v6; // [esp-4h] [ebp-Ch]

  TESForm_InitializeFormRecord((TESForm *)this, a2);
  TESScriptableForm_Save((_DWORD *)(this + 0x18));
  TESFullName_Save((TESForm::ModReferenceList *)(this + 0x30));
  TESTexture_Save(this + 0x24, 0x4E4F4349);
  LODWORD(v6) = 2;
  TESForm_SaveGenericComponents((TESForm *)this, this, (void *)(this + 0x3C), v6);
  if ( this != 0xFFFFFFB0 )
    sub_56A450((int **)(this + 0x50));
  v3 = this + 0x40;
  if ( this != 0xFFFFFFC0 )
  {
    do
    {
      if ( !*(_DWORD *)(v3 + 4) && !*(_DWORD *)v3 )
        break;
      TESTexture::ClearComponentReferences(*(void **)v3);
      v3 = *(_DWORD *)(v3 + 4);
    }
    while ( v3 );
  }
  v4 = this + 0x48;
  if ( this != 0xFFFFFFB8 )
  {
    do
    {
      if ( !*(_DWORD *)(v4 + 4) && !*(_DWORD *)v4 )
        break;
      TESTexture::ClearComponentReferences(*(void **)v4);
      v4 = *(_DWORD *)(v4 + 4);
    }
    while ( v4 );
  }
  return TESForm_FinalizeFormRecord((TESForm *)this);
}
