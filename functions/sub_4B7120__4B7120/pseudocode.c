UInt32 __usercall sub_4B7120@<eax>(TESForm *this@<ecx>, char a2@<bpl>)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  TESForm *v6; // esi
  size_t v8; // [esp-4h] [ebp-10h]
  size_t v9; // [esp-4h] [ebp-10h]
  unsigned int (__thiscall *Src)(BaseFormComponent *, BaseFormComponent *); // [esp+8h] [ebp-4h] BYREF

  TESForm_InitializeFormRecord(this, a2);
  TESFullName_Save((TESForm::ModReferenceList *)((char *)this + 0x24));
  TESModel_Save(this + 2, 0x4C444F4D, 0x42444F4D, 0x54444F4D);
  TESScriptableForm_Save((_DWORD *)this + 0x12);
  v3 = *((_DWORD *)this + 0x16);
  if ( v3 )
  {
    LODWORD(v8) = 4;
    Src = *(unsigned int (__thiscall **)(BaseFormComponent *, BaseFormComponent *))(v3 + 0xC);
    TESForm_PutFormRecordChunkData(0x4D414E53, &Src, v8);
  }
  v4 = *((_DWORD *)this + 0x17);
  if ( v4 )
  {
    LODWORD(v8) = 4;
    Src = *(unsigned int (__thiscall **)(BaseFormComponent *, BaseFormComponent *))(v4 + 0xC);
    TESForm_PutFormRecordChunkData(0x4D414E41, &Src, v8);
  }
  v5 = *((_DWORD *)this + 0x18);
  if ( v5 )
  {
    LODWORD(v8) = 4;
    Src = *(unsigned int (__thiscall **)(BaseFormComponent *, BaseFormComponent *))(v5 + 0xC);
    TESForm_PutFormRecordChunkData(0x4D414E42, &Src, v8);
  }
  LODWORD(v8) = 1;
  TESForm_PutFormRecordChunkData(0x4D414E46, (char *)this + 0x64, v8);
  v6 = (TESForm *)((char *)this + 0x68);
  if ( this != (TESForm *)0xFFFFFF98 )
  {
    do
    {
      if ( !*(_DWORD *)&v6->member.type && !v6->vtbl )
        break;
      LODWORD(v9) = 4;
      Src = v6->vtbl->super.CompareTo;
      TESForm_PutFormRecordChunkData(0x4D414E54, &Src, v9);
      v6 = *(TESForm **)&v6->member.type;
    }
    while ( v6 );
  }
  return TESForm_FinalizeFormRecord(this);
}
